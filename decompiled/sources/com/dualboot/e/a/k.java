package com.dualboot.e.a;

import android.content.Context;
import android.os.Bundle;
import android.preference.EditTextPreference;
import android.view.View;

/* JADX INFO: loaded from: classes.dex */
public final class k extends EditTextPreference implements r {
    private final u a;

    public k(Context context) {
        super(context);
        this.a = new l(this, this);
    }

    @Override // com.dualboot.e.a.r
    public final u a() {
        return this.a;
    }

    @Override // com.dualboot.e.a.r
    public final void b() {
        notifyChanged();
    }

    @Override // android.preference.Preference
    protected final void onBindView(View view) {
        super.onBindView(view);
        this.a.a(view);
    }

    @Override // android.preference.EditTextPreference, android.preference.DialogPreference
    protected final void showDialog(Bundle bundle) {
        if (this.a.b()) {
            super.showDialog(bundle);
        }
    }
}
