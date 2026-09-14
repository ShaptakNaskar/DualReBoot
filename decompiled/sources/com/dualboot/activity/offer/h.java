package com.dualboot.activity.offer;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import com.dualboot.a.p;
import com.dualboot.util.z;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public final class h extends ArrayAdapter {
    final /* synthetic */ OfferList a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public h(OfferList offerList, Context context, List list) {
        super(context, com.dualboot.e.offer_item, list);
        this.a = offerList;
    }

    public final boolean a() {
        int count = getCount();
        for (int i = 0; i < count; i++) {
            if (!((p) getItem(i)).h()) {
                return false;
            }
        }
        return true;
    }

    @Override // android.widget.ArrayAdapter, android.widget.Adapter
    public final View getView(int i, View view, ViewGroup viewGroup) {
        boolean z = false;
        if (view == null) {
            view = this.a.getLayoutInflater().inflate(com.dualboot.e.offer_item, viewGroup, false);
        }
        p pVar = (p) getItem(i);
        this.a.a(view, pVar);
        boolean zH = pVar.h();
        boolean zG = pVar.g();
        if (!zH && zG) {
            z = true;
        }
        z.a(view, z);
        view.setOnClickListener(new i(this, pVar));
        return view;
    }
}
