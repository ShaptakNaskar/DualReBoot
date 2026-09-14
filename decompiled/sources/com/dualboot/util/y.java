package com.dualboot.util;

import android.content.Context;

/* JADX INFO: loaded from: classes.dex */
public final class y {
    protected final Context a;

    public y(Context context) {
        this.a = context;
    }

    public static boolean a(String str, String str2) {
        if (str == null) {
            return str2 == null;
        }
        return str.equals(str2);
    }

    public final String a(int i, int... iArr) {
        String str = null;
        if (this.a == null) {
            return null;
        }
        try {
            String string = this.a.getResources().getString(i);
            if (iArr.length == 0) {
                return string;
            }
            String[] strArr = new String[iArr.length];
            for (int i2 = 0; i2 < iArr.length; i2++) {
                strArr[i2] = this.a.getResources().getString(iArr[i2]);
            }
            str = String.format(string, strArr);
            return str;
        } catch (Exception e) {
            return str;
        }
    }
}
