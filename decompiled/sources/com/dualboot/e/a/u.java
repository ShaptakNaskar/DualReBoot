package com.dualboot.e.a;

import android.preference.Preference;
import android.text.TextUtils;
import android.view.View;
import java.util.ArrayList;
import java.util.Collection;

/* JADX INFO: loaded from: classes.dex */
public abstract class u {
    private final Preference a;
    public final ArrayList b = new ArrayList();
    public r c = null;
    public v d = v.SELF_ONLY;

    u(Preference preference) {
        this.a = preference;
    }

    private boolean a(String str, Collection collection) {
        com.dualboot.a.a aVarA;
        if (collection != null) {
            collection.clear();
        }
        String key = this.a != null ? this.a.getKey() : null;
        if (!TextUtils.isEmpty(key) && (aVarA = com.dualboot.a.a.a()) != null) {
            return aVarA.a(key, str, collection);
        }
        return false;
    }

    public abstract int a();

    public abstract String a(int i);

    /* JADX WARN: Code duplicated, block: B:18:0x0031  */
    /* JADX WARN: Code duplicated, block: B:27:0x0047  */
    public final void a(View view) {
        boolean z;
        boolean z2 = true;
        boolean z3 = b() && this.a.isEnabled();
        if (this.d == v.SELF_AND_PARENT) {
            if (z3) {
                if (!(this.c != null ? this.c.a().b() : true)) {
                    z2 = false;
                }
            } else {
                z2 = false;
            }
        } else if (this.d != v.SELF_AND_CHILDREN) {
            z2 = z3;
        } else if (z3) {
            int i = 0;
            while (true) {
                if (i >= this.b.size()) {
                    z = true;
                    break;
                } else {
                    if (!((r) this.b.get(i)).a().b()) {
                        z = false;
                        break;
                    }
                    i++;
                }
            }
            if (!z) {
                z2 = false;
            }
        } else {
            z2 = false;
        }
        com.dualboot.util.z.a(view, z2);
    }

    final boolean a(int i, Collection collection) {
        return a(a(i), collection);
    }

    public final boolean b() {
        int iA = a();
        if (iA == 0) {
            return a("", (Collection) null);
        }
        int i = 0;
        for (int i2 = 0; i2 < iA; i2++) {
            if (a(i2, (Collection) null)) {
                i++;
            }
            if (i > 1) {
                return true;
            }
        }
        return false;
    }
}
