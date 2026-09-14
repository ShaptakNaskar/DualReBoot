package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
public abstract class bn implements com.dualboot.util.l {
    private int a = 0;
    int c = 0;

    @Override // com.dualboot.util.l
    public final void a_() {
        int i = this.c;
        int i2 = this.a;
        c();
    }

    public abstract void c();

    protected final bq d() {
        bo boVar = new bo(this);
        this.a++;
        return boVar;
    }
}
