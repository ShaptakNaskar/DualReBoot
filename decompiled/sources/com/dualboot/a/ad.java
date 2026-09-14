package com.dualboot.a;

import android.os.Handler;

/* JADX INFO: loaded from: classes.dex */
public class ad {
    ac a;
    final ab b;
    private Handler c;

    protected ad(ab abVar, ac acVar) {
        this.a = null;
        this.c = null;
        this.b = abVar;
        this.a = acVar;
        if (this.a != null) {
            try {
                this.c = new Handler();
            } catch (Exception e) {
                this.c = null;
            }
        }
    }

    protected final void a(Runnable runnable) {
        if (this.a == null || this.b == null || runnable == null) {
            return;
        }
        if (this.c != null) {
            this.c.post(runnable);
        } else {
            runnable.run();
        }
    }
}
