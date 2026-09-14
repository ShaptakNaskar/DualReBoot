package com.dualboot.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public final class u {
    String a;
    String b;

    u(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            this.a = jSONObject.optString("productId");
            this.b = jSONObject.optString("packageName");
        } catch (Exception e) {
            this.a = "";
            this.b = "";
        }
    }
}
