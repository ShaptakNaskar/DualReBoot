package com.dualboot.engine;

import android.content.Context;
import android.content.SharedPreferences;
import android.preference.Preference;
import android.preference.PreferenceGroup;
import java.io.BufferedReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public abstract class f {
    protected String b = null;
    protected String c = null;
    protected String d = null;
    protected String e = null;
    protected ArrayList f = null;
    protected String g = null;
    protected String h = null;
    protected String i = null;
    final /* synthetic */ c j;

    protected f(c cVar) {
        this.j = cVar;
        b();
    }

    public final Preference a(Context context, PreferenceGroup preferenceGroup, d dVar) {
        Preference preferenceA = null;
        if (this.b.length() > 0 && (preferenceA = a(context, dVar)) != null) {
            preferenceA.setKey(this.b);
            preferenceA.setTitle(this.c);
            preferenceA.setSummary(this.d);
            preferenceA.setDefaultValue(b(this.h));
            if (preferenceGroup != null) {
                preferenceGroup.addPreference(preferenceA);
            }
            if (dVar == d.IAB_OFFERS && (preferenceA instanceof com.dualboot.e.a.a)) {
                ((com.dualboot.e.a.a) preferenceA).d();
            }
        }
        return preferenceA;
    }

    protected abstract Preference a(Context context, d dVar);

    public final String a(int i) {
        return i < this.f.size() ? (String) this.f.get(i) : "";
    }

    public final void a(String str) {
        this.i = str;
    }

    final boolean a(SharedPreferences sharedPreferences) {
        if (sharedPreferences != null) {
            if (sharedPreferences.contains(this.b)) {
                String strB = b(sharedPreferences);
                if (d(strB)) {
                    this.g = strB;
                    return true;
                }
            }
            this.g = l();
        }
        return false;
    }

    final boolean a(BufferedReader bufferedReader) {
        boolean z = false;
        b();
        if (bufferedReader == null) {
            return false;
        }
        try {
            this.b = bufferedReader.readLine();
            this.c = bufferedReader.readLine();
            this.d = bufferedReader.readLine();
            int i = Integer.parseInt(bufferedReader.readLine());
            for (int i2 = 0; i2 < i; i2++) {
                this.f.add(bufferedReader.readLine());
            }
            b(0);
            z = true;
            return true;
        } catch (IOException e) {
            return z;
        }
    }

    final boolean a(JSONObject jSONObject) {
        boolean z = false;
        b();
        try {
            this.b = jSONObject.getString("key");
            this.c = jSONObject.getString("name");
            this.d = jSONObject.getString("desc");
            this.e = jSONObject.optString("req", "");
            JSONArray jSONArray = jSONObject.getJSONArray("vals");
            int length = jSONArray.length();
            for (int i = 0; i < length; i++) {
                this.f.add(jSONArray.getString(i));
            }
            b(0);
            z = true;
            return true;
        } catch (Exception e) {
            return z;
        }
    }

    protected abstract Object b(String str);

    protected abstract String b(SharedPreferences sharedPreferences);

    final void b() {
        this.b = "";
        this.c = "";
        this.d = "";
        this.e = "";
        this.g = "";
        this.h = "";
        this.i = "";
        this.f = new ArrayList();
    }

    final void b(int i) {
        this.h = a(i);
        this.g = this.h;
    }

    public final String c() {
        return this.b;
    }

    final void c(String str) {
        int i = 0;
        while (i < this.f.size()) {
            if (a(i).equalsIgnoreCase(str)) {
                b(i);
            }
            i++;
        }
        i = 0;
        b(i);
    }

    public final String d() {
        return this.c;
    }

    public final boolean d(String str) {
        com.dualboot.a.a aVarA = com.dualboot.a.a.a();
        if (aVarA != null) {
            return aVarA.a(this.b, str, (Collection) null);
        }
        return true;
    }

    public final String e() {
        return this.d;
    }

    public final String f() {
        return this.e;
    }

    public final int g() {
        return this.f.size();
    }

    public final String h() {
        return this.g;
    }

    public final String i() {
        return this.h;
    }

    public final String j() {
        return this.i;
    }

    public final int k() {
        for (int i = 0; i < this.f.size(); i++) {
            if (a(i).equalsIgnoreCase(this.g)) {
                return i;
            }
        }
        return 0;
    }

    public String l() {
        String str = this.h;
        if (d(str)) {
            return str;
        }
        int size = this.f.size();
        for (int i = 0; i < size; i++) {
            String strA = a(i);
            if (d(strA)) {
                return strA;
            }
        }
        return str;
    }

    public void m() {
        c(l());
    }
}
