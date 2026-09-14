package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
public enum ag {
    UNKNOWN,
    NOT_OWNED,
    OWNED;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static ag[] valuesCustom() {
        ag[] agVarArrValuesCustom = values();
        int length = agVarArrValuesCustom.length;
        ag[] agVarArr = new ag[length];
        System.arraycopy(agVarArrValuesCustom, 0, agVarArr, 0, length);
        return agVarArr;
    }
}
