package com.b.a.a.a;

import android.content.Context;
import android.util.Log;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.HashMap;
import java.util.Map;
import org.apache.http.NameValuePair;
import org.apache.http.client.utils.URLEncodedUtils;

/* JADX INFO: loaded from: classes.dex */
public final class t implements q {
    private long a;
    private long b;
    private long c;
    private long d;
    private long e = 0;
    private int f;
    private r g;

    public t(Context context, p pVar) {
        this.g = new r(context.getSharedPreferences("com.android.vending.licensing.ServerManagedPolicy", 0), pVar);
        this.f = Integer.parseInt(this.g.b("lastResponse", Integer.toString(291)));
        this.a = Long.parseLong(this.g.b("validityTimestamp", "0"));
        this.b = Long.parseLong(this.g.b("retryUntil", "0"));
        this.c = Long.parseLong(this.g.b("maxRetries", "0"));
        this.d = Long.parseLong(this.g.b("retryCount", "0"));
    }

    private void a(long j) {
        this.d = j;
        this.g.a("retryCount", Long.toString(j));
    }

    private void a(String str) {
        Long lValueOf;
        try {
            lValueOf = Long.valueOf(Long.parseLong(str));
        } catch (NumberFormatException e) {
            Log.w("ServerManagedPolicy", "License validity timestamp (VT) missing, caching for a minute");
            lValueOf = Long.valueOf(System.currentTimeMillis() + 60000);
            str = Long.toString(lValueOf.longValue());
        }
        this.a = lValueOf.longValue();
        this.g.a("validityTimestamp", str);
    }

    private void b(String str) {
        Long lValueOf;
        try {
            lValueOf = Long.valueOf(Long.parseLong(str));
        } catch (NumberFormatException e) {
            Log.w("ServerManagedPolicy", "License retry timestamp (GT) missing, grace period disabled");
            str = "0";
            lValueOf = 0L;
        }
        this.b = lValueOf.longValue();
        this.g.a("retryUntil", str);
    }

    private void c(String str) {
        Long lValueOf;
        try {
            lValueOf = Long.valueOf(Long.parseLong(str));
        } catch (NumberFormatException e) {
            Log.w("ServerManagedPolicy", "Licence retry count (GR) missing, grace period disabled");
            str = "0";
            lValueOf = 0L;
        }
        this.c = lValueOf.longValue();
        this.g.a("maxRetries", str);
    }

    private static Map d(String str) {
        HashMap map = new HashMap();
        try {
            for (NameValuePair nameValuePair : URLEncodedUtils.parse(new URI("?" + str), "UTF-8")) {
                map.put(nameValuePair.getName(), nameValuePair.getValue());
            }
        } catch (URISyntaxException e) {
            Log.w("ServerManagedPolicy", "Invalid syntax error while decoding extras data from server.");
        }
        return map;
    }

    @Override // com.b.a.a.a.q
    public final void a(int i, s sVar) {
        if (i != 291) {
            a(0L);
        } else {
            a(this.d + 1);
        }
        if (i == 256) {
            Map mapD = d(sVar.g);
            this.f = i;
            a((String) mapD.get("VT"));
            b((String) mapD.get("GT"));
            c((String) mapD.get("GR"));
        } else if (i == 561) {
            a("0");
            b("0");
            c("0");
        }
        this.e = System.currentTimeMillis();
        this.f = i;
        this.g.a("lastResponse", Integer.toString(i));
        r rVar = this.g;
        if (rVar.a != null) {
            rVar.a.commit();
            rVar.a = null;
        }
    }

    @Override // com.b.a.a.a.q
    public final boolean a() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (this.f == 256) {
            if (jCurrentTimeMillis <= this.a) {
                return true;
            }
        } else if (this.f == 291 && jCurrentTimeMillis < this.e + 60000) {
            return (jCurrentTimeMillis <= this.b || this.d > this.c) ? true : true;
        }
        return true;
    }
}
