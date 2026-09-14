package com.dualboot.a;

import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.ResolveInfo;
import android.os.Bundle;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public final class v extends ab {
    com.a.a.a.a a;
    int b;
    int c;
    boolean d;
    private final String g;
    private ServiceConnection h;

    public v(Context context, String str) {
        super(ax.GOOGLE_PLAY, context);
        this.a = null;
        this.h = null;
        this.b = 6;
        this.c = 6;
        this.d = false;
        this.g = str;
    }

    private static int a(Intent intent) {
        if (intent == null || intent.getExtras() == null) {
            return 6;
        }
        return a(intent.getExtras().get("RESPONSE_CODE"));
    }

    private static int a(Bundle bundle) {
        if (bundle == null) {
            return 6;
        }
        return a(bundle.get("RESPONSE_CODE"));
    }

    private static int a(Object obj) {
        if (obj == null) {
            return 0;
        }
        if (obj instanceof Integer) {
            return ((Integer) obj).intValue();
        }
        if (obj instanceof Long) {
            return (int) ((Long) obj).longValue();
        }
        return 6;
    }

    @Override // com.dualboot.a.ab
    protected final int a() {
        return com.dualboot.f.payment_type_google;
    }

    @Override // com.dualboot.a.ab
    protected final PendingIntent a(af afVar) {
        PendingIntent pendingIntent;
        try {
            Bundle bundleA = this.a.a(3, this.f.getPackageName(), afVar.a, "inapp", null);
            int iA = a(bundleA);
            if (iA != 0) {
                String str = "Failure parsing buy intent: " + iA;
                pendingIntent = null;
            } else {
                pendingIntent = (PendingIntent) bundleA.getParcelable("BUY_INTENT");
                if (pendingIntent == null) {
                    String str2 = "Failure retrieving pending buy intent for offer: " + afVar.a;
                    pendingIntent = null;
                }
            }
            return pendingIntent;
        } catch (Exception e) {
            String str3 = "Error launching purchase flow: " + e.toString();
            return null;
        }
    }

    @Override // com.dualboot.a.ab
    protected final af a(String str, String str2, String str3) {
        x xVarA;
        ArrayList<String> arrayList = new ArrayList<>(1);
        arrayList.add(str);
        Bundle bundle = new Bundle();
        bundle.putStringArrayList("ITEM_ID_LIST", arrayList);
        try {
            Bundle bundleA = this.a.a(3, this.f.getPackageName(), "inapp", bundle);
            int iA = a(bundleA);
            if (iA != 0) {
                String str4 = "Failure refreshing details for = " + str + " response = " + iA;
                xVarA = null;
            } else if (bundleA.containsKey("DETAILS_LIST")) {
                Iterator<String> it = bundleA.getStringArrayList("DETAILS_LIST").iterator();
                while (it.hasNext()) {
                    xVarA = x.a(it.next());
                    if (xVarA == null || !TextUtils.equals(xVarA.a, str)) {
                    }
                }
                String str5 = "No offer details found for: " + str;
                xVarA = null;
            } else {
                xVarA = null;
            }
            return xVarA;
        } catch (Exception e) {
            String str6 = "Error refreshing offer details: " + e.toString();
            return null;
        }
    }

    @Override // com.dualboot.a.ab
    protected final void a(af afVar, aj ajVar, Intent intent) {
        String str = afVar.a;
        if (a(intent) == 0) {
            String stringExtra = intent.getStringExtra("INAPP_PURCHASE_DATA");
            String stringExtra2 = intent.getStringExtra("INAPP_DATA_SIGNATURE");
            if (!TextUtils.isEmpty(stringExtra) && !TextUtils.isEmpty(stringExtra2)) {
                u uVar = new u(stringExtra);
                String str2 = uVar.a;
                String str3 = uVar.b;
                if (TextUtils.equals(str, str2) && TextUtils.equals(this.f.getPackageName(), str3) && com.dualboot.a.a.c.a(this.g, stringExtra, stringExtra2)) {
                    afVar.e = ag.OWNED;
                    ajVar.a(str);
                    return;
                }
            }
        }
        ajVar.b(str);
    }

    @Override // com.dualboot.a.ab
    protected final void a(an anVar, as asVar) {
        if (!this.d && !TextUtils.isEmpty(this.g)) {
            Intent intent = new Intent("com.android.vending.billing.InAppBillingService.BIND");
            intent.setPackage("com.android.vending");
            List<ResolveInfo> listQueryIntentServices = this.f.getPackageManager().queryIntentServices(intent, 0);
            if (listQueryIntentServices != null && !listQueryIntentServices.isEmpty()) {
                this.h = new w(this, asVar, anVar);
                if (this.f.bindService(intent, this.h, 1)) {
                    return;
                }
            }
        }
        anVar.c();
    }

    @Override // com.dualboot.a.ab
    protected final void a(as asVar) {
        try {
            if (this.h != null) {
                if (this.f != null) {
                    this.f.unbindService(this.h);
                }
                this.a = null;
            }
        } catch (Exception e) {
            String str = "Error unbinding service" + e.toString();
        }
        this.h = null;
        this.a = null;
        this.b = 6;
        this.c = 6;
        this.d = false;
        asVar.b();
    }

    @Override // com.dualboot.a.ab
    protected final boolean a(Collection collection) {
        String string = null;
        do {
            try {
                Bundle bundleA = this.a.a(3, this.f.getPackageName(), "inapp", string);
                int iA = a(bundleA);
                if (iA != 0) {
                    String str = "Failure refreshing offers: " + iA;
                    return false;
                }
                if (!bundleA.containsKey("INAPP_PURCHASE_ITEM_LIST") || !bundleA.containsKey("INAPP_PURCHASE_DATA_LIST") || !bundleA.containsKey("INAPP_DATA_SIGNATURE_LIST")) {
                    return false;
                }
                ArrayList<String> stringArrayList = bundleA.getStringArrayList("INAPP_PURCHASE_ITEM_LIST");
                ArrayList<String> stringArrayList2 = bundleA.getStringArrayList("INAPP_PURCHASE_DATA_LIST");
                ArrayList<String> stringArrayList3 = bundleA.getStringArrayList("INAPP_DATA_SIGNATURE_LIST");
                Iterator it = collection.iterator();
                while (it.hasNext()) {
                    ((af) it.next()).e = ag.NOT_OWNED;
                }
                for (int i = 0; i < stringArrayList.size(); i++) {
                    String str2 = stringArrayList.get(i);
                    String str3 = stringArrayList2.get(i);
                    String str4 = stringArrayList3.get(i);
                    Iterator it2 = collection.iterator();
                    while (it2.hasNext()) {
                        af afVar = (af) it2.next();
                        if (TextUtils.equals(afVar.a, str2) && com.dualboot.a.a.c.a(this.g, str3, str4) && new JSONObject(str3).optInt("purchaseState", 0) == 0) {
                            afVar.e = ag.OWNED;
                        }
                    }
                }
                string = bundleA.getString("INAPP_CONTINUATION_TOKEN");
            } catch (Exception e) {
                String str5 = "Error refreshing offers: " + e.toString();
                return false;
            }
        } while (!TextUtils.isEmpty(string));
        return true;
    }

    @Override // com.dualboot.a.ab
    protected final int b() {
        return com.dualboot.f.payment_desc_google;
    }

    @Override // com.dualboot.a.ab
    protected final boolean b(af afVar, aj ajVar, Intent intent) {
        if (a(intent) != 7) {
            return super.b(afVar, ajVar, intent);
        }
        afVar.e = ag.OWNED;
        ajVar.a(afVar.a);
        return true;
    }

    @Override // com.dualboot.a.ab
    protected final int c() {
        return com.dualboot.c.icon_googleplay;
    }

    @Override // com.dualboot.a.ab
    public final boolean d() {
        return this.d && this.h != null && this.a != null && this.b == 0;
    }

    @Override // com.dualboot.a.ab
    protected final boolean e() {
        return false;
    }
}
