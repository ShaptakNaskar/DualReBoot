package com.dualboot.util;

import android.content.Context;
import android.util.DisplayMetrics;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.ViewConfiguration;

/* JADX INFO: loaded from: classes.dex */
public abstract class b {
    private final float a;
    private final float b;
    private final float c;
    private final float d;
    private final float e;
    private final float f;
    private final float g;
    private final float h;
    private final float i;
    private final long j;
    private final long k;
    private final d l;
    private long m;
    private c n = null;
    private c o = null;
    private c p = null;
    private e q = null;
    private boolean r = false;
    private boolean s = false;
    private boolean t = false;
    private int u = -1;
    private VelocityTracker v = null;
    private final f w = new f();
    private final f x = new f();

    public b(Context context, long j) {
        DisplayMetrics displayMetrics = context.getResources().getDisplayMetrics();
        this.a = displayMetrics.widthPixels;
        ViewConfiguration viewConfiguration = ViewConfiguration.get(context);
        this.j = ViewConfiguration.getTapTimeout();
        this.k = ViewConfiguration.getDoubleTapTimeout();
        this.b = viewConfiguration.getScaledTouchSlop();
        this.d = viewConfiguration.getScaledPagingTouchSlop();
        this.e = viewConfiguration.getScaledDoubleTapSlop();
        this.c = this.b * this.b;
        this.f = this.e * this.e;
        this.g = 25.0f;
        this.h = displayMetrics.density * 500.0f;
        this.i = viewConfiguration.getScaledMaximumFlingVelocity();
        this.l = new d(this.a, j);
        c();
    }

    private void a(int i, c cVar) {
        int i2;
        int i3;
        boolean z = true;
        switch (i) {
            case 1:
                this.n = new c(cVar);
                e eVar = this.q;
                c cVar2 = this.n;
                if (eVar == null || cVar2.b - eVar.b.b > this.k || f.a(eVar.a.a, cVar2.a) > this.f) {
                    z = false;
                }
                this.t = z;
                if (this.t) {
                    float f = this.n.a.a;
                    float f2 = this.n.a.b;
                    long j = this.n.b;
                    a();
                }
                this.w.a();
                this.l.a();
                this.o = null;
                this.p = null;
                this.q = null;
                this.r = false;
                this.s = false;
                this.l.a(this.m);
                break;
            case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                a(cVar);
                break;
            case com.dualboot.h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                d();
                if (this.n != null) {
                    this.p = new c(cVar);
                    c cVar3 = this.n;
                    c cVar4 = this.p;
                    boolean z2 = cVar4.b - cVar3.b <= this.j && f.a(cVar4.a, cVar3.a) <= this.c;
                    if (!z2) {
                        a(cVar);
                        f fVarA = f.a(this.p.a(this.n));
                        f fVarA2 = f.a(this.x);
                        if (!this.r || !this.s || fVarA2.a <= this.h || this.w.a <= this.g) {
                            i2 = 0;
                        } else {
                            i2 = this.x.a > 0.0f ? 4 : 8;
                        }
                        if (fVarA2.b <= fVarA2.a * 1.5f || fVarA2.b <= this.h || this.w.b <= this.g || fVarA.b <= this.d) {
                            i3 = i2;
                        } else {
                            i3 = this.x.b > 0.0f ? i2 | 2 : i2 | 1;
                        }
                        boolean z3 = (i3 & 12) > 0;
                        boolean z4 = (i3 & 3) > 0;
                        if (z3) {
                            a(i3 & 12, true);
                        }
                        if (this.r && !z3) {
                            long j2 = this.l.h;
                            if (j2 != 0) {
                                if (f.a(this.p.a(this.n)).a >= (this.a * 3.0f) / 8.0f) {
                                    if (j2 < 0) {
                                        a(8, false);
                                    } else {
                                        a(4, false);
                                    }
                                } else if (j2 > 0) {
                                    a(8, false);
                                } else {
                                    a(4, false);
                                }
                            }
                        }
                        if (z4) {
                            a(i3 & 3, false);
                        }
                    } else if (!this.t) {
                        this.q = new e(this.n, this.p);
                        a(this.n.a.a, this.n.a.b, this.n.b);
                    }
                }
                this.w.a();
                this.l.a();
                this.n = null;
                this.o = null;
                this.p = null;
                this.r = false;
                this.s = false;
                this.t = false;
                break;
            case com.dualboot.h.TextViewHeaderImg_img_layout_height_scale /* 4 */:
                this.w.a();
                this.l.a();
                this.n = null;
                this.o = null;
                this.p = null;
                this.q = null;
                this.r = false;
                this.s = false;
                this.t = false;
                d();
                break;
        }
    }

    private void a(int i, boolean z) {
        double d;
        boolean z2;
        if ((i & 12) > 0) {
            boolean z3 = (i & 4) > 0;
            d dVar = this.l;
            double d2 = (z ? dVar.f : dVar.g) * dVar.b;
            double dFloor = Math.floor(d2);
            double dCeil = Math.ceil(d2);
            if (z3) {
                d = d2 == dFloor ? dFloor - 1.0d : dFloor;
            } else {
                d = d2 == dCeil ? 1.0d + dCeil : dCeil;
            }
            if (d < 0.0d) {
                d = 0.0d;
            }
            if (d > dVar.d) {
                d = dVar.d;
            }
            long j = (long) (d * dVar.c);
            if (j != dVar.g) {
                dVar.g = j;
                z2 = true;
            } else {
                z2 = false;
            }
            if (z2) {
                c();
            }
        }
        if ((i & 1) > 0) {
            b();
        }
    }

    private void a(c cVar) {
        if (this.n != null) {
            f fVarA = f.a(cVar.a(this.n));
            if (!this.r && fVarA.a > this.b) {
                this.w.a();
                this.o = new c(this.n);
                this.r = true;
            }
            if (this.r) {
                f fVarA2 = cVar.a(this.o);
                f fVarA3 = f.a(fVarA2);
                this.w.a += fVarA3.a;
                f fVar = this.w;
                fVar.b = fVarA3.b + fVar.b;
                if (!this.s && fVarA.a + this.b > fVarA.b) {
                    this.s = true;
                }
                if (this.s) {
                    d dVar = this.l;
                    long j = (long) fVarA2.a;
                    long j2 = dVar.g;
                    long jMin = j2 - Math.min(Math.max(j2 - j, 0L), dVar.e);
                    dVar.g -= jMin;
                    dVar.h += jMin;
                    if (jMin != 0) {
                        c();
                    }
                }
                this.o = new c(cVar);
            }
        }
    }

    private void c() {
        long j = this.l.g;
        d dVar = this.l;
        double d = dVar.g * dVar.a;
        this.m = j;
        a(d);
    }

    private void d() {
        if (this.v != null) {
            this.v.computeCurrentVelocity(1000, this.i);
            this.x.a = this.v.getXVelocity();
            this.x.b = this.v.getYVelocity();
            this.v.recycle();
            this.v = null;
        }
    }

    protected abstract void a();

    protected abstract void a(double d);

    protected abstract void a(float f, float f2, long j);

    public final void a(MotionEvent motionEvent) {
        int i;
        int iFindPointerIndex = -1;
        int action = motionEvent.getAction() & 255;
        int pointerId = motionEvent.getPointerId(motionEvent.getActionIndex());
        switch (action) {
            case 0:
                this.u = pointerId;
                iFindPointerIndex = motionEvent.findPointerIndex(this.u);
                i = 1;
                break;
            case 1:
            case com.dualboot.h.TextViewHeaderImg_img_stroke_enabled /* 6 */:
                if (this.u == pointerId) {
                    int iFindPointerIndex2 = motionEvent.findPointerIndex(this.u);
                    this.u = -1;
                    iFindPointerIndex = iFindPointerIndex2;
                    i = 3;
                } else {
                    i = 0;
                }
                break;
            case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                int iFindPointerIndex3 = motionEvent.findPointerIndex(this.u);
                if (iFindPointerIndex3 != -1) {
                    i = 2;
                    iFindPointerIndex = iFindPointerIndex3;
                } else {
                    i = 0;
                }
                break;
            case com.dualboot.h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                int iFindPointerIndex4 = motionEvent.findPointerIndex(this.u);
                this.u = -1;
                iFindPointerIndex = iFindPointerIndex4;
                i = 4;
                break;
            case com.dualboot.h.TextViewHeaderImg_img_layout_height_scale /* 4 */:
            default:
                i = 0;
                break;
            case com.dualboot.h.TextViewHeaderImg_img_corner_radius /* 5 */:
                i = 0;
                break;
        }
        if (i == 0) {
            return;
        }
        int pointerCount = motionEvent.getPointerCount();
        if (iFindPointerIndex < 0 || iFindPointerIndex >= pointerCount) {
            return;
        }
        if (this.v == null) {
            this.v = VelocityTracker.obtain();
            this.x.a();
        }
        this.v.addMovement(motionEvent);
        c cVar = new c();
        int historySize = motionEvent.getHistorySize();
        for (int i2 = 0; i2 < historySize; i2++) {
            cVar.b = motionEvent.getHistoricalEventTime(i2);
            cVar.a.a = motionEvent.getHistoricalX(iFindPointerIndex, i2);
            cVar.a.b = motionEvent.getHistoricalY(iFindPointerIndex, i2);
            a(i, cVar);
        }
        cVar.b = motionEvent.getEventTime();
        cVar.a.a = motionEvent.getX(iFindPointerIndex);
        cVar.a.b = motionEvent.getY(iFindPointerIndex);
        a(i, cVar);
    }

    protected abstract void b();
}
