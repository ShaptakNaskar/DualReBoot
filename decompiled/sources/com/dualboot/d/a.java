package com.dualboot.d;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.LinearGradient;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Shader;

/* JADX INFO: loaded from: classes.dex */
public final class a extends b {
    protected final int a;
    protected final int b;
    protected final RectF c;
    protected float d;
    private LinearGradient q;
    private boolean r;

    public a(boolean z, boolean z2, float f, int i, float f2, int i2, int i3, int i4, int i5) {
        super(z, z2, f, i, f2, i4, i5);
        this.c = new RectF();
        this.q = null;
        this.r = true;
        this.d = 1.0f;
        this.a = i2;
        this.b = i3;
    }

    public final void a(float f) {
        this.d = f;
        boolean z = this.d >= 0.003921569f;
        if (this.r != z) {
            this.r = z;
            this.q = null;
        }
    }

    @Override // com.dualboot.d.b
    public final void a(Bitmap bitmap) {
        super.a(bitmap);
        this.q = null;
    }

    @Override // com.dualboot.d.b
    protected final boolean a() {
        if (!super.a()) {
            return false;
        }
        if (this.r && this.q == null) {
            this.c.set(this.l);
            if (this.h) {
                this.c.inset(this.i, this.i);
            }
            this.q = new LinearGradient(this.c.left, this.c.top, this.c.left, this.c.bottom, this.a, this.b, Shader.TileMode.CLAMP);
        }
        return true;
    }

    @Override // com.dualboot.d.b, android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        super.draw(canvas);
        if (this.r) {
            int alpha = this.n.getAlpha();
            this.n.setAlpha((int) (alpha * this.d));
            this.n.setShader(this.q);
            canvas.drawRoundRect(this.c, this.f, this.f, this.n);
            this.n.setAlpha(alpha);
        }
    }

    @Override // com.dualboot.d.b, android.graphics.drawable.Drawable
    protected final void onBoundsChange(Rect rect) {
        super.onBoundsChange(rect);
        this.q = null;
    }
}
