package com.dualboot.activity.offer;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ListAdapter;
import android.widget.ListView;
import com.dualboot.a.p;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class OfferList extends a {
    private h c = null;
    private int d = 0;

    protected final boolean a(String str) {
        String str2 = "Launching detail screen for " + str;
        try {
            b bVar = new b();
            bVar.a.add(str);
            Intent intentA = bVar.a(this, OfferDetail.class);
            if (intentA == null) {
                return false;
            }
            startActivityForResult(intentA, 69);
            return true;
        } catch (Exception e) {
            return false;
        }
    }

    @Override // android.app.Activity
    protected void onActivityResult(int i, int i2, Intent intent) {
        if (i == 69) {
            for (d dVar : a.a(intent)) {
                a(dVar.b, dVar.a);
            }
            if (this.d != 1 && this.c != null) {
                this.c.notifyDataSetChanged();
                if (!this.c.a()) {
                    return;
                }
            }
            finish();
        }
    }

    @Override // com.dualboot.activity.offer.a, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.c = null;
        try {
            this.d = this.a.a.size();
            int i = this.d;
            if (this.d == 1) {
                if (bundle != null || a((String) this.a.a.get(0))) {
                    return;
                }
                finish();
                return;
            }
            ArrayList arrayList = new ArrayList(this.d);
            Iterator it = this.a.a.iterator();
            while (it.hasNext()) {
                p pVarB = com.dualboot.a.a.a().b((String) it.next());
                if (pVarB != null) {
                    arrayList.add(pVarB);
                }
            }
            if (arrayList.isEmpty()) {
                finish();
                return;
            }
            setContentView(com.dualboot.e.offer_list);
            View viewFindViewById = findViewById(com.dualboot.d.lv_item_list);
            if (!(viewFindViewById instanceof ListView)) {
                finish();
            } else {
                this.c = new h(this, this, arrayList);
                ((ListView) viewFindViewById).setAdapter((ListAdapter) this.c);
            }
        } catch (Exception e) {
            finish();
        }
    }
}
