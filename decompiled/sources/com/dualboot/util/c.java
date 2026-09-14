package com.dualboot.util;

/* JADX INFO: loaded from: classes.dex */
public final class c {
    public f a;
    public long b;

    public c() {
        this.a = new f();
        this.b = 0L;
    }

    public c(c cVar) {
        this.a = new f(cVar.a);
        this.b = cVar.b;
    }

    public final f a(c cVar) {
        f fVar = this.a;
        f fVar2 = cVar.a;
        return new f(fVar.a - fVar2.a, fVar.b - fVar2.b);
    }
}
