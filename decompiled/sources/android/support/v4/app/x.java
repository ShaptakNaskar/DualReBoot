package android.support.v4.app;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.Build;

/* JADX INFO: loaded from: classes.dex */
public final class x {
    private static final y a;

    static {
        if (Build.VERSION.SDK_INT >= 16) {
            a = new aa();
        } else {
            a = new z();
        }
    }

    public static Intent a(Context context, ComponentName componentName) throws PackageManager.NameNotFoundException {
        String strB = b(context, componentName);
        if (strB == null) {
            return null;
        }
        ComponentName componentName2 = new ComponentName(componentName.getPackageName(), strB);
        return b(context, componentName2) == null ? android.support.v4.a.a.a(componentName2) : new Intent().setComponent(componentName2);
    }

    private static String b(Context context, ComponentName componentName) throws PackageManager.NameNotFoundException {
        return a.a(context, context.getPackageManager().getActivityInfo(componentName, 128));
    }
}
