package com.dualboot.util;

/* JADX INFO: loaded from: classes.dex */
public enum t {
    STRING,
    BOOLEAN;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static t[] valuesCustom() {
        t[] tVarArrValuesCustom = values();
        int length = tVarArrValuesCustom.length;
        t[] tVarArr = new t[length];
        System.arraycopy(tVarArrValuesCustom, 0, tVarArr, 0, length);
        return tVarArr;
    }
}
