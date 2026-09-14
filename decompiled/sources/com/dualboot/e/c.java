package com.dualboot.e;

/* JADX INFO: loaded from: classes.dex */
public enum c {
    OVERLAY_POS_TOP,
    OVERLAY_POS_CENTER,
    OVERLAY_POS_BOTTOM;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static c[] valuesCustom() {
        c[] cVarArrValuesCustom = values();
        int length = cVarArrValuesCustom.length;
        c[] cVarArr = new c[length];
        System.arraycopy(cVarArrValuesCustom, 0, cVarArr, 0, length);
        return cVarArr;
    }
}
