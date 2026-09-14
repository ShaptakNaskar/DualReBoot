package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
final class g implements Runnable {
    final /* synthetic */ a a;
    private final /* synthetic */ bc b;
    private final /* synthetic */ bp c;

    g(a aVar, bc bcVar, bp bpVar) {
        this.a = aVar;
        this.b = bcVar;
        this.c = bpVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.b(this.c);
    }
}
