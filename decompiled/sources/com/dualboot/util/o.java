package com.dualboot.util;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;

/* JADX INFO: loaded from: classes.dex */
public final class o {
    public static q a(Context context) {
        ConnectivityManager connectivityManager;
        if (context == null || context.checkCallingOrSelfPermission("android.permission.ACCESS_NETWORK_STATE") != 0 || (connectivityManager = (ConnectivityManager) context.getSystemService("connectivity")) == null) {
            return q.UNKNOWN;
        }
        NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
        if (activeNetworkInfo == null) {
            return q.NOT_CONNECTED;
        }
        if (activeNetworkInfo.isConnected()) {
            return q.CONNECTED;
        }
        return activeNetworkInfo.isConnectedOrConnecting() ? q.CONNECTING : q.NOT_CONNECTED;
    }

    public static Runnable b(Context context) {
        return new p(context);
    }
}
