package com.dualboot.e.a;

import android.R;
import android.content.Context;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.preference.CheckBoxPreference;
import android.text.Html;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public final class a extends CheckBoxPreference implements q {
    private String a;
    private boolean b;
    private boolean c;
    private b d;

    public a(Context context) {
        this(context, (byte) 0);
    }

    private a(Context context, byte b) {
        this(context, (char) 0);
    }

    private a(Context context, char c) {
        super(context, null, R.attr.preferenceScreenStyle);
        this.a = null;
        this.b = false;
        this.c = true;
        this.d = b.ICON_NONE;
    }

    public final String a() {
        return this.a;
    }

    @Override // com.dualboot.e.a.q
    public final void b() {
        super.setEnabled(false);
        super.setSelectable(false);
    }

    @Override // com.dualboot.e.a.q
    public final void c() {
        d();
    }

    /* JADX WARN: Code duplicated, block: B:84:0x01a2  */
    /* JADX WARN: Code duplicated, block: B:88:0x01b2 A[PHI: r0
      0x01b2: PHI (r0v32 android.graphics.drawable.BitmapDrawable) = 
      (r0v31 android.graphics.drawable.BitmapDrawable)
      (r0v31 android.graphics.drawable.BitmapDrawable)
      (r0v43 android.graphics.drawable.BitmapDrawable)
     binds: [B:66:0x0149, B:68:0x015b, B:70:0x0172] A[DONT_GENERATE, DONT_INLINE]] */
    public final void d() {
        boolean z;
        b bVar;
        boolean z2;
        com.dualboot.a.p pVarB;
        BitmapDrawable bitmapDrawable;
        boolean z3;
        com.dualboot.a.p pVarB2;
        this.a = getKey();
        this.b = false;
        this.c = true;
        String string = getTitle().toString();
        String string2 = getSummary().toString();
        Object str = new String();
        com.dualboot.a.a aVarA = com.dualboot.a.a.a();
        if (aVarA != null && (pVarB2 = aVarA.b(this.a)) != null) {
            this.b = pVarB2.h();
            this.c = pVarB2.g();
            if (!this.c) {
                pVarB2.f();
                str = pVarB2.f().b();
            }
            if (pVarB2.i()) {
                string = pVarB2.b();
                string2 = pVarB2.c();
            }
        }
        String strTrim = string.trim();
        String strTrim2 = string2.trim();
        setTitle(strTrim);
        setSummary(strTrim2);
        if (!TextUtils.isEmpty(strTrim2)) {
            if (this.c) {
                com.dualboot.util.y yVar = new com.dualboot.util.y(getContext());
                String strHtmlEncode = TextUtils.htmlEncode(yVar.a(com.dualboot.f.OfferSummaryOwned, new int[0]));
                String strHtmlEncode2 = TextUtils.htmlEncode(yVar.a(com.dualboot.f.OfferSummaryNotOwned, new int[0]));
                if (!TextUtils.isEmpty(strHtmlEncode)) {
                    setSummaryOn(Html.fromHtml(String.format(strHtmlEncode, strTrim2)));
                }
                if (!TextUtils.isEmpty(strHtmlEncode2)) {
                    setSummaryOff(Html.fromHtml(String.format(strHtmlEncode2, strTrim2)));
                }
            } else {
                setSummaryOn((CharSequence) null);
                setSummaryOff((CharSequence) null);
                setSummary(getContext().getString(com.dualboot.f.offer_missing_requirement, str));
            }
        }
        if (Build.VERSION.SDK_INT < 11) {
            this.d = b.ICON_NONE;
            z = false;
        } else {
            boolean z4 = this.b && this.c;
            if (z4) {
                bVar = b.ICON_OWNED;
                z2 = false;
            } else if (this.c) {
                bVar = b.ICON_NOTOWNED;
                z2 = false;
            } else {
                bVar = b.ICON_NOTOWNED_MISSINGREQ;
                z2 = true;
            }
            if (this.d != bVar) {
                com.dualboot.a.a aVarA2 = com.dualboot.a.a.a();
                if (aVarA2 == null || (pVarB = aVarA2.b(this.a)) == null) {
                    this.d = b.ICON_NONE;
                    z = false;
                } else {
                    BitmapDrawable bitmapDrawableA = pVarB.a(getContext(), z4);
                    if (bitmapDrawableA == null) {
                        Drawable drawable = getContext().getResources().getDrawable(com.dualboot.c.icon_offer_default);
                        if (drawable instanceof BitmapDrawable) {
                            Drawable drawableNewDrawable = drawable.getConstantState().newDrawable(getContext().getResources());
                            drawableNewDrawable.mutate();
                            bitmapDrawableA = (BitmapDrawable) drawableNewDrawable;
                            if (z4) {
                                bitmapDrawable = bitmapDrawableA;
                                z3 = true;
                            } else {
                                bitmapDrawable = bitmapDrawableA;
                                z3 = z2;
                            }
                        } else {
                            bitmapDrawable = bitmapDrawableA;
                            z3 = z2;
                        }
                    } else {
                        bitmapDrawable = bitmapDrawableA;
                        z3 = z2;
                    }
                    if (bitmapDrawable != null) {
                        BitmapDrawable bitmapDrawableA2 = new com.dualboot.util.z(getContext()).a(bitmapDrawable, 96, 96);
                        if (bitmapDrawableA2 == null) {
                            bitmapDrawableA2 = bitmapDrawable;
                        }
                        if (!z4 && !this.c) {
                            z3 = true;
                        }
                        bitmapDrawableA2.setAlpha(z3 ? 85 : 254);
                        setIcon(bitmapDrawableA2);
                        this.d = bVar;
                        z = true;
                    } else {
                        this.d = b.ICON_NONE;
                        z = false;
                    }
                }
            } else {
                z = true;
            }
        }
        if (!z) {
            setWidgetLayoutResource(com.dualboot.e.pref_iab_customize);
        }
        setEnabled(!this.b && this.c);
        setSelectable(!this.b && this.c);
        setChecked(this.b && this.c);
        notifyChanged();
    }

    @Override // android.preference.TwoStatePreference
    public final void setChecked(boolean z) {
        super.setChecked(this.b && this.c);
    }

    @Override // android.preference.Preference
    public final void setEnabled(boolean z) {
        super.setEnabled(!this.b && this.c);
    }

    @Override // android.preference.Preference
    public final void setSelectable(boolean z) {
        super.setSelectable(!this.b && this.c);
    }
}
