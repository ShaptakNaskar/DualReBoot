package com.dualboot.e.a;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.preference.Preference;

/* JADX INFO: loaded from: classes.dex */
public final class s extends Preference {
    private Activity a;
    private Intent b;
    private int c;

    public s(Context context) {
        this(context, (byte) 0);
    }

    private s(Context context, byte b) {
        this(context, (char) 0);
    }

    private s(Context context, char c) {
        super(context, null, R.attr.preferenceScreenStyle);
        this.a = null;
        this.b = null;
        this.c = -1;
    }

    public final void a(Activity activity, Intent intent) {
        this.a = activity;
        this.b = intent;
        this.c = 1026;
    }

    @Override // android.preference.Preference
    protected final void onClick() {
        super.onClick();
        if (this.b == null) {
            return;
        }
        try {
            if (this.a == null) {
                getContext().startActivity(this.b);
            } else {
                this.a.startActivityForResult(this.b, this.c);
            }
        } catch (Exception e) {
        }
    }

    @Override // android.preference.Preference
    protected final void onPrepareForRemoval() {
        super.onPrepareForRemoval();
        this.a = null;
        this.b = null;
        this.c = -1;
    }
}
