package com.dualboot.e;

import android.location.LocationManager;
import android.os.Handler;

/* JADX INFO: loaded from: classes.dex */
final class o implements Runnable {
    final /* synthetic */ n a;
    private final /* synthetic */ LocationManager b;
    private final /* synthetic */ Handler c;

    o(n nVar, LocationManager locationManager, Handler handler) {
        this.a = nVar;
        this.b = locationManager;
        this.c = handler;
    }

    @Override // java.lang.Runnable
    public final void run() {
        try {
            this.b.requestLocationUpdates("network", 3600000L, 150000.0f, this.a);
        } catch (Exception e) {
            this.c.postDelayed(this, 120000L);
        }
    }
}
