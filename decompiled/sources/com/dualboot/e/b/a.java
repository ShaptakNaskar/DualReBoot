package com.dualboot.e.b;

import android.app.Activity;
import android.app.Dialog;
import com.dualboot.e.j;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class a {
    public final j a;
    public final Activity b;
    final d c;
    public final ArrayList d = new ArrayList();

    public a(j jVar, Activity activity, d dVar) {
        this.a = jVar;
        this.b = activity;
        this.c = dVar;
    }

    public final void a(Dialog dialog) {
        if (dialog != null) {
            this.d.add(dialog);
            if (dialog.isShowing()) {
                return;
            }
            dialog.show();
        }
    }
}
