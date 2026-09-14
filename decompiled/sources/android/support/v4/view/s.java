package android.support.v4.view;

import android.view.View;

/* JADX INFO: loaded from: classes.dex */
class s extends r {
    s() {
    }

    @Override // android.support.v4.view.o, android.support.v4.view.u
    public final void a(View view, Runnable runnable) {
        view.postOnAnimation(runnable);
    }

    @Override // android.support.v4.view.o, android.support.v4.view.u
    public final void b(View view) {
        view.postInvalidateOnAnimation();
    }
}
