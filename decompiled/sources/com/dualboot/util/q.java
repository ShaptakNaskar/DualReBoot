package com.dualboot.util;

/* JADX INFO: loaded from: classes.dex */
public enum q {
    UNKNOWN,
    NOT_CONNECTED,
    CONNECTING,
    CONNECTED;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static q[] valuesCustom() {
        q[] qVarArrValuesCustom = values();
        int length = qVarArrValuesCustom.length;
        q[] qVarArr = new q[length];
        System.arraycopy(qVarArrValuesCustom, 0, qVarArr, 0, length);
        return qVarArr;
    }
}
