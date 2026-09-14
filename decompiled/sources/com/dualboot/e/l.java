package com.dualboot.e;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.service.wallpaper.WallpaperService;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public abstract class l extends WallpaperService {
    public static void a(Context context, String str, String str2) {
        if (context == null) {
            return;
        }
        Intent intent = new Intent("com.dualboot.apps.wallpaper.PREFERENCES_CHANGED");
        intent.setPackage(context.getPackageName());
        if (!TextUtils.isEmpty(str)) {
            intent.putExtra("preference_key", str);
            if (!TextUtils.isEmpty(str2)) {
                intent.putExtra("preference_val", str2);
            }
        }
        context.sendBroadcast(intent);
    }

    protected static long c() {
        return 1L;
    }

    protected abstract j a();

    protected void a(SharedPreferences sharedPreferences) {
    }

    protected abstract boolean b();

    @Override // android.service.wallpaper.WallpaperService, android.app.Service
    public void onCreate() {
        super.onCreate();
    }

    @Override // android.service.wallpaper.WallpaperService
    public WallpaperService.Engine onCreateEngine() {
        return new n(this, getApplicationContext());
    }

    @Override // android.service.wallpaper.WallpaperService, android.app.Service
    public void onDestroy() {
        super.onDestroy();
    }
}
