package com.b.a.a.a;

import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
final class j extends d {
    final /* synthetic */ i a;
    private final n b;
    private Runnable c = new k(this);

    public j(i iVar, n nVar) {
        this.a = iVar;
        this.b = nVar;
        Log.i("LicenseChecker", "Start monitoring timeout.");
        this.a.f.postDelayed(this.c, 10000L);
    }

    static /* synthetic */ void b(j jVar) {
        Log.i("LicenseChecker", "Clearing timeout.");
        jVar.a.f.removeCallbacks(jVar.c);
    }

    @Override // com.b.a.a.a.c
    public final void a(int i, String str, String str2) {
        this.a.f.post(new l(this, i, str, str2));
    }
}
