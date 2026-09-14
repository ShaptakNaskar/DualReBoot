package com.dualboot.util;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.res.TypedArray;

/* JADX INFO: loaded from: classes.dex */
public final class x {
    int a;
    int b;

    public x(Context context, int i) {
        a(context, i);
    }

    public x(Context context, int i, int i2) {
        if (a(context, i) || i2 <= 0) {
            return;
        }
        this.a = i2;
        this.b = 1;
    }

    private boolean a(Context context, int i) {
        PackageInfo packageInfo;
        int resourceId;
        this.a = -1;
        this.b = -1;
        if (context == null || i <= 0) {
            return false;
        }
        try {
            PackageManager packageManager = context.getPackageManager();
            if (packageManager != null && (packageInfo = packageManager.getPackageInfo(context.getPackageName(), 0)) != null) {
                int i2 = packageInfo.versionCode;
                TypedArray typedArrayObtainTypedArray = context.getResources().obtainTypedArray(i);
                if (typedArrayObtainTypedArray != null) {
                    for (int i3 = i2 - 1; i3 >= 0; i3--) {
                        if (i3 < typedArrayObtainTypedArray.length() && (resourceId = typedArrayObtainTypedArray.getResourceId(i3, 0)) > 0) {
                            this.a = resourceId;
                            this.b = i3 + 1;
                            break;
                        }
                    }
                    typedArrayObtainTypedArray.recycle();
                }
            }
        } catch (Exception e) {
        }
        return a();
    }

    public final boolean a() {
        return this.a > 0 && this.b > 0;
    }
}
