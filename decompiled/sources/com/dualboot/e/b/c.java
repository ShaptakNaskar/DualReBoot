package com.dualboot.e.b;

import android.content.DialogInterface;

/* JADX INFO: loaded from: classes.dex */
public final class c implements DialogInterface.OnClickListener {
    final /* synthetic */ a a;
    private final /* synthetic */ String b;

    public c(a aVar, String str) {
        this.a = aVar;
        this.b = str;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public final void onClick(DialogInterface dialogInterface, int i) {
        if (this.a.c != null) {
            this.a.c.a(this.b);
        }
    }
}
