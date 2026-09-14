package com.dualboot.e.a;

/* JADX INFO: loaded from: classes.dex */
public enum v {
    SELF_ONLY,
    SELF_AND_PARENT,
    SELF_AND_CHILDREN;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static v[] valuesCustom() {
        v[] vVarArrValuesCustom = values();
        int length = vVarArrValuesCustom.length;
        v[] vVarArr = new v[length];
        System.arraycopy(vVarArrValuesCustom, 0, vVarArr, 0, length);
        return vVarArr;
    }
}
