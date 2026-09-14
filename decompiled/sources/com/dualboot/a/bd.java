package com.dualboot.a;

import java.util.Collection;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
final class bd implements Runnable {
    final /* synthetic */ bc a;
    private final /* synthetic */ ae b;
    private final /* synthetic */ bp c;

    bd(bc bcVar, ae aeVar, bp bpVar) {
        this.a = bcVar;
        this.b = aeVar;
        this.c = bpVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Collection collectionA;
        boolean z = false;
        bc bcVar = this.a;
        ae aeVar = this.b;
        ay ayVar = bcVar.a;
        if (aeVar != null && (collectionA = aeVar.a()) != null) {
            Iterator it = collectionA.iterator();
            while (it.hasNext()) {
                ay.a((ab) it.next(), ayVar.a);
            }
            if (!ayVar.a.isEmpty()) {
                Iterator it2 = ay.a(ayVar.a).iterator();
                int i = 0;
                while (it2.hasNext()) {
                    if (ayVar.a((ax) it2.next())) {
                        i++;
                    }
                }
                if (i > 0) {
                    z = true;
                }
            }
        }
        if (this.c != null) {
            this.c.b(Boolean.valueOf(z));
        }
    }
}
