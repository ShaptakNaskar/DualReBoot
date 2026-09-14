package com.dualboot.util;

import android.content.Context;

/* JADX INFO: loaded from: classes.dex */
public final class aa {
    protected int a;
    protected int b;
    protected int c;
    protected boolean d;

    public aa(Context context) {
        this.a = 0;
        this.b = 0;
        this.c = 0;
        this.d = false;
        if (context != null) {
            x xVar = new x(context, com.dualboot.b.whatsnew_title_array, com.dualboot.f.WhatsNew_Title_Default);
            x xVar2 = new x(context, com.dualboot.b.whatsnew_content_array);
            if (xVar.a() && xVar2.a()) {
                this.a = Math.max(this.a, xVar.b);
                this.a = Math.max(this.a, xVar2.b);
                this.b = xVar.a;
                this.c = xVar2.a;
                this.d = true;
            }
        }
    }

    public final boolean a() {
        return this.d;
    }

    public final int b() {
        return this.a;
    }

    public final int c() {
        return this.b;
    }

    public final int d() {
        return this.c;
    }
}
