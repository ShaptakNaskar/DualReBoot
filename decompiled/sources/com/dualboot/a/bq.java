package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
public abstract class bq implements bp {
    Object b = null;

    protected abstract void a(Object obj);

    @Override // com.dualboot.a.bp
    public final void b(Object obj) {
        this.b = obj;
        a(this.b);
    }
}
