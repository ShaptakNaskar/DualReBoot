package com.dualboot.e;

/* JADX INFO: loaded from: classes.dex */
public enum m {
    NONE,
    DOUBLE_TAP,
    SWIPE_UP;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static m[] valuesCustom() {
        m[] mVarArrValuesCustom = values();
        int length = mVarArrValuesCustom.length;
        m[] mVarArr = new m[length];
        System.arraycopy(mVarArrValuesCustom, 0, mVarArr, 0, length);
        return mVarArr;
    }
}
