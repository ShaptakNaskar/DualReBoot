package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
public enum ax {
    GET_JAR,
    GOOGLE_PLAY,
    LICENSED;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static ax[] valuesCustom() {
        ax[] axVarArrValuesCustom = values();
        int length = axVarArrValuesCustom.length;
        ax[] axVarArr = new ax[length];
        System.arraycopy(axVarArrValuesCustom, 0, axVarArr, 0, length);
        return axVarArr;
    }
}
