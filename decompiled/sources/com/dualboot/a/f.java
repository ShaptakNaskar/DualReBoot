package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
final class f implements Runnable {
    final /* synthetic */ a a;
    private final /* synthetic */ bc b;
    private final /* synthetic */ p c;

    f(a aVar, bc bcVar, p pVar) {
        this.a = aVar;
        this.b = bcVar;
        this.c = pVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.a(this.c.a(), this.c.b(), this.c.c(), this.c.d());
    }
}
