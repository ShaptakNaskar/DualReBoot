package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
final class al implements Runnable {
    final /* synthetic */ aj a;
    private final /* synthetic */ am b;
    private final /* synthetic */ ab c;
    private final /* synthetic */ String d;

    al(aj ajVar, am amVar, ab abVar, String str) {
        this.a = ajVar;
        this.b = amVar;
        this.c = abVar;
        this.d = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.b(this.c, this.d);
    }
}
