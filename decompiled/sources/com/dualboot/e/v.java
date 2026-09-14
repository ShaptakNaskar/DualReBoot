package com.dualboot.e;

import android.content.DialogInterface;
import android.os.Handler;

/* JADX INFO: loaded from: classes.dex */
final class v implements DialogInterface.OnClickListener {
    final /* synthetic */ t a;

    v(t tVar) {
        this.a = tVar;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public final void onClick(DialogInterface dialogInterface, int i) {
        new Handler().postDelayed(new w(this), 250L);
    }
}
