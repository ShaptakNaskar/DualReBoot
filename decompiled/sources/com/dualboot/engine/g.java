package com.dualboot.engine;

import java.util.Comparator;

/* JADX INFO: loaded from: classes.dex */
public final class g implements Comparator {
    final /* synthetic */ c a;

    protected g(c cVar) {
        this.a = cVar;
    }

    @Override // java.util.Comparator
    public final /* synthetic */ int compare(Object obj, Object obj2) {
        return ((f) obj).c().compareTo(((f) obj2).c());
    }
}
