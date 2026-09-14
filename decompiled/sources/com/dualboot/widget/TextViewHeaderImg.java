package com.dualboot.widget;

import android.R;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.LayerDrawable;
import android.os.SystemClock;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewParent;
import android.widget.ScrollView;
import android.widget.TextView;
import com.dualboot.h;

/* JADX INFO: loaded from: classes.dex */
public class TextViewHeaderImg extends TextView {
    private final com.dualboot.d.a a;
    private final int b;
    private final int c;
    private final int d;
    private final int e;
    private final int f;
    private final long g;
    private final long h;
    private final boolean i;
    private final boolean j;
    private final boolean k;
    private final float l;
    private int m;
    private float n;
    private float o;
    private float p;
    private long q;
    private long r;

    public TextViewHeaderImg(Context context) {
        this(context, null);
    }

    public TextViewHeaderImg(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, R.attr.textViewStyle);
    }

    public TextViewHeaderImg(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.m = -1;
        this.n = 1.0f;
        this.o = 1.0f;
        this.p = 1.0f;
        this.q = 0L;
        this.r = 0L;
        this.b = getTextColors().getDefaultColor();
        setTextColor(this.b);
        this.c = Color.red(this.b);
        this.d = Color.green(this.b);
        this.e = Color.blue(this.b);
        this.f = Color.alpha(this.b);
        this.g = getResources().getInteger(R.integer.config_shortAnimTime);
        this.h = getResources().getInteger(R.integer.config_longAnimTime);
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, h.TextViewHeaderImg, i, 0);
        int dimensionPixelSize = typedArrayObtainStyledAttributes.getDimensionPixelSize(2, 0);
        int dimensionPixelSize2 = typedArrayObtainStyledAttributes.getDimensionPixelSize(5, 0);
        boolean z = typedArrayObtainStyledAttributes.getBoolean(3, false);
        this.l = typedArrayObtainStyledAttributes.getFloat(4, 1.0f);
        int color = typedArrayObtainStyledAttributes.getColor(10, -1);
        this.a = new com.dualboot.d.a(z, typedArrayObtainStyledAttributes.getBoolean(6, z), typedArrayObtainStyledAttributes.getFloat(7, 2.0f), typedArrayObtainStyledAttributes.getColor(8, this.b), typedArrayObtainStyledAttributes.getFloat(9, 1.0f), color, typedArrayObtainStyledAttributes.getColor(11, Color.argb(0, Color.red(color), Color.green(color), Color.blue(color))), dimensionPixelSize, dimensionPixelSize2);
        Drawable background = getBackground();
        setBackgroundDrawable(background != null ? new LayerDrawable(new Drawable[]{background, this.a}) : this.a);
        if (!a(typedArrayObtainStyledAttributes.getDrawable(1))) {
            a(typedArrayObtainStyledAttributes.getDrawable(0));
        }
        this.k = typedArrayObtainStyledAttributes.getBoolean(14, true);
        this.i = typedArrayObtainStyledAttributes.getBoolean(13, false);
        this.j = typedArrayObtainStyledAttributes.getBoolean(12, true);
        if (this.i) {
            setClickable(true);
        }
        if (this.j) {
            a(1.0f, 0L);
        } else {
            a(0.0f, 0L);
        }
        typedArrayObtainStyledAttributes.recycle();
    }

    private void a() {
        this.a.a(this.n);
        this.a.b((this.n * 0.3f) + 0.7f);
    }

    private void a(float f, long j) {
        long jUptimeMillis = SystemClock.uptimeMillis();
        if (j == 0) {
            this.o = f;
            this.p = f;
            this.n = f;
            this.q = jUptimeMillis;
            this.r = jUptimeMillis;
        } else {
            this.o = this.n;
            this.p = f;
            this.q = jUptimeMillis;
            this.r = jUptimeMillis + j;
        }
        a();
        b();
    }

    private void b() {
        invalidate();
        invalidateDrawable(this.a);
    }

    public final boolean a(Drawable drawable) {
        Bitmap bitmap;
        if (!(drawable instanceof BitmapDrawable) || (bitmap = ((BitmapDrawable) drawable).getBitmap()) == null) {
            return false;
        }
        this.a.a(bitmap);
        requestLayout();
        a();
        b();
        return true;
    }

    @Override // android.widget.TextView, android.view.View
    protected void onDraw(Canvas canvas) {
        long jUptimeMillis = SystemClock.uptimeMillis();
        if (jUptimeMillis <= this.q || jUptimeMillis > this.r) {
            this.n = this.p;
        } else {
            float f = 1.0f - ((jUptimeMillis - this.q) / (this.r - this.q));
            this.n = ((1.0f - (f * (f * f))) * (this.p - this.o)) + this.o;
            b();
        }
        a();
        setTextColor(Color.argb((int) ((isEnabled() ? 1.0f : 0.3f) * this.f * this.n), this.c, this.d, this.e));
        super.onDraw(canvas);
    }

    @Override // android.widget.TextView, android.view.View
    protected void onMeasure(int i, int i2) {
        int iMin;
        int intrinsicWidth = this.a.getIntrinsicWidth();
        int intrinsicHeight = (int) (this.a.getIntrinsicHeight() * this.l);
        int mode = View.MeasureSpec.getMode(i);
        int size = View.MeasureSpec.getSize(i);
        int mode2 = View.MeasureSpec.getMode(i2);
        int size2 = View.MeasureSpec.getSize(i2);
        if (mode == 0 && mode2 == 0) {
            iMin = intrinsicWidth;
        } else if (mode == 1073741824 && mode2 == 1073741824) {
            intrinsicHeight = size2;
            iMin = size;
        } else if (mode2 == 0) {
            intrinsicHeight = (int) (intrinsicHeight * (size / intrinsicWidth));
            iMin = size;
        } else if (mode2 == 1073741824) {
            if (mode == 0) {
                iMin = (int) ((size2 / intrinsicHeight) * intrinsicWidth);
                intrinsicHeight = size2;
            } else {
                iMin = Math.min(size, (int) ((size2 / intrinsicHeight) * intrinsicWidth));
                intrinsicHeight = size2;
            }
        } else if (mode2 != Integer.MIN_VALUE) {
            iMin = intrinsicWidth;
        } else if (mode == 0) {
            iMin = (int) ((size2 / intrinsicHeight) * intrinsicWidth);
            intrinsicHeight = size2;
        } else {
            intrinsicHeight = Math.min(size2, (int) (intrinsicHeight * (size / intrinsicWidth)));
            iMin = size;
        }
        int i3 = this.m <= 0 ? Integer.MAX_VALUE : this.m;
        if (i3 < iMin) {
            float f = i3 / iMin;
            iMin = (int) (iMin * f);
            intrinsicHeight = (int) (intrinsicHeight * f);
        }
        setMeasuredDimension(iMin, intrinsicHeight);
    }

    @Override // android.view.View
    public boolean performClick() {
        if (this.i) {
            float f = 1.0f - this.p;
            boolean z = f - this.n > 0.0f;
            a(f, z ? this.g : this.h);
            if (this.k && z) {
                int top = getTop();
                ViewParent parent = getParent();
                while (true) {
                    int i = top;
                    if (!(parent instanceof View)) {
                        break;
                    }
                    View view = (View) parent;
                    if (view instanceof ScrollView) {
                        ScrollView scrollView = (ScrollView) view;
                        int height = scrollView.getHeight();
                        int verticalFadingEdgeLength = scrollView.getVerticalFadingEdgeLength();
                        int scrollY = scrollView.getScrollY();
                        int i2 = scrollY + height;
                        int i3 = i - verticalFadingEdgeLength;
                        int height2 = getHeight() + i + verticalFadingEdgeLength;
                        boolean z2 = height2 - i3 >= height;
                        boolean z3 = i3 < scrollY;
                        boolean z4 = height2 > i2;
                        if (!z3) {
                            if (!z4 || z2) {
                                break;
                                break;
                            }
                            scrollView.smoothScrollBy(0, height2 - i2);
                            break;
                        }
                        scrollView.smoothScrollTo(0, i3);
                        break;
                    }
                    top = view.getTop() + i;
                    parent = parent.getParent();
                }
            }
        }
        return super.performClick();
    }

    @Override // android.widget.TextView, android.view.View
    public void setEnabled(boolean z) {
        if (z == isEnabled()) {
            return;
        }
        this.a.setAlpha((int) ((z ? 1.0f : 0.3f) * 255.0f));
        super.setEnabled(z);
    }

    @Override // android.widget.TextView
    public void setMaxWidth(int i) {
        super.setMaxWidth(i);
        this.m = i;
    }

    @Override // android.widget.TextView, android.view.View
    protected boolean verifyDrawable(Drawable drawable) {
        if (drawable == this.a) {
            return true;
        }
        return super.verifyDrawable(drawable);
    }
}
