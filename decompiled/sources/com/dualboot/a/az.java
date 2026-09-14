package com.dualboot.a;

import java.util.concurrent.CountDownLatch;

/* JADX INFO: loaded from: classes.dex */
public class az {
    private final CountDownLatch a = new CountDownLatch(1);
    private boolean b = false;
    private boolean c = false;

    protected az() {
    }

    public final void a(boolean z) {
        this.c = z;
        this.b = true;
        this.a.getCount();
        this.a.countDown();
    }

    public final void c() {
        while (!this.b) {
            try {
                this.a.await();
            } catch (Exception e) {
                return;
            }
        }
    }

    public final boolean d() {
        boolean z = this.b;
        return this.c;
    }
}
