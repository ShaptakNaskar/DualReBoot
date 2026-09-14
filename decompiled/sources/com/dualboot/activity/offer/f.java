package com.dualboot.activity.offer;

import android.view.View;

/* JADX INFO: loaded from: classes.dex */
final class f implements View.OnClickListener {
    final /* synthetic */ OfferDetail a;
    private final /* synthetic */ View b;

    f(OfferDetail offerDetail, View view) {
        this.a = offerDetail;
        this.b = view;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        if (this.b != null) {
            this.b.setVisibility(this.b.getVisibility() == 0 ? 8 : 0);
        }
    }
}
