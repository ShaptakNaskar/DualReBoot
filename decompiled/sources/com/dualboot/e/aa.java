package com.dualboot.e;

import android.annotation.TargetApi;
import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.view.ContextThemeWrapper;
import com.dualboot.activity.misc.WhatsNew;

/* JADX INFO: loaded from: classes.dex */
public final class aa {
    public static Intent a() {
        Intent intent = new Intent();
        intent.setAction("android.intent.action.VIEW");
        intent.setData(Uri.parse("market://search?q=pub:\"DualBoot Games\""));
        return intent;
    }

    @TargetApi(16)
    public static Intent a(ComponentName componentName) {
        if (componentName == null || Build.VERSION.SDK_INT < 16) {
            return null;
        }
        try {
            Class.forName(componentName.getClassName());
            Intent intent = new Intent();
            intent.setAction("android.service.wallpaper.CHANGE_LIVE_WALLPAPER");
            intent.putExtra("android.service.wallpaper.extra.LIVE_WALLPAPER_COMPONENT", componentName);
            return intent;
        } catch (Exception e) {
            return null;
        }
    }

    public static Intent a(Context context) {
        Intent intent = new Intent();
        intent.setAction("com.dualboot.intent.action.SETTINGS");
        intent.addCategory("android.intent.category.PREFERENCE");
        Intent intentA = a(context, intent, true);
        if (intentA != null) {
            intentA.setFlags(603979776);
        }
        return intentA;
    }

    public static Intent a(Context context, Intent intent, boolean z) {
        if (z) {
            intent.setPackage(context.getPackageName());
        }
        ComponentName componentNameResolveActivity = intent.resolveActivity(context.getPackageManager());
        if (componentNameResolveActivity == null) {
            return null;
        }
        Intent intent2 = new Intent(intent);
        intent2.setComponent(componentNameResolveActivity);
        return intent2;
    }

    public static Intent a(Context context, boolean z) {
        Intent intent = new Intent();
        intent.setClass(context, WhatsNew.class);
        intent.putExtra("key_whatsnew_force_launch", z);
        return intent;
    }

    public static boolean a(Activity activity, Intent intent, int i) {
        if (activity == null || intent == null) {
            return false;
        }
        try {
            activity.startActivityForResult(intent, i);
            return true;
        } catch (Exception e) {
            e.toString();
            return false;
        }
    }

    public static boolean a(Context context, Intent intent) {
        if (context == null || intent == null) {
            return false;
        }
        try {
            context.startActivity(intent);
            return true;
        } catch (Exception e) {
            e.toString();
            return false;
        }
    }

    @TargetApi(com.dualboot.h.TextViewHeaderImg_img_gradient_color_end)
    public static Context b(Context context) {
        if (context == null) {
            return null;
        }
        return new ContextThemeWrapper(context, com.dualboot.g.DualBoot_Theme);
    }
}
