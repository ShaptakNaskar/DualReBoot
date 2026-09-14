package com.dualboot.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.text.TextUtils;
import android.util.AttributeSet;
import com.dualboot.h;

/* JADX INFO: loaded from: classes.dex */
public class TextViewThemeLink extends TextViewLink {
    protected String g;

    public TextViewThemeLink(Context context) {
        this(context, null);
    }

    public TextViewThemeLink(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public TextViewThemeLink(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.g = null;
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, h.TextViewThemeLink, i, 0);
        this.g = typedArrayObtainStyledAttributes.getString(0);
        b();
        c();
        typedArrayObtainStyledAttributes.recycle();
    }

    @Override // com.dualboot.widget.TextViewLink
    protected final boolean a() {
        return super.a() && !TextUtils.isEmpty(this.g);
    }

    public final String d() {
        return this.g;
    }
}
