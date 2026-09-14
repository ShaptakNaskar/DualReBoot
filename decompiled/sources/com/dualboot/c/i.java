package com.dualboot.c;

/* JADX INFO: loaded from: classes.dex */
public enum i {
    CAMERA_ANIM_HOMESCREEN,
    CAMERA_ANIM_AUTOPAN,
    CAMERA_ANIM_MANUAL;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static i[] valuesCustom() {
        i[] iVarArrValuesCustom = values();
        int length = iVarArrValuesCustom.length;
        i[] iVarArr = new i[length];
        System.arraycopy(iVarArrValuesCustom, 0, iVarArr, 0, length);
        return iVarArr;
    }
}
