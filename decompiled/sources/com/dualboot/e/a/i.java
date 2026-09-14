package com.dualboot.e.a;

import android.content.Context;
import android.preference.CheckBoxPreference;
import android.view.View;

/* JADX INFO: loaded from: classes.dex */
public final class i extends CheckBoxPreference implements r {
    private final u a;

    public i(Context context) {
        super(context);
        this.a = new j(this, this);
    }

    @Override // com.dualboot.e.a.r
    public final u a() {
        return this.a;
    }

    @Override // com.dualboot.e.a.r
    public final void b() {
        notifyChanged();
    }

    @Override // android.preference.CheckBoxPreference, android.preference.Preference
    protected final void onBindView(View view) {
        super.onBindView(view);
        this.a.a(view);
    }
}
