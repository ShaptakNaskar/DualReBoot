package com.dualboot.a;

import android.app.Activity;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.content.IntentSender;
import android.text.TextUtils;
import java.util.Collection;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public abstract class ab {
    private aw a;
    private long b;
    private final HashMap c;
    final ax e;
    final Context f;
    private an d = null;
    private as g = null;
    private aj h = null;
    private String i = null;
    private int j = -1;

    protected ab(ax axVar, Context context) {
        this.e = axVar;
        this.f = context != null ? context.getApplicationContext() : null;
        this.c = new HashMap();
        this.a = aw.SHUTDOWN;
        this.b = System.currentTimeMillis();
    }

    protected abstract int a();

    protected abstract PendingIntent a(af afVar);

    protected abstract af a(String str, String str2, String str3);

    public final ag a(String str) {
        af afVarC;
        if (d() && (afVarC = c(str)) != null) {
            return afVarC.e;
        }
        return ag.UNKNOWN;
    }

    protected abstract void a(af afVar, aj ajVar, Intent intent);

    protected abstract void a(an anVar, as asVar);

    public final void a(ar arVar) {
        this.d = new an(this, arVar);
        this.g = new as(this, null);
        if (this.f == null || d()) {
            this.d.c();
        } else {
            this.d.a();
            a(this.d, this.g);
        }
        this.g = null;
        this.d = null;
    }

    protected abstract void a(as asVar);

    public final void a(av avVar) {
        this.g = new as(this, avVar);
        this.g.a();
        a(this.g);
        this.g = null;
    }

    protected final void a(aw awVar) {
        if (awVar != this.a) {
            this.b = System.currentTimeMillis();
            this.a = awVar;
        }
    }

    public final boolean a(int i, int i2, Intent intent) {
        af afVarC;
        boolean z = false;
        if (i != this.j) {
            return false;
        }
        if (intent != null && (afVarC = c(this.i)) != null) {
            if (i2 == -1) {
                a(afVarC, this.h, intent);
                z = true;
            } else if (i2 == 0 && b(afVarC, this.h, intent)) {
                z = true;
            }
        }
        if (!z) {
            this.h.b(this.i);
        }
        this.h = null;
        this.i = null;
        this.j = -1;
        return true;
    }

    public final boolean a(String str, Activity activity, am amVar) {
        af afVarC;
        boolean zE;
        af afVarC2;
        PendingIntent pendingIntentA;
        this.h = null;
        this.i = null;
        this.j = -1;
        if (!d() || (afVarC = c(str)) == null || afVarC.e == ag.OWNED) {
            zE = false;
        } else {
            new aj(this, amVar);
            zE = e();
        }
        if (zE) {
            return true;
        }
        if (d() && (afVarC2 = c(str)) != null && afVarC2.e != ag.OWNED && activity != null && (pendingIntentA = a(afVarC2)) != null) {
            try {
                this.h = new aj(this, amVar);
                this.i = str;
                this.j = 1024;
                IntentSender intentSender = pendingIntentA.getIntentSender();
                Intent intent = new Intent();
                Integer num = 0;
                int iIntValue = num.intValue();
                Integer num2 = 0;
                int iIntValue2 = num2.intValue();
                Integer num3 = 0;
                activity.startIntentSenderForResult(intentSender, 1024, intent, iIntValue, iIntValue2, num3.intValue());
                return true;
            } catch (Exception e) {
                this.h = null;
                this.i = null;
                this.j = -1;
                return false;
            }
        }
        return false;
    }

    protected abstract boolean a(Collection collection);

    protected abstract int b();

    public final ah b(String str) {
        af afVarC;
        if (d() && (afVarC = c(str)) != null && afVarC.e != ag.OWNED) {
            ah ahVar = new ah(this.e, str, afVarC.d, a(), b(), c());
            if ((ahVar.d == 0 || ahVar.e == 0 || ahVar.f == 0) ? false : true) {
                return ahVar;
            }
            return null;
        }
        return null;
    }

    protected boolean b(af afVar, aj ajVar, Intent intent) {
        return false;
    }

    public final boolean b(String str, String str2, String str3) {
        if (!d()) {
            return false;
        }
        if (c(str) != null) {
            return true;
        }
        af afVarA = a(str, str2, str3);
        if (afVarA == null) {
            return false;
        }
        this.c.put(str, afVarA);
        return true;
    }

    protected abstract int c();

    final af c(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        return (af) this.c.get(str);
    }

    public abstract boolean d();

    protected abstract boolean e();

    public final boolean f() {
        if (d() && !this.c.isEmpty()) {
            return a(this.c.values());
        }
        return false;
    }

    public String toString() {
        return "STG/PaymentSystem." + this.e.toString();
    }
}
