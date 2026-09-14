package com.dualboot.d;

import android.graphics.Bitmap;
import android.graphics.BitmapShader;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.ColorFilter;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Shader;
import android.graphics.drawable.Drawable;

/* JADX INFO: loaded from: classes.dex */
public class b extends Drawable {
    private Bitmap a;
    private float b;
    private float c;
    private boolean d;
    protected final float e;
    protected final float f;
    protected final boolean g;
    protected final boolean h;
    protected final float i;
    protected final int j;
    protected float k;
    protected final Paint n;
    protected BitmapShader p = null;
    protected final RectF l = new RectF();
    protected final RectF m = new RectF();
    protected final Matrix o = new Matrix();

    public b(boolean z, boolean z2, float f, int i, float f2, int i2, int i3) {
        this.o.reset();
        this.e = i2;
        this.f = i3;
        this.g = z;
        int iRed = Color.red(i);
        int iGreen = Color.green(i);
        int iBlue = Color.blue(i);
        int iAlpha = (int) (Color.alpha(i) * Math.max(0.0f, Math.min(1.0f, f2)));
        this.j = Color.argb(iAlpha, iRed, iGreen, iBlue);
        this.i = f;
        this.h = z2 && iAlpha > 0 && this.i > 0.0f;
        this.n = new Paint();
        this.n.setAntiAlias(true);
        a(null);
    }

    public void a(Bitmap bitmap) {
        this.a = bitmap;
        if (this.a != null) {
            this.b = this.a.getWidth();
            this.c = this.a.getHeight();
            this.d = this.a.hasAlpha();
        } else {
            this.b = 0.0f;
            this.b = 0.0f;
            this.d = false;
        }
        this.p = null;
        this.n.setShader(null);
        invalidateSelf();
    }

    protected boolean a() {
        if (this.p == null && this.a != null) {
            this.p = new BitmapShader(this.a, Shader.TileMode.CLAMP, Shader.TileMode.CLAMP);
        }
        if (this.p == null) {
            return false;
        }
        this.p.setLocalMatrix(this.o);
        return true;
    }

    public final void b(float f) {
        this.k = f;
    }

    @Override // android.graphics.drawable.Drawable
    public void draw(Canvas canvas) {
        if (a()) {
            this.n.setShader(this.p);
            float f = !(this.h && (this.k > 0.003921569f ? 1 : (this.k == 0.003921569f ? 0 : -1)) >= 0) ? 0.0f : this.i;
            if (!this.g) {
                RectF rectF = new RectF(this.m);
                rectF.inset(f, f);
                canvas.drawRect(rectF, this.n);
            }
            RectF rectF2 = new RectF(this.l);
            rectF2.inset(f, f);
            canvas.drawRoundRect(rectF2, this.f, this.f, this.n);
            if (!this.h || this.k < 0.003921569f) {
                return;
            }
            float strokeWidth = this.n.getStrokeWidth();
            int color = this.n.getColor();
            int alpha = this.n.getAlpha();
            Paint.Style style = this.n.getStyle();
            Shader shader = this.n.getShader();
            this.n.setStrokeWidth(this.i);
            this.n.setColor(this.j);
            this.n.setAlpha((int) (this.n.getAlpha() * this.k));
            this.n.setStyle(Paint.Style.STROKE);
            this.n.setShader(null);
            canvas.drawRoundRect(this.l, this.f, this.f, this.n);
            this.n.setStrokeWidth(strokeWidth);
            this.n.setColor(color);
            this.n.setAlpha(alpha);
            this.n.setStyle(style);
            this.n.setShader(shader);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public int getIntrinsicHeight() {
        if (this.a != null) {
            return this.a.getHeight();
        }
        return -1;
    }

    @Override // android.graphics.drawable.Drawable
    public int getIntrinsicWidth() {
        if (this.a != null) {
            return this.a.getWidth();
        }
        return -1;
    }

    @Override // android.graphics.drawable.Drawable
    public int getOpacity() {
        return (this.d || this.n.getAlpha() < 255) ? -3 : -1;
    }

    @Override // android.graphics.drawable.Drawable
    protected void onBoundsChange(Rect rect) {
        super.onBoundsChange(rect);
        float fWidth = rect.width();
        float fHeight = rect.height();
        this.l.set(0.0f, 0.0f, fWidth, fHeight);
        this.m.set(this.l.left, this.l.bottom - this.f, this.l.right, this.l.bottom);
        float f = this.e;
        float f2 = this.e;
        float f3 = fWidth / fHeight;
        float f4 = this.b / this.c;
        if (f3 < f4 && f3 > 1.0f) {
            f += (this.b - ((f3 / f4) * this.b)) * 0.5f;
        }
        RectF rectF = new RectF(f, f2, this.b - f, this.c - f2);
        float fMax = Math.max(fWidth, fHeight);
        float f5 = (fMax - fWidth) * 0.5f;
        float f6 = (fMax - fHeight) * 0.5f;
        RectF rectF2 = new RectF(-f5, -f6, (-f5) + fMax, fMax + (-f6));
        this.o.reset();
        this.o.setRectToRect(rectF, rectF2, Matrix.ScaleToFit.CENTER);
    }

    @Override // android.graphics.drawable.Drawable
    public void setAlpha(int i) {
        this.n.setAlpha(i);
    }

    @Override // android.graphics.drawable.Drawable
    public void setColorFilter(ColorFilter colorFilter) {
        this.n.setColorFilter(colorFilter);
    }
}
