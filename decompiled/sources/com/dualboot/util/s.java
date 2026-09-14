package com.dualboot.util;

import android.content.SharedPreferences;
import java.util.Collection;
import java.util.HashSet;

/* JADX INFO: loaded from: classes.dex */
public final class s {
    private static /* synthetic */ int[] d;
    public final Collection a = new HashSet();
    public final Collection b = new HashSet();
    public final SharedPreferences c;

    public s(SharedPreferences sharedPreferences) {
        this.c = sharedPreferences;
    }

    private boolean a(u uVar) {
        boolean z;
        if (this.c == null || uVar == null) {
            return false;
        }
        boolean zA = uVar.a.a();
        boolean zA2 = uVar.b.a();
        boolean zB = uVar.a.b();
        boolean zB2 = uVar.b.b();
        if (!zA || !zA2) {
            z = false;
        } else if ((!zB || zB2) && (zB || !zB2)) {
            uVar.e = zB && zB2;
            uVar.c = uVar.a.a.equals(uVar.b.a);
            uVar.d = uVar.e ? uVar.a.b.equals(uVar.b.b) : true;
            z = (uVar.c && uVar.d) ? false : true;
        } else {
            z = false;
        }
        if (!z) {
            return false;
        }
        String str = uVar.a.a;
        if (!this.c.contains(str) || !this.a.add(uVar)) {
            return false;
        }
        if (!uVar.c) {
            this.b.add(str);
        }
        return true;
    }

    private static /* synthetic */ int[] a() {
        int[] iArr = d;
        if (iArr == null) {
            iArr = new int[t.valuesCustom().length];
            try {
                iArr[t.BOOLEAN.ordinal()] = 2;
            } catch (NoSuchFieldError e) {
            }
            try {
                iArr[t.STRING.ordinal()] = 1;
            } catch (NoSuchFieldError e2) {
            }
            d = iArr;
        }
        return iArr;
    }

    public final String a(v vVar) {
        String string = null;
        try {
            if (this.c.contains(vVar.a)) {
                switch (a()[vVar.c.ordinal()]) {
                    case 1:
                        string = this.c.getString(vVar.a, "");
                        break;
                    case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                        string = Boolean.toString(this.c.getBoolean(vVar.a, false));
                        break;
                }
            }
        } catch (Exception e) {
            e.toString();
        }
        return string;
    }

    public final void a(v vVar, String str) {
        try {
            SharedPreferences.Editor editorEdit = this.c.edit();
            if (editorEdit == null) {
                return;
            }
            String str2 = vVar.a;
            String str3 = "Upgrading to value (" + vVar.c.name() + ") : " + str2 + " = " + str;
            switch (a()[vVar.c.ordinal()]) {
                case 1:
                    editorEdit.putString(str2, str);
                    break;
                case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                    editorEdit.putBoolean(str2, Boolean.parseBoolean(str));
                    break;
            }
            editorEdit.commit();
        } catch (Exception e) {
            e.toString();
        }
    }

    public final boolean a(String str, String str2, t tVar, String str3, String str4, t tVar2) {
        u uVar = new u();
        uVar.a.a = str;
        uVar.a.b = str2;
        uVar.a.c = tVar;
        uVar.b.a = str3;
        uVar.b.b = str4;
        uVar.b.c = tVar2;
        return a(uVar);
    }

    public final boolean a(String str, String str2, String str3, String str4) {
        u uVar = new u();
        uVar.a.a = str;
        uVar.a.b = str2;
        uVar.b.a = str3;
        uVar.b.b = str4;
        return a(uVar);
    }
}
