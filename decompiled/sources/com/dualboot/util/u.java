package com.dualboot.util;

/* JADX INFO: loaded from: classes.dex */
public final class u {
    public final v a = new v();
    public final v b = new v();
    boolean c = true;
    boolean d = true;
    public boolean e = false;

    public final boolean equals(Object obj) {
        boolean zEquals;
        boolean zEquals2;
        if (obj == null) {
            return false;
        }
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof u)) {
            return false;
        }
        u uVar = (u) obj;
        if (this.a == null) {
            zEquals = uVar.a == null;
        } else {
            zEquals = this.a.equals(uVar.a);
        }
        if (this.b == null) {
            zEquals2 = uVar.b == null;
        } else {
            zEquals2 = this.b.equals(uVar.b);
        }
        return zEquals && zEquals2;
    }

    public final int hashCode() {
        return (((this.a == null ? 0 : this.a.hashCode()) + 0) * 31) + (this.b != null ? this.b.hashCode() : 0);
    }
}
