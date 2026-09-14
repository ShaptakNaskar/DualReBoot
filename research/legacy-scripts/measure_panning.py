#!/usr/bin/env python3
"""Measure actual wallpaper presentation cadence during the preview camera sweep."""
import argparse
import json
from pathlib import Path
import shlex
import statistics
import subprocess
import time

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--serial',required=True)
    p.add_argument('--seconds',type=float,default=18)
    p.add_argument('--output',type=Path,required=True)
    p.add_argument('--assert-smooth',action='store_true')
    args=p.parse_args()
    adb=['adb','-s',args.serial,'shell']
    def shell(cmd):return subprocess.check_output(adb+[cmd],text=True,timeout=8)
    def frames(name):
        data=shell('dumpsys SurfaceFlinger --latency '+shlex.quote(name)).splitlines()
        return sorted({int(r.split()[1]) for r in data[1:] if len(r.split())==3 and 0<int(r.split()[1])<2**63-1})
    shell('am force-stop com.android.wallpaper.livepicker')
    shell('am start -a android.service.wallpaper.CHANGE_LIVE_WALLPAPER --ecn android.service.wallpaper.extra.LIVE_WALLPAPER_COMPONENT com.dualboot.apps.beach/.BeachService')
    time.sleep(1.5)
    choices={}
    for name in shell('dumpsys SurfaceFlinger --list').splitlines():
        if 'Wallpaper BBQ wrapper' in name:
            values=frames(name)
            if values:choices[name]=values[-1]
    if not choices:raise RuntimeError('No presenting wallpaper layer found')
    layer=max(choices,key=choices.get)
    cutoff=choices[layer]
    presented=set()
    end=time.monotonic()+args.seconds
    while time.monotonic()<end:
        presented.update(t for t in frames(layer) if t>=cutoff)
        time.sleep(.35)
    ordered=sorted(presented)
    if len(ordered)<30:raise RuntimeError('Insufficient presentation samples')
    deltas=[(b-a)/1e6 for a,b in zip(ordered,ordered[1:])]
    def percentile(values,q):return sorted(values)[min(len(values)-1,int((len(values)-1)*q))]
    result={'serial':args.serial,'layer':layer,'frames':len(ordered),'duration_s':(ordered[-1]-ordered[0])/1e9,
            'fps':1000/statistics.mean(deltas),'p50_ms':percentile(deltas,.5),'p95_ms':percentile(deltas,.95),
            'p99_ms':percentile(deltas,.99),'max_ms':max(deltas),
            'over_25ms_pct':100*sum(x>25 for x in deltas)/len(deltas),
            'over_50ms_pct':100*sum(x>50 for x in deltas)/len(deltas),
            'intervals_ms':deltas}
    result['smooth']=result['p95_ms']<25 and result['over_50ms_pct']<=1
    args.output.parent.mkdir(parents=True,exist_ok=True)
    args.output.write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps({k:v for k,v in result.items() if k!='intervals_ms'},indent=2))
    if args.assert_smooth and not result['smooth']:raise SystemExit(1)

if __name__=='__main__':main()
