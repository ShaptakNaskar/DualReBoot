package com.b.a.a.a;

import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
final class k implements Runnable {
    final /* synthetic */ j a;

    k(j jVar) {
        this.a = jVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Log.i("LicenseChecker", "Check timed out.");
        this.a.a.b(this.a.b);
        this.a.a.a(this.a.b);
    }
}
