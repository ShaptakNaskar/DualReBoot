package com.dualboot.e;

/* JADX INFO: loaded from: classes.dex */
final class s implements Runnable {
    final /* synthetic */ r a;
    private final /* synthetic */ String b;

    s(r rVar, String str) {
        this.a = rVar;
        this.b = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (this.a.b(this.b)) {
            this.a.c(this.b);
        } else {
            this.a.h = this.b;
        }
    }
}
