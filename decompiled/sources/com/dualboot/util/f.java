package com.dualboot.util;

/* JADX INFO: loaded from: classes.dex */
public final class f {
    public float a;
    public float b;

    public f() {
        this.a = 0.0f;
        this.b = 0.0f;
    }

    public f(float f, float f2) {
        this.a = f;
        this.b = f2;
    }

    public f(f fVar) {
        this.a = fVar.a;
        this.b = fVar.b;
    }

    public static float a(f fVar, f fVar2) {
        float f = fVar.a - fVar2.a;
        float f2 = fVar.b - fVar2.b;
        return (f * f) + (f2 * f2);
    }

    public static f a(f fVar) {
        return new f(Math.abs(fVar.a), Math.abs(fVar.b));
    }

    public final void a() {
        this.a = 0.0f;
        this.b = 0.0f;
    }
}
