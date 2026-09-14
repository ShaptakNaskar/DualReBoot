package com.dualboot.e;

/* JADX INFO: loaded from: classes.dex */
final class h implements Runnable {
    final /* synthetic */ g a;
    private final /* synthetic */ boolean b;
    private final /* synthetic */ boolean c;

    h(g gVar, boolean z, boolean z2) {
        this.a = gVar;
        this.b = z;
        this.c = z2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        e.a(this.a.d, !this.b, this.c ? false : true);
    }
}
