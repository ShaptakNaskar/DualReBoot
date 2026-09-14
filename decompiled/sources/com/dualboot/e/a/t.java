package com.dualboot.e.a;

import android.preference.CheckBoxPreference;
import android.preference.Preference;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class t implements Preference.OnPreferenceClickListener {
    private final ArrayList a = new ArrayList();

    public final void a(Preference preference) {
        if (preference != null) {
            preference.setOnPreferenceClickListener(this);
            this.a.add(preference);
        }
    }

    @Override // android.preference.Preference.OnPreferenceClickListener
    public final boolean onPreferenceClick(Preference preference) {
        if (preference != null) {
            String key = preference.getKey();
            for (int i = 0; i < this.a.size(); i++) {
                Preference preference2 = (Preference) this.a.get(i);
                if (preference2 instanceof CheckBoxPreference) {
                    CheckBoxPreference checkBoxPreference = (CheckBoxPreference) preference2;
                    if (key.equals(preference2.getKey())) {
                        checkBoxPreference.setChecked(true);
                    } else {
                        checkBoxPreference.setChecked(false);
                    }
                }
            }
        }
        return true;
    }
}
