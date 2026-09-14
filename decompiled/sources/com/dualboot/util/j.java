package com.dualboot.util;

import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.locks.Lock;

/* JADX INFO: loaded from: classes.dex */
public final class j implements Runnable {
    private static final AtomicInteger a = new AtomicInteger(0);
    private static final AtomicInteger b = new AtomicInteger(0);
    private final i c;
    private final Runnable d;
    private final Lock e;
    private final boolean f;
    private j g;
    private j h;
    private boolean i;
    private boolean j;

    private j(i iVar, j jVar, Runnable runnable, Lock lock, boolean z) {
        this.g = null;
        this.h = null;
        this.i = false;
        this.j = false;
        this.c = iVar;
        this.d = runnable;
        this.e = lock;
        this.g = jVar;
        this.h = null;
        this.f = z;
    }

    protected j(i iVar, Lock lock, boolean z) {
        this(iVar, null, null, lock, z);
        this.g = this;
    }

    private boolean c() {
        return this.g == this;
    }

    private boolean d() {
        return this.h == null;
    }

    private void e() {
        c();
        if (this.j) {
            return;
        }
        this.j = true;
        for (j jVar = this.h; jVar != null; jVar = jVar.h) {
            this.c.b(jVar);
        }
    }

    public final j a(Runnable runnable) {
        j jVar;
        j jVar2 = this.g;
        j jVar3 = this.g;
        while (true) {
            jVar = jVar3;
            if (jVar.d()) {
                break;
            }
            jVar3 = jVar.h;
        }
        if (runnable == null) {
            return jVar;
        }
        jVar.h = new j(this.c, this.g, runnable, this.e, this.f);
        return jVar.h;
    }

    public final boolean a() {
        return a((l) null);
    }

    public final boolean a(l lVar) {
        boolean zB = false;
        while (!this.c()) {
            j jVar = this.h;
            this = this.g;
        }
        if (this.c != null && ((!this.d() || this.d != null) && !this.i)) {
            this.i = true;
            k kVar = new k(this, lVar);
            this.a(this.f ? new n(kVar) : kVar);
            a.incrementAndGet();
            if (this.f) {
                zB = this == null ? false : this.c.b(new n(this));
            } else {
                zB = this.c.b(this);
            }
            if (!zB) {
                a.decrementAndGet();
            } else if (!this.f) {
                this.e();
            }
        }
        return zB;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Lock lock = this.e;
        boolean zC = c();
        boolean zD = d();
        if (zC) {
            b.incrementAndGet();
            if (this.f) {
                i iVar = this.c;
                boolean z = this.j;
                e();
            }
        }
        if (this.d != null) {
            if (lock != null) {
                lock.lock();
            }
            try {
                this.d.run();
                if (lock != null) {
                    lock.unlock();
                }
            } catch (Throwable th) {
                if (lock != null) {
                    lock.unlock();
                }
                throw th;
            }
        }
        if (zD) {
            b.decrementAndGet();
        }
    }
}
