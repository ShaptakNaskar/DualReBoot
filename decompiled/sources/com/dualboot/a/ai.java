package com.dualboot.a;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public final class ai {
    final String a;
    final String b;

    ai(String str, String str2) {
        this.a = str;
        this.b = str2;
    }

    static String a(String str, String str2) {
        return (TextUtils.isEmpty(str2) || TextUtils.equals(str, str2)) ? str : str2;
    }
}
