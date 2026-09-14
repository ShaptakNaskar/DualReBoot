package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
final class ak implements Runnable {
    final /* synthetic */ aj a;
    private final /* synthetic */ am b;
    private final /* synthetic */ ab c;
    private final /* synthetic */ String d;

    ak(aj ajVar, am amVar, ab abVar, String str) {
        this.a = ajVar;
        this.b = amVar;
        this.c = abVar;
        this.d = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.a(this.c, this.d);
    }
}
