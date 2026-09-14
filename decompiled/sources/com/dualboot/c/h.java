package com.dualboot.c;

/* JADX INFO: loaded from: classes.dex */
public enum h {
    AUTOPAN_SPEED_SLOW,
    AUTOPAN_SPEED_MEDIUM,
    AUTOPAN_SPEED_FAST;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static h[] valuesCustom() {
        h[] hVarArrValuesCustom = values();
        int length = hVarArrValuesCustom.length;
        h[] hVarArr = new h[length];
        System.arraycopy(hVarArrValuesCustom, 0, hVarArr, 0, length);
        return hVarArr;
    }
}
