package com.dualboot.util;

/* JADX INFO: loaded from: classes.dex */
public enum h {
    RESIZE_FIT,
    RESIZE_FILL,
    RESIZE_STRETCH;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static h[] valuesCustom() {
        h[] hVarArrValuesCustom = values();
        int length = hVarArrValuesCustom.length;
        h[] hVarArr = new h[length];
        System.arraycopy(hVarArrValuesCustom, 0, hVarArr, 0, length);
        return hVarArr;
    }
}
