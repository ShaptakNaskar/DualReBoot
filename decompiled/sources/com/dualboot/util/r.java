package com.dualboot.util;

import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.graphics.Bitmap;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.support.v4.app.ac;
import android.support.v4.app.ag;
import android.support.v4.app.aq;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public final class r {
    public final Context a;

    public r(Context context) {
        this.a = context != null ? context.getApplicationContext() : null;
    }

    public static boolean a(Context context) {
        if (context == null) {
            return false;
        }
        try {
            NotificationManager notificationManager = (NotificationManager) context.getSystemService("notification");
            if (notificationManager == null) {
                return false;
            }
            notificationManager.cancel(1464729600);
            return true;
        } catch (Exception e) {
            return false;
        }
    }

    public final boolean a() {
        SharedPreferences sharedPreferencesA;
        try {
            if (this.a == null) {
                return false;
            }
            aa aaVar = new aa(this.a);
            if (!aaVar.a() || (sharedPreferencesA = com.dualboot.b.a.a(this.a)) == null) {
                return false;
            }
            String str = "key_notify_wn_v" + aaVar.b();
            if (sharedPreferencesA.getBoolean(str, false)) {
                return false;
            }
            SharedPreferences.Editor editorEdit = sharedPreferencesA.edit();
            if (editorEdit != null) {
                editorEdit.putBoolean(str, true);
                editorEdit.commit();
            }
            return true;
        } catch (Exception e) {
            return false;
        }
    }

    public final boolean b() {
        Bitmap bitmap;
        if (!a()) {
            return false;
        }
        try {
            y yVar = new y(this.a);
            String strA = yVar.a(com.dualboot.f.notify_whatsnew_title, com.dualboot.f.app_name);
            String strA2 = yVar.a(com.dualboot.f.notify_whatsnew_content, com.dualboot.f.app_name);
            if (TextUtils.isEmpty(strA) || TextUtils.isEmpty(strA2)) {
                return false;
            }
            Drawable drawable = this.a.getResources().getDrawable(com.dualboot.c.icon);
            if ((drawable instanceof BitmapDrawable) && (bitmap = ((BitmapDrawable) drawable).getBitmap()) != null) {
                ag agVar = new ag(this.a);
                agVar.r.flags |= 16;
                agVar.r.icon = com.dualboot.c.notify_whatsnew;
                agVar.b = strA;
                agVar.c = strA2;
                agVar.r.tickerText = strA2;
                agVar.g = bitmap;
                Context context = this.a;
                Intent launchIntentForPackage = context.getPackageManager().getLaunchIntentForPackage(context.getPackageName());
                if (launchIntentForPackage != null) {
                    launchIntentForPackage.setFlags(536870912);
                }
                if (launchIntentForPackage == null) {
                    return false;
                }
                launchIntentForPackage.putExtra("com.dualboot.intent.launch_from_notify", true);
                aq aqVarA = aq.a(this.a);
                aqVarA.a(launchIntentForPackage.getComponent());
                aqVarA.a(launchIntentForPackage);
                PendingIntent pendingIntentA = aqVarA.a((int) System.currentTimeMillis());
                if (pendingIntentA == null) {
                    return false;
                }
                agVar.d = pendingIntentA;
                NotificationManager notificationManager = (NotificationManager) this.a.getSystemService("notification");
                if (notificationManager == null) {
                    return false;
                }
                notificationManager.notify(1464729600, ac.a.a(agVar));
                return true;
            }
            return false;
        } catch (Exception e) {
            return false;
        }
    }
}
