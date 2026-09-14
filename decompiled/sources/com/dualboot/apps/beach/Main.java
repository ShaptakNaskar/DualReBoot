package com.dualboot.apps.beach;

import android.content.SharedPreferences;
import android.preference.CheckBoxPreference;
import android.preference.ListPreference;
import android.preference.Preference;
import com.dualboot.e.e;
import com.dualboot.e.j;
import com.dualboot.e.r;

/* JADX INFO: loaded from: classes.dex */
public final class Main {

    public class Activity extends com.dualboot.e.a {
    }

    public class Dream extends com.dualboot.e.b {
        @Override // com.dualboot.e.b
        protected final j a() {
            return new a();
        }
    }

    public class License extends e {
        @Override // com.dualboot.e.e
        protected final j a() {
            return new a();
        }
    }

    public class Settings extends r {
        @Override // com.dualboot.e.r
        protected final j a() {
            return new a();
        }

        @Override // com.dualboot.e.r, android.content.SharedPreferences.OnSharedPreferenceChangeListener
        public void onSharedPreferenceChanged(SharedPreferences sharedPreferences, String str) {
            ListPreference listPreference;
            int iFindIndexOfValue;
            super.onSharedPreferenceChanged(sharedPreferences, str);
            if (!str.equalsIgnoreCase("texturefont_sign") || sharedPreferences.getString(str, "").length() <= 0) {
                return;
            }
            Preference preferenceA = a("texturegroup_sign_type");
            if (preferenceA != null && (preferenceA instanceof ListPreference) && (iFindIndexOfValue = (listPreference = (ListPreference) preferenceA).findIndexOfValue("Custom Sign")) >= 0) {
                listPreference.setValueIndex(iFindIndexOfValue);
            }
            Preference preferenceA2 = a("modeltoggle_sign");
            if (preferenceA2 == null || !(preferenceA2 instanceof CheckBoxPreference)) {
                return;
            }
            ((CheckBoxPreference) preferenceA2).setChecked(true);
        }
    }
}
