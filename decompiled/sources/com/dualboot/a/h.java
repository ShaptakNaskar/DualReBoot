package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
final class h implements Runnable {
    final /* synthetic */ a a;
    private final /* synthetic */ bc b;
    private final /* synthetic */ p c;
    private final /* synthetic */ o d;

    h(a aVar, bc bcVar, p pVar, o oVar) {
        this.a = aVar;
        this.b = bcVar;
        this.c = pVar;
        this.d = oVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.a(this.c.a(), this.c.b(), this.c.c(), this.d);
    }
}
