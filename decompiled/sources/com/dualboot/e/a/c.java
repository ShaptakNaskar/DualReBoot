package com.dualboot.e.a;

import android.R;
import android.content.Context;
import android.os.Build;
import android.os.Handler;
import android.preference.Preference;
import android.preference.PreferenceCategory;
import android.preference.PreferenceGroup;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public final class c extends Preference implements q {
    protected static Boolean a = false;
    protected PreferenceGroup b;
    protected f c;
    protected com.dualboot.e.j d;

    public c(Context context) {
        this(context, (byte) 0);
    }

    private c(Context context, byte b) {
        this(context, (char) 0);
    }

    private c(Context context, char c) {
        super(context, null, R.attr.preferenceScreenStyle);
        this.b = null;
        this.c = null;
        this.d = null;
        setTitle(com.dualboot.f.offer_refresh_title);
        setSummary(com.dualboot.f.offer_refresh_summary);
        if (Build.VERSION.SDK_INT >= 11) {
            setIcon(com.dualboot.c.icon_offer_refresh);
        }
    }

    private static void a(PreferenceGroup preferenceGroup, List list) {
        if (preferenceGroup == null) {
            return;
        }
        for (int i = 0; i < preferenceGroup.getPreferenceCount(); i++) {
            Object preference = preferenceGroup.getPreference(i);
            if (preference instanceof q) {
                list.add((q) preference);
            }
        }
        for (int i2 = 0; i2 < preferenceGroup.getPreferenceCount(); i2++) {
            Preference preference2 = preferenceGroup.getPreference(i2);
            if (preference2 instanceof PreferenceGroup) {
                a((PreferenceGroup) preference2, list);
            }
        }
    }

    static /* synthetic */ void e() {
    }

    private List f() {
        ArrayList arrayList = new ArrayList();
        a(this.b, arrayList);
        return arrayList;
    }

    public final void a() {
        synchronized (a) {
            if (a.booleanValue()) {
                return;
            }
            if (this.d == null) {
                return;
            }
            List listF = f();
            if (listF == null || listF.size() <= 1) {
                return;
            }
            d dVar = new d(this, new Handler(), listF);
            if (com.dualboot.a.a.a().b(getContext(), this.d) && com.dualboot.a.a.a().a(dVar)) {
                a = true;
                Iterator it = listF.iterator();
                while (it.hasNext()) {
                    ((q) it.next()).b();
                }
            }
        }
    }

    public final void a(PreferenceGroup preferenceGroup, com.dualboot.e.j jVar, f fVar) {
        this.b = preferenceGroup;
        this.c = fVar;
        this.d = jVar;
        if (this.b != null) {
            PreferenceCategory preferenceCategory = new PreferenceCategory(getContext());
            preferenceCategory.setTitle(com.dualboot.f.offer_refresh_group);
            this.b.addPreference(preferenceCategory);
            preferenceCategory.addPreference(this);
        }
    }

    @Override // com.dualboot.e.a.q
    public final void b() {
        setTitle(com.dualboot.f.offer_refresh_title_refreshing);
        setEnabled(false);
        setSelectable(false);
    }

    @Override // com.dualboot.e.a.q
    public final void c() {
        setTitle(com.dualboot.f.offer_refresh_title);
        setEnabled(true);
        setSelectable(true);
    }

    public final void d() {
        List listF = f();
        if (listF == null || listF.size() <= 1) {
            return;
        }
        Iterator it = listF.iterator();
        while (it.hasNext()) {
            ((q) it.next()).b();
        }
        if (this.c != null) {
            this.c.c();
        }
        Iterator it2 = listF.iterator();
        while (it2.hasNext()) {
            ((q) it2.next()).c();
        }
    }

    @Override // android.preference.Preference
    protected final void onClick() {
        super.onClick();
        a();
    }

    @Override // android.preference.Preference
    protected final void onPrepareForRemoval() {
        super.onPrepareForRemoval();
        this.b = null;
        this.c = null;
        this.d = null;
    }
}
