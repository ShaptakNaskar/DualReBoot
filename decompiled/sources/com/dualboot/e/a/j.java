package com.dualboot.e.a;

import android.preference.Preference;

/* JADX INFO: loaded from: classes.dex */
public final class j extends u {
    final /* synthetic */ i a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    j(i iVar, Preference preference) {
        super(preference);
        this.a = iVar;
    }

    @Override // com.dualboot.e.a.u
    public final int a() {
        return 2;
    }

    @Override // com.dualboot.e.a.u
    public final String a(int i) {
        return i == 0 ? Boolean.TRUE.toString() : Boolean.FALSE.toString();
    }
}
