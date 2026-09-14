package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
final class aq implements Runnable {
    final /* synthetic */ an a;
    private final /* synthetic */ ar b;
    private final /* synthetic */ ab c;

    aq(an anVar, ar arVar, ab abVar) {
        this.a = anVar;
        this.b = arVar;
        this.c = abVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        ar arVar = this.b;
        ab abVar = this.c;
        arVar.b();
    }
}
