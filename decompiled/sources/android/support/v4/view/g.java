package android.support.v4.view;

import android.view.MotionEvent;

/* JADX INFO: loaded from: classes.dex */
final class g implements h {
    g() {
    }

    @Override // android.support.v4.view.h
    public final int a(MotionEvent motionEvent, int i) {
        return motionEvent.findPointerIndex(i);
    }

    @Override // android.support.v4.view.h
    public final int b(MotionEvent motionEvent, int i) {
        return motionEvent.getPointerId(i);
    }

    @Override // android.support.v4.view.h
    public final float c(MotionEvent motionEvent, int i) {
        return motionEvent.getX(i);
    }

    @Override // android.support.v4.view.h
    public final float d(MotionEvent motionEvent, int i) {
        return motionEvent.getY(i);
    }
}
