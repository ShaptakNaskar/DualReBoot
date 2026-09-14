package com.dualboot.e.a;

import android.preference.Preference;

/* JADX INFO: loaded from: classes.dex */
public final class p extends u {
    final /* synthetic */ m a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    p(m mVar, Preference preference) {
        super(preference);
        this.a = mVar;
    }

    @Override // com.dualboot.e.a.u
    public final int a() {
        return this.a.getEntries().length;
    }

    @Override // com.dualboot.e.a.u
    public final String a(int i) {
        CharSequence[] entries = this.a.getEntries();
        if (i < entries.length) {
            return entries[i].toString();
        }
        return null;
    }
}
