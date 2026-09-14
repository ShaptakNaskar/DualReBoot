package com.dualboot.c;

import javax.microedition.khronos.egl.EGL10;
import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.egl.EGLDisplay;

/* JADX INFO: loaded from: classes.dex */
public final class a {
    private static /* synthetic */ int[] p;
    private int b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private b h;
    private int i = -1;
    private int j = -1;
    private int k = -1;
    private int l = -1;
    private int m = -1;
    private int n = -1;
    int a = -1;
    private final int[] o = new int[1];

    public a(int i, int i2, int i3, int i4, int i5, b bVar) {
        this.b = 4;
        this.c = 4;
        this.d = 4;
        this.e = 0;
        this.f = 0;
        this.g = 0;
        this.h = b.ES_1_1;
        this.b = Math.max(i, this.b);
        this.c = Math.max(i2, this.c);
        this.d = Math.max(i3, this.d);
        this.e = Math.max(i4, this.e);
        this.f = Math.max(i5, this.f);
        this.g = Math.max(0, this.g);
        this.h = bVar;
    }

    private int a(int i, EGL10 egl10, EGLDisplay eGLDisplay, EGLConfig eGLConfig) {
        if (egl10.eglGetConfigAttrib(eGLDisplay, eGLConfig, i, this.o)) {
            return this.o[0];
        }
        return 0;
    }

    private static /* synthetic */ int[] a() {
        int[] iArr = p;
        if (iArr == null) {
            iArr = new int[b.valuesCustom().length];
            try {
                iArr[b.ES_1_1.ordinal()] = 2;
            } catch (NoSuchFieldError e) {
            }
            try {
                iArr[b.ES_2_0.ordinal()] = 3;
            } catch (NoSuchFieldError e2) {
            }
            try {
                iArr[b.Unspecified.ordinal()] = 1;
            } catch (NoSuchFieldError e3) {
            }
            p = iArr;
        }
        return iArr;
    }

    /* JADX WARN: Code duplicated, block: B:20:0x018a  */
    public final EGLConfig a(EGL10 egl10, EGLDisplay eGLDisplay) {
        int iAbs;
        EGLConfig eGLConfig;
        int i = 1;
        switch (a()[this.h.ordinal()]) {
            case 1:
            case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                i = 1;
                break;
            case com.dualboot.h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                i = 4;
                break;
        }
        int[] iArr = {12324, this.b, 12323, this.c, 12322, this.d, 12321, this.e, 12325, this.f, 12326, this.g, 12352, i, 12344};
        int[] iArr2 = new int[1];
        egl10.eglChooseConfig(eGLDisplay, iArr, null, 0, iArr2);
        int i2 = iArr2[0];
        if (i2 <= 0) {
            return null;
        }
        EGLConfig[] eGLConfigArr = new EGLConfig[i2];
        egl10.eglChooseConfig(eGLDisplay, iArr, eGLConfigArr, i2, iArr2);
        EGLConfig eGLConfig2 = null;
        int i3 = Integer.MAX_VALUE;
        int length = eGLConfigArr.length;
        int i4 = 0;
        while (i4 < length) {
            EGLConfig eGLConfig3 = eGLConfigArr[i4];
            int iA = a(12325, egl10, eGLDisplay, eGLConfig3);
            int iA2 = a(12326, egl10, eGLDisplay, eGLConfig3);
            if (iA < this.f || iA2 < this.g) {
                iAbs = i3;
                eGLConfig = eGLConfig2;
            } else {
                iAbs = Math.abs(a(12324, egl10, eGLDisplay, eGLConfig3) - this.b) + Math.abs(a(12323, egl10, eGLDisplay, eGLConfig3) - this.c) + Math.abs(a(12322, egl10, eGLDisplay, eGLConfig3) - this.d) + Math.abs(a(12321, egl10, eGLDisplay, eGLConfig3) - this.e);
                if (iAbs < i3) {
                    eGLConfig = eGLConfig3;
                } else {
                    iAbs = i3;
                    eGLConfig = eGLConfig2;
                }
            }
            i4++;
            eGLConfig2 = eGLConfig;
            i3 = iAbs;
        }
        this.i = a(12324, egl10, eGLDisplay, eGLConfig2);
        this.j = a(12323, egl10, eGLDisplay, eGLConfig2);
        this.k = a(12322, egl10, eGLDisplay, eGLConfig2);
        this.l = a(12321, egl10, eGLDisplay, eGLConfig2);
        this.m = a(12325, egl10, eGLDisplay, eGLConfig2);
        this.n = a(12326, egl10, eGLDisplay, eGLConfig2);
        this.a = a(12352, egl10, eGLDisplay, eGLConfig2);
        String str = "   Red     = " + this.i;
        String str2 = "   Green   = " + this.j;
        String str3 = "   Blue    = " + this.k;
        String str4 = "   Alpha   = " + this.l;
        String str5 = "   Depth   = " + this.m;
        String str6 = "   Stencil = " + this.n;
        String str7 = "   Version = " + this.a;
        return eGLConfig2;
    }
}
