package com.dualboot.a;

import android.content.Context;

/* JADX INFO: loaded from: classes.dex */
final class e implements Runnable {
    final /* synthetic */ a a;
    private final /* synthetic */ p b;
    private final /* synthetic */ Context c;

    e(a aVar, p pVar, Context context) {
        this.a = aVar;
        this.b = pVar;
        this.c = context;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.b(this.c);
    }
}
