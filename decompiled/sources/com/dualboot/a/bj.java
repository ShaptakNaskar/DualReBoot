package com.dualboot.a;

import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
final class bj implements Runnable {
    final /* synthetic */ bc a;
    private final /* synthetic */ bp b;

    bj(bc bcVar, bp bpVar) {
        this.a = bcVar;
        this.b = bpVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        boolean z = false;
        ay ayVar = this.a.a;
        if (!ayVar.b.isEmpty()) {
            ArrayList arrayListA = ay.a(ayVar.b);
            Iterator it = arrayListA.iterator();
            int i = 0;
            while (it.hasNext()) {
                if (ayVar.b((ax) it.next())) {
                    i++;
                }
            }
            if (i == arrayListA.size()) {
                z = true;
            }
        }
        if (this.b != null) {
            this.b.b(Boolean.valueOf(z));
        }
    }
}
