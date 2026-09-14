package com.dualboot.e;

import android.content.DialogInterface;

/* JADX INFO: loaded from: classes.dex */
final class u implements DialogInterface.OnCancelListener {
    final /* synthetic */ t a;

    u(t tVar) {
        this.a = tVar;
    }

    @Override // android.content.DialogInterface.OnCancelListener
    public final void onCancel(DialogInterface dialogInterface) {
        this.a.cancel(true);
    }
}
