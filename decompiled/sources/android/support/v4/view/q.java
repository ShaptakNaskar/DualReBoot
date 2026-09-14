package android.support.v4.view;

import android.animation.ValueAnimator;
import android.view.View;

/* JADX INFO: loaded from: classes.dex */
class q extends p {
    q() {
    }

    @Override // android.support.v4.view.o
    final long a() {
        return ValueAnimator.getFrameDelay();
    }

    @Override // android.support.v4.view.o, android.support.v4.view.u
    public final void b(View view, int i) {
        view.setLayerType(i, null);
    }
}
