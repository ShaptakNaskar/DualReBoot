package com.dualboot.e.a;

import java.util.Collection;
import java.util.HashSet;

/* JADX INFO: loaded from: classes.dex */
public final class w {
    final Collection a = new HashSet();
    final boolean[] b;
    final /* synthetic */ u c;

    public w(u uVar, int i) {
        this.c = uVar;
        this.b = new boolean[i];
        for (int i2 = 0; i2 < i; i2++) {
            this.b[i2] = false;
        }
    }
}
