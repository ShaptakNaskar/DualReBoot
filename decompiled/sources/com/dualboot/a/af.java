package com.dualboot.a;

/* JADX INFO: loaded from: classes.dex */
public abstract class af {
    final String a;
    final String b;
    final String c;
    final String d;
    ag e = ag.UNKNOWN;

    public af(String str, String str2, String str3, String str4) {
        this.a = str;
        this.b = str2;
        this.c = str3;
        this.d = str4;
    }

    public abstract boolean a();

    public boolean equals(Object obj) {
        if (obj == null) {
            return false;
        }
        if (obj == this) {
            return true;
        }
        if (obj instanceof String) {
            return com.dualboot.util.y.a(this.a, (String) obj);
        }
        if (!(obj instanceof af)) {
            return false;
        }
        af afVar = (af) obj;
        return com.dualboot.util.y.a(this.a, afVar.a) && com.dualboot.util.y.a(this.b, afVar.b) && com.dualboot.util.y.a(this.c, afVar.c) && com.dualboot.util.y.a(this.d, afVar.d);
    }

    public int hashCode() {
        return (((this.c == null ? 0 : this.c.hashCode()) + (((this.b == null ? 0 : this.b.hashCode()) + (((this.a == null ? 0 : this.a.hashCode()) + 0) * 13)) * 13)) * 13) + (this.d != null ? this.d.hashCode() : 0);
    }

    public String toString() {
        return String.valueOf(getClass().getName()) + " { id : " + this.a + ", name : " + this.b + ", desc : " + this.c + ", price : " + this.d + "}";
    }
}
