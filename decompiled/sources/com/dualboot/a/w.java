package com.dualboot.a;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;

/* JADX INFO: loaded from: classes.dex */
final class w implements ServiceConnection {
    final /* synthetic */ v a;
    private final /* synthetic */ as b;
    private final /* synthetic */ an c;

    w(v vVar, as asVar, an anVar) {
        this.a = vVar;
        this.b = asVar;
        this.c = anVar;
    }

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        try {
            this.a.a = com.a.a.a.b.a(iBinder);
            if (this.a.a != null) {
                this.a.b = this.a.a.a(3, this.a.f.getPackageName(), "inapp");
                this.a.c = this.a.a.a(3, this.a.f.getPackageName(), "subs");
                v vVar = this.a;
                v vVar2 = this.a;
                String str = "Support for INAPP = " + this.a.b;
                v vVar3 = this.a;
                String str2 = "Support for SUBS  = " + this.a.c;
                if (this.a.b == 0) {
                    this.a.d = true;
                    v vVar4 = this.a;
                    this.c.b();
                } else {
                    v vVar5 = this.a;
                    this.c.c();
                }
            } else {
                v vVar6 = this.a;
                this.c.c();
            }
        } catch (Exception e) {
            v vVar7 = this.a;
            String str3 = "Error connecting service: " + e.toString();
            this.c.c();
        }
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        v vVar = this.a;
        String str = "Service disconnected; started = " + this.a.d;
        if (this.a.d) {
            this.a.a(this.b);
        }
        this.a.a = null;
    }
}
