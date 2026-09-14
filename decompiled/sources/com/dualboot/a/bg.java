package com.dualboot.a;

import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
final class bg implements Runnable {
    final /* synthetic */ bc a;
    private final /* synthetic */ bp b;

    bg(bc bcVar, bp bpVar) {
        this.a = bcVar;
        this.b = bpVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        boolean z = false;
        ay ayVar = this.a.a;
        if (!ayVar.b.isEmpty()) {
            Iterator it = ayVar.b.keySet().iterator();
            boolean z2 = false;
            while (it.hasNext()) {
                ab abVarA = ay.a((ax) it.next(), ayVar.b);
                if (abVarA != null && abVarA.f()) {
                    z2 = true;
                }
            }
            z = z2;
        }
        if (this.b != null) {
            this.b.b(Boolean.valueOf(z));
        }
    }
}
