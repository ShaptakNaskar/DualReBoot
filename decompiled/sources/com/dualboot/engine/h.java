package com.dualboot.engine;

import android.content.Context;
import android.content.SharedPreferences;
import android.preference.Preference;

/* JADX INFO: loaded from: classes.dex */
public final class h extends e {
    protected boolean k;
    final /* synthetic */ c l;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public h(c cVar) {
        super(cVar);
        this.l = cVar;
        this.k = true;
    }

    @Override // com.dualboot.engine.f
    protected final Preference a(Context context, d dVar) {
        if (dVar == d.IAB_OFFERS) {
            com.dualboot.e.a.a aVar = new com.dualboot.e.a.a(context);
            aVar.setDisableDependentsState(this.k);
            return aVar;
        }
        com.dualboot.e.a.i iVar = new com.dualboot.e.a.i(context);
        iVar.setDisableDependentsState(this.k);
        return iVar;
    }

    protected final void a(SharedPreferences.Editor editor) {
        if (editor != null) {
            editor.putBoolean(c(), Boolean.parseBoolean(h()));
        }
    }

    @Override // com.dualboot.engine.f
    protected final Object b(String str) {
        return Boolean.valueOf(str);
    }

    @Override // com.dualboot.engine.f
    protected final String b(SharedPreferences sharedPreferences) {
        return Boolean.toString(sharedPreferences.getBoolean(c(), Boolean.parseBoolean(i())));
    }

    @Override // com.dualboot.engine.f
    public final String l() {
        String strI = i();
        if (d(strI)) {
            return strI;
        }
        String string = Boolean.toString(!Boolean.parseBoolean(strI));
        return !d(string) ? strI : string;
    }

    @Override // com.dualboot.engine.f
    public final void m() {
        String strL = l();
        this.f.set(0, strL);
        c(strL);
    }

    public final void n() {
        this.k = false;
    }
}
