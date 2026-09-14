package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
public final class an extends ad {
    public an(ab abVar, ar arVar) {
        super(abVar, arVar);
    }

    public final void a() {
        ab abVar = this.b;
        ar arVar = (ar) this.a;
        abVar.a(aw.STARTING);
        a(new ao(this, arVar, abVar));
    }

    public final void b() {
        ab abVar = this.b;
        ar arVar = (ar) this.a;
        abVar.a(aw.RUNNING);
        a(new ap(this, arVar, abVar));
    }

    public final void c() {
        ab abVar = this.b;
        ar arVar = (ar) this.a;
        abVar.a(aw.ERROR);
        a(new aq(this, arVar, abVar));
    }
}
