package com.b.a.a.a;

import android.content.SharedPreferences;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public final class r {
    SharedPreferences.Editor a = null;
    private final SharedPreferences b;
    private final p c;

    public r(SharedPreferences sharedPreferences, p pVar) {
        this.b = sharedPreferences;
        this.c = pVar;
    }

    public final void a(String str, String str2) {
        if (this.a == null) {
            this.a = this.b.edit();
        }
        this.a.putString(str, this.c.a(str2, str));
    }

    public final String b(String str, String str2) {
        String string = this.b.getString(str, null);
        if (string == null) {
            return str2;
        }
        try {
            return this.c.b(string, str);
        } catch (u e) {
            Log.w("PreferenceObfuscator", "Validation error while reading preference: " + str);
            return str2;
        }
    }
}
