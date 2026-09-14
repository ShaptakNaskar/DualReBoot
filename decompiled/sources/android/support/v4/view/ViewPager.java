package android.support.v4.view;

import android.R;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.util.Log;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.accessibility.AccessibilityEvent;
import android.view.animation.Interpolator;
import android.widget.Scroller;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

/* JADX INFO: loaded from: classes.dex */
public final class ViewPager extends ViewGroup {
    private boolean A;
    private int B;
    private int C;
    private int D;
    private float E;
    private float F;
    private float G;
    private float H;
    private int I;
    private VelocityTracker J;
    private int K;
    private int L;
    private int M;
    private int N;
    private boolean O;
    private android.support.v4.d.a P;
    private android.support.v4.d.a Q;
    private boolean R;
    private boolean S;
    private boolean T;
    private int U;
    private ab V;
    private ab W;
    private aa Z;
    private ac aa;
    private Method ab;
    private int ac;
    private ArrayList ad;
    private final Runnable af;
    private int ag;
    private final ArrayList d;
    private final y e;
    private final Rect f;
    private i g;
    private int h;
    private int i;
    private Parcelable j;
    private ClassLoader k;
    private Scroller l;
    private ad m;
    private int n;
    private Drawable o;
    private int p;
    private int q;
    private float r;
    private float s;
    private int t;
    private int u;
    private boolean v;
    private boolean w;
    private boolean x;
    private int y;
    private boolean z;
    private static final int[] a = {R.attr.layout_gravity};
    private static final Comparator b = new v();
    private static final Interpolator c = new w();
    private static final af ae = new af();

    public class SavedState extends View.BaseSavedState {
        public static final Parcelable.Creator CREATOR;
        int a;
        Parcelable b;
        ClassLoader c;

        static {
            ae aeVar = new ae();
            if (Build.VERSION.SDK_INT >= 13) {
                new android.support.v4.b.d(aeVar);
            }
            CREATOR = new android.support.v4.b.b(aeVar);
        }

        SavedState(Parcel parcel, ClassLoader classLoader) {
            super(parcel);
            classLoader = classLoader == null ? getClass().getClassLoader() : classLoader;
            this.a = parcel.readInt();
            this.b = parcel.readParcelable(classLoader);
            this.c = classLoader;
        }

        public SavedState(Parcelable parcelable) {
            super(parcelable);
        }

        public String toString() {
            return "FragmentPager.SavedState{" + Integer.toHexString(System.identityHashCode(this)) + " position=" + this.a + "}";
        }

        @Override // android.view.View.BaseSavedState, android.view.AbsSavedState, android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeInt(this.a);
            parcel.writeParcelable(this.b, i);
        }
    }

    private Rect a(Rect rect, View view) {
        Rect rect2 = rect == null ? new Rect() : rect;
        if (view == null) {
            rect2.set(0, 0, 0, 0);
            return rect2;
        }
        rect2.left = view.getLeft();
        rect2.right = view.getRight();
        rect2.top = view.getTop();
        rect2.bottom = view.getBottom();
        ViewParent parent = view.getParent();
        while ((parent instanceof ViewGroup) && parent != this) {
            ViewGroup viewGroup = (ViewGroup) parent;
            rect2.left += viewGroup.getLeft();
            rect2.right += viewGroup.getRight();
            rect2.top += viewGroup.getTop();
            rect2.bottom += viewGroup.getBottom();
            parent = viewGroup.getParent();
        }
        return rect2;
    }

    private y a(int i) {
        new y().b = i;
        i iVar = this.g;
        throw new UnsupportedOperationException("Required method instantiateItem was not overridden");
    }

    private y a(View view) {
        while (true) {
            Object parent = view.getParent();
            if (parent == this) {
                return d();
            }
            if (parent == null || !(parent instanceof View)) {
                return null;
            }
            view = (View) parent;
        }
    }

    private void a(int i, int i2, int i3, int i4) {
        if (i2 > 0 && !this.d.isEmpty()) {
            int scrollX = (int) ((i + i3) * (getScrollX() / (i2 + i4)));
            scrollTo(scrollX, getScrollY());
            if (this.l.isFinished()) {
                return;
            }
            this.l.startScroll(scrollX, 0, (int) (c(this.h).e * i), 0, this.l.getDuration() - this.l.timePassed());
            return;
        }
        y yVarC = c(this.h);
        int iMin = (int) ((yVarC != null ? Math.min(yVarC.e, this.s) : 0.0f) * i);
        if (iMin != getScrollX()) {
            a(false);
            scrollTo(iMin, getScrollY());
        }
    }

    private void a(int i, boolean z, int i2, boolean z2) {
        int iAbs;
        y yVarC = c(i);
        int width = yVarC != null ? (int) (getWidth() * Math.max(this.r, Math.min(yVarC.e, this.s))) : 0;
        if (!z) {
            if (z2 && this.V != null) {
                ab abVar = this.V;
            }
            if (z2 && this.W != null) {
                ab abVar2 = this.W;
            }
            a(false);
            scrollTo(width, 0);
            return;
        }
        if (getChildCount() == 0) {
            setScrollingCacheEnabled(false);
        } else {
            int scrollX = getScrollX();
            int scrollY = getScrollY();
            int i3 = width - scrollX;
            int i4 = 0 - scrollY;
            if (i3 == 0 && i4 == 0) {
                a(false);
                c();
                setScrollState(0);
            } else {
                setScrollingCacheEnabled(true);
                setScrollState(2);
                int width2 = getWidth();
                int i5 = width2 / 2;
                float fSin = (i5 * ((float) Math.sin((float) (((double) (Math.min(1.0f, (1.0f * Math.abs(i3)) / width2) - 0.5f)) * 0.4712389167638204d)))) + i5;
                int iAbs2 = Math.abs(i2);
                if (iAbs2 > 0) {
                    iAbs = Math.round(1000.0f * Math.abs(fSin / iAbs2)) * 4;
                } else {
                    i iVar = this.g;
                    int i6 = this.h;
                    iAbs = (int) (((Math.abs(i3) / ((width2 * 1.0f) + this.n)) + 1.0f) * 100.0f);
                }
                this.l.startScroll(scrollX, scrollY, i3, i4, Math.min(iAbs, 600));
                n.b(this);
            }
        }
        if (z2 && this.V != null) {
            ab abVar3 = this.V;
        }
        if (!z2 || this.W == null) {
            return;
        }
        ab abVar4 = this.W;
    }

    private void a(int i, boolean z, boolean z2) {
        a(i, z, z2, 0);
    }

    private void a(int i, boolean z, boolean z2, int i2) {
        if (this.g == null || this.g.a() <= 0) {
            setScrollingCacheEnabled(false);
            return;
        }
        if (!z2 && this.h == i && this.d.size() != 0) {
            setScrollingCacheEnabled(false);
            return;
        }
        if (i < 0) {
            i = 0;
        } else if (i >= this.g.a()) {
            i = this.g.a() - 1;
        }
        int i3 = this.y;
        if (i > this.h + i3 || i < this.h - i3) {
            for (int i4 = 0; i4 < this.d.size(); i4++) {
                ((y) this.d.get(i4)).c = true;
            }
        }
        boolean z3 = this.h != i;
        b(i);
        a(i, z, i2, z3);
    }

    private void a(MotionEvent motionEvent) {
        int iA = e.a(motionEvent);
        if (e.b(motionEvent, iA) == this.I) {
            int i = iA == 0 ? 1 : 0;
            this.E = e.c(motionEvent, i);
            this.I = e.b(motionEvent, i);
            if (this.J != null) {
                this.J.clear();
            }
        }
    }

    private void a(boolean z) {
        boolean z2 = this.ag == 2;
        if (z2) {
            setScrollingCacheEnabled(false);
            this.l.abortAnimation();
            int scrollX = getScrollX();
            int scrollY = getScrollY();
            int currX = this.l.getCurrX();
            int currY = this.l.getCurrY();
            if (scrollX != currX || scrollY != currY) {
                scrollTo(currX, currY);
            }
        }
        this.x = false;
        boolean z3 = z2;
        for (int i = 0; i < this.d.size(); i++) {
            y yVar = (y) this.d.get(i);
            if (yVar.c) {
                yVar.c = false;
                z3 = true;
            }
        }
        if (z3) {
            if (z) {
                n.a(this, this.af);
            } else {
                this.af.run();
            }
        }
    }

    private boolean a(float f) {
        boolean z;
        float f2;
        boolean z2 = true;
        boolean zA = false;
        float f3 = this.E - f;
        this.E = f;
        float scrollX = getScrollX() + f3;
        int width = getWidth();
        float f4 = width * this.r;
        float f5 = width * this.s;
        y yVar = (y) this.d.get(0);
        y yVar2 = (y) this.d.get(this.d.size() - 1);
        if (yVar.b != 0) {
            f4 = yVar.e * width;
            z = false;
        } else {
            z = true;
        }
        if (yVar2.b != this.g.a() - 1) {
            f2 = yVar2.e * width;
            z2 = false;
        } else {
            f2 = f5;
        }
        if (scrollX < f4) {
            if (z) {
                zA = this.P.a(Math.abs(f4 - scrollX) / width);
            }
        } else if (scrollX > f2) {
            zA = z2 ? this.Q.a(Math.abs(scrollX - f2) / width) : false;
            f4 = f2;
        } else {
            f4 = scrollX;
        }
        this.E += f4 - ((int) f4);
        scrollTo((int) f4, getScrollY());
        e();
        return zA;
    }

    private boolean a(View view, boolean z, int i, int i2, int i3) {
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            int scrollX = view.getScrollX();
            int scrollY = view.getScrollY();
            for (int childCount = viewGroup.getChildCount() - 1; childCount >= 0; childCount--) {
                View childAt = viewGroup.getChildAt(childCount);
                if (i2 + scrollX >= childAt.getLeft() && i2 + scrollX < childAt.getRight() && i3 + scrollY >= childAt.getTop() && i3 + scrollY < childAt.getBottom() && a(childAt, true, i, (i2 + scrollX) - childAt.getLeft(), (i3 + scrollY) - childAt.getTop())) {
                    return true;
                }
            }
        }
        return z && n.a(view, -i);
    }

    private void b(int i) {
        y yVar;
        int i2;
        y yVar2;
        y yVarD;
        y yVar3;
        y yVar4;
        if (this.h != i) {
            y yVarC = c(this.h);
            this.h = i;
            yVar = yVarC;
        } else {
            yVar = null;
        }
        if (this.g == null || this.x || getWindowToken() == null) {
            return;
        }
        i iVar = this.g;
        int i3 = this.y;
        int iMax = Math.max(0, this.h - i3);
        int iA = this.g.a();
        int iMin = Math.min(iA - 1, i3 + this.h);
        int i4 = 0;
        while (true) {
            i2 = i4;
            if (i2 < this.d.size()) {
                yVar2 = (y) this.d.get(i2);
                if (yVar2.b >= this.h) {
                    if (yVar2.b != this.h) {
                        break;
                    } else {
                        break;
                    }
                }
                i4 = i2 + 1;
            }
            yVar2 = null;
            break;
        }
        y yVarA = (yVar2 != null || iA <= 0) ? yVar2 : a(this.h);
        if (yVarA != null) {
            int i5 = i2 - 1;
            y yVar5 = i5 >= 0 ? (y) this.d.get(i5) : null;
            float f = 2.0f - yVarA.d;
            float f2 = 0.0f;
            int i6 = i2;
            int i7 = i5;
            for (int i8 = this.h - 1; i8 >= 0; i8--) {
                if (f2 >= f && i8 < iMax) {
                    if (yVar5 == null) {
                        break;
                    }
                    if (i8 == yVar5.b && !yVar5.c) {
                        this.d.remove(i7);
                        i iVar2 = this.g;
                        Object obj = yVar5.a;
                        i.b();
                        i7--;
                        i6--;
                        yVar5 = i7 >= 0 ? (y) this.d.get(i7) : null;
                    }
                } else if (yVar5 == null || i8 != yVar5.b) {
                    f2 += a(i8).d;
                    i6++;
                    yVar5 = i7 >= 0 ? (y) this.d.get(i7) : null;
                } else {
                    f2 += yVar5.d;
                    i7--;
                    yVar5 = i7 >= 0 ? (y) this.d.get(i7) : null;
                }
            }
            float f3 = yVarA.d;
            int i9 = i6 + 1;
            if (f3 < 2.0f) {
                y yVar6 = i9 < this.d.size() ? (y) this.d.get(i9) : null;
                int i10 = this.h + 1;
                while (i10 < iA) {
                    if (f3 >= 2.0f && i10 > iMin) {
                        if (yVar6 == null) {
                            break;
                        }
                        if (i10 == yVar6.b && !yVar6.c) {
                            this.d.remove(i9);
                            i iVar3 = this.g;
                            Object obj2 = yVar6.a;
                            i.b();
                            yVar6 = i9 < this.d.size() ? (y) this.d.get(i9) : null;
                        }
                    } else if (yVar6 == null || i10 != yVar6.b) {
                        i9++;
                        f3 += a(i10).d;
                        yVar6 = i9 < this.d.size() ? (y) this.d.get(i9) : null;
                    } else {
                        f3 += yVar6.d;
                        i9++;
                        yVar6 = i9 < this.d.size() ? (y) this.d.get(i9) : null;
                    }
                    i10++;
                    yVar6 = yVar6;
                    f3 = f3;
                }
            }
            int iA2 = this.g.a();
            int width = getWidth();
            float f4 = width > 0 ? this.n / width : 0.0f;
            if (yVar != null) {
                int i11 = yVar.b;
                if (i11 < yVarA.b) {
                    float f5 = yVar.d + yVar.e + f4;
                    int i12 = i11 + 1;
                    int i13 = 0;
                    while (i12 <= yVarA.b && i13 < this.d.size()) {
                        Object obj3 = this.d.get(i13);
                        while (true) {
                            yVar4 = (y) obj3;
                            if (i12 <= yVar4.b || i13 >= this.d.size() - 1) {
                                break;
                            }
                            i13++;
                            obj3 = this.d.get(i13);
                        }
                        while (i12 < yVar4.b) {
                            i iVar4 = this.g;
                            f5 += 1.0f + f4;
                            i12++;
                        }
                        yVar4.e = f5;
                        f5 += yVar4.d + f4;
                        i12++;
                    }
                } else if (i11 > yVarA.b) {
                    int size = this.d.size() - 1;
                    float f6 = yVar.e;
                    int i14 = i11 - 1;
                    int i15 = size;
                    while (i14 >= yVarA.b && i15 >= 0) {
                        Object obj4 = this.d.get(i15);
                        while (true) {
                            yVar3 = (y) obj4;
                            if (i14 >= yVar3.b || i15 <= 0) {
                                break;
                            }
                            i15--;
                            obj4 = this.d.get(i15);
                        }
                        while (i14 > yVar3.b) {
                            i iVar5 = this.g;
                            f6 -= 1.0f + f4;
                            i14--;
                        }
                        f6 -= yVar3.d + f4;
                        yVar3.e = f6;
                        i14--;
                    }
                }
            }
            int size2 = this.d.size();
            float f7 = yVarA.e;
            int i16 = yVarA.b - 1;
            this.r = yVarA.b == 0 ? yVarA.e : -3.4028235E38f;
            this.s = yVarA.b == iA2 + (-1) ? (yVarA.e + yVarA.d) - 1.0f : Float.MAX_VALUE;
            for (int i17 = i6 - 1; i17 >= 0; i17--) {
                y yVar7 = (y) this.d.get(i17);
                while (i16 > yVar7.b) {
                    i iVar6 = this.g;
                    i16--;
                    f7 -= 1.0f + f4;
                }
                f7 -= yVar7.d + f4;
                yVar7.e = f7;
                if (yVar7.b == 0) {
                    this.r = f7;
                }
                i16--;
            }
            float f8 = yVarA.e + yVarA.d + f4;
            int i18 = yVarA.b + 1;
            for (int i19 = i6 + 1; i19 < size2; i19++) {
                y yVar8 = (y) this.d.get(i19);
                while (i18 < yVar8.b) {
                    i iVar7 = this.g;
                    i18++;
                    f8 += 1.0f + f4;
                }
                if (yVar8.b == iA2 - 1) {
                    this.s = (yVar8.d + f8) - 1.0f;
                }
                yVar8.e = f8;
                f8 += yVar8.d + f4;
                i18++;
            }
            this.S = false;
        }
        i iVar8 = this.g;
        int i20 = this.h;
        if (yVarA != null) {
            Object obj5 = yVarA.a;
        }
        i iVar9 = this.g;
        boolean z = this.ac != 0;
        if (z) {
            if (this.ad == null) {
                this.ad = new ArrayList();
            } else {
                this.ad.clear();
            }
        }
        int childCount = getChildCount();
        for (int i21 = 0; i21 < childCount; i21++) {
            View childAt = getChildAt(i21);
            z zVar = (z) childAt.getLayoutParams();
            zVar.f = i21;
            if (!zVar.a && zVar.c == 0.0f && (yVarD = d()) != null) {
                zVar.c = yVarD.d;
                zVar.e = yVarD.b;
            }
            if (z) {
                this.ad.add(childAt);
            }
        }
        if (z) {
            Collections.sort(this.ad, ae);
        }
        if (hasFocus()) {
            View viewFindFocus = findFocus();
            y yVarA2 = viewFindFocus != null ? a(viewFindFocus) : null;
            if (yVarA2 == null || yVarA2.b != this.h) {
                for (int i22 = 0; i22 < getChildCount(); i22++) {
                    View childAt2 = getChildAt(i22);
                    y yVarD2 = d();
                    if (yVarD2 != null && yVarD2.b == this.h && childAt2.requestFocus(2)) {
                        return;
                    }
                }
            }
        }
    }

    private y c(int i) {
        int i2 = 0;
        while (true) {
            int i3 = i2;
            if (i3 >= this.d.size()) {
                return null;
            }
            y yVar = (y) this.d.get(i3);
            if (yVar.b == i) {
                return yVar;
            }
            i2 = i3 + 1;
        }
    }

    private void c() {
        b(this.h);
    }

    private y d() {
        int i = 0;
        while (true) {
            int i2 = i;
            if (i2 >= this.d.size()) {
                return null;
            }
            y yVar = (y) this.d.get(i2);
            i iVar = this.g;
            Object obj = yVar.a;
            if (iVar.c()) {
                return yVar;
            }
            i = i2 + 1;
        }
    }

    /* JADX WARN: Code duplicated, block: B:34:0x0085  */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x006a, code lost:
    
        if (r7 != 2) goto L14;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private boolean d(int r7) {
        /*
            r6 = this;
            r5 = 66
            r4 = 17
            r1 = 1
            r2 = 0
            android.view.View r0 = r6.findFocus()
            if (r0 != r6) goto Ld
            r0 = 0
        Ld:
            android.view.FocusFinder r3 = android.view.FocusFinder.getInstance()
            android.view.View r3 = r3.findNextFocus(r6, r0, r7)
            if (r3 == 0) goto L5e
            if (r3 == r0) goto L5e
            if (r7 != r4) goto L43
            android.graphics.Rect r1 = r6.f
            android.graphics.Rect r1 = r6.a(r1, r3)
            int r1 = r1.left
            android.graphics.Rect r2 = r6.f
            android.graphics.Rect r2 = r6.a(r2, r0)
            int r2 = r2.left
            if (r0 == 0) goto L3e
            if (r1 < r2) goto L3e
            boolean r0 = r6.i()
        L33:
            r2 = r0
        L34:
            if (r2 == 0) goto L3d
            int r0 = android.view.SoundEffectConstants.getContantForFocusDirection(r7)
            r6.playSoundEffect(r0)
        L3d:
            return r2
        L3e:
            boolean r0 = r3.requestFocus()
            goto L33
        L43:
            if (r7 != r5) goto L34
            android.graphics.Rect r4 = r6.f
            android.graphics.Rect r4 = r6.a(r4, r3)
            int r4 = r4.left
            android.graphics.Rect r5 = r6.f
            android.graphics.Rect r5 = r6.a(r5, r0)
            int r5 = r5.left
            if (r0 == 0) goto L59
            if (r4 <= r5) goto L6c
        L59:
            boolean r0 = r3.requestFocus()
            goto L33
        L5e:
            if (r7 == r4) goto L62
            if (r7 != r1) goto L67
        L62:
            boolean r0 = r6.i()
            goto L33
        L67:
            if (r7 == r5) goto L6c
            r0 = 2
            if (r7 != r0) goto L34
        L6c:
            android.support.v4.view.i r0 = r6.g
            if (r0 == 0) goto L85
            int r0 = r6.h
            android.support.v4.view.i r3 = r6.g
            int r3 = r3.a()
            int r3 = r3 + (-1)
            if (r0 >= r3) goto L85
            int r0 = r6.h
            int r0 = r0 + 1
            r6.setCurrentItem$2563266(r0)
            r0 = r1
            goto L33
        L85:
            r0 = r2
            goto L33
        */
        throw new UnsupportedOperationException("Method not decompiled: android.support.v4.view.ViewPager.d(int):boolean");
    }

    private boolean e() {
        if (this.d.size() == 0) {
            this.T = false;
            f();
            if (this.T) {
                return false;
            }
            throw new IllegalStateException("onPageScrolled did not call superclass implementation");
        }
        y yVarG = g();
        getWidth();
        int i = this.n;
        int i2 = this.n;
        int i3 = yVarG.b;
        float f = yVarG.e;
        float f2 = yVarG.d;
        this.T = false;
        f();
        if (this.T) {
            return true;
        }
        throw new IllegalStateException("onPageScrolled did not call superclass implementation");
    }

    private void f() {
        int i;
        int i2;
        int measuredWidth;
        if (this.U > 0) {
            int scrollX = getScrollX();
            int paddingLeft = getPaddingLeft();
            int paddingRight = getPaddingRight();
            int width = getWidth();
            int childCount = getChildCount();
            int i3 = 0;
            while (i3 < childCount) {
                View childAt = getChildAt(i3);
                z zVar = (z) childAt.getLayoutParams();
                if (zVar.a) {
                    switch (zVar.b & 7) {
                        case 1:
                            measuredWidth = Math.max((width - childAt.getMeasuredWidth()) / 2, paddingLeft);
                            int i4 = paddingRight;
                            i = paddingLeft;
                            i2 = i4;
                            break;
                        case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                        case com.dualboot.h.TextViewHeaderImg_img_layout_height_scale /* 4 */:
                        default:
                            measuredWidth = paddingLeft;
                            int i5 = paddingRight;
                            i = paddingLeft;
                            i2 = i5;
                            break;
                        case com.dualboot.h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                            int width2 = childAt.getWidth() + paddingLeft;
                            int i6 = paddingLeft;
                            i2 = paddingRight;
                            i = width2;
                            measuredWidth = i6;
                            break;
                        case com.dualboot.h.TextViewHeaderImg_img_corner_radius /* 5 */:
                            measuredWidth = (width - paddingRight) - childAt.getMeasuredWidth();
                            int measuredWidth2 = paddingRight + childAt.getMeasuredWidth();
                            i = paddingLeft;
                            i2 = measuredWidth2;
                            break;
                    }
                    int left = (measuredWidth + scrollX) - childAt.getLeft();
                    if (left != 0) {
                        childAt.offsetLeftAndRight(left);
                    }
                } else {
                    int i7 = paddingRight;
                    i = paddingLeft;
                    i2 = i7;
                }
                i3++;
                int i8 = i2;
                paddingLeft = i;
                paddingRight = i8;
            }
        }
        if (this.V != null) {
            ab abVar = this.V;
        }
        if (this.W != null) {
            ab abVar2 = this.W;
        }
        if (this.aa != null) {
            getScrollX();
            int childCount2 = getChildCount();
            for (int i9 = 0; i9 < childCount2; i9++) {
                View childAt2 = getChildAt(i9);
                if (!((z) childAt2.getLayoutParams()).a) {
                    childAt2.getLeft();
                    getWidth();
                    ac acVar = this.aa;
                }
            }
        }
        this.T = true;
    }

    private y g() {
        int i;
        y yVar;
        int width = getWidth();
        float scrollX = width > 0 ? getScrollX() / width : 0.0f;
        float f = width > 0 ? this.n / width : 0.0f;
        float f2 = 0.0f;
        float f3 = 0.0f;
        int i2 = -1;
        int i3 = 0;
        boolean z = true;
        y yVar2 = null;
        while (i3 < this.d.size()) {
            y yVar3 = (y) this.d.get(i3);
            if (z || yVar3.b == i2 + 1) {
                i = i3;
                yVar = yVar3;
            } else {
                y yVar4 = this.e;
                yVar4.e = f2 + f3 + f;
                yVar4.b = i2 + 1;
                i iVar = this.g;
                int i4 = yVar4.b;
                yVar4.d = 1.0f;
                i = i3 - 1;
                yVar = yVar4;
            }
            float f4 = yVar.e;
            float f5 = yVar.d + f4 + f;
            if (!z && scrollX < f4) {
                return yVar2;
            }
            if (scrollX < f5 || i == this.d.size() - 1) {
                return yVar;
            }
            f3 = f4;
            i2 = yVar.b;
            z = false;
            f2 = yVar.d;
            yVar2 = yVar;
            i3 = i + 1;
        }
        return yVar2;
    }

    private void h() {
        this.z = false;
        this.A = false;
        if (this.J != null) {
            this.J.recycle();
            this.J = null;
        }
    }

    private boolean i() {
        if (this.h <= 0) {
            return false;
        }
        setCurrentItem$2563266(this.h - 1);
        return true;
    }

    private void setCurrentItem$2563266(int i) {
        this.x = false;
        a(i, true, false);
    }

    private void setScrollState(int i) {
        if (this.ag == i) {
            return;
        }
        this.ag = i;
        if (this.aa != null) {
            boolean z = i != 0;
            int childCount = getChildCount();
            for (int i2 = 0; i2 < childCount; i2++) {
                n.b(getChildAt(i2), z ? 2 : 0);
            }
        }
        if (this.V != null) {
            ab abVar = this.V;
        }
    }

    private void setScrollingCacheEnabled(boolean z) {
        if (this.w != z) {
            this.w = z;
        }
    }

    final void a() {
        boolean z = this.d.size() < (this.y * 2) + 1 && this.d.size() < this.g.a();
        int i = this.h;
        for (int i2 = 0; i2 < this.d.size(); i2++) {
            y yVar = (y) this.d.get(i2);
            i iVar = this.g;
            Object obj = yVar.a;
        }
        Collections.sort(this.d, b);
        if (z) {
            int childCount = getChildCount();
            for (int i3 = 0; i3 < childCount; i3++) {
                z zVar = (z) getChildAt(i3).getLayoutParams();
                if (!zVar.a) {
                    zVar.c = 0.0f;
                }
            }
            a(i, false, true);
            requestLayout();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void addFocusables(ArrayList arrayList, int i, int i2) {
        y yVarD;
        int size = arrayList.size();
        int descendantFocusability = getDescendantFocusability();
        if (descendantFocusability != 393216) {
            for (int i3 = 0; i3 < getChildCount(); i3++) {
                View childAt = getChildAt(i3);
                if (childAt.getVisibility() == 0 && (yVarD = d()) != null && yVarD.b == this.h) {
                    childAt.addFocusables(arrayList, i, i2);
                }
            }
        }
        if ((descendantFocusability != 262144 || size == arrayList.size()) && isFocusable()) {
            if (((i2 & 1) == 1 && isInTouchMode() && !isFocusableInTouchMode()) || arrayList == null) {
                return;
            }
            arrayList.add(this);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void addTouchables(ArrayList arrayList) {
        y yVarD;
        for (int i = 0; i < getChildCount(); i++) {
            View childAt = getChildAt(i);
            if (childAt.getVisibility() == 0 && (yVarD = d()) != null && yVarD.b == this.h) {
                childAt.addTouchables(arrayList);
            }
        }
    }

    @Override // android.view.ViewGroup
    public final void addView(View view, int i, ViewGroup.LayoutParams layoutParams) {
        ViewGroup.LayoutParams layoutParamsGenerateLayoutParams = !checkLayoutParams(layoutParams) ? generateLayoutParams(layoutParams) : layoutParams;
        z zVar = (z) layoutParamsGenerateLayoutParams;
        zVar.a |= view instanceof x;
        if (!this.v) {
            super.addView(view, i, layoutParamsGenerateLayoutParams);
        } else {
            if (zVar != null && zVar.a) {
                throw new IllegalStateException("Cannot add pager decor view during layout");
            }
            zVar.d = true;
            addViewInLayout(view, i, layoutParamsGenerateLayoutParams);
        }
    }

    @Override // android.view.ViewGroup
    protected final boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return (layoutParams instanceof z) && super.checkLayoutParams(layoutParams);
    }

    @Override // android.view.View
    public final void computeScroll() {
        if (this.l.isFinished() || !this.l.computeScrollOffset()) {
            a(true);
            return;
        }
        int scrollX = getScrollX();
        int scrollY = getScrollY();
        int currX = this.l.getCurrX();
        int currY = this.l.getCurrY();
        if (scrollX != currX || scrollY != currY) {
            scrollTo(currX, currY);
            if (!e()) {
                this.l.abortAnimation();
                scrollTo(0, currY);
            }
        }
        n.b(this);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final boolean dispatchKeyEvent(KeyEvent keyEvent) {
        boolean zD;
        if (!super.dispatchKeyEvent(keyEvent)) {
            if (keyEvent.getAction() == 0) {
                switch (keyEvent.getKeyCode()) {
                    case 21:
                        zD = d(17);
                        break;
                    case 22:
                        zD = d(66);
                        break;
                    case 61:
                        if (Build.VERSION.SDK_INT < 11) {
                            zD = false;
                        } else if (!a.b(keyEvent)) {
                            zD = !a.a(keyEvent) ? false : d(1);
                        } else {
                            zD = d(2);
                        }
                        break;
                    default:
                        zD = false;
                        break;
                }
            } else {
                zD = false;
            }
            if (!zD) {
                return false;
            }
        }
        return true;
    }

    @Override // android.view.View
    public final boolean dispatchPopulateAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        y yVarD;
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            View childAt = getChildAt(i);
            if (childAt.getVisibility() == 0 && (yVarD = d()) != null && yVarD.b == this.h && childAt.dispatchPopulateAccessibilityEvent(accessibilityEvent)) {
                return true;
            }
        }
        return false;
    }

    @Override // android.view.View
    public final void draw(Canvas canvas) {
        super.draw(canvas);
        boolean zA = false;
        int iA = n.a(this);
        if (iA == 0 || (iA == 1 && this.g != null && this.g.a() > 1)) {
            if (!this.P.a()) {
                int iSave = canvas.save();
                int height = (getHeight() - getPaddingTop()) - getPaddingBottom();
                int width = getWidth();
                canvas.rotate(270.0f);
                canvas.translate((-height) + getPaddingTop(), this.r * width);
                this.P.a(height, width);
                zA = this.P.a(canvas) | false;
                canvas.restoreToCount(iSave);
            }
            if (!this.Q.a()) {
                int iSave2 = canvas.save();
                int width2 = getWidth();
                int height2 = (getHeight() - getPaddingTop()) - getPaddingBottom();
                canvas.rotate(90.0f);
                canvas.translate(-getPaddingTop(), (-(this.s + 1.0f)) * width2);
                this.Q.a(height2, width2);
                zA |= this.Q.a(canvas);
                canvas.restoreToCount(iSave2);
            }
        } else {
            this.P.b();
            this.Q.b();
        }
        if (zA) {
            n.b(this);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected final void drawableStateChanged() {
        super.drawableStateChanged();
        Drawable drawable = this.o;
        if (drawable == null || !drawable.isStateful()) {
            return;
        }
        drawable.setState(getDrawableState());
    }

    @Override // android.view.ViewGroup
    protected final ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return new z();
    }

    @Override // android.view.ViewGroup
    public final ViewGroup.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        return new z(getContext(), attributeSet);
    }

    @Override // android.view.ViewGroup
    protected final ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return generateDefaultLayoutParams();
    }

    public final i getAdapter() {
        return this.g;
    }

    @Override // android.view.ViewGroup
    protected final int getChildDrawingOrder(int i, int i2) {
        if (this.ac == 2) {
            i2 = (i - 1) - i2;
        }
        return ((z) ((View) this.ad.get(i2)).getLayoutParams()).f;
    }

    public final int getCurrentItem() {
        return this.h;
    }

    public final int getOffscreenPageLimit() {
        return this.y;
    }

    public final int getPageMargin() {
        return this.n;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected final void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.R = true;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected final void onDetachedFromWindow() {
        removeCallbacks(this.af);
        super.onDetachedFromWindow();
    }

    @Override // android.view.View
    protected final void onDraw(Canvas canvas) {
        float f;
        super.onDraw(canvas);
        if (this.n <= 0 || this.o == null || this.d.size() <= 0 || this.g == null) {
            return;
        }
        int scrollX = getScrollX();
        int width = getWidth();
        float f2 = this.n / width;
        y yVar = (y) this.d.get(0);
        float f3 = yVar.e;
        int size = this.d.size();
        int i = yVar.b;
        int i2 = ((y) this.d.get(size - 1)).b;
        int i3 = 0;
        for (int i4 = i; i4 < i2; i4++) {
            while (i4 > yVar.b && i3 < size) {
                i3++;
                yVar = (y) this.d.get(i3);
            }
            if (i4 == yVar.b) {
                f = (yVar.e + yVar.d) * width;
                f3 = yVar.e + yVar.d + f2;
            } else {
                i iVar = this.g;
                f = (1.0f + f3) * width;
                f3 += 1.0f + f2;
            }
            if (this.n + f > scrollX) {
                this.o.setBounds((int) f, this.p, (int) (this.n + f + 0.5f), this.q);
                this.o.draw(canvas);
            }
            if (f > scrollX + width) {
                return;
            }
        }
    }

    @Override // android.view.ViewGroup
    public final boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        int action = motionEvent.getAction() & 255;
        if (action == 3 || action == 1) {
            this.z = false;
            this.A = false;
            this.I = -1;
            if (this.J == null) {
                return false;
            }
            this.J.recycle();
            this.J = null;
            return false;
        }
        if (action != 0) {
            if (this.z) {
                return true;
            }
            if (this.A) {
                return false;
            }
        }
        switch (action) {
            case 0:
                float x = motionEvent.getX();
                this.G = x;
                this.E = x;
                float y = motionEvent.getY();
                this.H = y;
                this.F = y;
                this.I = e.b(motionEvent, 0);
                this.A = false;
                this.l.computeScrollOffset();
                if (this.ag == 2 && Math.abs(this.l.getFinalX() - this.l.getCurrX()) > this.N) {
                    this.l.abortAnimation();
                    this.x = false;
                    c();
                    this.z = true;
                    setScrollState(1);
                } else {
                    a(false);
                    this.z = false;
                }
                break;
            case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                int i = this.I;
                if (i != -1) {
                    int iA = e.a(motionEvent, i);
                    float fC = e.c(motionEvent, iA);
                    float f = fC - this.E;
                    float fAbs = Math.abs(f);
                    float fD = e.d(motionEvent, iA);
                    float fAbs2 = Math.abs(fD - this.H);
                    if (f != 0.0f) {
                        float f2 = this.E;
                        if (!((f2 < ((float) this.C) && f > 0.0f) || (f2 > ((float) (getWidth() - this.C)) && f < 0.0f)) && a(this, false, (int) f, (int) fC, (int) fD)) {
                            this.E = fC;
                            this.F = fD;
                            this.A = true;
                            return false;
                        }
                    }
                    if (fAbs > this.D && 0.5f * fAbs > fAbs2) {
                        this.z = true;
                        setScrollState(1);
                        this.E = f > 0.0f ? this.G + this.D : this.G - this.D;
                        this.F = fD;
                        setScrollingCacheEnabled(true);
                    } else if (fAbs2 > this.D) {
                        this.A = true;
                    }
                    if (this.z && a(fC)) {
                        n.b(this);
                    }
                }
                break;
            case com.dualboot.h.TextViewHeaderImg_img_stroke_enabled /* 6 */:
                a(motionEvent);
                break;
        }
        if (this.J == null) {
            this.J = VelocityTracker.obtain();
        }
        this.J.addMovement(motionEvent);
        return this.z;
    }

    /* JADX WARN: Code duplicated, block: B:36:0x0139  */
    @Override // android.view.ViewGroup, android.view.View
    protected final void onLayout(boolean z, int i, int i2, int i3, int i4) {
        y yVarD;
        int i5;
        int i6;
        int iMax;
        int measuredHeight;
        int i7;
        int i8;
        this.v = true;
        c();
        this.v = false;
        int childCount = getChildCount();
        int i9 = i3 - i;
        int i10 = i4 - i2;
        int paddingLeft = getPaddingLeft();
        int paddingTop = getPaddingTop();
        int paddingRight = getPaddingRight();
        int paddingBottom = getPaddingBottom();
        int scrollX = getScrollX();
        int i11 = 0;
        int i12 = 0;
        while (i12 < childCount) {
            View childAt = getChildAt(i12);
            if (childAt.getVisibility() != 8) {
                z zVar = (z) childAt.getLayoutParams();
                if (zVar.a) {
                    int i13 = zVar.b & 7;
                    int i14 = zVar.b & 112;
                    switch (i13) {
                        case 1:
                            iMax = Math.max((i9 - childAt.getMeasuredWidth()) / 2, paddingLeft);
                            break;
                        case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                        case com.dualboot.h.TextViewHeaderImg_img_layout_height_scale /* 4 */:
                        default:
                            iMax = paddingLeft;
                            break;
                        case com.dualboot.h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                            iMax = paddingLeft;
                            paddingLeft = childAt.getMeasuredWidth() + paddingLeft;
                            break;
                        case com.dualboot.h.TextViewHeaderImg_img_corner_radius /* 5 */:
                            int measuredWidth = (i9 - paddingRight) - childAt.getMeasuredWidth();
                            paddingRight += childAt.getMeasuredWidth();
                            iMax = measuredWidth;
                            break;
                    }
                    switch (i14) {
                        case 16:
                            measuredHeight = Math.max((i10 - childAt.getMeasuredHeight()) / 2, paddingTop);
                            int i15 = paddingBottom;
                            i7 = paddingTop;
                            i8 = i15;
                            break;
                        case 48:
                            int measuredHeight2 = childAt.getMeasuredHeight() + paddingTop;
                            int i16 = paddingTop;
                            i8 = paddingBottom;
                            i7 = measuredHeight2;
                            measuredHeight = i16;
                            break;
                        case 80:
                            measuredHeight = (i10 - paddingBottom) - childAt.getMeasuredHeight();
                            int measuredHeight3 = paddingBottom + childAt.getMeasuredHeight();
                            i7 = paddingTop;
                            i8 = measuredHeight3;
                            break;
                        default:
                            measuredHeight = paddingTop;
                            int i17 = paddingBottom;
                            i7 = paddingTop;
                            i8 = i17;
                            break;
                    }
                    int i18 = iMax + scrollX;
                    childAt.layout(i18, measuredHeight, childAt.getMeasuredWidth() + i18, childAt.getMeasuredHeight() + measuredHeight);
                    i5 = i11 + 1;
                    i6 = i7;
                    paddingBottom = i8;
                } else {
                    i5 = i11;
                    i6 = paddingTop;
                }
            } else {
                i5 = i11;
                i6 = paddingTop;
            }
            i12++;
            paddingLeft = paddingLeft;
            paddingRight = paddingRight;
            paddingTop = i6;
            i11 = i5;
        }
        for (int i19 = 0; i19 < childCount; i19++) {
            View childAt2 = getChildAt(i19);
            if (childAt2.getVisibility() != 8) {
                z zVar2 = (z) childAt2.getLayoutParams();
                if (!zVar2.a && (yVarD = d()) != null) {
                    int i20 = ((int) (yVarD.e * i9)) + paddingLeft;
                    if (zVar2.d) {
                        zVar2.d = false;
                        childAt2.measure(View.MeasureSpec.makeMeasureSpec((int) (zVar2.c * ((i9 - paddingLeft) - paddingRight)), 1073741824), View.MeasureSpec.makeMeasureSpec((i10 - paddingTop) - paddingBottom, 1073741824));
                    }
                    childAt2.layout(i20, paddingTop, childAt2.getMeasuredWidth() + i20, childAt2.getMeasuredHeight() + paddingTop);
                }
            }
        }
        this.p = paddingTop;
        this.q = i10 - paddingBottom;
        this.U = i11;
        this.R = false;
    }

    /* JADX WARN: Code duplicated, block: B:53:0x010a A[PHI: r1
      0x010a: PHI (r1v18 int) = (r1v17 int), (r1v20 int) binds: [B:28:0x0088, B:30:0x008f] A[DONT_GENERATE, DONT_INLINE]] */
    @Override // android.view.View
    protected final void onMeasure(int i, int i2) {
        z zVar;
        z zVar2;
        int i3;
        int i4;
        int i5;
        setMeasuredDimension(getDefaultSize(0, i), getDefaultSize(0, i2));
        int measuredWidth = getMeasuredWidth();
        this.C = Math.min(measuredWidth / 10, this.B);
        int paddingLeft = (measuredWidth - getPaddingLeft()) - getPaddingRight();
        int measuredHeight = (getMeasuredHeight() - getPaddingTop()) - getPaddingBottom();
        int childCount = getChildCount();
        for (int i6 = 0; i6 < childCount; i6++) {
            View childAt = getChildAt(i6);
            if (childAt.getVisibility() != 8 && (zVar2 = (z) childAt.getLayoutParams()) != null && zVar2.a) {
                int i7 = zVar2.b & 7;
                int i8 = zVar2.b & 112;
                int i9 = Integer.MIN_VALUE;
                int i10 = Integer.MIN_VALUE;
                boolean z = i8 == 48 || i8 == 80;
                boolean z2 = i7 == 3 || i7 == 5;
                if (z) {
                    i9 = 1073741824;
                } else if (z2) {
                    i10 = 1073741824;
                }
                if (zVar2.width != -2) {
                    i3 = 1073741824;
                    i4 = zVar2.width != -1 ? zVar2.width : paddingLeft;
                } else {
                    i3 = i9;
                    i4 = paddingLeft;
                }
                if (zVar2.height != -2) {
                    i10 = 1073741824;
                    if (zVar2.height != -1) {
                        i5 = zVar2.height;
                    } else {
                        i5 = measuredHeight;
                    }
                } else {
                    i5 = measuredHeight;
                }
                childAt.measure(View.MeasureSpec.makeMeasureSpec(i4, i3), View.MeasureSpec.makeMeasureSpec(i5, i10));
                if (z) {
                    measuredHeight -= childAt.getMeasuredHeight();
                } else if (z2) {
                    paddingLeft -= childAt.getMeasuredWidth();
                }
            }
        }
        this.t = View.MeasureSpec.makeMeasureSpec(paddingLeft, 1073741824);
        this.u = View.MeasureSpec.makeMeasureSpec(measuredHeight, 1073741824);
        this.v = true;
        c();
        this.v = false;
        int childCount2 = getChildCount();
        for (int i11 = 0; i11 < childCount2; i11++) {
            View childAt2 = getChildAt(i11);
            if (childAt2.getVisibility() != 8 && ((zVar = (z) childAt2.getLayoutParams()) == null || !zVar.a)) {
                childAt2.measure(View.MeasureSpec.makeMeasureSpec((int) (zVar.c * paddingLeft), 1073741824), this.u);
            }
        }
    }

    @Override // android.view.ViewGroup
    protected final boolean onRequestFocusInDescendants(int i, Rect rect) {
        int i2;
        y yVarD;
        int i3 = -1;
        int childCount = getChildCount();
        if ((i & 2) != 0) {
            i3 = 1;
            i2 = 0;
        } else {
            i2 = childCount - 1;
            childCount = -1;
        }
        while (i2 != childCount) {
            View childAt = getChildAt(i2);
            if (childAt.getVisibility() == 0 && (yVarD = d()) != null && yVarD.b == this.h && childAt.requestFocus(i, rect)) {
                return true;
            }
            i2 += i3;
        }
        return false;
    }

    @Override // android.view.View
    public final void onRestoreInstanceState(Parcelable parcelable) {
        if (!(parcelable instanceof SavedState)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        SavedState savedState = (SavedState) parcelable;
        super.onRestoreInstanceState(savedState.getSuperState());
        if (this.g == null) {
            this.i = savedState.a;
            this.j = savedState.b;
            this.k = savedState.c;
        } else {
            i iVar = this.g;
            Parcelable parcelable2 = savedState.b;
            ClassLoader classLoader = savedState.c;
            a(savedState.a, false, true);
        }
    }

    @Override // android.view.View
    public final Parcelable onSaveInstanceState() {
        SavedState savedState = new SavedState(super.onSaveInstanceState());
        savedState.a = this.h;
        if (this.g != null) {
            i iVar = this.g;
            savedState.b = null;
        }
        return savedState;
    }

    @Override // android.view.View
    protected final void onSizeChanged(int i, int i2, int i3, int i4) {
        super.onSizeChanged(i, i2, i3, i4);
        if (i != i3) {
            a(i, i3, this.n, this.n);
        }
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        int iMax;
        boolean zC = false;
        if (this.O) {
            return true;
        }
        if (motionEvent.getAction() == 0 && motionEvent.getEdgeFlags() != 0) {
            return false;
        }
        if (this.g == null || this.g.a() == 0) {
            return false;
        }
        if (this.J == null) {
            this.J = VelocityTracker.obtain();
        }
        this.J.addMovement(motionEvent);
        switch (motionEvent.getAction() & 255) {
            case 0:
                this.l.abortAnimation();
                this.x = false;
                c();
                this.z = true;
                setScrollState(1);
                float x = motionEvent.getX();
                this.G = x;
                this.E = x;
                float y = motionEvent.getY();
                this.H = y;
                this.F = y;
                this.I = e.b(motionEvent, 0);
                break;
            case 1:
                if (this.z) {
                    VelocityTracker velocityTracker = this.J;
                    velocityTracker.computeCurrentVelocity(1000, this.L);
                    int iA = (int) j.a(velocityTracker, this.I);
                    this.x = true;
                    int width = getWidth();
                    int scrollX = getScrollX();
                    y yVarG = g();
                    int i = yVarG.b;
                    float f = ((scrollX / width) - yVarG.e) / yVarG.d;
                    if (Math.abs((int) (e.c(motionEvent, e.a(motionEvent, this.I)) - this.G)) <= this.M || Math.abs(iA) <= this.K) {
                        iMax = (int) (i + f + (i >= this.h ? 0.4f : 0.6f));
                    } else {
                        if (iA <= 0) {
                            i++;
                        }
                        iMax = i;
                    }
                    if (this.d.size() > 0) {
                        iMax = Math.max(((y) this.d.get(0)).b, Math.min(iMax, ((y) this.d.get(this.d.size() - 1)).b));
                    }
                    a(iMax, true, true, iA);
                    this.I = -1;
                    h();
                    zC = this.P.c() | this.Q.c();
                }
                break;
            case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                if (!this.z) {
                    int iA2 = e.a(motionEvent, this.I);
                    float fC = e.c(motionEvent, iA2);
                    float fAbs = Math.abs(fC - this.E);
                    float fD = e.d(motionEvent, iA2);
                    float fAbs2 = Math.abs(fD - this.F);
                    if (fAbs > this.D && fAbs > fAbs2) {
                        this.z = true;
                        this.E = fC - this.G > 0.0f ? this.G + this.D : this.G - this.D;
                        this.F = fD;
                        setScrollState(1);
                        setScrollingCacheEnabled(true);
                    }
                }
                if (this.z) {
                    zC = a(e.c(motionEvent, e.a(motionEvent, this.I))) | false;
                }
                break;
            case com.dualboot.h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                if (this.z) {
                    a(this.h, true, 0, false);
                    this.I = -1;
                    h();
                    zC = this.P.c() | this.Q.c();
                }
                break;
            case com.dualboot.h.TextViewHeaderImg_img_corner_radius /* 5 */:
                int iA3 = e.a(motionEvent);
                this.E = e.c(motionEvent, iA3);
                this.I = e.b(motionEvent, iA3);
                break;
            case com.dualboot.h.TextViewHeaderImg_img_stroke_enabled /* 6 */:
                a(motionEvent);
                this.E = e.c(motionEvent, e.a(motionEvent, this.I));
                break;
        }
        if (zC) {
            n.b(this);
        }
        return true;
    }

    @Override // android.view.ViewGroup, android.view.ViewManager
    public final void removeView(View view) {
        if (this.v) {
            removeViewInLayout(view);
        } else {
            super.removeView(view);
        }
    }

    public final void setAdapter(i iVar) {
        if (this.g != null) {
            this.g.a.unregisterObserver(this.m);
            i iVar2 = this.g;
            for (int i = 0; i < this.d.size(); i++) {
                y yVar = (y) this.d.get(i);
                i iVar3 = this.g;
                int i2 = yVar.b;
                Object obj = yVar.a;
                i.b();
            }
            i iVar4 = this.g;
            this.d.clear();
            int i3 = 0;
            while (i3 < getChildCount()) {
                if (!((z) getChildAt(i3).getLayoutParams()).a) {
                    removeViewAt(i3);
                    i3--;
                }
                i3++;
            }
            this.h = 0;
            scrollTo(0, 0);
        }
        i iVar5 = this.g;
        this.g = iVar;
        if (this.g != null) {
            if (this.m == null) {
                this.m = new ad(this, (byte) 0);
            }
            this.g.a.registerObserver(this.m);
            this.x = false;
            this.R = true;
            if (this.i >= 0) {
                i iVar6 = this.g;
                Parcelable parcelable = this.j;
                ClassLoader classLoader = this.k;
                a(this.i, false, true);
                this.i = -1;
                this.j = null;
                this.k = null;
            } else {
                c();
            }
        }
        if (this.Z == null || iVar5 == iVar) {
            return;
        }
        aa aaVar = this.Z;
    }

    final void setChildrenDrawingOrderEnabledCompat(boolean z) {
        if (this.ab == null) {
            try {
                this.ab = ViewGroup.class.getDeclaredMethod("setChildrenDrawingOrderEnabled", Boolean.TYPE);
            } catch (NoSuchMethodException e) {
                Log.e("ViewPager", "Can't find setChildrenDrawingOrderEnabled", e);
            }
        }
        try {
            this.ab.invoke(this, Boolean.valueOf(z));
        } catch (Exception e2) {
            Log.e("ViewPager", "Error changing children drawing order", e2);
        }
    }

    public final void setCurrentItem(int i) {
        this.x = false;
        a(i, !this.R, false);
    }

    public final void setOffscreenPageLimit(int i) {
        if (i <= 0) {
            Log.w("ViewPager", "Requested offscreen page limit " + i + " too small; defaulting to 1");
            i = 1;
        }
        if (i != this.y) {
            this.y = i;
            c();
        }
    }

    final void setOnAdapterChangeListener(aa aaVar) {
        this.Z = aaVar;
    }

    public final void setOnPageChangeListener(ab abVar) {
        this.V = abVar;
    }

    public final void setPageMargin(int i) {
        int i2 = this.n;
        this.n = i;
        int width = getWidth();
        a(width, width, i, i2);
        requestLayout();
    }

    public final void setPageMarginDrawable(int i) {
        setPageMarginDrawable(getContext().getResources().getDrawable(i));
    }

    public final void setPageMarginDrawable(Drawable drawable) {
        this.o = drawable;
        if (drawable != null) {
            refreshDrawableState();
        }
        setWillNotDraw(drawable == null);
        invalidate();
    }

    @Override // android.view.View
    protected final boolean verifyDrawable(Drawable drawable) {
        return super.verifyDrawable(drawable) || drawable == this.o;
    }
}
