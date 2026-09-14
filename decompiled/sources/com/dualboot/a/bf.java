package com.dualboot.a;

import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
final class bf implements Runnable {
    final /* synthetic */ bc a;
    private final /* synthetic */ String b;
    private final /* synthetic */ String c;
    private final /* synthetic */ String d;
    private final /* synthetic */ String e;
    private final /* synthetic */ bp f = null;

    bf(bc bcVar, String str, String str2, String str3, String str4) {
        this.a = bcVar;
        this.b = str;
        this.c = str2;
        this.d = str3;
        this.e = str4;
    }

    @Override // java.lang.Runnable
    public final void run() {
        boolean z = false;
        bc bcVar = this.a;
        String str = this.b;
        String str2 = this.c;
        String str3 = this.d;
        String str4 = this.e;
        ay ayVar = bcVar.a;
        if (!ayVar.b.isEmpty()) {
            Iterator it = ayVar.b.keySet().iterator();
            boolean z2 = false;
            while (it.hasNext()) {
                ab abVarA = ay.a((ax) it.next(), ayVar.b);
                if (abVarA != null && abVarA.b(str, str2, str3)) {
                    z2 = true;
                }
            }
            z = z2;
        }
        if (this.f != null) {
            this.f.b(Boolean.valueOf(z));
        }
    }
}
