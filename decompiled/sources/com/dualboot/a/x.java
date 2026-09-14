package com.dualboot.a;

import android.text.TextUtils;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public final class x extends af {
    private x(String str, String str2, String str3, String str4) {
        super(str, str2, str3, str4);
    }

    public static x a(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("productId");
            String strOptString2 = jSONObject.optString("title");
            String strOptString3 = jSONObject.optString("description");
            String strOptString4 = jSONObject.optString("price");
            int iIndexOf = strOptString2.indexOf(" (");
            String strSubstring = iIndexOf > 0 ? strOptString2.substring(0, iIndexOf) : strOptString2;
            if (TextUtils.isEmpty(strOptString) || TextUtils.isEmpty(strSubstring) || TextUtils.isEmpty(strOptString3) || TextUtils.isEmpty(strOptString4)) {
                return null;
            }
            return new x(strOptString, strSubstring, strOptString3, strOptString4);
        } catch (Exception e) {
            return null;
        }
    }

    @Override // com.dualboot.a.af
    public final boolean a() {
        return true;
    }
}
