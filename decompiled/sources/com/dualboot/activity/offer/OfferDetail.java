package com.dualboot.activity.offer;

import android.content.ComponentName;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.dualboot.a.ah;
import com.dualboot.a.l;
import com.dualboot.a.p;
import java.util.Collection;

/* JADX INFO: loaded from: classes.dex */
public class OfferDetail extends a implements l {
    private boolean a(View view, Intent intent) {
        if (view == null || intent == null) {
            return false;
        }
        ComponentName componentNameResolveActivity = intent.resolveActivity(getPackageManager());
        if (componentNameResolveActivity != null) {
            Intent intent2 = new Intent(intent);
            intent2.setComponent(componentNameResolveActivity);
            intent = intent2;
        }
        view.setOnClickListener(new e(this, intent));
        return true;
    }

    private boolean b(View view, String str) {
        if (view == null || TextUtils.isEmpty(str)) {
            return false;
        }
        Intent intent = new Intent();
        intent.setAction("android.intent.action.VIEW");
        intent.setData(Uri.parse(str));
        return a(view, intent);
    }

    @Override // com.dualboot.a.l
    public final void a(String str) {
        String str2 = "Purchase succeeded for [ " + str + " ]";
        a(3, str);
        finish();
    }

    @Override // com.dualboot.a.l
    public final void b(String str) {
        String str2 = "Purchase failed / cancelled for [ " + str + " ]";
        a(1, str);
    }

    @Override // android.app.Activity
    protected void onActivityResult(int i, int i2, Intent intent) {
        if (com.dualboot.a.a.a().a(i, i2, intent)) {
        }
    }

    @Override // com.dualboot.activity.offer.a, android.app.Activity
    protected void onCreate(Bundle bundle) {
        boolean z;
        View viewFindViewById;
        super.onCreate(bundle);
        this.a.a.size();
        String str = (String) this.a.a.get(0);
        p pVarB = com.dualboot.a.a.a().b(str);
        if (pVarB == null) {
            finish();
            return;
        }
        setContentView(com.dualboot.e.offer_details);
        if (!a(pVarB)) {
            finish();
            return;
        }
        com.dualboot.a.a aVarA = com.dualboot.a.a.a();
        Collection<ah> collectionA = aVarA.a(str);
        if (collectionA == null || collectionA.isEmpty()) {
            a(1, str);
            p pVarB2 = aVarA.b(str);
            if (pVarB2 == null) {
                z = false;
            } else {
                View viewFindViewById2 = findViewById(com.dualboot.d.tv_offer_desc);
                View viewFindViewById3 = findViewById(com.dualboot.d.tv_na);
                if (pVarB2.h()) {
                    if (a(viewFindViewById2, getString(com.dualboot.f.OfferSummaryOwned))) {
                        a(viewFindViewById3, (String) null);
                        z = true;
                    } else {
                        z = false;
                    }
                } else if (a(viewFindViewById2, getString(com.dualboot.f.offer_error_summary, new Object[]{pVarB2.b()})) && a(viewFindViewById3, getString(com.dualboot.f.offer_error_help))) {
                    View viewFindViewById4 = findViewById(com.dualboot.d.help_intent_frame);
                    if (viewFindViewById4 != null) {
                        viewFindViewById4.setVisibility(0);
                        a(findViewById(com.dualboot.d.intent_settings_network), new Intent("android.settings.WIRELESS_SETTINGS"));
                        b(findViewById(com.dualboot.d.intent_play_services), getString(com.dualboot.f.offer_help_url_google_play_services));
                        b(findViewById(com.dualboot.d.intent_help_url), getString(com.dualboot.f.offer_help_url_dualboot_support));
                        View viewFindViewById5 = findViewById(com.dualboot.d.help_intent_more_resources);
                        if (viewFindViewById5 != null && (viewFindViewById = findViewById(com.dualboot.d.help_intent_buttons)) != null) {
                            viewFindViewById5.setOnClickListener(new f(this, viewFindViewById));
                        }
                    }
                    z = true;
                } else {
                    z = false;
                }
            }
        } else {
            z = false;
            View viewFindViewById6 = findViewById(com.dualboot.d.payment_frame);
            ViewGroup viewGroup = viewFindViewById6 instanceof ViewGroup ? (ViewGroup) viewFindViewById6 : null;
            if (viewGroup != null) {
                for (ah ahVar : collectionA) {
                    View viewInflate = getLayoutInflater().inflate(com.dualboot.e.payment_type, (ViewGroup) null);
                    if (viewInflate != null) {
                        View viewFindViewById7 = viewInflate.findViewById(com.dualboot.d.payment_icon);
                        View viewFindViewById8 = viewInflate.findViewById(com.dualboot.d.payment_type);
                        View viewFindViewById9 = viewInflate.findViewById(com.dualboot.d.payment_desc);
                        View viewFindViewById10 = viewInflate.findViewById(com.dualboot.d.payment_price);
                        String str2 = ahVar.c;
                        int i = ahVar.d;
                        int i2 = ahVar.e;
                        int i3 = ahVar.f;
                        int i4 = ahVar.g;
                        TextUtils.equals(str, ahVar.b);
                        if (viewFindViewById7 instanceof ImageView) {
                            ((ImageView) viewFindViewById7).setImageResource(i3);
                        }
                        if (viewFindViewById8 instanceof TextView) {
                            ((TextView) viewFindViewById8).setText(i);
                        }
                        if (viewFindViewById9 instanceof TextView) {
                            ((TextView) viewFindViewById9).setText(i2);
                        }
                        if (viewFindViewById10 instanceof TextView) {
                            TextView textView = (TextView) viewFindViewById10;
                            textView.setText(str2);
                            textView.setCompoundDrawablesWithIntrinsicBounds(0, 0, i4, 0);
                        }
                        View viewFindViewById11 = viewInflate.findViewById(com.dualboot.d.payment_bar);
                        if (viewFindViewById11 != null) {
                            viewFindViewById11.setOnClickListener(new g(this, ahVar.a, ahVar.b));
                        }
                        viewGroup.addView(viewInflate);
                        z = true;
                    }
                }
            }
        }
        if (z) {
            return;
        }
        finish();
    }
}
