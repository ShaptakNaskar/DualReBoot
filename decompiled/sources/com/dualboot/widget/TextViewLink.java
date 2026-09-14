package com.dualboot.widget;

import android.app.Activity;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Color;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import com.dualboot.h;

/* JADX INFO: loaded from: classes.dex */
public class TextViewLink extends TextView {
    protected a a;
    protected int b;
    protected final boolean c;
    protected final int d;
    protected final int e;
    protected boolean f;

    public TextViewLink(Context context) {
        this(context, null);
    }

    public TextViewLink(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public TextViewLink(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.a = null;
        this.b = 0;
        this.f = false;
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, h.TextViewLink, i, 0);
        this.c = typedArrayObtainStyledAttributes.getBoolean(0, true);
        typedArrayObtainStyledAttributes.recycle();
        this.d = getLinkTextColors().getDefaultColor();
        if (this.c) {
            setTextColor(this.d);
        }
        float fRed = Color.red(this.d) / 255.0f;
        float fGreen = Color.green(this.d) / 255.0f;
        float fBlue = Color.blue(this.d) / 255.0f;
        float f = (0.299f * fRed) + (0.587f * fGreen) + (0.114f * fBlue);
        this.e = Color.argb(Color.alpha(this.d), (int) ((fRed + ((f - fRed) * 0.75f)) * 255.0f), (int) ((fGreen + ((f - fGreen) * 0.75f)) * 255.0f), (int) ((fBlue + ((f - fBlue) * 0.75f)) * 255.0f));
        a((a) null);
    }

    public static void a(Activity activity) {
        a(activity, true);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void a(Activity activity, boolean z) {
        if (activity instanceof a) {
            View decorView = activity.getWindow().getDecorView();
            a aVar = (a) activity;
            if (!z) {
                aVar = null;
            }
            a(decorView, aVar);
        }
    }

    private static void a(View view, a aVar) {
        if (view == null) {
            return;
        }
        if (view instanceof TextViewLink) {
            ((TextViewLink) view).a(aVar);
            return;
        }
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            int childCount = viewGroup.getChildCount();
            for (int i = 0; i < childCount; i++) {
                a(viewGroup.getChildAt(i), aVar);
            }
        }
    }

    private void a(a aVar) {
        this.a = aVar;
        b();
    }

    private void d() {
        boolean z = isEnabled() || isInEditMode();
        if ((this.b & 1) > 0 && this.c) {
            setTextColor(z ? this.d : this.e);
        }
        if ((this.b & 2) > 0) {
            setVisibility(z ? 0 : 4);
        }
        if ((this.b & 4) > 0) {
            setVisibility(z ? 0 : 8);
        }
    }

    protected boolean a() {
        return this.a != null || this.f;
    }

    protected final boolean b() {
        boolean zA = a();
        if (zA) {
            setEnabled(true);
            setClickable(true);
        } else {
            setClickable(false);
            setEnabled(false);
        }
        d();
        return zA;
    }

    public final void c() {
        this.b = 1;
        d();
    }

    @Override // android.view.View
    public boolean performClick() {
        boolean zPerformClick = super.performClick();
        if (!isClickable() || this.a == null) {
            return zPerformClick;
        }
        this.a.a(this);
        return true;
    }

    @Override // android.view.View
    public void setOnClickListener(View.OnClickListener onClickListener) {
        super.setOnClickListener(onClickListener);
        this.f = onClickListener != null;
        b();
    }
}
