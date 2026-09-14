package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
public enum aw {
    ERROR,
    SHUTDOWN,
    STARTING,
    RUNNING,
    STOPPING;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static aw[] valuesCustom() {
        aw[] awVarArrValuesCustom = values();
        int length = awVarArrValuesCustom.length;
        aw[] awVarArr = new aw[length];
        System.arraycopy(awVarArrValuesCustom, 0, awVarArr, 0, length);
        return awVarArr;
    }
}
