package com.dualboot.engine;

/* JADX INFO: loaded from: classes.dex */
public enum d {
    THEMES,
    CAMERA,
    TIMEOFDAY,
    MESSAGES,
    IMAGES,
    CUSTOMIZATION,
    TOGGLES,
    INTERACTION,
    INFORMATION,
    SOCIAL,
    ADVANCED,
    IAB_INTERNAL,
    IAB_OFFERS;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static d[] valuesCustom() {
        d[] dVarArrValuesCustom = values();
        int length = dVarArrValuesCustom.length;
        d[] dVarArr = new d[length];
        System.arraycopy(dVarArrValuesCustom, 0, dVarArr, 0, length);
        return dVarArr;
    }
}
