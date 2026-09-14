package com.dualboot.a;

import android.content.Context;

/* JADX INFO: loaded from: classes.dex */
final class j implements am {
    final /* synthetic */ a a;
    private final /* synthetic */ p b;
    private final /* synthetic */ Context c;
    private final /* synthetic */ l d;

    j(a aVar, p pVar, Context context, l lVar) {
        this.a = aVar;
        this.b = pVar;
        this.c = context;
        this.d = lVar;
    }

    @Override // com.dualboot.a.am
    public final void a(ab abVar, String str) {
        abVar.a(str);
        ag agVar = ag.OWNED;
        this.b.a(true, q.SERVER);
        this.b.a(this.c);
        this.d.a(str);
    }

    @Override // com.dualboot.a.am
    public final void b(ab abVar, String str) {
        abVar.a(str);
        ag agVar = ag.OWNED;
        this.d.b(str);
    }
}
