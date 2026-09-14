package com.dualboot.a;

import android.text.TextUtils;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class s {
    final ArrayList a = new ArrayList();
    private final String b;

    public s(String str) {
        this.b = str;
    }

    public final boolean a(String str, String str2) {
        for (t tVar : this.a) {
            if (!tVar.a.equals(str) || (!tVar.b.equals(str2) && !TextUtils.isEmpty(tVar.b))) {
            }
            return true;
        }
        return false;
    }
}
