package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
public final class as extends ad {
    public as(ab abVar, av avVar) {
        super(abVar, avVar);
    }

    public final void a() {
        ab abVar = this.b;
        av avVar = (av) this.a;
        abVar.a(aw.STOPPING);
        a(new at(this, avVar, abVar));
    }

    public final void b() {
        ab abVar = this.b;
        av avVar = (av) this.a;
        abVar.a(aw.SHUTDOWN);
        a(new au(this, avVar, abVar));
    }
}
