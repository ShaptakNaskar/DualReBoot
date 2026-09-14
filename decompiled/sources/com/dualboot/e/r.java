package com.dualboot.e;

import android.R;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.preference.CheckBoxPreference;
import android.preference.ListPreference;
import android.preference.Preference;
import android.preference.PreferenceActivity;
import android.preference.PreferenceCategory;
import android.preference.PreferenceGroup;
import android.preference.PreferenceManager;
import android.preference.PreferenceScreen;
import android.text.Html;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.CheckBox;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;
import com.dualboot.activity.offer.OfferList;
import com.dualboot.widget.TextViewHeaderImg;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Vector;

/* JADX INFO: loaded from: classes.dex */
public abstract class r extends PreferenceActivity implements SharedPreferences.OnSharedPreferenceChangeListener, Preference.OnPreferenceChangeListener, Preference.OnPreferenceClickListener, com.dualboot.e.a.f, com.dualboot.e.b.d {
    protected static boolean a = false;
    protected final List b = new ArrayList();
    protected final List c = new ArrayList();
    protected final List d = new ArrayList();
    protected final Map e = new HashMap();
    protected final List f = new ArrayList();
    protected CheckBoxPreference g = null;
    protected String h = null;
    protected com.dualboot.e.a.t i = null;
    protected com.dualboot.engine.c j = null;
    private boolean l = false;
    private boolean m = false;
    private com.dualboot.e.b.a n = null;
    protected x k = new x();

    private PreferenceCategory a(PreferenceGroup preferenceGroup, String str) {
        if (preferenceGroup == null || TextUtils.isEmpty(str)) {
            return null;
        }
        int preferenceCount = preferenceGroup.getPreferenceCount();
        for (int i = 0; i < preferenceCount; i++) {
            Preference preference = preferenceGroup.getPreference(i);
            if ((preference instanceof PreferenceCategory) && TextUtils.equals(str, preference.getTitle())) {
                return (PreferenceCategory) preference;
            }
        }
        PreferenceCategory preferenceCategory = new PreferenceCategory(this);
        preferenceCategory.setTitle(str);
        preferenceGroup.addPreference(preferenceCategory);
        return preferenceCategory;
    }

    private PreferenceGroup a(com.dualboot.engine.c cVar, com.dualboot.engine.d dVar, PreferenceGroup preferenceGroup) {
        String strB;
        String str;
        int i;
        boolean z;
        int size;
        int iG;
        if (cVar == null) {
            return null;
        }
        PreferenceManager preferenceManager = getPreferenceManager();
        String strB2 = com.dualboot.engine.c.b(dVar);
        switch (com.dualboot.engine.c.w()[dVar.ordinal()]) {
            case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                strB = "Camera and Screen Panning";
                break;
            case com.dualboot.h.TextViewHeaderImg_img_gradient_color_end /* 11 */:
                strB = "Advanced Settings";
                break;
            case com.dualboot.h.TextViewHeaderImg_img_state_toggle_click /* 13 */:
                strB = "Get Optional Add-Ons";
                break;
            default:
                strB = com.dualboot.engine.c.b(dVar);
                break;
        }
        switch (com.dualboot.engine.c.w()[dVar.ordinal()]) {
            case 1:
                str = "Choose a theme to apply to the scene";
                break;
            case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                str = "Adjust camera, panning, scrolling, and gesture settings";
                break;
            case com.dualboot.h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                str = "Change the environment, time of day, and location settings";
                break;
            case com.dualboot.h.TextViewHeaderImg_img_layout_height_scale /* 4 */:
                str = "Enter your own custom messages";
                break;
            case com.dualboot.h.TextViewHeaderImg_img_corner_radius /* 5 */:
                str = "Choose your own pictures to use";
                break;
            case com.dualboot.h.TextViewHeaderImg_img_stroke_enabled /* 6 */:
                str = "Customize the look of the scene";
                break;
            case com.dualboot.h.TextViewHeaderImg_img_stroke_width /* 7 */:
                str = "Turn parts of the scene on or off";
                break;
            case com.dualboot.h.TextViewHeaderImg_img_stroke_color /* 8 */:
                str = "Adjust interaction settings";
                break;
            case com.dualboot.h.TextViewHeaderImg_img_stroke_alpha /* 9 */:
                str = "More information";
                break;
            case com.dualboot.h.TextViewHeaderImg_img_gradient_color /* 10 */:
                str = "Social network and sharing options";
                break;
            case com.dualboot.h.TextViewHeaderImg_img_gradient_color_end /* 11 */:
                str = "Advanced power saving options";
                break;
            case com.dualboot.h.TextViewHeaderImg_img_state_toggle_default /* 12 */:
            default:
                str = "";
                break;
            case com.dualboot.h.TextViewHeaderImg_img_state_toggle_click /* 13 */:
                str = "View the optional add-ons available for purchase";
                break;
        }
        switch (com.dualboot.engine.c.w()[dVar.ordinal()]) {
            case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                i = 3;
                break;
            case com.dualboot.h.TextViewHeaderImg_img_gradient_color_end /* 11 */:
                i = 1;
                break;
            case com.dualboot.h.TextViewHeaderImg_img_state_toggle_click /* 13 */:
                i = 0;
                break;
            default:
                i = -1;
                break;
        }
        switch (com.dualboot.engine.c.w()[dVar.ordinal()]) {
            case com.dualboot.h.TextViewHeaderImg_img_layout_height_scale /* 4 */:
                z = false;
                break;
            case com.dualboot.h.TextViewHeaderImg_img_corner_radius /* 5 */:
            default:
                z = true;
                break;
            case com.dualboot.h.TextViewHeaderImg_img_stroke_enabled /* 6 */:
                z = false;
                break;
        }
        PreferenceCategory preferenceCategory = new PreferenceCategory(this);
        preferenceCategory.setTitle(strB2);
        preferenceGroup.addPreference(preferenceCategory);
        ArrayList arrayListA = cVar.a(dVar);
        if (arrayListA != null && (size = arrayListA.size()) > 0) {
            Vector vector = new Vector();
            vector.add(preferenceGroup);
            vector.add(preferenceCategory);
            if (i >= 0 && i < size && str.length() > 0) {
                PreferenceScreen preferenceScreenCreatePreferenceScreen = preferenceManager.createPreferenceScreen(this);
                preferenceScreenCreatePreferenceScreen.setTitle(strB);
                preferenceScreenCreatePreferenceScreen.setSummary(str);
                preferenceCategory.addPreference(preferenceScreenCreatePreferenceScreen);
                vector.add(preferenceScreenCreatePreferenceScreen);
                if (dVar == com.dualboot.engine.d.IAB_OFFERS) {
                    preferenceScreenCreatePreferenceScreen.setWidgetLayoutResource(com.dualboot.e.pref_iab_scene);
                    preferenceScreenCreatePreferenceScreen.setKey("key_iab_offers");
                    preferenceScreenCreatePreferenceScreen.setOnPreferenceClickListener(this);
                    this.g = new CheckBoxPreference(this);
                    this.g.setKey("key_show_locked_items");
                    this.g.setTitle("Show Optional Add-Ons");
                    this.g.setSummary("Show or hide the optional settings unlocked by the add-ons");
                    this.g.setDefaultValue(true);
                    this.g.setOnPreferenceClickListener(this);
                    preferenceCategory.addPreference(this.g);
                }
            }
            int i2 = 0;
            while (i2 < size) {
                int size2 = vector.size() - 1;
                int i3 = (dVar != com.dualboot.engine.d.CAMERA || i2 >= cVar.p() || size2 <= 1) ? size2 : size2 - 1;
                PreferenceGroup preferenceGroup2 = (PreferenceGroup) vector.elementAt(i3);
                PreferenceGroup preferenceGroup3 = (PreferenceGroup) vector.elementAt(i3 - 1);
                preferenceGroup2.setOrderingAsAdded(z);
                com.dualboot.engine.f fVar = (com.dualboot.engine.f) arrayListA.get(i2);
                if (fVar != null) {
                    PreferenceCategory preferenceCategoryA = a(preferenceGroup2, fVar.j());
                    if (preferenceCategoryA != null) {
                        preferenceGroup3 = preferenceGroup2;
                        preferenceGroup2 = preferenceCategoryA;
                    }
                    Preference preferenceA = fVar.a(this, preferenceGroup2, dVar);
                    if (preferenceA != null) {
                        this.e.put(preferenceA.getKey(), preferenceA);
                        preferenceA.setOnPreferenceChangeListener(this);
                        if (preferenceA instanceof com.dualboot.e.a.r) {
                            this.d.add(new y(this, preferenceGroup3, preferenceGroup2, preferenceA));
                        }
                        if (dVar == com.dualboot.engine.d.IAB_OFFERS) {
                            preferenceA.setOnPreferenceClickListener(this);
                        } else if (dVar == com.dualboot.engine.d.MESSAGES) {
                            preferenceA.setOnPreferenceClickListener(this);
                        } else if (dVar == com.dualboot.engine.d.IMAGES) {
                            preferenceA.setOnPreferenceClickListener(this);
                            this.b.add(preferenceA.getKey());
                        } else if (dVar == com.dualboot.engine.d.THEMES && (iG = fVar.g()) > 0) {
                            z zVar = new z(this, fVar.d(), fVar.c());
                            this.c.add(zVar);
                            preferenceA.setOnPreferenceClickListener(this);
                            for (int i4 = 0; i4 < iG; i4++) {
                                String strA = fVar.a(i4);
                                int iIndexOf = strA.indexOf(61);
                                if (iIndexOf > 0) {
                                    String strSubstring = strA.substring(0, iIndexOf);
                                    String strSubstring2 = strA.substring(iIndexOf + 1);
                                    if (strSubstring.length() > 0 && strSubstring2.length() > 0) {
                                        zVar.a.add(strSubstring);
                                        zVar.b.add(strSubstring2);
                                    }
                                }
                            }
                        }
                    }
                }
                i2++;
            }
        }
        return preferenceCategory;
    }

    private void a(int i) {
        if (this.k.a != i) {
            String str = "Updated launch source = " + i + " (was " + this.k.a + ")";
            this.k.a = i;
        }
    }

    private void a(Intent intent) {
        int i = 1;
        if (intent != null) {
            Bundle extras = intent.getExtras();
            if (extras != null && extras.getBoolean("android.service.wallpaper.PREVIEW_MODE", false)) {
                if (!((intent.getFlags() & 1048576) > 0)) {
                    i = 2;
                }
            }
        } else {
            i = 0;
        }
        a(i);
    }

    private static boolean a(PreferenceGroup preferenceGroup) {
        return preferenceGroup == null || preferenceGroup.getPreferenceCount() == 0;
    }

    private static boolean a(PreferenceScreen preferenceScreen, PreferenceGroup preferenceGroup) {
        boolean zA = a(preferenceGroup);
        if (zA) {
            a(preferenceGroup);
            if (preferenceGroup != null) {
                preferenceGroup.removeAll();
                preferenceScreen.removePreference(preferenceGroup);
            }
        }
        return zA;
    }

    /* JADX WARN: Multi-variable type inference failed */
    private boolean a(String str, String str2) {
        com.dualboot.e.a.v vVar = com.dualboot.e.a.v.SELF_ONLY;
        com.dualboot.e.a.v vVar2 = com.dualboot.e.a.v.SELF_ONLY;
        if (str != null && str2 != null) {
            Preference preferenceA = a((CharSequence) str, false);
            Preference preferenceA2 = a((CharSequence) str2, false);
            if (preferenceA != 0 && preferenceA2 != 0) {
                preferenceA.setDependency(preferenceA2.getKey());
                if ((preferenceA instanceof com.dualboot.e.a.r) && (preferenceA2 instanceof com.dualboot.e.a.r)) {
                    com.dualboot.e.a.r rVar = (com.dualboot.e.a.r) preferenceA;
                    com.dualboot.e.a.r rVar2 = (com.dualboot.e.a.r) preferenceA2;
                    rVar.a().c = rVar2;
                    com.dualboot.e.a.u uVarA = rVar2.a();
                    if (rVar != null) {
                        uVarA.b.add(rVar);
                    }
                    rVar.a().d = vVar;
                    rVar2.a().d = vVar2;
                }
                return true;
            }
        }
        return false;
    }

    private boolean a(String str, String str2, boolean z) {
        com.dualboot.a.a aVarA = com.dualboot.a.a.a();
        if (aVarA == null) {
            return false;
        }
        ArrayList arrayList = new ArrayList();
        boolean zA = aVarA.a(str, str2, arrayList);
        if (!zA && z) {
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                String str3 = "Setting " + str + " = " + str2 + " requires offer " + ((String) it.next());
            }
            a(arrayList);
        }
        return zA;
    }

    private boolean a(String str, boolean z) {
        com.dualboot.a.a aVarA;
        String strA;
        z zVarD;
        AlertDialog alertDialogCreate;
        com.dualboot.a.a aVarA2;
        com.dualboot.a.p pVarB;
        if (TextUtils.isEmpty(str) || !z || (aVarA = com.dualboot.a.a.a()) == null || (zVarD = d((strA = aVarA.a(str, this.h)))) == null) {
            return false;
        }
        com.dualboot.e.b.a aVarE = e();
        String str2 = zVarD.d;
        if (aVarE.a == null || aVarE.b == null || TextUtils.isEmpty(str2) || TextUtils.isEmpty(strA) || (aVarA2 = com.dualboot.a.a.a()) == null || (pVarB = aVarA2.b(str)) == null) {
            alertDialogCreate = null;
        } else {
            Context contextB = aa.b(aVarE.b);
            View viewInflate = LayoutInflater.from(contextB).inflate(com.dualboot.e.offer_theme, (ViewGroup) null);
            if (pVarB != null && viewInflate != null) {
                View viewFindViewById = viewInflate.findViewById(com.dualboot.d.tv_offer_name);
                View viewFindViewById2 = viewInflate.findViewById(com.dualboot.d.tv_offer_price);
                View viewFindViewById3 = viewInflate.findViewById(com.dualboot.d.tv_na);
                View viewFindViewById4 = viewInflate.findViewById(com.dualboot.d.tv_offer_desc);
                View viewFindViewById5 = viewInflate.findViewById(com.dualboot.d.tv_offer_theme);
                View viewFindViewById6 = viewInflate.findViewById(com.dualboot.d.tv_offer_theme_thanks);
                if (viewFindViewById instanceof TextView) {
                    TextView textView = (TextView) viewFindViewById;
                    textView.setText(Html.fromHtml(String.format(textView.getText().toString(), TextUtils.htmlEncode(pVarB.b()))));
                }
                if (viewFindViewById2 instanceof TextView) {
                    String strD = pVarB.d();
                    if (TextUtils.isEmpty(strD)) {
                        viewFindViewById2.setVisibility(8);
                    } else {
                        TextView textView2 = (TextView) viewFindViewById2;
                        textView2.setText(Html.fromHtml(String.format(textView2.getText().toString(), TextUtils.htmlEncode(strD))));
                    }
                }
                if (viewFindViewById3 instanceof TextView) {
                    TextView textView3 = (TextView) viewFindViewById3;
                    textView3.setText(Html.fromHtml(String.format(textView3.getText().toString(), TextUtils.htmlEncode(pVarB.b()))));
                }
                if (viewFindViewById6 instanceof TextView) {
                    TextView textView4 = (TextView) viewFindViewById6;
                    textView4.setText(Html.fromHtml(String.format(textView4.getText().toString(), TextUtils.htmlEncode(pVarB.b()))));
                }
                if (viewFindViewById4 instanceof TextView) {
                    ((TextView) viewFindViewById4).setText(pVarB.c());
                }
                if ((viewFindViewById5 instanceof TextView) && !TextUtils.isEmpty(str2)) {
                    TextView textView5 = (TextView) viewFindViewById5;
                    textView5.setText(Html.fromHtml(String.format(textView5.getText().toString(), TextUtils.htmlEncode(str2))));
                }
                if (viewFindViewById instanceof TextViewHeaderImg) {
                    TextViewHeaderImg textViewHeaderImg = (TextViewHeaderImg) viewFindViewById;
                    BitmapDrawable bitmapDrawableA = pVarB.a((Context) aVarE.b, false);
                    if (bitmapDrawableA == null) {
                        Drawable drawable = aVarE.b.getResources().getDrawable(com.dualboot.c.icon_offer_default);
                        if (drawable instanceof BitmapDrawable) {
                            bitmapDrawableA = (BitmapDrawable) drawable;
                        }
                    }
                    if (bitmapDrawableA != null) {
                        BitmapDrawable bitmapDrawableA2 = new com.dualboot.util.z(aVarE.b).a(bitmapDrawableA, 128, 128);
                        if (bitmapDrawableA2 == null) {
                            bitmapDrawableA2 = bitmapDrawableA;
                        }
                        textViewHeaderImg.a(bitmapDrawableA2);
                    }
                }
            }
            AlertDialog.Builder builder = new AlertDialog.Builder(contextB);
            builder.setCancelable(true);
            builder.setTitle(com.dualboot.f.app_name);
            builder.setView(viewInflate);
            builder.setPositiveButton(R.string.yes, new com.dualboot.e.b.c(aVarE, strA));
            builder.setNegativeButton(R.string.no, (DialogInterface.OnClickListener) null);
            alertDialogCreate = builder.create();
        }
        aVarE.a(alertDialogCreate);
        return alertDialogCreate != null;
    }

    private boolean a(ArrayList arrayList) {
        if (arrayList == null || arrayList.isEmpty()) {
            return false;
        }
        com.dualboot.activity.offer.b bVar = new com.dualboot.activity.offer.b();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            bVar.a.add((String) it.next());
        }
        return aa.a(this, bVar.a(this, OfferList.class), 1027);
    }

    private boolean b(int i) {
        Intent intentA = null;
        if (!isFinishing() && !this.k.d) {
            switch (i) {
                case 1025:
                    if (!this.k.b) {
                        this.k.b = true;
                        Intent intent = new Intent();
                        intent.setAction("com.dualboot.intent.action.LICENSE");
                        intent.addCategory("android.intent.category.DEFAULT");
                        intentA = aa.a((Context) this, intent, true);
                    }
                    break;
                case 1026:
                    if (!this.k.c) {
                        this.k.c = true;
                        intentA = aa.a((Context) this, false);
                    }
                    break;
            }
        }
        return aa.a(this, intentA, i);
    }

    private z d(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        int i = 0;
        while (true) {
            int i2 = i;
            if (i2 >= this.c.size()) {
                return null;
            }
            z zVar = (z) this.c.get(i2);
            if (zVar.e.equalsIgnoreCase(str)) {
                return zVar;
            }
            i = i2 + 1;
        }
    }

    static /* synthetic */ void d() {
    }

    private com.dualboot.e.b.a e() {
        if (this.n == null) {
            this.n = new com.dualboot.e.b.a(a(), this, this);
        }
        return this.n;
    }

    private boolean e(String str) {
        this.m = false;
        z zVarD = d(str);
        if (zVarD == null) {
            return false;
        }
        this.l = false;
        int size = zVarD.c.size();
        if (size == zVarD.b.size()) {
            for (int i = 0; i < size; i++) {
                String str2 = (String) zVarD.a.get(i);
                String str3 = (String) zVarD.b.get(i);
                Preference preference = (Preference) zVarD.c.get(i);
                if (preference == null) {
                    String str4 = "Unable to find preference '" + str3 + "' ('" + str2 + "') for theme '" + zVarD.d + "'";
                } else if (preference instanceof CheckBoxPreference) {
                    if (a(str2, str3, false)) {
                        ((CheckBoxPreference) preference).setChecked(Boolean.valueOf(str3).booleanValue());
                    }
                } else if ((preference instanceof ListPreference) && a(str2, str3, false)) {
                    ((ListPreference) preference).setValue(str3);
                }
            }
        }
        if (this.l) {
            this.m = true;
        }
        Toast toastMakeText = Toast.makeText(this, "Setting " + zVarD.d + " theme...", 0);
        if (toastMakeText != null) {
            toastMakeText.setGravity(17, 0, 0);
            toastMakeText.show();
        }
        return true;
    }

    private static void f() {
        if (a) {
            a = false;
            com.dualboot.a.a.a().c();
        }
        com.dualboot.a.a.a().b();
    }

    private synchronized void g() {
        Preference preferenceA = a("key_iab_offers_refresh", false);
        if (preferenceA != null && (preferenceA instanceof com.dualboot.e.a.c)) {
            ((com.dualboot.e.a.c) preferenceA).a();
        }
    }

    private synchronized void h() {
        Preference preferenceA = a("key_iab_offers_refresh", false);
        if (preferenceA != null && (preferenceA instanceof com.dualboot.e.a.c)) {
            ((com.dualboot.e.a.c) preferenceA).d();
        }
    }

    private void i() {
        com.dualboot.e.a.u uVarA;
        if (this.g == null || this.d == null) {
            return;
        }
        boolean zIsChecked = this.g.isChecked();
        for (y yVar : this.d) {
            if (yVar != null && (yVar.c instanceof com.dualboot.e.a.r) && (uVarA = ((com.dualboot.e.a.r) yVar.c).a()) != null) {
                if (uVarA.b() || zIsChecked) {
                    if (yVar.b != null && yVar.c != null) {
                        if (yVar.b.getPreferenceCount() == 0) {
                            yVar.a.addPreference(yVar.b);
                        }
                        yVar.e = yVar.c.getDependency();
                        yVar.c.setDependency(null);
                        if (yVar.b.addPreference(yVar.c)) {
                            yVar.d = true;
                            if (yVar.c != null && (yVar.c instanceof com.dualboot.e.a.r)) {
                                ((com.dualboot.e.a.r) yVar.c).b();
                            }
                        }
                    }
                } else if (yVar.b != null && yVar.c != null) {
                    if (yVar.b.removePreference(yVar.c)) {
                        yVar.d = false;
                    }
                    if (yVar.b.getPreferenceCount() == 0) {
                        yVar.a.removePreference(yVar.b);
                    }
                }
            }
        }
        for (y yVar2 : this.d) {
            if (yVar2 != null && yVar2.b != null && yVar2.c != null && yVar2.d && !TextUtils.isEmpty(yVar2.e)) {
                yVar2.c.setDependency(yVar2.e);
            }
        }
    }

    private void j() {
        this.f.clear();
    }

    private void k() {
        Preference preferenceA;
        PreferenceScreen preferenceScreen = getPreferenceScreen();
        if (preferenceScreen == null) {
            preferenceScreen = getPreferenceManager().createPreferenceScreen(this);
            preferenceScreen.setTitle(com.dualboot.f.settings_name);
            preferenceScreen.setSummary(com.dualboot.f.settings_desc);
        }
        PreferenceScreen preferenceScreen2 = preferenceScreen;
        preferenceScreen2.removeAll();
        this.b.clear();
        this.c.clear();
        this.d.clear();
        this.e.clear();
        this.g = null;
        if (this.j != null) {
            PreferenceGroup preferenceGroupA = a(this.j, com.dualboot.engine.d.IAB_OFFERS, preferenceScreen2);
            PreferenceGroup preferenceGroupA2 = a(this.j, com.dualboot.engine.d.SOCIAL, preferenceScreen2);
            PreferenceGroup preferenceGroupA3 = a(this.j, com.dualboot.engine.d.THEMES, preferenceScreen2);
            PreferenceGroup preferenceGroupA4 = a(this.j, com.dualboot.engine.d.IMAGES, preferenceScreen2);
            PreferenceGroup preferenceGroupA5 = a(this.j, com.dualboot.engine.d.MESSAGES, preferenceScreen2);
            PreferenceGroup preferenceGroupA6 = a(this.j, com.dualboot.engine.d.CAMERA, preferenceScreen2);
            PreferenceGroup preferenceGroupA7 = a(this.j, com.dualboot.engine.d.TIMEOFDAY, preferenceScreen2);
            PreferenceGroup preferenceGroupA8 = a(this.j, com.dualboot.engine.d.CUSTOMIZATION, preferenceScreen2);
            PreferenceGroup preferenceGroupA9 = a(this.j, com.dualboot.engine.d.TOGGLES, preferenceScreen2);
            PreferenceGroup preferenceGroupA10 = a(this.j, com.dualboot.engine.d.INTERACTION, preferenceScreen2);
            PreferenceGroup preferenceGroupA11 = a(this.j, com.dualboot.engine.d.INFORMATION, preferenceScreen2);
            PreferenceGroup preferenceGroupA12 = a(this.j, com.dualboot.engine.d.ADVANCED, preferenceScreen2);
            PreferenceManager preferenceManager = getPreferenceManager();
            com.dualboot.util.y yVar = new com.dualboot.util.y(this);
            String strA = yVar.a(com.dualboot.f.app_name, new int[0]);
            String str = String.valueOf(yVar.a(com.dualboot.f.MarketURL_Google_HTTPS, new int[0])) + getPackageName();
            Intent intent = new Intent();
            intent.setAction("android.intent.action.SEND");
            intent.setType("text/plain");
            intent.putExtra("android.intent.extra.SUBJECT", strA);
            intent.putExtra("android.intent.extra.TEXT", str);
            PreferenceScreen preferenceScreenCreatePreferenceScreen = preferenceManager.createPreferenceScreen(this);
            preferenceScreenCreatePreferenceScreen.setIntent(Intent.createChooser(intent, null));
            preferenceScreenCreatePreferenceScreen.setTitle("Share");
            preferenceScreenCreatePreferenceScreen.setSummary("Tell family and friends about " + strA);
            preferenceGroupA2.addPreference(preferenceScreenCreatePreferenceScreen);
            preferenceGroupA11.setKey("key_pref_info");
            preferenceGroupA11.addPreference(new com.dualboot.e.a.x(this));
            String str2 = String.valueOf(String.valueOf(String.valueOf(String.valueOf(String.valueOf("pkg=" + getPackageName()) + "&manuf=" + Build.MANUFACTURER) + "&model=" + Build.MODEL) + "&abi=" + Build.CPU_ABI) + "&abi2=" + Build.CPU_ABI2) + "&sdk=" + Build.VERSION.SDK_INT;
            Intent intent2 = new Intent();
            intent2.setAction("android.intent.action.VIEW");
            intent2.setData(Uri.parse("http://www.dualbootgames.com/faq/index.php?" + str2));
            intent2.setFlags(524288);
            PreferenceScreen preferenceScreenCreatePreferenceScreen2 = preferenceManager.createPreferenceScreen(this);
            preferenceScreenCreatePreferenceScreen2.setIntent(intent2);
            preferenceScreenCreatePreferenceScreen2.setTitle("Support and Help");
            preferenceScreenCreatePreferenceScreen2.setSummary("Need help? Check our frequently asked questions or contact us");
            preferenceScreenCreatePreferenceScreen2.setWidgetLayoutResource(com.dualboot.e.pref_faq);
            preferenceGroupA11.addPreference(preferenceScreenCreatePreferenceScreen2);
            Intent intentA = aa.a();
            if (intentA != null) {
                PreferenceScreen preferenceScreenCreatePreferenceScreen3 = preferenceManager.createPreferenceScreen(this);
                preferenceScreenCreatePreferenceScreen3.setIntent(intentA);
                preferenceScreenCreatePreferenceScreen3.setTitle("More apps");
                preferenceScreenCreatePreferenceScreen3.setSummary("Find more great apps by DualBoot Games");
                preferenceScreenCreatePreferenceScreen3.setWidgetLayoutResource(com.dualboot.e.pref_moreapps);
                preferenceGroupA11.addPreference(preferenceScreenCreatePreferenceScreen3);
            }
            Intent intentA2 = aa.a((Context) this, true);
            if (intentA2 != null) {
                com.dualboot.e.a.s sVar = new com.dualboot.e.a.s(this);
                sVar.setKey("key_pref_info_whatsnew");
                sVar.a(this, intentA2);
                sVar.setTitle(com.dualboot.f.pref_whatsnew_title);
                sVar.setSummary(com.dualboot.f.pref_whatsnew_summary);
                preferenceGroupA11.addPreference(sVar);
            }
            a(preferenceScreen2, preferenceGroupA);
            a(preferenceScreen2, preferenceGroupA3);
            a(preferenceScreen2, preferenceGroupA7);
            a(preferenceScreen2, preferenceGroupA4);
            a(preferenceScreen2, preferenceGroupA5);
            a(preferenceScreen2, preferenceGroupA8);
            a(preferenceScreen2, preferenceGroupA9);
            a(preferenceScreen2, preferenceGroupA6);
            a(preferenceScreen2, preferenceGroupA10);
            a(preferenceScreen2, preferenceGroupA11);
            a(preferenceScreen2, preferenceGroupA12);
            int i = 0;
            while (true) {
                int i2 = i;
                if (i2 >= this.c.size()) {
                    break;
                }
                ((z) this.c.get(i2)).a();
                i = i2 + 1;
            }
        }
        setPreferenceScreen(preferenceScreen2);
        if (this.j != null) {
            a(this.j.k(), this.j.j());
            a(this.j.l(), this.j.i());
            int iN = this.j.n();
            int iO = this.j.o();
            for (int i3 = 0; i3 < iN; i3++) {
                if (i3 < iO) {
                    a(this.j.b(i3).c(), this.j.c(i3).c());
                }
            }
        }
        if (this.j != null) {
            this.i = new com.dualboot.e.a.t();
            this.i.a(a((CharSequence) this.j.h(), false));
            this.i.a(a((CharSequence) this.j.i(), false));
            this.i.a(a((CharSequence) this.j.j(), false));
        }
        if (this.j != null && (preferenceA = a("key_iab_offers", false)) != null && (preferenceA instanceof PreferenceGroup)) {
            com.dualboot.e.a.c cVar = new com.dualboot.e.a.c(this);
            cVar.setKey("key_iab_offers_refresh");
            cVar.a((PreferenceGroup) preferenceA, a(), this);
        }
        if (this.d != null) {
            int i4 = 0;
            while (true) {
                int i5 = i4;
                if (i5 >= this.d.size()) {
                    break;
                }
                y yVar2 = (y) this.d.get(i5);
                if (yVar2 != null) {
                    boolean z = (preferenceScreen2 == null || yVar2.c == null || preferenceScreen2.findPreference(yVar2.c.getKey()) != yVar2.c) ? false : true;
                    if (!z) {
                        this.d.set(i5, null);
                    }
                }
                i4 = i5 + 1;
            }
            while (this.d.remove((Object) null)) {
            }
        }
        i();
        ListView listView = getListView();
        if (listView != null) {
            listView.setSmoothScrollbarEnabled(false);
            listView.setVerticalFadingEdgeEnabled(false);
        }
    }

    protected final Preference a(CharSequence charSequence) {
        return a(charSequence, false);
    }

    protected final Preference a(CharSequence charSequence, boolean z) {
        return (this.e.isEmpty() || !z) ? findPreference(charSequence) : (Preference) this.e.get(charSequence.toString());
    }

    protected abstract j a();

    @Override // com.dualboot.e.b.d
    public final void a(String str) {
        e(str);
    }

    protected final PreferenceScreen b() {
        return getPreferenceScreen();
    }

    public final boolean b(String str) {
        return a(str, "", true);
    }

    @Override // com.dualboot.e.a.f
    public final void c() {
        i();
    }

    protected final boolean c(String str) {
        if (!e(str)) {
            return false;
        }
        if (this.k.a == 2 && this.m) {
            finish();
        }
        return true;
    }

    /* JADX WARN: Code duplicated, block: B:47:0x0113  */
    @Override // android.preference.PreferenceActivity, android.app.Activity
    protected void onActivityResult(int i, int i2, Intent intent) {
        float f;
        Preference preferenceFindPreference;
        float f2 = 128.0f;
        if (i == 1027) {
            boolean z = false;
            for (com.dualboot.activity.offer.d dVar : com.dualboot.activity.offer.a.a(intent)) {
                String str = dVar.a;
                int i3 = dVar.b;
                String str2 = "Received offer result " + i3 + " for " + str;
                h();
                if (i3 == 3) {
                    if (a(str, !z)) {
                        z = true;
                    }
                }
            }
            return;
        }
        if (i == 1025) {
            i();
            b(1026);
            return;
        }
        if (i != 1026) {
            int size = this.b.size() + 420;
            if (i < 420 || i >= size || i2 != -1 || intent == null) {
                return;
            }
            String str3 = (String) this.b.get(i - 420);
            String str4 = String.valueOf(str3) + "-image";
            String[] strArrSplit = str3.split("-");
            if (strArrSplit.length > 0) {
                String[] strArrSplit2 = strArrSplit[strArrSplit.length - 1].split("x");
                if (strArrSplit2.length == 2) {
                    f2 = Float.parseFloat(strArrSplit2[0]);
                    f = Float.parseFloat(strArrSplit2[1]);
                } else {
                    f = 128.0f;
                }
            } else {
                f = 128.0f;
            }
            new t(this, this, intent, str3, str4, f2, f).execute(null);
            return;
        }
        if (i2 != 2) {
            PreferenceGroup preferenceGroup = (PreferenceGroup) a("key_pref_info", false);
            if (preferenceGroup == null || (preferenceFindPreference = preferenceGroup.findPreference("key_pref_info_whatsnew")) == null) {
                return;
            }
            preferenceGroup.removePreference(preferenceFindPreference);
            return;
        }
        if (intent != null) {
            a(intent.getStringArrayListExtra("key_result_offer_id"));
            String stringExtra = intent.getStringExtra("key_result_theme_name");
            if (TextUtils.isEmpty(stringExtra) || d(stringExtra) == null) {
                return;
            }
            s sVar = new s(this, stringExtra);
            if (this.k.e) {
                new Handler().post(sVar);
            } else {
                this.f.add(sVar);
            }
        }
    }

    @Override // android.preference.PreferenceActivity, android.app.Activity
    public void onBackPressed() {
        super.onBackPressed();
    }

    @Override // android.preference.PreferenceActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        String str = "onCreate() / " + (bundle == null ? "NEW" : "RECREATE");
        this.k = new x();
        if (bundle == null) {
            if (!a) {
                a = true;
                com.dualboot.a.a.a().a(this, a());
            }
            com.dualboot.a.a.a().b();
            a(getIntent());
        } else {
            int i = this.k.a;
            this.k.b(bundle);
            int i2 = this.k.a;
            this.k.a = i;
            a(i2);
        }
        j jVarA = a();
        this.j = new com.dualboot.engine.c();
        if (!this.j.a(this, jVarA.b())) {
            this.j = null;
        }
        k();
    }

    @Override // android.preference.PreferenceActivity, android.app.ListActivity, android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        this.k.d = true;
        if (isFinishing()) {
            finishActivity(1025);
            finishActivity(1026);
            finishActivity(1027);
            f();
        }
    }

    @Override // android.preference.PreferenceActivity, android.app.Activity
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        a(intent);
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
        boolean z = this.k.e;
        this.k.e = false;
        com.dualboot.b.a.a((Context) this).unregisterOnSharedPreferenceChangeListener(this);
        j();
        if (this.n != null) {
            com.dualboot.e.b.a aVar = this.n;
            for (Dialog dialog : aVar.d) {
                if (dialog != null && dialog.isShowing()) {
                    dialog.dismiss();
                }
            }
            aVar.d.clear();
            this.n = null;
        }
        if (isFinishing()) {
            f();
        }
    }

    @Override // android.preference.Preference.OnPreferenceChangeListener
    public boolean onPreferenceChange(Preference preference, Object obj) {
        return a(preference != null ? preference.getKey() : "", obj != null ? obj.toString() : "", true);
    }

    @Override // android.preference.Preference.OnPreferenceClickListener
    public boolean onPreferenceClick(Preference preference) {
        SharedPreferences sharedPreferencesA;
        AlertDialog alertDialogCreate = null;
        if (preference == null) {
            return false;
        }
        String key = preference.getKey();
        if (preference.equals(this.g)) {
            i();
            return false;
        }
        if (!key.equals("key_iab_offers")) {
            if (preference instanceof com.dualboot.e.a.a) {
                String strA = ((com.dualboot.e.a.a) preference).a();
                h();
                if (!TextUtils.isEmpty(strA)) {
                    ArrayList arrayList = new ArrayList(1);
                    arrayList.add(strA);
                    a(arrayList);
                }
                return true;
            }
            if (!b(key)) {
                this.h = key;
                return true;
            }
            for (int i = 0; i < this.b.size(); i++) {
                if (key.equals(this.b.get(i))) {
                    Intent intent = new Intent();
                    intent.setAction("android.intent.action.GET_CONTENT");
                    intent.addCategory("android.intent.category.OPENABLE");
                    intent.setType("image/*");
                    aa.a(this, Intent.createChooser(intent, "Select Image"), i + 420);
                    return true;
                }
            }
            return c(key);
        }
        g();
        com.dualboot.e.b.a aVarE = e();
        if (aVarE.a != null && aVarE.b != null) {
            j jVar = aVarE.a;
            if (k.PAID == k.PAID && (sharedPreferencesA = com.dualboot.b.a.a(aVarE.b)) != null && sharedPreferencesA.getBoolean("key_show_about_offers", true)) {
                Context contextB = aa.b(aVarE.b);
                View viewInflate = LayoutInflater.from(contextB).inflate(com.dualboot.e.offer_about, (ViewGroup) null);
                View viewFindViewById = viewInflate.findViewById(com.dualboot.d.cb_show_next_time);
                CheckBox checkBox = viewFindViewById instanceof CheckBox ? (CheckBox) viewFindViewById : null;
                AlertDialog.Builder builder = new AlertDialog.Builder(contextB);
                builder.setCancelable(true);
                builder.setIcon(com.dualboot.c.icon);
                builder.setTitle(com.dualboot.f.OfferAbout_Title);
                builder.setView(viewInflate);
                builder.setPositiveButton(R.string.ok, (DialogInterface.OnClickListener) null);
                builder.setNegativeButton((CharSequence) null, (DialogInterface.OnClickListener) null);
                alertDialogCreate = builder.create();
                if (alertDialogCreate != null) {
                    alertDialogCreate.setOnDismissListener(new com.dualboot.e.b.b(aVarE, sharedPreferencesA, checkBox));
                }
            }
        }
        aVarE.a(alertDialogCreate);
        return false;
    }

    @Override // android.app.Activity
    protected void onRestart() {
        super.onRestart();
    }

    @Override // android.preference.PreferenceActivity, android.app.ListActivity, android.app.Activity
    protected void onRestoreInstanceState(Bundle bundle) {
        super.onRestoreInstanceState(bundle);
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        boolean z = this.k.e;
        this.k.e = true;
        com.dualboot.b.a.a((Context) this).registerOnSharedPreferenceChangeListener(this);
        if (!this.f.isEmpty()) {
            Handler handler = new Handler();
            for (Runnable runnable : this.f) {
                if (runnable != null) {
                    handler.post(runnable);
                }
            }
        }
        j();
        b(1025);
    }

    @Override // android.preference.PreferenceActivity, android.app.Activity
    protected void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        this.k.a(bundle);
    }

    public void onSharedPreferenceChanged(SharedPreferences sharedPreferences, String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.l = true;
        Object obj = sharedPreferences.getAll().get(str);
        l.a(this, str, obj != null ? obj.toString() : "");
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
    }

    @Override // android.preference.PreferenceActivity, android.app.Activity
    protected void onStop() {
        super.onStop();
        a(0);
    }

    @Override // android.app.Activity
    public void onUserInteraction() {
        super.onUserInteraction();
    }

    @Override // android.app.Activity
    protected void onUserLeaveHint() {
        super.onUserLeaveHint();
    }
}
