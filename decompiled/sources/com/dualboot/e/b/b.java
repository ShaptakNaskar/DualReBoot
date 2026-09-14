package com.dualboot.e.b;

import android.content.DialogInterface;
import android.content.SharedPreferences;
import android.widget.CheckBox;

/* JADX INFO: loaded from: classes.dex */
public final class b implements DialogInterface.OnDismissListener {
    final /* synthetic */ a a;
    private final /* synthetic */ SharedPreferences b;
    private final /* synthetic */ CheckBox c;

    public b(a aVar, SharedPreferences sharedPreferences, CheckBox checkBox) {
        this.a = aVar;
        this.b = sharedPreferences;
        this.c = checkBox;
    }

    @Override // android.content.DialogInterface.OnDismissListener
    public final void onDismiss(DialogInterface dialogInterface) {
        SharedPreferences.Editor editorEdit = this.b.edit();
        if (editorEdit != null) {
            editorEdit.putBoolean("key_show_about_offers", this.c != null ? this.c.isChecked() : false);
            editorEdit.commit();
        }
    }
}
