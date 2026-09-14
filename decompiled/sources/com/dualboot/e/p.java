package com.dualboot.e;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public final class p extends BroadcastReceiver {
    final /* synthetic */ n a;

    protected p(n nVar) {
        this.a = nVar;
    }

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        if (context == null || intent == null || !TextUtils.equals(intent.getPackage(), context.getPackageName())) {
            return;
        }
        this.a.a();
    }
}
