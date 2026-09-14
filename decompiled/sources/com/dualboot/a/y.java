package com.dualboot.a;

import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.provider.Settings;
import android.text.TextUtils;
import java.util.Collection;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public final class y extends ab {
    int a;
    boolean b;
    private final String c;

    public y(Context context, String str) {
        super(ax.LICENSED, context);
        this.a = 2;
        this.b = false;
        this.c = str;
    }

    @Override // com.dualboot.a.ab
    protected final int a() {
        return com.dualboot.f.payment_type_license;
    }

    @Override // com.dualboot.a.ab
    protected final PendingIntent a(af afVar) {
        return null;
    }

    @Override // com.dualboot.a.ab
    protected final af a(String str, String str2, String str3) {
        if (TextUtils.equals(str, com.dualboot.b.b.a("bWFuYWdlZF9fYmFzaWNfdmVyc2lvbg=="))) {
            return new aa(str, str2, str3);
        }
        return null;
    }

    @Override // com.dualboot.a.ab
    protected final void a(af afVar, aj ajVar, Intent intent) {
    }

    @Override // com.dualboot.a.ab
    protected final void a(an anVar, as asVar) {
        if (this.b) {
            anVar.c();
            return;
        }
        if (TextUtils.isEmpty(this.c)) {
            anVar.c();
            return;
        }
        try {
            String string = Settings.Secure.getString(this.f.getContentResolver(), "android_id");
            new com.b.a.a.a.i(this.f, new com.b.a.a.a.t(this.f, new com.b.a.a.a.a(new com.dualboot.b.b(string).a, this.f.getPackageName(), string)), this.c).a(new z(this, anVar));
        } catch (Exception e) {
            String str = "Failed, exception: " + e.toString();
            anVar.c();
        }
    }

    @Override // com.dualboot.a.ab
    protected final void a(as asVar) {
        this.a = 2;
        this.b = false;
        asVar.b();
    }

    @Override // com.dualboot.a.ab
    protected final boolean a(Collection collection) {
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            ((af) it.next()).e = ag.NOT_OWNED;
        }
        if (this.a != 0) {
            return true;
        }
        Iterator it2 = collection.iterator();
        while (it2.hasNext()) {
            ((af) it2.next()).e = ag.OWNED;
        }
        return true;
    }

    @Override // com.dualboot.a.ab
    protected final int b() {
        return com.dualboot.f.payment_desc_license;
    }

    @Override // com.dualboot.a.ab
    protected final int c() {
        return com.dualboot.c.icon_license;
    }

    @Override // com.dualboot.a.ab
    public final boolean d() {
        return this.b && this.a != 2;
    }

    @Override // com.dualboot.a.ab
    protected final boolean e() {
        String str = String.valueOf(new com.dualboot.util.y(this.f).a(com.dualboot.f.MarketURL_Google, new int[0])) + this.f.getPackageName();
        Intent intent = new Intent();
        intent.setAction("android.intent.action.VIEW");
        intent.setData(Uri.parse(str));
        intent.addFlags(805306368);
        return com.dualboot.e.aa.a(this.f, intent);
    }
}
