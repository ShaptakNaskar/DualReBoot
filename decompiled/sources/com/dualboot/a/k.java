package com.dualboot.a;

import android.content.Context;

/* JADX INFO: loaded from: classes.dex */
final class k extends bq {
    final /* synthetic */ a a;
    private final p c;
    private final Context d;

    public k(a aVar, p pVar, Context context) {
        this.a = aVar;
        this.c = pVar;
        this.d = context;
    }

    @Override // com.dualboot.a.bq
    public final /* bridge */ /* synthetic */ void a(Object obj) {
        ag agVar = (ag) obj;
        p pVar = this.c;
        if (agVar != ag.UNKNOWN) {
            this.c.a(agVar == ag.OWNED, q.SERVER);
            this.c.a(this.d);
        }
    }
}
