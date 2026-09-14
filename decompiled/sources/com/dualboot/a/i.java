package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
final class i implements Runnable {
    final /* synthetic */ a a;
    private final /* synthetic */ bc b;
    private final /* synthetic */ p c;
    private final /* synthetic */ k d;

    i(a aVar, bc bcVar, p pVar, k kVar) {
        this.a = aVar;
        this.b = bcVar;
        this.c = pVar;
        this.d = kVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.a(this.c.a(), this.d);
    }
}
