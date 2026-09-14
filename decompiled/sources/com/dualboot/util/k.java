package com.dualboot.util;

/* JADX INFO: loaded from: classes.dex */
final class k implements Runnable {
    final /* synthetic */ j a;
    private final /* synthetic */ l b;

    k(j jVar, l lVar) {
        this.a = jVar;
        this.b = lVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (this.b != null) {
            this.b.a_();
        }
        j.a.decrementAndGet();
    }
}
