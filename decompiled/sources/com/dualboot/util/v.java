package com.dualboot.util;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public final class v {
    public String a = null;
    public String b = null;
    public t c = t.STRING;

    public final boolean a() {
        return !TextUtils.isEmpty(this.a);
    }

    public final boolean b() {
        return !TextUtils.isEmpty(this.b);
    }

    public final boolean equals(Object obj) {
        if (obj == null) {
            return false;
        }
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof v)) {
            return false;
        }
        v vVar = (v) obj;
        return y.a(this.a, vVar.a) && y.a(this.b, vVar.b) && this.c.equals(vVar.c);
    }

    public final int hashCode() {
        return (((this.b == null ? 0 : this.b.hashCode()) + (((this.a == null ? 0 : this.a.hashCode()) + 0) * 13)) * 13) + (this.c != null ? this.c.hashCode() : 0);
    }
}
