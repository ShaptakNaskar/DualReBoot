package com.dualboot.e;

/* JADX INFO: loaded from: classes.dex */
final class f implements Runnable {
    final /* synthetic */ e a;

    f(e eVar) {
        this.a = eVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.a.a.a = true;
        this.a.b();
    }
}
