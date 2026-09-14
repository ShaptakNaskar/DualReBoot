package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
final class z implements com.b.a.a.a.m {
    final /* synthetic */ y a;
    private final /* synthetic */ an b;

    z(y yVar, an anVar) {
        this.a = yVar;
        this.b = anVar;
    }

    @Override // com.b.a.a.a.m
    public final void a(int i) {
        this.a.a = 0;
        this.a.b = true;
        y yVar = this.a;
        String str = "Initialized! Response = " + this.a.a + "; Reason = " + i;
        this.b.b();
    }

    @Override // com.b.a.a.a.m
    public final void b(int i) {
        this.a.a = 1;
        this.a.b = true;
        y yVar = this.a;
        String str = "Initialized! Response = " + this.a.a + "; Reason = " + i;
        this.b.b();
    }

    @Override // com.b.a.a.a.m
    public final void c(int i) {
        this.a.a = 2;
        this.a.b = false;
        y yVar = this.a;
        String str = "Initialized! Response = " + this.a.a + "; Reason = " + i;
        this.b.c();
    }
}
