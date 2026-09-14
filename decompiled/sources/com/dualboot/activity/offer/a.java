package com.dualboot.activity.offer;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.text.Html;
import android.text.TextUtils;
import android.view.View;
import android.widget.TextView;
import com.dualboot.a.p;
import com.dualboot.util.z;
import com.dualboot.widget.TextViewHeaderImg;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class a extends Activity {
    protected b a = null;
    protected c b = null;

    public static ArrayList a(Intent intent) {
        return new c(intent).a();
    }

    protected static void a() {
    }

    protected static boolean a(View view, String str) {
        if (!(view instanceof TextView)) {
            return false;
        }
        if (TextUtils.isEmpty(str)) {
            view.setVisibility(8);
            return false;
        }
        TextView textView = (TextView) view;
        textView.setText(str);
        textView.setVisibility(0);
        return true;
    }

    private static boolean a(View view, String str, boolean z) {
        if (!(view instanceof TextView)) {
            return false;
        }
        TextView textView = (TextView) view;
        String string = textView.getText().toString();
        if (z) {
            str = TextUtils.htmlEncode(str);
        }
        if (!TextUtils.isEmpty(string)) {
            str = String.format(string, str);
        }
        if (TextUtils.isEmpty(str)) {
            view.setVisibility(8);
            return false;
        }
        if (z) {
            textView.setText(Html.fromHtml(str));
        } else {
            textView.setText(str);
        }
        return true;
    }

    private void b() {
        int i;
        Intent intent;
        c cVar = this.b;
        int size = cVar.a.size();
        if (size <= 1) {
            if (size != 1) {
                i = 0;
                break;
            }
            Iterator<String> it = cVar.a.keySet().iterator();
            while (true) {
                if (!it.hasNext()) {
                    i = 0;
                    break;
                }
                String next = it.next();
                if (!TextUtils.isEmpty(next) && (i = cVar.a.getInt(next, -1)) > 0) {
                    break;
                }
            }
        } else {
            i = 4;
        }
        c cVar2 = this.b;
        if (cVar2.a.isEmpty()) {
            intent = null;
        } else {
            Bundle bundle = new Bundle();
            c.a(bundle, cVar2.a);
            intent = new Intent();
            intent.putExtra("com.dualboot.activity.offer.result_data", bundle);
        }
        String str = "setResult() code: " + i + "; entries: " + this.b.a();
        setResult(i, intent);
    }

    private boolean b(View view, p pVar) {
        p pVarF;
        if (view == null || pVar == null) {
            return false;
        }
        View viewFindViewById = view.findViewById(com.dualboot.d.tv_offer_name);
        View viewFindViewById2 = view.findViewById(com.dualboot.d.tv_offer_price);
        View viewFindViewById3 = view.findViewById(com.dualboot.d.tv_na);
        View viewFindViewById4 = view.findViewById(com.dualboot.d.tv_offer_desc);
        View viewFindViewById5 = view.findViewById(com.dualboot.d.tv_offer_prereq);
        View viewFindViewById6 = view.findViewById(com.dualboot.d.tv_offer_theme);
        View viewFindViewById7 = view.findViewById(com.dualboot.d.tv_offer_theme_thanks);
        boolean z = a(viewFindViewById, pVar.b());
        if (a(viewFindViewById3, pVar.b(), true)) {
            z = true;
        }
        if (a(viewFindViewById7, pVar.b(), true)) {
            z = true;
        }
        if (a(viewFindViewById2, pVar.d(), true)) {
            if (TextUtils.isEmpty(pVar.d())) {
                viewFindViewById2.setVisibility(8);
            }
            z = true;
        }
        if (a(viewFindViewById4, pVar.c(), false)) {
            z = true;
        }
        if (a(viewFindViewById6, null, true)) {
            z = true;
        }
        if (viewFindViewById instanceof TextViewHeaderImg) {
            TextViewHeaderImg textViewHeaderImg = (TextViewHeaderImg) viewFindViewById;
            BitmapDrawable bitmapDrawableA = pVar.a((Context) this, false);
            if (bitmapDrawableA == null) {
                Drawable drawable = getResources().getDrawable(com.dualboot.c.icon_offer_default);
                if (drawable instanceof BitmapDrawable) {
                    bitmapDrawableA = (BitmapDrawable) drawable;
                }
            }
            if (bitmapDrawableA != null) {
                BitmapDrawable bitmapDrawableA2 = new z(this).a(bitmapDrawableA, 128, 128);
                if (bitmapDrawableA2 == null) {
                    bitmapDrawableA2 = bitmapDrawableA;
                }
                textViewHeaderImg.a(bitmapDrawableA2);
            }
            z = true;
        }
        if (viewFindViewById5 instanceof TextView) {
            viewFindViewById5.setVisibility(8);
            if (!pVar.g() && (pVarF = pVar.f()) != null) {
                String strB = pVarF.b();
                if (!TextUtils.isEmpty(strB)) {
                    TextView textView = (TextView) viewFindViewById5;
                    textView.setText(getString(com.dualboot.f.offer_missing_requirement, new Object[]{strB}));
                    textView.setVisibility(0);
                }
            }
        }
        return z;
    }

    protected final void a(int i, String str) {
        c cVar = this.b;
        c cVar2 = this.b;
        if (!TextUtils.isEmpty(str)) {
            cVar2.a.putInt(str, i);
        }
        b();
    }

    protected final boolean a(View view, p pVar) {
        return b(view, pVar);
    }

    protected final boolean a(p pVar) {
        return b(getWindow().getDecorView(), pVar);
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.a = new b(getIntent());
        this.b = new c(bundle);
        b();
        if (this.a.a()) {
            return;
        }
        finish();
    }

    @Override // android.app.Activity
    protected void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        c cVar = this.b;
        Bundle bundle2 = new Bundle();
        c.a(bundle2, cVar.a);
        bundle.putBundle("com.dualboot.activity.offer.result_data", bundle2);
    }
}
