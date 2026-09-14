package com.dualboot.b;

import android.app.Activity;
import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public final class a {
    public static SharedPreferences a(Activity activity) {
        return a(activity, activity.getLocalClassName());
    }

    public static SharedPreferences a(Context context) {
        return a(context, String.valueOf(context.getPackageName()) + "_preferences");
    }

    public static SharedPreferences a(Context context, String str) {
        TextUtils.isEmpty(str);
        return context.getSharedPreferences(str, Build.VERSION.SDK_INT >= 11 ? 4 : 0);
    }
}
