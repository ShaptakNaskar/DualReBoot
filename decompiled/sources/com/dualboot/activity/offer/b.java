package com.dualboot.activity.offer;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public final class b {
    public ArrayList a;

    public b() {
        this.a = new ArrayList();
    }

    public b(Intent intent) {
        this();
        if (intent != null) {
            this.a = intent.getStringArrayListExtra("key_offer_list");
        }
    }

    public final Intent a(Context context, Class cls) {
        if (!a()) {
            return null;
        }
        Intent intent = new Intent();
        intent.setClass(context, cls);
        intent.putStringArrayListExtra("key_offer_list", this.a);
        return intent;
    }

    public final boolean a() {
        if (this.a == null || this.a.isEmpty()) {
            return false;
        }
        Iterator it = this.a.iterator();
        while (it.hasNext()) {
            if (TextUtils.isEmpty((String) it.next())) {
                return false;
            }
        }
        return true;
    }
}
