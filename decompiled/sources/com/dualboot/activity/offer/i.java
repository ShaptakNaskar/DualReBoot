package com.dualboot.activity.offer;

import android.view.View;
import com.dualboot.a.p;

/* JADX INFO: loaded from: classes.dex */
final class i implements View.OnClickListener {
    final /* synthetic */ h a;
    private final /* synthetic */ p b;

    i(h hVar, p pVar) {
        this.a = hVar;
        this.b = pVar;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        this.a.a.a(this.b.a());
    }
}
