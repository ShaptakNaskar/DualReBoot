package com.dualboot.activity.misc;

import android.app.Activity;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.os.Handler;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.CheckBox;
import com.dualboot.c;
import com.dualboot.d;
import com.dualboot.e;
import com.dualboot.util.aa;
import com.dualboot.util.r;
import com.dualboot.widget.TextViewLink;
import com.dualboot.widget.TextViewThemeLink;
import com.dualboot.widget.b;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class WhatsNew extends Activity implements com.dualboot.widget.a {
    protected CheckBox a = null;
    protected int b = 0;

    private String a() {
        return "key_whatsnew_shownexttime_v" + this.b;
    }

    @Override // com.dualboot.widget.a
    public final void a(TextViewLink textViewLink) {
        if (textViewLink instanceof b) {
            ArrayList arrayListD = ((b) textViewLink).d();
            Intent intent = new Intent();
            intent.putStringArrayListExtra("key_result_offer_id", arrayListD);
            setResult(2, intent);
            finish();
            return;
        }
        if (textViewLink instanceof TextViewThemeLink) {
            String strD = ((TextViewThemeLink) textViewLink).d();
            Intent intent2 = new Intent();
            intent2.putExtra("key_result_theme_name", strD);
            setResult(2, intent2);
            finish();
        }
    }

    public void onClick_Continue(View view) {
        finish();
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        SharedPreferences sharedPreferencesA;
        super.onCreate(bundle);
        setResult(1);
        Intent intent = getIntent();
        boolean booleanExtra = intent != null ? intent.getBooleanExtra("key_whatsnew_force_launch", false) : false;
        try {
            requestWindowFeature(3);
            aa aaVar = new aa(this);
            if (!aaVar.a()) {
                finish();
                return;
            }
            this.b = aaVar.b();
            View viewInflate = getLayoutInflater().inflate(e.whatsnew_shell, (ViewGroup) null);
            if (viewInflate == null) {
                finish();
                return;
            }
            View viewFindViewById = viewInflate.findViewById(d.whatsnew_shownexttime);
            this.a = viewFindViewById instanceof CheckBox ? (CheckBox) viewFindViewById : null;
            ViewGroup viewGroup = (ViewGroup) viewInflate.findViewById(d.whatsnew_content);
            if (viewGroup == null) {
                finish();
                return;
            }
            if (getLayoutInflater().inflate(aaVar.d(), viewGroup) == null) {
                finish();
                return;
            }
            setResult(2);
            r rVar = new r(this);
            rVar.a();
            r.a(rVar.a);
            String strA = a();
            boolean z = (TextUtils.isEmpty(strA) || (sharedPreferencesA = com.dualboot.b.a.a((Activity) this)) == null) ? true : sharedPreferencesA.getBoolean(strA, true);
            if (!(booleanExtra || z)) {
                finish();
                return;
            }
            if (this.a != null) {
                this.a.setChecked(z);
            }
            setTitle(aaVar.c());
            setContentView(viewInflate, new ViewGroup.LayoutParams(-1, -1));
            getWindow().setFeatureDrawableResource(3, c.icon);
        } catch (Exception e) {
            finish();
        }
    }

    @Override // android.app.Activity
    protected void onPause() {
        SharedPreferences sharedPreferencesA;
        SharedPreferences.Editor editorEdit;
        super.onPause();
        if (this.a != null) {
            boolean zIsChecked = this.a.isChecked();
            String strA = a();
            if (!TextUtils.isEmpty(strA) && (sharedPreferencesA = com.dualboot.b.a.a((Activity) this)) != null && (editorEdit = sharedPreferencesA.edit()) != null) {
                editorEdit.putBoolean(strA, zIsChecked);
                editorEdit.commit();
            }
        }
        TextViewLink.a((Activity) this, false);
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        new Handler().postDelayed(new a(this), 750L);
    }
}
