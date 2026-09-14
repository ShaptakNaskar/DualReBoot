package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
final class d implements Runnable {
    final /* synthetic */ a a;
    private final /* synthetic */ bc b;
    private final /* synthetic */ bp c;

    d(a aVar, bc bcVar, bp bpVar) {
        this.a = aVar;
        this.b = bcVar;
        this.c = bpVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.a(this.c);
    }
}
