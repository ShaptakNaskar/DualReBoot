package com.dualboot.c;

import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
final class l implements Thread.UncaughtExceptionHandler {
    final /* synthetic */ g a;

    private l(g gVar) {
        this.a = gVar;
    }

    /* synthetic */ l(g gVar, byte b) {
        this(gVar);
    }

    @Override // java.lang.Thread.UncaughtExceptionHandler
    public final void uncaughtException(Thread thread, Throwable th) {
        Log.e("STG/OpenGLThread", "Uncaught exception from thread " + (thread != null ? thread.getName() : null) + ": " + (th != null ? th.getMessage() : null));
    }
}
