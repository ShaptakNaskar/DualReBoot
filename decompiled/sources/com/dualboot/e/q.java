package com.dualboot.e;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
final class q extends com.dualboot.util.b {
    final /* synthetic */ n a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    q(n nVar, Context context, long j) {
        super(context, j);
        this.a = nVar;
    }

    private void c() {
        int size;
        SharedPreferences sharedPreferencesA;
        int iIndexOf;
        int i = 0;
        if (this.a.i == null || this.a.i.isEmpty() || (size = this.a.i.size()) <= 1 || this.a.c == null || TextUtils.isEmpty(this.a.j) || (sharedPreferencesA = com.dualboot.b.a.a(this.a.d)) == null) {
            return;
        }
        String string = sharedPreferencesA.getString(this.a.j, null);
        if (!TextUtils.isEmpty(string) && (iIndexOf = this.a.i.indexOf(string)) >= 0) {
            i = iIndexOf;
        }
        String str = (String) this.a.i.get((i + 1) % size);
        SharedPreferences.Editor editorEdit = sharedPreferencesA.edit();
        if (editorEdit != null) {
            editorEdit.putString(this.a.j, str);
            editorEdit.commit();
            this.a.a();
        }
    }

    @Override // com.dualboot.util.b
    protected final void a() {
        if (this.a.f == m.DOUBLE_TAP) {
            c();
        }
    }

    @Override // com.dualboot.util.b
    protected final void a(double d) {
        if (this.a.c != null) {
            this.a.c.b((float) d);
        }
    }

    @Override // com.dualboot.util.b
    protected final void a(float f, float f2, long j) {
        if (this.a.c != null) {
            this.a.c.a(f, f2, j);
        }
    }

    @Override // com.dualboot.util.b
    protected final void b() {
        if (this.a.f == m.SWIPE_UP) {
            c();
        }
    }
}
