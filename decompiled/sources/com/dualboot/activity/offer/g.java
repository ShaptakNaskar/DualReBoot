package com.dualboot.activity.offer;

import android.view.View;
import com.dualboot.a.ax;

/* JADX INFO: loaded from: classes.dex */
final class g implements View.OnClickListener {
    final /* synthetic */ OfferDetail a;
    private final ax b;
    private final String c;

    public g(OfferDetail offerDetail, ax axVar, String str) {
        this.a = offerDetail;
        this.b = axVar;
        this.c = str;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        this.a.a(2, this.c);
        if (com.dualboot.a.a.a().a(this.b, this.c, this.a, this.a)) {
            OfferDetail offerDetail = this.a;
            String str = "Launching purchase flow for [ " + this.b + " / " + this.c + " ]";
            OfferDetail.a();
        } else {
            OfferDetail offerDetail2 = this.a;
            String str2 = "Failed to start purchase flow for [ " + this.b + " / " + this.c + " ]";
            OfferDetail.a();
            this.a.a(1, this.c);
        }
    }
}
