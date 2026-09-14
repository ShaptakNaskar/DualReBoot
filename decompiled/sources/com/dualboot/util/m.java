package com.dualboot.util;

import android.text.TextUtils;
import java.util.concurrent.Executors;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes.dex */
public final class m implements ThreadFactory {
    private static final AtomicInteger a = new AtomicInteger(0);
    private final String c;
    private final AtomicInteger b = new AtomicInteger(0);
    private long d = -1;

    public m(String str) {
        this.c = str;
        a.incrementAndGet();
    }

    public final boolean a(Thread thread) {
        long j = this.d;
        return thread.getId() == this.d;
    }

    @Override // java.util.concurrent.ThreadFactory
    public final Thread newThread(Runnable runnable) {
        this.b.incrementAndGet();
        Thread threadNewThread = Executors.defaultThreadFactory().newThread(runnable);
        if (!TextUtils.isEmpty(this.c)) {
            threadNewThread.setName(String.valueOf(this.c) + "_" + a.get() + "." + this.b.get());
        }
        long j = this.d;
        this.d = threadNewThread.getId();
        return threadNewThread;
    }
}
