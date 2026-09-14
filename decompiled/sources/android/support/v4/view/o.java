package android.support.v4.view;

import android.view.View;

/* JADX INFO: loaded from: classes.dex */
class o implements u {
    o() {
    }

    @Override // android.support.v4.view.u
    public int a(View view) {
        return 2;
    }

    long a() {
        return 10L;
    }

    @Override // android.support.v4.view.u
    public void a(View view, Runnable runnable) {
        view.postDelayed(runnable, a());
    }

    @Override // android.support.v4.view.u
    public boolean a(View view, int i) {
        return false;
    }

    @Override // android.support.v4.view.u
    public void b(View view) {
        view.postInvalidateDelayed(a());
    }

    @Override // android.support.v4.view.u
    public void b(View view, int i) {
    }
}
