package com.dualboot.util;

import android.content.Context;
import android.os.SystemClock;

/* JADX INFO: loaded from: classes.dex */
final class p implements Runnable {
    private final /* synthetic */ Context a;
    private final /* synthetic */ long b = 250;
    private final /* synthetic */ long c = 2000;

    p(Context context) {
        this.a = context;
    }

    @Override // java.lang.Runnable
    public final void run() {
        q qVarA = o.a(this.a);
        if (qVarA == q.UNKNOWN || qVarA == q.CONNECTED) {
            return;
        }
        long jUptimeMillis = SystemClock.uptimeMillis();
        long jMin = Math.min(Math.max(this.b, 20L), this.c);
        long j = 0;
        long j2 = this.c / 2;
        long j3 = this.c;
        q qVarA2 = qVarA;
        long j4 = jUptimeMillis;
        while (true) {
            long jUptimeMillis2 = SystemClock.uptimeMillis();
            if (jUptimeMillis2 - j4 > jMin) {
                j++;
                qVarA2 = o.a(this.a);
                if (qVarA2 == q.CONNECTED) {
                    String str = "  Polls = " + j;
                    String str2 = "  Time  = " + (jUptimeMillis2 - jUptimeMillis);
                    return;
                } else if (qVarA2 != q.CONNECTING || j2 >= j3) {
                    j4 = jUptimeMillis2;
                } else {
                    j2 = j3;
                    j4 = jUptimeMillis2;
                }
            }
            if (jUptimeMillis2 - jUptimeMillis > j2 && j > 0) {
                String str3 = "WaitForConnection() - Timeout expired with network status " + qVarA2;
                return;
            }
        }
    }
}
