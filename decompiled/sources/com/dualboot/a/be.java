package com.dualboot.a;

import java.util.ArrayList;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
final class be implements Runnable {
    final /* synthetic */ bc a;
    private final /* synthetic */ bp b;

    be(bc bcVar, bp bpVar) {
        this.a = bcVar;
        this.b = bpVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        ay ayVar = this.a.a;
        Map map = ayVar.b;
        ArrayList arrayList = new ArrayList(map.size());
        for (ax axVar : map.keySet()) {
            ab abVarA = ay.a(axVar, ayVar.b);
            if (abVarA == null ? false : abVarA.d()) {
                arrayList.add(axVar);
            }
        }
        if (this.b != null) {
            this.b.b(arrayList);
        }
    }
}
