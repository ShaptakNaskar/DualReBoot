package com.dualboot.util;

import android.annotation.TargetApi;
import android.os.Bundle;
import android.preference.Preference;
import android.preference.PreferenceActivity;
import android.text.TextUtils;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class DreamSettings extends PreferenceActivity {
    @Override // android.preference.PreferenceActivity
    @TargetApi(com.dualboot.h.TextViewHeaderImg_img_gradient_color_end)
    public void onBuildHeaders(List list) {
        super.onBuildHeaders(list);
    }

    @Override // android.preference.PreferenceActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        Preference preferenceFindPreference;
        super.onCreate(bundle);
        addPreferencesFromResource(com.dualboot.i.dream_prefs);
        String strA = new y(this).a(com.dualboot.f.dream_wallpaper_settings_key, new int[0]);
        if (TextUtils.isEmpty(strA) || (preferenceFindPreference = findPreference(strA)) == null) {
            return;
        }
        preferenceFindPreference.setIntent(com.dualboot.e.aa.a(this));
    }
}
