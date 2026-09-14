package com.dualboot.engine;

import android.os.Build;
import java.util.Locale;

/* JADX INFO: loaded from: classes.dex */
public final class b {
    boolean a = true;
    private String b;
    private String c;
    private int d;

    public b() {
        this.b = null;
        this.c = null;
        this.d = 0;
        this.b = Build.MANUFACTURER;
        this.c = Build.MODEL;
        this.b = this.b.toUpperCase(Locale.US);
        this.c = this.c.toUpperCase(Locale.US);
        int iIndexOf = this.c.indexOf(this.b);
        if (iIndexOf == 0) {
            int length = this.b.length();
            this.c = this.c.substring(iIndexOf + length, this.c.length());
        }
        this.d = Build.VERSION.SDK_INT;
        a();
    }

    private boolean a() {
        if (this.b.length() == 0 || this.c.length() == 0) {
            return false;
        }
        for (String str : new String[]{"Samsung", "HTC"}) {
            if (this.b.equalsIgnoreCase(str)) {
                this.a = false;
                break;
            }
        }
        return true;
    }
}
