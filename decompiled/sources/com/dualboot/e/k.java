package com.dualboot.e;

/* JADX INFO: loaded from: classes.dex */
public enum k {
    PAID,
    FREE;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static k[] valuesCustom() {
        k[] kVarArrValuesCustom = values();
        int length = kVarArrValuesCustom.length;
        k[] kVarArr = new k[length];
        System.arraycopy(kVarArrValuesCustom, 0, kVarArr, 0, length);
        return kVarArr;
    }
}
