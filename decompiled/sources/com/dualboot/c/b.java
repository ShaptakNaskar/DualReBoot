package com.dualboot.c;

/* JADX INFO: loaded from: classes.dex */
public enum b {
    Unspecified,
    ES_1_1,
    ES_2_0;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static b[] valuesCustom() {
        b[] bVarArrValuesCustom = values();
        int length = bVarArrValuesCustom.length;
        b[] bVarArr = new b[length];
        System.arraycopy(bVarArrValuesCustom, 0, bVarArr, 0, length);
        return bVarArr;
    }
}
