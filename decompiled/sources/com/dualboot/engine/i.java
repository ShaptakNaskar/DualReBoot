package com.dualboot.engine;

import android.content.Context;
import android.content.SharedPreferences;
import android.preference.Preference;
import android.text.InputFilter;
import android.widget.EditText;
import com.dualboot.e.a.k;
import com.dualboot.e.a.m;

/* JADX INFO: loaded from: classes.dex */
public final class i extends e {
    final /* synthetic */ c k;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i(c cVar) {
        super(cVar);
        this.k = cVar;
    }

    @Override // com.dualboot.engine.f
    protected final Preference a(Context context, d dVar) {
        if (dVar == d.IMAGES || dVar == d.THEMES) {
            return new com.dualboot.e.a.g(context);
        }
        int iG = g();
        if (iG == 0) {
            k kVar = new k(context);
            kVar.setDialogTitle(d());
            EditText editText = kVar.getEditText();
            if (editText == null) {
                return kVar;
            }
            editText.setFilters(new InputFilter[]{new InputFilter.LengthFilter(80)});
            return kVar;
        }
        if (iG <= 1) {
            return null;
        }
        m mVar = new m(context);
        mVar.setDialogTitle(d());
        CharSequence[] charSequenceArr = new CharSequence[iG];
        CharSequence[] charSequenceArr2 = new CharSequence[iG];
        for (int i = 0; i < iG; i++) {
            charSequenceArr[i] = a(i);
            charSequenceArr2[i] = a(i);
        }
        mVar.setEntries(charSequenceArr);
        mVar.setEntryValues(charSequenceArr2);
        return mVar;
    }

    @Override // com.dualboot.engine.f
    protected final Object b(String str) {
        return str;
    }

    @Override // com.dualboot.engine.f
    protected final String b(SharedPreferences sharedPreferences) {
        return sharedPreferences.getString(c(), i());
    }
}
