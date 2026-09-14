package com.dualboot.e;

/* JADX INFO: loaded from: classes.dex */
final class w implements Runnable {
    final /* synthetic */ v a;

    w(v vVar) {
        this.a = vVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        new t(this.a.a.a, this.a.a.b, this.a.a.c, this.a.a.d, this.a.a.e, this.a.a.f, this.a.a.g).execute(null);
    }
}
