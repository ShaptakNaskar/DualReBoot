package com.dualboot.activity.offer;

import android.content.Intent;
import android.view.View;

/* JADX INFO: loaded from: classes.dex */
final class e implements View.OnClickListener {
    final /* synthetic */ OfferDetail a;
    private final /* synthetic */ Intent b;

    e(OfferDetail offerDetail, Intent intent) {
        this.a = offerDetail;
        this.b = intent;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        try {
            this.a.startActivity(this.b);
        } catch (Exception e) {
        }
    }
}
