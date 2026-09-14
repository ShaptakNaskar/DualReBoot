package com.dualboot.activity.offer;

import android.content.Intent;
import android.os.Bundle;
import android.text.TextUtils;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class c {
    final Bundle a;

    public c() {
        this.a = new Bundle();
    }

    public c(Intent intent) {
        this(intent != null ? intent.getBundleExtra("com.dualboot.activity.offer.result_data") : null);
    }

    public c(Bundle bundle) {
        this();
        if (bundle != null) {
            if (bundle.containsKey("com.dualboot.activity.offer.result_data")) {
                a(this.a, bundle.getBundle("com.dualboot.activity.offer.result_data"));
            } else {
                a(this.a, bundle);
            }
        }
    }

    static void a(Bundle bundle, Bundle bundle2) {
        int i;
        if (bundle == null || bundle2 == null) {
            return;
        }
        bundle.clear();
        for (String str : bundle2.keySet()) {
            if (!TextUtils.isEmpty(str) && (i = bundle2.getInt(str, -1)) > 0) {
                bundle.putInt(str, i);
            }
        }
    }

    public final ArrayList a() {
        int i;
        ArrayList arrayList = new ArrayList();
        for (String str : this.a.keySet()) {
            if (!TextUtils.isEmpty(str) && (i = this.a.getInt(str, -1)) > 0) {
                arrayList.add(new d(str, i));
            }
        }
        return arrayList;
    }
}
