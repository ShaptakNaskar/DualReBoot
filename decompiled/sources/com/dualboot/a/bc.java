package com.dualboot.a;

import android.app.Activity;
import android.content.Intent;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.concurrent.locks.Lock;

/* JADX INFO: loaded from: classes.dex */
public final class bc extends com.dualboot.util.i {
    final ay a;

    public bc() {
        super("STG.PaymentSystem.Thread");
        this.a = new ay();
    }

    public final Collection a(Lock lock, String str) {
        ah ahVarB;
        ArrayList arrayList = null;
        if (lock != null) {
            lock.lock();
            try {
                ay ayVar = this.a;
                if (!ayVar.b.isEmpty()) {
                    ArrayList arrayList2 = new ArrayList(2);
                    Iterator it = ayVar.b.keySet().iterator();
                    while (it.hasNext()) {
                        ab abVarA = ay.a((ax) it.next(), ayVar.b);
                        if (abVarA != null && (ahVarB = abVarA.b(str)) != null) {
                            arrayList2.add(ahVarB);
                        }
                    }
                    arrayList = arrayList2;
                }
            } finally {
                lock.unlock();
            }
        }
        return arrayList;
    }

    public final void a(ae aeVar, bp bpVar) {
        a(new bd(this, aeVar, bpVar));
    }

    public final void a(bp bpVar) {
        a(new be(this, bpVar));
    }

    public final void a(String str, bp bpVar) {
        a(new bh(this, str, bpVar));
    }

    public final void a(String str, String str2, String str3, bp bpVar) {
        a(new bi(this, str, str2, str3, bpVar));
    }

    public final void a(String str, String str2, String str3, String str4) {
        a(new bf(this, str, str2, str3, str4));
    }

    public final boolean a(Lock lock, int i, int i2, Intent intent) {
        boolean z = false;
        if (lock != null) {
            lock.lock();
            try {
                ay ayVar = this.a;
                if (!ayVar.b.isEmpty()) {
                    Iterator it = ayVar.b.keySet().iterator();
                    boolean z2 = false;
                    while (it.hasNext()) {
                        ab abVarA = ay.a((ax) it.next(), ayVar.b);
                        if (abVarA != null && abVarA.a(i, i2, intent)) {
                            z2 = true;
                        }
                    }
                    z = z2;
                }
            } finally {
                lock.unlock();
            }
        }
        return z;
    }

    public final boolean a(Lock lock, ax axVar, String str, Activity activity, am amVar) {
        boolean zA = false;
        if (lock != null) {
            lock.lock();
            try {
                ab abVarA = ay.a(axVar, this.a.b);
                zA = abVarA != null ? abVarA.a(str, activity, amVar) : false;
            } finally {
                lock.unlock();
            }
        }
        return zA;
    }

    public final void b(bp bpVar) {
        a(new bg(this, bpVar));
    }

    public final void c(bp bpVar) {
        a(new bj(this, bpVar));
    }
}
