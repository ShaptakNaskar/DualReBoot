package com.dualboot.c;

/* JADX INFO: loaded from: classes.dex */
public enum j {
    REQUEST_SURFACE_DESTROY,
    REQUEST_SURFACE_CREATE,
    REQUEST_MAKE_VISIBLE,
    REQUEST_MAKE_HIDDEN,
    REQUEST_SHUTDOWN,
    REQUEST_SLEEP,
    REQUEST_SLEEP_LONG;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static j[] valuesCustom() {
        j[] jVarArrValuesCustom = values();
        int length = jVarArrValuesCustom.length;
        j[] jVarArr = new j[length];
        System.arraycopy(jVarArrValuesCustom, 0, jVarArr, 0, length);
        return jVarArr;
    }
}
