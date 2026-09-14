package com.dualboot.e.a;

/* JADX INFO: loaded from: classes.dex */
public enum b {
    ICON_NONE,
    ICON_OWNED,
    ICON_NOTOWNED,
    ICON_NOTOWNED_MISSINGREQ;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static b[] valuesCustom() {
        b[] bVarArrValuesCustom = values();
        int length = bVarArrValuesCustom.length;
        b[] bVarArr = new b[length];
        System.arraycopy(bVarArrValuesCustom, 0, bVarArr, 0, length);
        return bVarArr;
    }
}
