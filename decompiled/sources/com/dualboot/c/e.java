package com.dualboot.c;

import android.view.GestureDetector;
import android.view.MotionEvent;

/* JADX INFO: loaded from: classes.dex */
final class e extends GestureDetector.SimpleOnGestureListener {
    final /* synthetic */ c a;

    e(c cVar) {
        this.a = cVar;
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
    public final boolean onDown(MotionEvent motionEvent) {
        if (this.a.i == null) {
            return true;
        }
        this.a.i.a(motionEvent.getX(), motionEvent.getY(), motionEvent.getEventTime());
        return true;
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
    public final boolean onScroll(MotionEvent motionEvent, MotionEvent motionEvent2, float f, float f2) {
        float f3 = this.a.c * 3.0f;
        if (f3 > 0.0f) {
            c cVar = this.a;
            cVar.h = (f / f3) + cVar.h;
            this.a.h = Math.max(this.a.h, 0.0f);
            this.a.h = Math.min(this.a.h, 1.0f);
        }
        if (this.a.i == null) {
            return true;
        }
        this.a.i.b(this.a.h);
        return true;
    }
}
