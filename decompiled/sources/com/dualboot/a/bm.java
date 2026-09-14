package com.dualboot.a;

import android.content.Context;
import java.util.ArrayList;
import java.util.Collection;

/* JADX INFO: loaded from: classes.dex */
public class bm implements ae {
    protected final Context a;
    protected final String b;

    public bm(Context context, com.dualboot.e.j jVar) {
        this.a = context.getApplicationContext();
        this.b = jVar.c();
    }

    @Override // com.dualboot.a.ae
    public Collection a() {
        return new ArrayList(2);
    }
}
