package com.dualboot.a;

import android.text.TextUtils;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
final class bi implements Runnable {
    final /* synthetic */ bc a;
    private final /* synthetic */ String b;
    private final /* synthetic */ String c;
    private final /* synthetic */ String d;
    private final /* synthetic */ bp e;

    bi(bc bcVar, String str, String str2, String str3, bp bpVar) {
        this.a = bcVar;
        this.b = str;
        this.c = str2;
        this.d = str3;
        this.e = bpVar;
    }

    /* JADX WARN: Code duplicated, block: B:31:0x0075  */
    @Override // java.lang.Runnable
    public final void run() {
        ai aiVar;
        af afVarC;
        bc bcVar = this.a;
        String str = this.b;
        String str2 = this.c;
        String str3 = this.d;
        ay ayVar = bcVar.a;
        if (ayVar.b.isEmpty()) {
            aiVar = null;
        } else {
            Iterator it = ayVar.b.keySet().iterator();
            while (true) {
                if (!it.hasNext()) {
                    aiVar = null;
                    break;
                }
                ab abVarA = ay.a((ax) it.next(), ayVar.b);
                if (abVarA != null) {
                    if (abVarA.d() && (afVarC = abVarA.c(str)) != null && afVarC.a()) {
                        String str4 = afVarC.b;
                        String str5 = afVarC.c;
                        String strA = ai.a(str2, str4);
                        String strA2 = ai.a(str3, str5);
                        if ((TextUtils.equals(str2, strA) && TextUtils.equals(str3, strA2)) ? false : true) {
                            aiVar = new ai(strA, strA2);
                        } else {
                            aiVar = null;
                        }
                    } else {
                        aiVar = null;
                    }
                    if (aiVar != null) {
                        break;
                    }
                }
            }
        }
        if (this.e != null) {
            this.e.b(aiVar);
        }
    }
}
