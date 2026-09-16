#!/usr/bin/env python3
"""Measure actual wallpaper presentation cadence during preview or home panning."""
import argparse
import json
from pathlib import Path
import re
import shlex
import statistics
import subprocess
import threading
import time

PREVIEW = (
    '-a android.service.wallpaper.CHANGE_LIVE_WALLPAPER '
    '--ecn android.service.wallpaper.extra.LIVE_WALLPAPER_COMPONENT '
    'com.dualboot.apps.beach/.BeachService'
)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--serial', required=True)
    parser.add_argument('--seconds', type=float, default=18)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--assert-smooth', action='store_true')
    parser.add_argument('--warm-sweep', action='store_true',
                        help='Restart the camera demo after resources have loaded')
    parser.add_argument('--touch-swipes', action='store_true',
                        help='Keep touch-driven refresh active during the sweep')
    parser.add_argument('--current-surface', action='store_true',
                        help='Measure the already visible wallpaper instead of opening preview')
    parser.add_argument('--swipes-per-direction', type=int, default=1,
                        help='Consecutive swipes before reversing for manual panning')
    args = parser.parse_args()
    if not 5 <= args.seconds <= 300:
        parser.error('--seconds must be between 5 and 300')
    if args.swipes_per_direction < 1:
        parser.error('--swipes-per-direction must be positive')
    if args.current_surface and args.warm_sweep:
        parser.error('--current-surface cannot be combined with --warm-sweep')

    def shell(command):
        return subprocess.check_output(
            ['adb', '-s', args.serial, 'shell', command], text=True, timeout=8)

    def layers():
        names = [name for name in shell('dumpsys SurfaceFlinger --list').splitlines()
                 if 'Wallpaper BBQ wrapper' in name]
        return sorted(names, key=lambda name: int(name.rsplit('#', 1)[1]), reverse=True)

    def frames(name):
        data = shell('dumpsys SurfaceFlinger --latency ' + shlex.quote(name)).splitlines()
        return sorted({int(row.split()[1]) for row in data[1:]
                       if len(row.split()) == 3 and 0 < int(row.split()[1]) < 2**63 - 1})

    if not args.current_surface:
        shell('am force-stop com.android.wallpaper.livepicker')
        shell('am start ' + PREVIEW)
    # Closed layers can retain timestamps. Preview must use the newest layer;
    # an already applied wallpaper may be older than an inactive preview layer.
    deadline = time.monotonic() + 20
    previous = {}
    layer = None
    while time.monotonic() < deadline:
        candidates = layers()
        for candidate in candidates if args.current_surface else candidates[:1]:
            values = frames(candidate)
            if values:
                latest = values[-1]
                if candidate in previous and latest > previous[candidate]:
                    layer = candidate
                    break
                previous[candidate] = latest
        if layer is not None:
            break
        time.sleep(.3)
    if layer is None:
        raise RuntimeError('Wallpaper layer did not start presenting')
    time.sleep(1.5)
    if args.warm_sweep:
        shell('am start -a android.settings.SETTINGS')
        time.sleep(.8)
        shell('am start --activity-reorder-to-front ' + PREVIEW)
        time.sleep(.35)
        candidates = layers()
        if not candidates:
            raise RuntimeError('Wallpaper layer disappeared after visibility change')
        layer = candidates[0]
    values = frames(layer)
    if not values:
        raise RuntimeError('Wallpaper has not presented after visibility change')
    cutoff = values[-1]
    presented = set()
    end = time.monotonic() + args.seconds
    stop = threading.Event()
    errors = []

    def swipe_loop():
        sizes = re.findall(r'(\d+)x(\d+)', shell('wm size'))
        width, height = map(int, sizes[-1])
        left, right, y = int(width * .18), int(width * .82), int(height * .45)
        direction = False
        count = 0
        while not stop.is_set():
            x1, x2 = (left, right) if direction else (right, left)
            shell(f'input swipe {x1} {y} {x2} {y} 900')
            count += 1
            if count % args.swipes_per_direction == 0:
                direction = not direction

    def run_swipes():
        try:
            swipe_loop()
        except Exception as error:
            errors.append(error)
            stop.set()

    thread = threading.Thread(target=run_swipes, daemon=True) if args.touch_swipes else None
    if thread:
        thread.start()
    try:
        while time.monotonic() < end and not stop.is_set():
            presented.update(t for t in frames(layer) if t >= cutoff)
            time.sleep(.35)
    finally:
        stop.set()
        if thread:
            thread.join(timeout=10)
    if errors:
        raise RuntimeError('Touch replay failed; measurement is invalid') from errors[0]
    if thread and thread.is_alive():
        raise RuntimeError('Touch replay did not stop')
    ordered = sorted(presented)
    if len(ordered) < 30 or (ordered[-1] - ordered[0]) / 1e9 < args.seconds * .8:
        raise RuntimeError('Insufficient presentation coverage; measurement is invalid')
    deltas = [(b - a) / 1e6 for a, b in zip(ordered, ordered[1:])]
    sorted_deltas = sorted(deltas)

    def percentile(q):
        return sorted_deltas[int((len(sorted_deltas) - 1) * q)]

    result = {
        'serial': args.serial, 'layer': layer,
        'warm_sweep': args.warm_sweep, 'touch_swipes': args.touch_swipes,
        'current_surface': args.current_surface,
        'swipes_per_direction': args.swipes_per_direction,
        'frames': len(ordered), 'duration_s': (ordered[-1] - ordered[0]) / 1e9,
        'fps': 1000 / statistics.mean(deltas),
        'p50_ms': percentile(.5), 'p95_ms': percentile(.95),
        'p99_ms': percentile(.99), 'max_ms': max(deltas),
        'over_25ms_pct': 100 * sum(x > 25 for x in deltas) / len(deltas),
        'over_50ms_pct': 100 * sum(x > 50 for x in deltas) / len(deltas),
        'intervals_ms': deltas,
    }
    # Coarse regression gate, not a claim of perfectly paced 60/90/120 Hz motion.
    result['smooth'] = (result['fps'] >= 55 and result['p95_ms'] < 25
                        and result['over_50ms_pct'] <= 1)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps({k: v for k, v in result.items() if k != 'intervals_ms'}, indent=2))
    if args.assert_smooth and not result['smooth']:
        raise SystemExit(1)


if __name__ == '__main__':
    main()
