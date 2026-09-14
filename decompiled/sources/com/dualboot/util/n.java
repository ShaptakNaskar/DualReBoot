package com.dualboot.util;

import android.os.Handler;
import android.os.Looper;

/* JADX INFO: loaded from: classes.dex */
public final class n implements Runnable {
    private final Runnable a;
    private final Handler b;

    public n(Runnable runnable) {
        this.a = runnable;
        Looper looperMyLooper = Looper.myLooper();
        if (looperMyLooper != null) {
            this.b = new Handler(looperMyLooper);
        } else {
            this.b = null;
        }
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (this.a != null) {
            if (this.b != null) {
                this.b.post(this.a);
            } else {
                this.a.run();
            }
        }
    }
}
