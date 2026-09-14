package com.dualboot.e;

/* JADX INFO: loaded from: classes.dex */
public enum d {
    OVERLAY_SIZE_SMALL,
    OVERLAY_SIZE_MEDIUM,
    OVERLAY_SIZE_LARGE;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static d[] valuesCustom() {
        d[] dVarArrValuesCustom = values();
        int length = dVarArrValuesCustom.length;
        d[] dVarArr = new d[length];
        System.arraycopy(dVarArrValuesCustom, 0, dVarArr, 0, length);
        return dVarArr;
    }
}
