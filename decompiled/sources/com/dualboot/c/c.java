package com.dualboot.c;

import android.content.Context;
import android.view.GestureDetector;

/* JADX INFO: loaded from: classes.dex */
public final class c {
    final Context a;
    final String e;
    final String f;
    final GestureDetector g;
    int b = 0;
    int c = 0;
    int d = 0;
    float h = 0.5f;
    g i = null;
    boolean j = false;
    d k = new d();

    public c(Context context, String str, String str2) {
        this.a = context;
        this.e = str;
        this.f = str2;
        this.g = new GestureDetector(context, new e(this));
    }

    final void a() {
        if (this.i != null) {
            this.i.a(this.k.a);
            this.i.a(this.k.b, 1L);
            this.i.a(this.k.c);
            this.i.c(this.k.e);
            this.i.b(this.h);
            this.i.a(this.j);
        }
    }
}
