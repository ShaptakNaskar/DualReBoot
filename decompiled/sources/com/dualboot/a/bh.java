package com.dualboot.a;

import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
final class bh implements Runnable {
    final /* synthetic */ bc a;
    private final /* synthetic */ String b;
    private final /* synthetic */ bp c;

    bh(bc bcVar, String str, bp bpVar) {
        this.a = bcVar;
        this.b = str;
        this.c = bpVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        ag agVar;
        bc bcVar = this.a;
        String str = this.b;
        ay ayVar = bcVar.a;
        String str2 = "IsOfferOwned() - Checking status of " + str;
        if (ayVar.b.isEmpty()) {
            agVar = ag.UNKNOWN;
        } else {
            Iterator it = ayVar.b.keySet().iterator();
            int i = 0;
            int i2 = 0;
            while (it.hasNext()) {
                ab abVarA = ay.a((ax) it.next(), ayVar.b);
                if (abVarA != null) {
                    ag agVarA = abVarA.a(str);
                    if (agVarA == ag.OWNED) {
                        i2++;
                    } else if (agVarA == ag.NOT_OWNED) {
                        i++;
                    }
                }
            }
            int size = ayVar.b.size();
            int size2 = ayVar.a.size();
            String str3 = "  Num active systems   = " + size;
            String str4 = "  Num failed systems   = " + size2;
            String str5 = "  Num report owned     = " + i2;
            String str6 = "  Num report not owned = " + i;
            if (i2 > 0) {
                agVar = ag.OWNED;
            } else {
                agVar = (i > 0 && i == size && size2 == 0) ? ag.NOT_OWNED : ag.UNKNOWN;
            }
        }
        if (this.c != null) {
            this.c.b(agVar);
        }
    }
}
