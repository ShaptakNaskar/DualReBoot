package com.dualboot.e;

import android.os.Handler;
import java.util.Collection;

/* JADX INFO: loaded from: classes.dex */
final class g extends com.dualboot.a.m {
    final /* synthetic */ e d;
    private final /* synthetic */ Handler e;

    g(e eVar, Handler handler) {
        this.d = eVar;
        this.e = handler;
    }

    @Override // com.dualboot.a.bn
    public final void c() {
        Collection collectionB = b();
        Boolean boolA = a();
        this.e.post(new h(this, collectionB == null || collectionB.isEmpty(), boolA == null || !boolA.booleanValue()));
    }
}
