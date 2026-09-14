package com.dualboot.e.a;

import android.os.Handler;
import java.util.Collection;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
final class d extends com.dualboot.a.m {
    final /* synthetic */ c d;
    private final /* synthetic */ Handler e;
    private final /* synthetic */ List f;

    d(c cVar, Handler handler, List list) {
        this.d = cVar;
        this.e = handler;
        this.f = list;
    }

    @Override // com.dualboot.a.bn
    public final void c() {
        synchronized (c.a) {
            c.a = false;
            Collection collectionB = b();
            Boolean boolA = a();
            boolean z = collectionB == null || collectionB.isEmpty();
            boolean z2 = boolA == null || !boolA.booleanValue();
            String str = "Received results. Start = " + (!z) + "; Success = " + (z2 ? false : true);
            c.e();
            this.e.post(new e(this, z, z2, this.f));
        }
    }
}
