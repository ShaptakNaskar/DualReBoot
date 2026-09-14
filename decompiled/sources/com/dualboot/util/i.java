package com.dualboot.util;

import android.os.Looper;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.locks.Lock;

/* JADX INFO: loaded from: classes.dex */
public class i {
    private final m a;
    private final ExecutorService b;

    public i(String str) {
        this.a = new m(str);
        this.b = Executors.newSingleThreadExecutor(this.a);
    }

    public final j a(Lock lock) {
        return new j(this, lock, Looper.myLooper() != null);
    }

    public final boolean a() {
        this.b.shutdown();
        try {
            return this.b.awaitTermination(15L, TimeUnit.SECONDS);
        } catch (Exception e) {
            return false;
        }
    }

    protected final boolean a(Runnable runnable) {
        if (!this.a.a(Thread.currentThread())) {
            return b(runnable);
        }
        runnable.run();
        return true;
    }

    public final boolean b(Runnable runnable) {
        try {
            this.b.submit(runnable);
            return true;
        } catch (Exception e) {
            return false;
        }
    }
}
