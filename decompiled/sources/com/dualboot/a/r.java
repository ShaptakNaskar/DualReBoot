package com.dualboot.a;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
final class r {
    public final String a = "billoff";
    public final String b;
    public final String c;
    public final String d;

    private r(String str) {
        this.b = String.valueOf(str) + "-state";
        this.c = String.valueOf(str) + "-source";
        this.d = String.valueOf(str) + "-time";
    }

    public static r a(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        return new r(str);
    }
}
