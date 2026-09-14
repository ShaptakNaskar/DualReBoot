package com.dualboot.e.a;

import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
final class e implements Runnable {
    final /* synthetic */ d a;
    private final /* synthetic */ boolean b;
    private final /* synthetic */ boolean c;
    private final /* synthetic */ List d;

    e(d dVar, boolean z, boolean z2, List list) {
        this.a = dVar;
        this.b = z;
        this.c = z2;
        this.d = list;
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (!this.b && !this.c && this.a.d.c != null) {
            this.a.d.c.c();
        }
        Iterator it = this.d.iterator();
        while (it.hasNext()) {
            ((q) it.next()).c();
        }
    }
}
