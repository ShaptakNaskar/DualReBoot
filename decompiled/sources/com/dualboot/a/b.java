package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
final class b implements Runnable {
    final /* synthetic */ a a;
    private final /* synthetic */ bc b;
    private final /* synthetic */ ae c;
    private final /* synthetic */ bp d = null;

    b(a aVar, bc bcVar, ae aeVar) {
        this.a = aVar;
        this.b = bcVar;
        this.c = aeVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.a(this.c, this.d);
    }
}
