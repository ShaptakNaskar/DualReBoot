package com.dualboot.util;

/* JADX INFO: loaded from: classes.dex */
public final class d {
    final double a;
    final double b;
    final double c;
    final double d;
    final long e;
    long f;
    long g;
    long h;
    private final double i;

    public d(double d, long j) {
        this.d = j - 1;
        this.i = this.d * d;
        this.a = 1.0d / this.i;
        this.c = d;
        this.b = 1.0d / this.c;
        this.e = (long) this.i;
        a();
    }

    public final void a() {
        a(this.e / 2);
    }

    public final void a(long j) {
        this.f = j;
        this.g = this.f;
        this.h = 0L;
    }
}
