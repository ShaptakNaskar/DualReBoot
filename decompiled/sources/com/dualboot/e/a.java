package com.dualboot.e;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;

/* JADX INFO: loaded from: classes.dex */
public abstract class a extends Activity {
    private boolean a(Intent intent) {
        Bundle extras;
        if (intent == null || (extras = intent.getExtras()) == null || !extras.getBoolean("com.dualboot.intent.launch_from_notify", false)) {
            return false;
        }
        Intent intentA = aa.a(this);
        if (intentA == null) {
            return true;
        }
        intentA.putExtra("com.dualboot.intent.launch_from_notify", true);
        aa.a(this, intentA);
        return true;
    }

    public void onChooseWallpaper(View view) {
        com.dualboot.util.y yVar = new com.dualboot.util.y(this);
        if (Build.VERSION.SDK_INT < 16 || !aa.a(this, aa.a(new ComponentName(getApplicationContext(), yVar.a(com.dualboot.f.component_service, new int[0]))))) {
            Toast toastMakeText = Toast.makeText(this, yVar.a(com.dualboot.f.Intro_Toast, com.dualboot.f.app_name), 1);
            toastMakeText.setGravity(17, 0, 0);
            Intent intent = new Intent();
            intent.setAction("android.service.wallpaper.LIVE_WALLPAPER_CHOOSER");
            if (aa.a(this, intent)) {
                toastMakeText.show();
            }
        }
        finish();
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        PackageInfo packageInfo;
        super.onCreate(bundle);
        if (a(getIntent())) {
            finish();
            return;
        }
        setContentView(com.dualboot.e.intro_shell);
        View viewFindViewById = findViewById(com.dualboot.d.intro_summary_text);
        View viewFindViewById2 = findViewById(com.dualboot.d.intro_picker_directions);
        View viewFindViewById3 = findViewById(com.dualboot.d.intro_version);
        String string = getString(com.dualboot.f.app_name);
        if (viewFindViewById instanceof TextView) {
            ((TextView) viewFindViewById).setText(getString(com.dualboot.f.Intro_Summary, new Object[]{string}));
        }
        if (viewFindViewById2 instanceof TextView) {
            ((TextView) viewFindViewById2).setText(getString(com.dualboot.f.Intro_PickerDirections, new Object[]{string}));
        }
        if (viewFindViewById3 instanceof TextView) {
            try {
                PackageManager packageManager = getPackageManager();
                if (packageManager != null && (packageInfo = packageManager.getPackageInfo(getPackageName(), 0)) != null) {
                    String str = packageInfo.versionName;
                    String string2 = getString(com.dualboot.f.vcs_rev);
                    if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(string2)) {
                        String string3 = getString(com.dualboot.f.Intro_Version, new Object[]{str, string2});
                        if (!TextUtils.isEmpty(string3)) {
                            ((TextView) viewFindViewById3).setText(string3);
                            viewFindViewById3.setVisibility(0);
                        }
                    }
                }
            } catch (Exception e) {
            }
        }
        new com.dualboot.util.r(this).b();
    }

    public void onMoreApps(View view) {
        aa.a(this, aa.a());
    }

    @Override // android.app.Activity
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        if (a(intent)) {
            finish();
        }
    }

    public void onOpenSettings(View view) {
        if (aa.a(this, aa.a(this))) {
            finish();
        }
    }
}
