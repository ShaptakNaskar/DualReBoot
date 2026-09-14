package com.dualboot.a;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import java.util.Collection;
import java.util.Iterator;
import java.util.Map;
import java.util.TreeMap;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReadWriteLock;
import java.util.concurrent.locks.ReentrantReadWriteLock;

/* JADX INFO: loaded from: classes.dex */
public final class a {
    private static final a h = new a();
    private bc a = null;
    private final ReadWriteLock b = new ReentrantReadWriteLock();
    private final Map c = new TreeMap();
    private final Map d = new TreeMap();
    private com.dualboot.util.q e = com.dualboot.util.q.UNKNOWN;
    private Context f = null;
    private final AtomicInteger g = new AtomicInteger(0);

    private a() {
    }

    public static a a() {
        return h;
    }

    private synchronized void c(Context context, com.dualboot.e.j jVar) {
        this.f = context.getApplicationContext();
        this.e = com.dualboot.util.o.a(this.f);
        bl blVar = new bl(context, jVar);
        bc bcVar = this.a;
        this.a = new bc();
        bc bcVar2 = this.a;
        bcVar2.a((Lock) null).a(com.dualboot.util.o.b(this.f)).a(new b(this, bcVar2, blVar)).a();
    }

    private boolean c(String str) {
        Lock lockE = e();
        lockE.lock();
        try {
            p pVarB = b(str);
            return pVarB != null ? pVarB.h() : false;
        } finally {
            lockE.unlock();
        }
    }

    private Lock e() {
        ReadWriteLock readWriteLock = this.b;
        return this.b.readLock();
    }

    private Lock f() {
        ReadWriteLock readWriteLock = this.b;
        return this.b.writeLock();
    }

    private synchronized void g() {
        this.f = null;
        bc bcVar = this.a;
        this.a = null;
        bcVar.a((Lock) null).a(new c(this, bcVar)).a(new n(this, bcVar));
    }

    public final String a(String str, String str2) {
        s sVar;
        String str3;
        String str4 = null;
        Lock lockE = e();
        lockE.lock();
        try {
            if (c(str) && (sVar = (s) this.d.get(str)) != null) {
                int i = 0;
                String str5 = null;
                while (i < sVar.a.size()) {
                    t tVar = (t) sVar.a.get(i);
                    str4 = tVar.a;
                    String str6 = tVar.b;
                    if (str4.indexOf("theme_") != 0 || !a(str4, str6, (Collection) null)) {
                        str3 = str5;
                    } else if (!TextUtils.equals(str4, str2)) {
                        str3 = str4;
                    }
                    i++;
                    str5 = str3;
                }
                str4 = str5;
            }
            return str4;
        } finally {
            lockE.unlock();
        }
    }

    public final Collection a(String str) {
        if (b() && !b(str).h()) {
            return this.a.a(e(), str);
        }
        return null;
    }

    public final void a(Context context) {
        Lock lockF = f();
        lockF.lock();
        try {
            Iterator it = this.c.values().iterator();
            while (it.hasNext()) {
                ((p) it.next()).b(context);
            }
            lockF.unlock();
        } catch (Throwable th) {
            lockF.unlock();
            throw th;
        }
    }

    public final boolean a(int i, int i2, Intent intent) {
        if (b()) {
            return this.a.a(f(), i, i2, intent);
        }
        return false;
    }

    public final boolean a(Context context, com.dualboot.e.j jVar) {
        int iIncrementAndGet = this.g.incrementAndGet();
        if (iIncrementAndGet <= 1 && iIncrementAndGet == 1) {
            c(context, jVar);
        }
        return b();
    }

    public final boolean a(ax axVar, String str, Activity activity, l lVar) {
        if (!b()) {
            return false;
        }
        p pVarB = b(str);
        if (pVarB.h() || lVar == null) {
            return false;
        }
        return this.a.a(f(), axVar, str, activity, new j(this, pVarB, this.f, lVar));
    }

    public final boolean a(m mVar) {
        bq bqVar;
        bq bqVar2 = null;
        if (!b()) {
            return false;
        }
        this.e = com.dualboot.util.o.a(this.f);
        Context context = this.f;
        bc bcVar = this.a;
        Lock lockF = f();
        if (mVar != null) {
            bqVar2 = mVar.b;
            bqVar = mVar.a;
        } else {
            bqVar = null;
        }
        com.dualboot.util.j jVarA = bcVar.a(lockF);
        jVarA.a(com.dualboot.util.o.b(this.f));
        jVarA.a(new d(this, bcVar, bqVar2));
        Iterator it = this.c.values().iterator();
        while (it.hasNext()) {
            jVarA.a(new e(this, (p) it.next(), context));
        }
        Iterator it2 = this.c.values().iterator();
        while (it2.hasNext()) {
            jVarA.a(new f(this, bcVar, (p) it2.next()));
        }
        jVarA.a(new g(this, bcVar, bqVar));
        for (p pVar : this.c.values()) {
            jVarA.a(new h(this, bcVar, pVar, new o(this, pVar)));
        }
        for (p pVar2 : this.c.values()) {
            jVarA.a(new i(this, bcVar, pVar2, new k(this, pVar2, context)));
        }
        jVarA.a(mVar);
        return true;
    }

    public final boolean a(String str, String str2, String str3) {
        s sVar;
        boolean z;
        boolean z2 = false;
        Lock lockF = f();
        lockF.lock();
        try {
            if (b(str) != null && (sVar = (s) this.d.get(str)) != null) {
                String strTrim = str2.trim();
                String strTrim2 = str3.trim();
                if (sVar.a(strTrim, strTrim2)) {
                    z = false;
                } else {
                    sVar.a.add(new t(sVar, strTrim, strTrim2));
                    z = true;
                }
                z2 = z;
            }
            return z2;
        } finally {
            lockF.unlock();
        }
    }

    public final boolean a(String str, String str2, String str3, String str4, String str5, Context context) {
        Lock lockF = f();
        lockF.lock();
        try {
            if (TextUtils.isEmpty(str)) {
                return false;
            }
            if (this.c.containsKey(str)) {
                return true;
            }
            p pVar = new p(str, str2, str3, str4, str5, this.b);
            pVar.b(context);
            s sVar = new s(str);
            this.c.put(str, pVar);
            this.d.put(str, sVar);
            return true;
        } finally {
            lockF.unlock();
        }
    }

    public final boolean a(String str, String str2, Collection collection) {
        Lock lockE = e();
        lockE.lock();
        if (collection != null) {
            try {
                collection.clear();
            } finally {
                lockE.unlock();
            }
        }
        boolean z = true;
        for (p pVar : this.c.values()) {
            String strA = pVar.a();
            s sVar = (s) this.d.get(strA);
            if (sVar != null && sVar.a(str, str2) && !pVar.h()) {
                if (collection != null) {
                    collection.add(strA);
                }
                z = false;
            }
        }
        return z;
    }

    public final p b(String str) {
        Lock lockE = e();
        lockE.lock();
        try {
            p pVar = (p) this.c.get(str);
            lockE.unlock();
            if (pVar == null) {
                String str2 = "No offer found matching ID: " + str;
            }
            return pVar;
        } catch (Throwable th) {
            lockE.unlock();
            throw th;
        }
    }

    public final boolean b() {
        return (this.g.get() <= 0 || this.a == null || this.b == null) ? false : true;
    }

    public final boolean b(Context context, com.dualboot.e.j jVar) {
        if (!b()) {
            return false;
        }
        g();
        c(context, jVar);
        return b();
    }

    public final boolean c() {
        int iDecrementAndGet = this.g.decrementAndGet();
        if (iDecrementAndGet >= 0 && iDecrementAndGet == 0) {
            g();
        }
        return !b();
    }

    public final void d() {
        Lock lockF = f();
        lockF.lock();
        try {
            for (p pVar : this.c.values()) {
                String strE = pVar.e();
                if (TextUtils.isEmpty(strE)) {
                    pVar.a((p) null);
                } else {
                    pVar.a(b(strE));
                }
            }
        } finally {
            lockF.unlock();
        }
    }
}
