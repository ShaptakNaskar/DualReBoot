package com.dualboot.e;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
final class z {
    final ArrayList a = new ArrayList();
    final ArrayList b = new ArrayList();
    final ArrayList c = new ArrayList();
    String d;
    String e;
    final /* synthetic */ r f;

    public z(r rVar, String str, String str2) {
        this.f = rVar;
        this.d = null;
        this.e = null;
        this.d = str;
        this.e = str2;
    }

    public final boolean a() {
        this.c.clear();
        for (int i = 0; i < this.a.size(); i++) {
            this.c.add(this.f.a((CharSequence) this.a.get(i), true));
        }
        return !this.c.isEmpty();
    }
}
