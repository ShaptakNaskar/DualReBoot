package com.dualboot.c;

/* JADX INFO: loaded from: classes.dex */
public enum k {
    POWERMANAGE_HIGH_PERFORMANCE,
    POWERMANAGE_BALANCED,
    POWERMANAGE_BATTERY_SAVER;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static k[] valuesCustom() {
        k[] kVarArrValuesCustom = values();
        int length = kVarArrValuesCustom.length;
        k[] kVarArr = new k[length];
        System.arraycopy(kVarArrValuesCustom, 0, kVarArr, 0, length);
        return kVarArr;
    }
}
