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
import android.view.FocusFinder;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.SoundEffectConstants;
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
    private static final int[] a = null;
    private static final af ae = null;
    private static final Comparator b = null;
    private static final Interpolator c = null;
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

    public class SavedState extends View.BaseSavedState {
        public static final Parcelable.Creator CREATOR = null;
        int a;
        Parcelable b;
        ClassLoader c;

        static {
            ae r0 = new ae();
            if (Build.VERSION.SDK_INT < 13) goto L5;
            new android.support.v4.b.d(r0);
        L5:
            CREATOR = new android.support.v4.b.b(r0);
        }

        SavedState(Parcel r2, ClassLoader r3) {
            super(r2);
            if (r3 != null) goto L5;
            r3 = getClass().getClassLoader();
        L5:
            this.a = r2.readInt();
            this.b = r2.readParcelable(r3);
            this.c = r3;
        }

        public SavedState(Parcelable r1) {
            super(r1);
        }

        public String toString() {
            return "FragmentPager.SavedState{" + Integer.toHexString(System.identityHashCode(this)) + " position=" + this.a + "}";
        }

        @Override // android.view.View.BaseSavedState, android.view.AbsSavedState, android.os.Parcelable
        public void writeToParcel(Parcel r2, int r3) {
            super.writeToParcel(r2, r3);
            r2.writeInt(this.a);
            r2.writeParcelable(this.b, r3);
        }
    }

    static {
        a = new int[]{R.attr.layout_gravity};
        b = new v();
        c = new w();
        ae = new af();
    }

    private Rect a(Rect r5, View r6) {
        if (r5 != null) goto L14;
        Rect r1 = new Rect();
    L5:
        if (r6 != null) goto L8;
        r1.set(0, 0, 0, 0);
        return r1;
    L8:
        r1.left = r6.getLeft();
        r1.right = r6.getRight();
        r1.top = r6.getTop();
        r1.bottom = r6.getBottom();
        ViewParent r0 = r6.getParent();
    L10:
        if ((r0 instanceof ViewGroup) == false) goto L17;
        if (r0 == this) goto L17;
        ViewGroup r2 = (ViewGroup) r0;
        r1.left += r2.getLeft();
        r1.right += r2.getRight();
        r1.top += r2.getTop();
        r1.bottom += r2.getBottom();
        r0 = r2.getParent();
    L17:
        return r1;
    L14:
        r1 = r5;
        goto L5
    }

    private y a(int r3) {
        new y().b = r3;
        i r0 = this.g;
        throw new UnsupportedOperationException("Required method instantiateItem was not overridden");
    }

    private y a(View r3) {
    L2:
        Object r0 = r3.getParent();
        if (r0 == this) goto L14;
        if (r0 == null) goto L7;
        if ((r0 instanceof View) == false) goto L7;
        r3 = (View) r0;
    L7:
        return null;
    L14:
        return d();
    }

    private void a(int r7, int r8, int r9, int r10) {
        if (r8 > 0) goto L5;
    L10:
        y r0 = c(this.h);
        if (r0 == null) goto L16;
        float r1 = Math.min(r0.e, this.s);
    L13:
        int r2 = (int) (r1 * r7);
        if (r2 == getScrollX()) goto L18;
        a(false);
        scrollTo(r2, getScrollY());
        return;
    L18:
        return;
    L16:
        r1 = 0.0f;
        goto L13
    L5:
        if (this.d.isEmpty() == true) goto L10;
        int r3 = (int) ((r7 + r9) * (getScrollX() / (r8 + r10)));
        scrollTo(r3, getScrollY());
        if (this.l.isFinished() == true) goto L17;
        this.l.startScroll(r3, 0, (int) (c(this.h).e * r7), 0, this.l.getDuration() - this.l.timePassed());
        return;
    }

    private void a(int r13, boolean r14, int r15, boolean r16) {
        y r1 = c(r13);
        int r0 = 0;
        if (r1 == null) goto L5;
        r0 = (int) (getWidth() * Math.max(this.r, Math.min(r1.e, this.s)));
    L5:
        if (r14 == true) goto L7;
        if (r16 == true) goto L29;
    L31:
        if (r16 == true) goto L33;
    L35:
        a(false);
        scrollTo(r0, 0);
        return;
    L33:
        if (this.W == null) goto L35;
        ab r2 = this.W;
        goto L35
    L29:
        if (this.V == null) goto L31;
        ab r3 = this.V;
        goto L31
    L7:
        if (getChildCount() != 0) goto L18;
        setScrollingCacheEnabled(false);
    L9:
        if (r16 == true) goto L11;
    L13:
        if (r16 == true) goto L15;
        return;
    L15:
        if (this.W == null) goto L37;
        ab r4 = this.W;
        return;
    L37:
        return;
    L11:
        if (this.V == null) goto L13;
        ab r5 = this.V;
        goto L13
    L18:
        int r6 = getScrollX();
        int r7 = getScrollY();
        int r8 = r0 - r6;
        int r9 = 0 - r7;
        if (r8 != 0) goto L22;
        if (r9 != 0) goto L22;
        a(false);
        c();
        setScrollState(0);
    L22:
        setScrollingCacheEnabled(true);
        setScrollState(2);
        int r10 = getWidth();
        int r11 = r10 / 2;
        float r12 = r11;
        float r17 = (r11 * ((float) Math.sin((float) (((double) (Math.min(1.0f, (1.0f * Math.abs(r8)) / r10) - 0.5f)) * 0.4712389167638204d)))) + r12;
        int r18 = Math.abs(r15);
        if (r18 <= 0) goto L26;
        int r19 = Math.round(1000.0f * Math.abs(r17 / r18)) * 4;
    L25:
        this.l.startScroll(r6, r7, r8, r9, Math.min(r19, 600));
        n.b(this);
        goto L9
    L26:
        i r20 = this.g;
        int r21 = this.h;
        r19 = (int) (((Math.abs(r8) / ((r10 * 1.0f) + this.n)) + 1.0f) * 100.0f);
        goto L25
    }

    private void a(int r2, boolean r3, boolean r4) {
        a(r2, r3, r4, 0);
    }

    private void a(int r5, boolean r6, boolean r7, int r8) {
        boolean r1 = false;
        if (this.g != null) goto L5;
    L6:
        setScrollingCacheEnabled(false);
        return;
    L5:
        if (this.g.a() <= 0) goto L6;
        if (r7 == false) goto L10;
    L14:
        if (r5 >= 0) goto L25;
        r5 = 0;
    L16:
        int r0 = this.y;
        if (r5 <= (this.h + r0)) goto L19;
    L20:
        int r2 = 0;
    L22:
        if (r2 >= this.d.size()) goto L28;
        ((y) this.d.get(r2)).c = true;
        r2 = r2 + 1;
    L28:
        if (this.h == r5) goto L30;
        r1 = true;
    L30:
        b(r5);
        a(r5, r6, r8, r1);
        return;
    L19:
        if (r5 >= (this.h - r0)) goto L28;
    L25:
        if (r5 < this.g.a()) goto L16;
        r5 = this.g.a() - 1;
        goto L16
    L10:
        if (this.h != r5) goto L14;
        if (this.d.size() == 0) goto L14;
        setScrollingCacheEnabled(false);
    }

    private void a(MotionEvent r4) {
        int r0 = e.a(r4);
        if (e.b(r4, r0) != this.I) goto L11;
        if (r0 != 0) goto L10;
        int r1 = 1;
    L6:
        this.E = e.c(r4, r1);
        this.I = e.b(r4, r1);
        if (this.J == null) goto L12;
        this.J.clear();
        return;
    L12:
        return;
    L10:
        r1 = 0;
        goto L6
    }

    private void a(boolean r8) {
        if (this.ag != 2) goto L17;
        boolean r0 = true;
    L5:
        if (r0 == false) goto L10;
        setScrollingCacheEnabled(false);
        this.l.abortAnimation();
        int r1 = getScrollX();
        int r3 = getScrollY();
        int r5 = this.l.getCurrX();
        int r6 = this.l.getCurrY();
        if (r1 != r5) goto L9;
        if (r3 == r6) goto L10;
    L9:
        scrollTo(r5, r6);
    L10:
        this.x = false;
        int r2 = 0;
        boolean r4 = r0;
    L12:
        if (r2 >= this.d.size()) goto L18;
        y r7 = (y) this.d.get(r2);
        if (r7.c == false) goto L16;
        r7.c = false;
        r4 = true;
    L16:
        r2 = r2 + 1;
        goto L12
    L18:
        if (r4 == false) goto L26;
        if (r8 == false) goto L22;
        n.a(this, this.af);
        return;
    L22:
        this.af.run();
        return;
    L26:
        return;
    L17:
        r0 = false;
        goto L5
    }

    private boolean a(float r11) {
        boolean r3 = true;
        boolean r2 = false;
        float r0 = this.E - r11;
        this.E = r11;
        float r5 = getScrollX() + r0;
        int r7 = getWidth();
        float r4 = r7 * this.r;
        float r6 = r7 * this.s;
        y r1 = (y) this.d.get(0);
        y r8 = (y) this.d.get(this.d.size() - 1);
        if (r1.b == 0) goto L21;
        r4 = r1.e * r7;
        boolean r9 = false;
    L6:
        if (r8.b == (this.g.a() - 1)) goto L20;
        float r10 = r8.e * r7;
        r3 = false;
    L9:
        if (r5 >= r4) goto L15;
        if (r9 == false) goto L12;
        r2 = this.P.a(Math.abs(r4 - r5) / r7);
    L12:
        this.E += r4 - ((int) r4);
        scrollTo((int) r4, getScrollY());
        e();
        return r2;
    L15:
        if (r5 <= r10) goto L19;
        if (r3 == false) goto L18;
        r2 = this.Q.a(Math.abs(r5 - r10) / r7);
    L18:
        r4 = r10;
        goto L12
    L19:
        r4 = r5;
        goto L12
    L20:
        r10 = r6;
        goto L9
    L21:
        r9 = true;
        goto L6
    }

    private boolean a(View r11, boolean r12, int r13, int r14, int r15) {
        if ((r11 instanceof ViewGroup) == false) goto L18;
        ViewGroup r6 = (ViewGroup) r11;
        int r8 = r11.getScrollX();
        int r9 = r11.getScrollY();
        int r7 = r6.getChildCount() - 1;
    L5:
        if (r7 < 0) goto L18;
        View r1 = r6.getChildAt(r7);
        if ((r14 + r8) < r1.getLeft()) goto L17;
        if ((r14 + r8) >= r1.getRight()) goto L17;
        if ((r15 + r9) < r1.getTop()) goto L17;
        if ((r15 + r9) >= r1.getBottom()) goto L17;
        if (a(r1, true, r13, (r14 + r8) - r1.getLeft(), (r15 + r9) - r1.getTop()) == false) goto L17;
        return true;
    L17:
        r7 = r7 - 1;
    L18:
        if (r12 == true) goto L20;
    L21:
        return false;
    L20:
        if (n.a(r11, -r13) == false) goto L21;
        return true;
    }

    private void b(int r15) {
        if (this.h == r15) goto L203;
        y r0 = c(this.h);
        this.h = r15;
        y r1 = r0;
    L6:
        if (this.g != null) goto L9;
        return;
    L9:
        if (this.x == false) goto L11;
        return;
    L11:
        if (getWindowToken() == null) goto L255;
        i r2 = this.g;
        int r3 = this.y;
        int r7 = Math.max(0, this.h - r3);
        int r8 = this.g.a();
        int r9 = Math.min(r8 - 1, r3 + this.h);
        int r4 = 0;
    L13:
        int r5 = r4;
        if (r5 >= this.d.size()) goto L202;
        y r6 = (y) this.d.get(r5);
        if (r6.b >= this.h) goto L18;
        r4 = r5 + 1;
        goto L13
    L18:
        if (r6.b != this.h) goto L202;
    L19:
        if (r6 != null) goto L201;
        if (r8 <= 0) goto L201;
        y r10 = a(this.h);
    L22:
        if (r10 == null) goto L155;
        int r11 = r5 - 1;
        if (r11 < 0) goto L41;
        y r12 = (y) this.d.get(r11);
    L26:
        float r13 = 2.0f - r10.d;
        float r14 = 0.0f;
        int r16 = this.h - 1;
        int r17 = r5;
        int r18 = r11;
    L27:
        if (r16 < 0) goto L54;
        if (r14 < r13) goto L43;
        if (r16 >= r7) goto L43;
        if (r12 == null) goto L54;
        if (r16 != r12.b) goto L39;
        if (r12.c == true) goto L39;
        this.d.remove(r18);
        i r19 = this.g;
        Object r20 = r12.a;
        i.b();
        r18 = r18 - 1;
        r17 = r17 - 1;
        if (r18 < 0) goto L42;
        r12 = (y) this.d.get(r18);
        goto L39
    L42:
        r12 = null;
    L39:
        r16 = r16 - 1;
    L43:
        if (r12 != null) goto L45;
    L50:
        r14 = r14 + a(r16).d;
        r17 = r17 + 1;
        if (r18 < 0) goto L53;
        r12 = (y) this.d.get(r18);
        goto L39
    L53:
        r12 = null;
        goto L39
    L45:
        if (r16 != r12.b) goto L50;
        r14 = r14 + r12.d;
        r18 = r18 - 1;
        if (r18 < 0) goto L49;
        r12 = (y) this.d.get(r18);
        goto L39
    L49:
        r12 = null;
    L54:
        float r21 = r10.d;
        int r22 = r17 + 1;
        if (r21 < 2.0f) goto L57;
    L89:
        int r23 = this.g.a();
        int r24 = getWidth();
        if (r24 <= 0) goto L106;
        float r25 = this.n / r24;
    L92:
        if (r1 == null) goto L126;
        int r26 = r1.b;
        if (r26 >= r10.b) goto L112;
        float r27 = (r1.d + r1.e) + r25;
        int r28 = r26 + 1;
        int r29 = 0;
    L97:
        if (r28 > r10.b) goto L126;
        if (r29 >= this.d.size()) goto L126;
        Object r30 = this.d.get(r29);
    L101:
        y r31 = (y) r30;
        if (r28 <= r31.b) goto L108;
        if (r29 >= (this.d.size() - 1)) goto L108;
        r29 = r29 + 1;
        r30 = this.d.get(r29);
    L108:
        if (r28 >= r31.b) goto L110;
        i r32 = this.g;
        r27 = r27 + (1.0f + r25);
        r28 = r28 + 1;
        goto L108
    L110:
        r31.e = r27;
        r27 = r27 + (r31.d + r25);
        r28 = r28 + 1;
        goto L97
    L112:
        if (r26 <= r10.b) goto L126;
        int r33 = this.d.size() - 1;
        float r34 = r1.e;
        int r35 = r26 - 1;
        int r36 = r33;
    L115:
        if (r35 < r10.b) goto L126;
        if (r36 < 0) goto L126;
        Object r37 = this.d.get(r36);
    L118:
        y r38 = (y) r37;
        if (r35 >= r38.b) goto L123;
        if (r36 <= 0) goto L123;
        r36 = r36 - 1;
        r37 = this.d.get(r36);
    L123:
        if (r35 <= r38.b) goto L125;
        i r39 = this.g;
        r34 = r34 - (1.0f + r25);
        r35 = r35 - 1;
        goto L123
    L125:
        r34 = r34 - (r38.d + r25);
        r38.e = r34;
        r35 = r35 - 1;
    L126:
        int r40 = this.d.size();
        float r41 = r10.e;
        int r42 = r10.b - 1;
        if (r10.b != 0) goto L138;
        float r43 = r10.e;
    L129:
        this.r = r43;
        if (r10.b != (r23 - 1)) goto L139;
        float r44 = (r10.e + r10.d) - 1.0f;
    L132:
        this.s = r44;
        int r45 = r17 - 1;
    L133:
        if (r45 < 0) goto L144;
        y r46 = (y) this.d.get(r45);
    L136:
        if (r42 <= r46.b) goto L140;
        i r47 = this.g;
        r42 = r42 - 1;
        r41 = r41 - (1.0f + r25);
        goto L136
    L140:
        r41 = r41 - (r46.d + r25);
        r46.e = r41;
        if (r46.b != 0) goto L143;
        this.r = r41;
    L143:
        r42 = r42 - 1;
        r45 = r45 - 1;
        goto L133
    L144:
        float r48 = (r10.e + r10.d) + r25;
        int r49 = r10.b + 1;
        int r50 = r17 + 1;
    L145:
        if (r50 >= r40) goto L154;
        y r51 = (y) this.d.get(r50);
    L148:
        if (r49 >= r51.b) goto L151;
        i r52 = this.g;
        r49 = r49 + 1;
        r48 = r48 + (1.0f + r25);
        goto L148
    L151:
        if (r51.b != (r23 - 1)) goto L153;
        this.s = (r51.d + r48) - 1.0f;
    L153:
        r51.e = r48;
        r48 = r48 + (r51.d + r25);
        r49 = r49 + 1;
        r50 = r50 + 1;
        goto L145
    L154:
        this.S = false;
        goto L155
    L139:
        r44 = Float.MAX_VALUE;
        goto L132
    L138:
        r43 = -3.4028235E38f;
        goto L129
    L106:
        r25 = 0.0f;
        goto L92
    L57:
        if (r22 >= this.d.size()) goto L74;
        y r53 = (y) this.d.get(r22);
    L59:
        int r54 = this.h + 1;
    L60:
        if (r54 >= r8) goto L89;
        if (r21 < 2.0f) goto L76;
        if (r54 <= r9) goto L76;
        if (r53 == null) goto L89;
        if (r54 != r53.b) goto L73;
        if (r53.c == true) goto L73;
        this.d.remove(r22);
        i r55 = this.g;
        Object r56 = r53.a;
        i.b();
        if (r22 >= this.d.size()) goto L75;
        r53 = (y) this.d.get(r22);
        goto L73
    L75:
        r53 = null;
    L73:
        r54 = r54 + 1;
        r53 = r53;
        r21 = r21;
    L76:
        if (r53 != null) goto L78;
    L84:
        r22 = r22 + 1;
        r21 = r21 + a(r54).d;
        if (r22 >= this.d.size()) goto L88;
        r53 = (y) this.d.get(r22);
        goto L73
    L88:
        r53 = null;
        goto L73
    L78:
        if (r54 != r53.b) goto L84;
        r21 = r21 + r53.d;
        r22 = r22 + 1;
        if (r22 >= this.d.size()) goto L83;
        r53 = (y) this.d.get(r22);
        goto L73
    L83:
        r53 = null;
        goto L73
    L74:
        r53 = null;
        goto L59
    L41:
        r12 = null;
    L155:
        i r57 = this.g;
        int r58 = this.h;
        if (r10 == null) goto L158;
        Object r59 = r10.a;
    L158:
        i r60 = this.g;
        if (this.ac == 0) goto L177;
        boolean r61 = true;
    L161:
        if (r61 == true) goto L163;
    L165:
        int r62 = getChildCount();
        int r63 = 0;
    L166:
        if (r63 >= r62) goto L179;
        View r64 = getChildAt(r63);
        z r65 = (z) r64.getLayoutParams();
        r65.f = r63;
        if (r65.a == false) goto L170;
    L174:
        if (r61 == false) goto L176;
        this.ad.add(r64);
    L176:
        r63 = r63 + 1;
        goto L166
    L170:
        if (r65.c != 0.0f) goto L174;
        y r66 = d();
        if (r66 == null) goto L174;
        r65.c = r66.d;
        r65.e = r66.b;
        goto L174
    L179:
        if (r61 == false) goto L182;
        Collections.sort(this.ad, ae);
    L182:
        if (hasFocus() == false) goto L256;
        View r67 = findFocus();
        if (r67 == null) goto L199;
        y r68 = a(r67);
    L186:
        if (r68 != null) goto L188;
    L189:
        int r69 = 0;
    L191:
        if (r69 >= getChildCount()) goto L259;
        View r70 = getChildAt(r69);
        y r71 = d();
        if (r71 == null) goto L198;
        if (r71.b != this.h) goto L198;
        if (r70.requestFocus(2) == false) goto L198;
        return;
    L198:
        r69 = r69 + 1;
        goto L191
    L259:
        return;
    L188:
        if (r68.b != this.h) goto L189;
        return;
    L199:
        r68 = null;
        goto L186
    L256:
        return;
    L163:
        if (this.ad != null) goto L178;
        this.ad = new ArrayList();
        goto L165
    L178:
        this.ad.clear();
        goto L165
    L177:
        r61 = false;
    L201:
        r10 = r6;
    L202:
        r6 = null;
        goto L19
    L255:
        return;
    L203:
        r1 = null;
        goto L6
    }

    static /* synthetic */ int[] b() {
        return a;
    }

    private y c(int r4) {
        int r0 = 0;
    L3:
        int r1 = r0;
        if (r1 >= this.d.size()) goto L9;
        y r2 = (y) this.d.get(r1);
        if (r2.b == r4) goto L12;
        r0 = r1 + 1;
        goto L3
    L12:
        return r2;
    L9:
        return null;
    }

    private void c() {
        b(this.h);
    }

    private y d() {
        int r0 = 0;
    L3:
        int r1 = r0;
        if (r1 >= this.d.size()) goto L9;
        y r2 = (y) this.d.get(r1);
        i r3 = this.g;
        Object r4 = r2.a;
        if (r3.c() == true) goto L12;
        r0 = r1 + 1;
        goto L3
    L12:
        return r2;
    L9:
        return null;
    }

    private boolean d(int r7) {
        boolean r2 = false;
        View r0 = findFocus();
        if (r0 != this) goto L5;
        r0 = null;
    L5:
        View r3 = FocusFinder.getInstance().findNextFocus(this, r0, r7);
        if (r3 == null) goto L23;
        if (r3 == r0) goto L23;
        if (r7 != 17) goto L18;
        int r1 = a(this.f, r3).left;
        int r4 = a(this.f, r0).left;
        if (r0 == null) goto L17;
        if (r1 < r4) goto L17;
        boolean r5 = i();
    L13:
        r2 = r5;
    L14:
        if (r2 == false) goto L16;
        playSoundEffect(SoundEffectConstants.getContantForFocusDirection(r7));
    L16:
        return r2;
    L17:
        r5 = r3.requestFocus();
        goto L13
    L18:
        if (r7 != 66) goto L14;
        int r6 = a(this.f, r3).left;
        int r8 = a(this.f, r0).left;
        if (r0 == null) goto L22;
        if (r6 > r8) goto L22;
    L30:
        if (this.g != null) goto L32;
    L34:
        r5 = false;
        goto L13
    L32:
        if (this.h >= (this.g.a() - 1)) goto L34;
        setCurrentItem$2563266(this.h + 1);
        r5 = true;
    L22:
        r5 = r3.requestFocus();
    L23:
        if (r7 == 17) goto L25;
        if (r7 == 1) goto L25;
        if (r7 == 66) goto L30;
        if (r7 != 2) goto L14;
    L25:
        r5 = i();
        goto L13
    }

    private boolean e() {
        if (this.d.size() != 0) goto L8;
        this.T = false;
        f();
        if (this.T == false) goto L7;
        return false;
    L7:
        throw new IllegalStateException("onPageScrolled did not call superclass implementation");
    L8:
        y r1 = g();
        getWidth();
        int r2 = this.n;
        int r3 = this.n;
        int r4 = r1.b;
        float r5 = r1.e;
        float r6 = r1.d;
        this.T = false;
        f();
        if (this.T == false) goto L11;
        return true;
    L11:
        throw new IllegalStateException("onPageScrolled did not call superclass implementation");
    }

    private void f() {
        if (this.U <= 0) goto L19;
        int r5 = getScrollX();
        int r1 = getPaddingLeft();
        int r2 = getPaddingRight();
        int r6 = getWidth();
        int r7 = getChildCount();
        int r4 = 0;
    L5:
        if (r4 >= r7) goto L19;
        View r8 = getChildAt(r4);
        z r0 = (z) r8.getLayoutParams();
        if (r0.a == true) goto L9;
        int r10 = r2;
        int r3 = r1;
        int r9 = r10;
    L14:
        r4 = r4 + 1;
        int r11 = r9;
        r1 = r3;
        r2 = r11;
        goto L5
    L9:
        switch((r0.b & 7)) {
            case 1: goto L16;
            case 2: goto L10;
            case 3: goto L15;
            case 4: goto L10;
            case 5: goto L17;
            default: goto L10;
        };
    L10:
        int r12 = r1;
        int r13 = r2;
        r3 = r1;
        r9 = r13;
    L11:
        int r14 = (r12 + r5) - r8.getLeft();
        if (r14 == 0) goto L14;
        r8.offsetLeftAndRight(r14);
        goto L14
    L15:
        int r15 = r8.getWidth() + r1;
        int r16 = r1;
        r9 = r2;
        r3 = r15;
        r12 = r16;
        goto L11
    L16:
        r12 = Math.max((r6 - r8.getMeasuredWidth()) / 2, r1);
        int r17 = r2;
        r3 = r1;
        r9 = r17;
        goto L11
    L17:
        r12 = (r6 - r2) - r8.getMeasuredWidth();
        int r18 = r2 + r8.getMeasuredWidth();
        r3 = r1;
        r9 = r18;
    L19:
        if (this.V == null) goto L22;
        ab r19 = this.V;
    L22:
        if (this.W == null) goto L25;
        ab r20 = this.W;
    L25:
        if (this.aa == null) goto L32;
        getScrollX();
        int r21 = getChildCount();
        int r22 = 0;
    L27:
        if (r22 >= r21) goto L32;
        View r23 = getChildAt(r22);
        if (((z) r23.getLayoutParams()).a == true) goto L31;
        r23.getLeft();
        getWidth();
        ac r24 = this.aa;
    L31:
        r22 = r22 + 1;
    L32:
        this.T = true;
    }

    private y g() {
        int r1 = getWidth();
        if (r1 <= 0) goto L25;
        float r9 = getScrollX() / r1;
    L5:
        if (r1 <= 0) goto L26;
        float r2 = this.n / r1;
    L7:
        float r6 = 0.0f;
        float r7 = 0.0f;
        int r8 = -1;
        int r3 = 0;
        boolean r5 = true;
        y r4 = null;
    L9:
        if (r3 >= this.d.size()) goto L33;
        y r0 = (y) this.d.get(r3);
        if (r5 == false) goto L13;
    L28:
        int r10 = r3;
        y r11 = r0;
    L15:
        float r12 = r11.e;
        float r13 = (r11.d + r12) + r2;
        if (r5 == true) goto L20;
        if (r9 >= r12) goto L20;
        return r4;
    L20:
        if (r9 < r13) goto L24;
        if (r10 == (this.d.size() - 1)) goto L24;
        r7 = r12;
        r8 = r11.b;
        r5 = false;
        r6 = r11.d;
        r4 = r11;
        r3 = r10 + 1;
    L24:
        return r11;
    L13:
        if (r0.b == (r8 + 1)) goto L28;
        y r14 = this.e;
        r14.e = (r6 + r7) + r2;
        r14.b = r8 + 1;
        i r15 = this.g;
        int r16 = r14.b;
        r14.d = 1.0f;
        r10 = r3 - 1;
        r11 = r14;
        goto L15
    L33:
        return r4;
    L26:
        r2 = 0.0f;
        goto L7
    L25:
        r9 = 0.0f;
        goto L5
    }

    private void h() {
        this.z = false;
        this.A = false;
        if (this.J == null) goto L6;
        this.J.recycle();
        this.J = null;
        return;
    }

    private boolean i() {
        if (this.h <= 0) goto L6;
        setCurrentItem$2563266(this.h - 1);
        return true;
    L6:
        return false;
    }

    private void setCurrentItem$2563266(int r3) {
        this.x = false;
        a(r3, true, false);
    }

    private void setScrollState(int r7) {
        if (this.ag != r7) goto L5;
        return;
    L5:
        this.ag = r7;
        if (this.aa == null) goto L17;
        if (r7 == 0) goto L14;
        boolean r0 = true;
    L9:
        int r4 = getChildCount();
        int r3 = 0;
    L10:
        if (r3 >= r4) goto L17;
        if (r0 == false) goto L15;
        int r2 = 2;
    L13:
        n.b(getChildAt(r3), r2);
        r3 = r3 + 1;
        goto L10
    L15:
        r2 = 0;
        goto L13
    L14:
        r0 = false;
    L17:
        if (this.V == null) goto L22;
        ab r1 = this.V;
        return;
    }

    private void setScrollingCacheEnabled(boolean r2) {
        if (this.w == r2) goto L6;
        this.w = r2;
        return;
    }

    final void a() {
        if (this.d.size() < ((this.y * 2) + 1)) goto L5;
    L11:
        boolean r1 = false;
    L7:
        int r5 = this.h;
        int r4 = 0;
    L9:
        if (r4 >= this.d.size()) goto L12;
        y r0 = (y) this.d.get(r4);
        i r6 = this.g;
        Object r2 = r0.a;
        r4 = r4 + 1;
        goto L9
    L12:
        Collections.sort(this.d, b);
        if (r1 == false) goto L26;
        int r7 = getChildCount();
        int r3 = 0;
    L15:
        if (r3 >= r7) goto L20;
        z r8 = (z) getChildAt(r3).getLayoutParams();
        if (r8.a == true) goto L19;
        r8.c = 0.0f;
    L19:
        r3 = r3 + 1;
        goto L15
    L20:
        a(r5, false, true);
        requestLayout();
        return;
    L26:
        return;
    L5:
        if (this.d.size() >= this.g.a()) goto L11;
        r1 = true;
        goto L7
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void addFocusables(ArrayList r7, int r8, int r9) {
        int r1 = r7.size();
        int r2 = getDescendantFocusability();
        if (r2 == 393216) goto L16;
        int r0 = 0;
    L6:
        if (r0 >= getChildCount()) goto L16;
        View r3 = getChildAt(r0);
        if (r3.getVisibility() != 0) goto L14;
        y r4 = d();
        if (r4 == null) goto L14;
        if (r4.b != this.h) goto L14;
        r3.addFocusables(r7, r8, r9);
    L14:
        r0 = r0 + 1;
    L16:
        if (r2 != 262144) goto L20;
        if (r1 == r7.size()) goto L20;
        return;
    L20:
        if (isFocusable() == true) goto L23;
        return;
    L23:
        if ((r9 & 1) == 1) goto L25;
    L28:
        if (r7 == null) goto L37;
        r7.add(this);
        return;
    L37:
        return;
    L25:
        if (isInTouchMode() == false) goto L28;
        if (isFocusableInTouchMode() == true) goto L28;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void addTouchables(ArrayList r5) {
        int r0 = 0;
    L4:
        if (r0 >= getChildCount()) goto L13;
        View r1 = getChildAt(r0);
        if (r1.getVisibility() != 0) goto L12;
        y r2 = d();
        if (r2 == null) goto L12;
        if (r2.b != this.h) goto L12;
        r1.addTouchables(r5);
    L12:
        r0 = r0 + 1;
        goto L4
    }

    @Override // android.view.ViewGroup
    public final void addView(View r5, int r6, ViewGroup.LayoutParams r7) {
        if (checkLayoutParams(r7) == true) goto L15;
        ViewGroup.LayoutParams r1 = generateLayoutParams(r7);
    L5:
        z r0 = (z) r1;
        r0.a |= r5 instanceof x;
        if (this.v == false) goto L14;
        if (r0 != null) goto L9;
    L12:
        r0.d = true;
        addViewInLayout(r5, r6, r1);
        return;
    L9:
        if (r0.a == false) goto L12;
        throw new IllegalStateException("Cannot add pager decor view during layout");
    L14:
        super.addView(r5, r6, r1);
        return;
    L15:
        r1 = r7;
        goto L5
    }

    @Override // android.view.ViewGroup
    protected final boolean checkLayoutParams(ViewGroup.LayoutParams r2) {
        if ((r2 instanceof z) == true) goto L5;
    L8:
        return false;
    L5:
        if (super.checkLayoutParams(r2) == false) goto L8;
        return true;
    }

    @Override // android.view.View
    public final void computeScroll() {
        if (this.l.isFinished() == false) goto L5;
    L14:
        a(true);
        return;
    L5:
        if (this.l.computeScrollOffset() == false) goto L14;
        int r0 = getScrollX();
        int r1 = getScrollY();
        int r2 = this.l.getCurrX();
        int r3 = this.l.getCurrY();
        if (r0 != r2) goto L9;
        if (r1 != r3) goto L9;
    L12:
        n.b(this);
        return;
    L9:
        scrollTo(r2, r3);
        if (e() == true) goto L12;
        this.l.abortAnimation();
        scrollTo(0, r3);
        goto L12
    }

    @Override // android.view.ViewGroup, android.view.View
    public final boolean dispatchKeyEvent(KeyEvent r5) {
        if (super.dispatchKeyEvent(r5) == true) goto L11;
        if (r5.getAction() == 0) goto L7;
        boolean r2 = false;
    L9:
        if (r2 == true) goto L11;
        return false;
    L7:
        switch(r5.getKeyCode()) {
            case 21: goto L12;
            case 22: goto L13;
            case 61: goto L15;
            default: goto L22;
        };
    L12:
        r2 = d(17);
        goto L9
    L13:
        r2 = d(66);
        goto L9
    L22:
        r2 = false;
        goto L9
    L15:
        if (Build.VERSION.SDK_INT >= 11) goto L17;
        r2 = false;
        goto L9
    L17:
        if (a.b(r5) == false) goto L20;
        r2 = d(2);
        goto L9
    L20:
        if (a.a(r5) == false) goto L24;
        r2 = d(1);
        goto L9
    L24:
        r2 = false;
    L11:
        return true;
    }

    @Override // android.view.View
    public final boolean dispatchPopulateAccessibilityEvent(AccessibilityEvent r7) {
        int r2 = getChildCount();
        int r1 = 0;
    L3:
        if (r1 >= r2) goto L21;
        View r3 = getChildAt(r1);
        if (r3.getVisibility() != 0) goto L14;
        y r4 = d();
        if (r4 == null) goto L14;
        if (r4.b != this.h) goto L14;
        if (r3.dispatchPopulateAccessibilityEvent(r7) == false) goto L14;
        return true;
    L14:
        r1 = r1 + 1;
        goto L3
    L21:
        return false;
    }

    @Override // android.view.View
    public final void draw(Canvas r8) {
        super.draw(r8);
        boolean r0 = false;
        int r1 = n.a(this);
        if (r1 == 0) goto L10;
        if (r1 == 1) goto L6;
    L18:
        this.P.b();
        this.Q.b();
    L15:
        if (r0 == false) goto L19;
        n.b(this);
        return;
    L19:
        return;
    L6:
        if (this.g == null) goto L18;
        if (this.g.a() <= 1) goto L18;
    L10:
        if (this.P.a() == true) goto L13;
        int r2 = r8.save();
        int r3 = (getHeight() - getPaddingTop()) - getPaddingBottom();
        int r4 = getWidth();
        r8.rotate(270.0f);
        r8.translate((-r3) + getPaddingTop(), this.r * r4);
        this.P.a(r3, r4);
        r0 = this.P.a(r8) | false;
        r8.restoreToCount(r2);
    L13:
        if (this.Q.a() == true) goto L15;
        int r5 = r8.save();
        int r6 = getWidth();
        int r7 = (getHeight() - getPaddingTop()) - getPaddingBottom();
        r8.rotate(90.0f);
        r8.translate(-getPaddingTop(), (-(this.s + 1.0f)) * r6);
        this.Q.a(r7, r6);
        r0 = r0 | this.Q.a(r8);
        r8.restoreToCount(r5);
        goto L15
    }

    @Override // android.view.ViewGroup, android.view.View
    protected final void drawableStateChanged() {
        super.drawableStateChanged();
        Drawable r0 = this.o;
        if (r0 != null) goto L5;
        return;
    L5:
        if (r0.isStateful() == false) goto L9;
        r0.setState(getDrawableState());
        return;
    }

    @Override // android.view.ViewGroup
    protected final ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return new z();
    }

    @Override // android.view.ViewGroup
    public final ViewGroup.LayoutParams generateLayoutParams(AttributeSet r3) {
        return new z(getContext(), r3);
    }

    @Override // android.view.ViewGroup
    protected final ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams r2) {
        return generateDefaultLayoutParams();
    }

    public final i getAdapter() {
        return this.g;
    }

    @Override // android.view.ViewGroup
    protected final int getChildDrawingOrder(int r3, int r4) {
        if (this.ac != 2) goto L6;
        r4 = (r3 - 1) - r4;
    L6:
        return ((z) ((View) this.ad.get(r4)).getLayoutParams()).f;
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
    protected final void onDraw(Canvas r17) {
        super.onDraw(r17);
        if (this.n > 0) goto L5;
        return;
    L5:
        if (this.o != null) goto L7;
        return;
    L7:
        if (this.d.size() > 0) goto L9;
        return;
    L9:
        if (this.g == null) goto L33;
        int r6 = getScrollX();
        int r7 = getWidth();
        float r8 = this.n / r7;
        y r1 = (y) this.d.get(0);
        float r4 = r1.e;
        int r9 = this.d.size();
        int r3 = r1.b;
        int r10 = ((y) this.d.get(r9 - 1)).b;
        int r2 = 0;
        int r5 = r3;
    L11:
        if (r5 >= r10) goto L34;
    L13:
        if (r5 <= r1.b) goto L17;
        if (r2 >= r9) goto L17;
        r2 = r2 + 1;
        r1 = (y) this.d.get(r2);
    L17:
        if (r5 != r1.b) goto L25;
        float r11 = (r1.e + r1.d) * r7;
        r4 = (r1.e + r1.d) + r8;
    L20:
        if ((this.n + r11) <= r6) goto L23;
        this.o.setBounds((int) r11, this.p, (int) ((this.n + r11) + 0.5f), this.q);
        this.o.draw(r17);
    L23:
        if (r11 > (r6 + r7)) goto L35;
        r5 = r5 + 1;
        goto L11
    L35:
        return;
    L25:
        i r12 = this.g;
        r11 = (1.0f + r4) * r7;
        r4 = r4 + (1.0f + r8);
        goto L20
    L34:
        return;
    }

    @Override // android.view.ViewGroup
    public final boolean onInterceptTouchEvent(MotionEvent r14) {
        int r0 = r14.getAction() & 255;
        if (r0 == 3) goto L5;
        if (r0 == 1) goto L5;
        if (r0 != 0) goto L11;
    L15:
        switch(r0) {
            case 0: goto L55;
            case 2: goto L20;
            case 6: goto L61;
            default: goto L17;
        };
    L20:
        int r1 = this.I;
        if (r1 == (-1)) goto L17;
        int r2 = e.a(r14, r1);
        float r7 = e.c(r14, r2);
        float r8 = r7 - this.E;
        float r9 = Math.abs(r8);
        float r10 = e.d(r14, r2);
        float r11 = Math.abs(r10 - this.H);
        if (r8 == 0.0f) goto L39;
        float r3 = this.E;
        if (r3 >= this.C) goto L29;
        if (r8 <= 0.0f) goto L29;
    L32:
        boolean r4 = true;
    L33:
        if (r4 == true) goto L39;
        if (a(this, false, (int) r8, (int) r7, (int) r10) == false) goto L39;
        this.E = r7;
        this.F = r10;
        this.A = true;
        return false;
    L29:
        if (r3 > (getWidth() - this.C)) goto L31;
    L37:
        r4 = false;
        goto L33
    L31:
        if (r8 >= 0.0f) goto L37;
    L39:
        if (r9 <= this.D) goto L53;
        if ((0.5f * r9) <= r11) goto L53;
        this.z = true;
        setScrollState(1);
        if (r8 <= 0.0f) goto L51;
        float r5 = this.G + this.D;
    L45:
        this.E = r5;
        this.F = r10;
        setScrollingCacheEnabled(true);
    L47:
        if (this.z == false) goto L17;
        if (a(r7) == false) goto L17;
        n.b(this);
        goto L17
    L51:
        r5 = this.G - this.D;
    L53:
        if (r11 <= this.D) goto L47;
        this.A = true;
        goto L47
    L55:
        float r6 = r14.getX();
        this.G = r6;
        this.E = r6;
        float r12 = r14.getY();
        this.H = r12;
        this.F = r12;
        this.I = e.b(r14, 0);
        this.A = false;
        this.l.computeScrollOffset();
        if (this.ag == 2) goto L58;
    L60:
        a(false);
        this.z = false;
        goto L17
    L58:
        if (Math.abs(this.l.getFinalX() - this.l.getCurrX()) <= this.N) goto L60;
        this.l.abortAnimation();
        this.x = false;
        c();
        this.z = true;
        setScrollState(1);
        goto L17
    L61:
        a(r14);
    L17:
        if (this.J != null) goto L19;
        this.J = VelocityTracker.obtain();
    L19:
        this.J.addMovement(r14);
        return this.z;
    L11:
        if (this.z == false) goto L14;
        return true;
    L14:
        if (this.A == false) goto L15;
        return false;
    L5:
        this.z = false;
        this.A = false;
        this.I = -1;
        if (this.J == null) goto L62;
        this.J.recycle();
        this.J = null;
        return false;
    L62:
        return false;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected final void onLayout(boolean r18, int r19, int r20, int r21, int r22) {
        this.v = true;
        c();
        this.v = false;
        int r9 = getChildCount();
        int r10 = r21 - r19;
        int r11 = r22 - r20;
        int r6 = getPaddingLeft();
        int r2 = getPaddingTop();
        int r5 = getPaddingRight();
        int r3 = getPaddingBottom();
        int r12 = getScrollX();
        int r4 = 0;
        int r8 = 0;
    L3:
        if (r8 >= r9) goto L21;
        View r13 = getChildAt(r8);
        if (r13.getVisibility() == 8) goto L36;
        z r1 = (z) r13.getLayoutParams();
        if (r1.a == false) goto L36;
        int r7 = r1.b & 7;
        int r14 = r1.b & 112;
        switch(r7) {
            case 1: goto L16;
            case 2: goto L10;
            case 3: goto L15;
            case 4: goto L10;
            case 5: goto L17;
            default: goto L10;
        };
    L10:
        int r15 = r6;
    L11:
        switch(r14) {
            case 16: goto L19;
            case 48: goto L18;
            case 80: goto L20;
            default: goto L12;
        };
    L12:
        int r16 = r2;
        int r17 = r3;
        int r23 = r2;
        int r24 = r17;
    L13:
        int r25 = r15 + r12;
        r13.layout(r25, r16, r13.getMeasuredWidth() + r25, r13.getMeasuredHeight() + r16);
        int r26 = r4 + 1;
        int r27 = r23;
        r3 = r24;
    L14:
        int r28 = r5;
        r8 = r8 + 1;
        r6 = r6;
        r5 = r28;
        r2 = r27;
        r4 = r26;
        goto L3
    L18:
        int r29 = r13.getMeasuredHeight() + r2;
        int r110 = r2;
        r24 = r3;
        r23 = r29;
        r16 = r110;
        goto L13
    L19:
        r16 = Math.max((r11 - r13.getMeasuredHeight()) / 2, r2);
        int r111 = r3;
        r23 = r2;
        r24 = r111;
        goto L13
    L20:
        r16 = (r11 - r3) - r13.getMeasuredHeight();
        int r30 = r3 + r13.getMeasuredHeight();
        r23 = r2;
        r24 = r30;
        goto L13
    L15:
        r15 = r6;
        r6 = r13.getMeasuredWidth() + r6;
        goto L11
    L16:
        r15 = Math.max((r10 - r13.getMeasuredWidth()) / 2, r6);
        goto L11
    L17:
        int r31 = (r10 - r5) - r13.getMeasuredWidth();
        r5 = r5 + r13.getMeasuredWidth();
        r15 = r31;
    L36:
        r26 = r4;
        r27 = r2;
        goto L14
    L21:
        int r32 = 0;
    L22:
        if (r32 >= r9) goto L34;
        View r33 = getChildAt(r32);
        if (r33.getVisibility() == 8) goto L33;
        z r34 = (z) r33.getLayoutParams();
        if (r34.a == true) goto L33;
        y r112 = d();
        if (r112 == null) goto L33;
        int r113 = ((int) (r112.e * r10)) + r6;
        if (r34.d == false) goto L32;
        r34.d = false;
        r33.measure(View.MeasureSpec.makeMeasureSpec((int) (r34.c * ((r10 - r6) - r5)), 1073741824), View.MeasureSpec.makeMeasureSpec((r11 - r2) - r3, 1073741824));
    L32:
        r33.layout(r113, r2, r33.getMeasuredWidth() + r113, r33.getMeasuredHeight() + r2);
    L33:
        r32 = r32 + 1;
        goto L22
    L34:
        this.p = r2;
        this.q = r11 - r3;
        this.U = r4;
        this.R = false;
    }

    @Override // android.view.View
    protected final void onMeasure(int r14, int r15) {
        setMeasuredDimension(getDefaultSize(0, r14), getDefaultSize(0, r15));
        int r0 = getMeasuredWidth();
        this.C = Math.min(r0 / 10, this.B);
        int r3 = (r0 - getPaddingLeft()) - getPaddingRight();
        int r5 = (getMeasuredHeight() - getPaddingTop()) - getPaddingBottom();
        int r9 = getChildCount();
        int r8 = 0;
    L3:
        if (r8 >= r9) goto L42;
        View r10 = getChildAt(r8);
        if (r10.getVisibility() == 8) goto L35;
        z r1 = (z) r10.getLayoutParams();
        if (r1 == null) goto L35;
        if (r1.a == false) goto L35;
        int r6 = r1.b & 7;
        int r4 = r1.b & 112;
        int r2 = Integer.MIN_VALUE;
        int r7 = Integer.MIN_VALUE;
        if (r4 != 48) goto L13;
    L14:
        boolean r11 = true;
    L16:
        if (r6 != 3) goto L18;
    L19:
        boolean r12 = true;
    L20:
        if (r11 == false) goto L38;
        r2 = 1073741824;
    L23:
        if (r1.width == (-2)) goto L55;
        int r13 = 1073741824;
        if (r1.width == (-1)) goto L54;
        int r16 = r1.width;
    L28:
        if (r1.height == (-2)) goto L53;
        r7 = 1073741824;
        if (r1.height == (-1)) goto L53;
        int r17 = r1.height;
    L32:
        r10.measure(View.MeasureSpec.makeMeasureSpec(r16, r13), View.MeasureSpec.makeMeasureSpec(r17, r7));
        if (r11 == false) goto L40;
        r5 = r5 - r10.getMeasuredHeight();
        goto L35
    L40:
        if (r12 == false) goto L35;
        r3 = r3 - r10.getMeasuredWidth();
    L53:
        r17 = r5;
        goto L32
    L54:
        r16 = r3;
        goto L28
    L55:
        r13 = r2;
        r16 = r3;
        goto L28
    L38:
        if (r12 == false) goto L23;
        r7 = 1073741824;
        goto L23
    L18:
        if (r6 == 5) goto L19;
        r12 = false;
        goto L20
    L13:
        if (r4 == 80) goto L14;
        r11 = false;
    L35:
        r8 = r8 + 1;
        goto L3
    L42:
        this.t = View.MeasureSpec.makeMeasureSpec(r3, 1073741824);
        this.u = View.MeasureSpec.makeMeasureSpec(r5, 1073741824);
        this.v = true;
        c();
        this.v = false;
        int r18 = getChildCount();
        int r19 = 0;
    L43:
        if (r19 >= r18) goto L52;
        View r20 = getChildAt(r19);
        if (r20.getVisibility() == 8) goto L51;
        z r21 = (z) r20.getLayoutParams();
        if (r21 != null) goto L49;
    L50:
        r20.measure(View.MeasureSpec.makeMeasureSpec((int) (r21.c * r3), 1073741824), this.u);
        goto L51
    L49:
        if (r21.a == false) goto L50;
    L51:
        r19 = r19 + 1;
        goto L43
    }

    @Override // android.view.ViewGroup
    protected final boolean onRequestFocusInDescendants(int r9, Rect r10) {
        int r3 = -1;
        int r2 = getChildCount();
        if ((r9 & 2) == 0) goto L15;
        r3 = 1;
        int r4 = 0;
    L5:
        if (r4 == r2) goto L14;
        View r5 = getChildAt(r4);
        if (r5.getVisibility() != 0) goto L16;
        y r6 = d();
        if (r6 == null) goto L16;
        if (r6.b != this.h) goto L16;
        if (r5.requestFocus(r9, r10) == false) goto L16;
        return true;
    L16:
        r4 = r4 + r3;
        goto L5
    L14:
        return false;
    L15:
        r4 = r2 - 1;
        r2 = -1;
        goto L5
    }

    @Override // android.view.View
    public final void onRestoreInstanceState(Parcelable r4) {
        if ((r4 instanceof SavedState) == true) goto L6;
        super.onRestoreInstanceState(r4);
        return;
    L6:
        SavedState r5 = (SavedState) r4;
        super.onRestoreInstanceState(r5.getSuperState());
        if (this.g == null) goto L9;
        i r0 = this.g;
        Parcelable r1 = r5.b;
        ClassLoader r2 = r5.c;
        a(r5.a, false, true);
        return;
    L9:
        this.i = r5.a;
        this.j = r5.b;
        this.k = r5.c;
    }

    @Override // android.view.View
    public final Parcelable onSaveInstanceState() {
        SavedState r1 = new SavedState(super.onSaveInstanceState());
        r1.a = this.h;
        if (this.g == null) goto L5;
        i r0 = this.g;
        r1.b = null;
    L5:
        return r1;
    }

    @Override // android.view.View
    protected final void onSizeChanged(int r3, int r4, int r5, int r6) {
        super.onSizeChanged(r3, r4, r5, r6);
        if (r3 == r5) goto L6;
        a(r3, r5, this.n, this.n);
        return;
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent r9) {
        boolean r4 = false;
        if (this.O == false) goto L7;
        return true;
    L7:
        if (r9.getAction() != 0) goto L12;
        if (r9.getEdgeFlags() == 0) goto L12;
        return false;
    L12:
        if (this.g == null) goto L63;
        if (this.g.a() == 0) goto L63;
        if (this.J != null) goto L19;
        this.J = VelocityTracker.obtain();
    L19:
        this.J.addMovement(r9);
        switch((r9.getAction() & 255)) {
            case 0: goto L24;
            case 1: goto L40;
            case 2: goto L26;
            case 3: goto L58;
            case 4: goto L21;
            case 5: goto L60;
            case 6: goto L61;
            default: goto L21;
        };
    L21:
        if (r4 == false) goto L64;
        n.b(this);
    L64:
        return true;
    L24:
        this.l.abortAnimation();
        this.x = false;
        c();
        this.z = true;
        setScrollState(1);
        float r0 = r9.getX();
        this.G = r0;
        this.E = r0;
        float r1 = r9.getY();
        this.H = r1;
        this.F = r1;
        this.I = e.b(r9, 0);
        goto L21
    L60:
        int r2 = e.a(r9);
        this.E = e.c(r9, r2);
        this.I = e.b(r9, r2);
        goto L21
    L61:
        a(r9);
        this.E = e.c(r9, e.a(r9, this.I));
        goto L21
    L26:
        if (this.z == true) goto L36;
        int r3 = e.a(r9, this.I);
        float r5 = e.c(r9, r3);
        float r6 = Math.abs(r5 - this.E);
        float r7 = e.d(r9, r3);
        float r8 = Math.abs(r7 - this.F);
        if (r6 <= this.D) goto L36;
        if (r6 <= r8) goto L36;
        this.z = true;
        if ((r5 - this.G) <= 0.0f) goto L38;
        float r10 = this.G + this.D;
    L34:
        this.E = r10;
        this.F = r7;
        setScrollState(1);
        setScrollingCacheEnabled(true);
        goto L36
    L38:
        r10 = this.G - this.D;
    L36:
        if (this.z == false) goto L21;
        r4 = a(e.c(r9, e.a(r9, this.I))) | false;
        goto L21
    L40:
        if (this.z == false) goto L21;
        VelocityTracker r11 = this.J;
        r11.computeCurrentVelocity(1000, this.L);
        int r12 = (int) j.a(r11, this.I);
        this.x = true;
        int r13 = getWidth();
        int r14 = getScrollX();
        y r15 = g();
        int r16 = r15.b;
        float r17 = ((r14 / r13) - r15.e) / r15.d;
        if (Math.abs((int) (e.c(r9, e.a(r9, this.I)) - this.G)) <= this.M) goto L53;
        if (Math.abs(r12) <= this.K) goto L53;
        if (r12 <= 0) goto L51;
    L46:
        int r18 = r16;
    L48:
        if (this.d.size() <= 0) goto L50;
        r18 = Math.max(((y) this.d.get(0)).b, Math.min(r18, ((y) this.d.get(this.d.size() - 1)).b));
    L50:
        a(r18, true, true, r12);
        this.I = -1;
        h();
        r4 = this.P.c() | this.Q.c();
        goto L21
    L51:
        r16 = r16 + 1;
    L53:
        if (r16 < this.h) goto L56;
        float r19 = 0.4f;
    L55:
        r18 = (int) ((r16 + r17) + r19);
        goto L48
    L56:
        r19 = 0.6f;
        goto L55
    L58:
        if (this.z == false) goto L21;
        a(this.h, true, 0, false);
        this.I = -1;
        h();
        r4 = this.P.c() | this.Q.c();
    L63:
        return false;
    }

    @Override // android.view.ViewGroup, android.view.ViewManager
    public final void removeView(View r2) {
        if (this.v == false) goto L6;
        removeViewInLayout(r2);
        return;
    L6:
        super.removeView(r2);
    }

    public final void setAdapter(i r7) {
        byte r2 = 0;
        if (this.g == null) goto L16;
        i r0 = this.g;
        r0.a.unregisterObserver(this.m);
        i r1 = this.g;
        int r3 = 0;
    L6:
        if (r3 >= this.d.size()) goto L8;
        y r4 = (y) this.d.get(r3);
        i r5 = this.g;
        int r6 = r4.b;
        Object r8 = r4.a;
        i.b();
        r3 = r3 + 1;
        goto L6
    L8:
        i r9 = this.g;
        this.d.clear();
        int r10 = 0;
    L10:
        if (r10 >= getChildCount()) goto L15;
        if (((z) getChildAt(r10).getLayoutParams()).a == true) goto L14;
        removeViewAt(r10);
        r10 = r10 - 1;
    L14:
        r10 = r10 + 1;
        goto L10
    L15:
        this.h = 0;
        scrollTo(0, 0);
    L16:
        i r11 = this.g;
        this.g = r7;
        if (this.g == null) goto L25;
        if (this.m != null) goto L21;
        this.m = new ad(this, r2);
    L21:
        i r12 = this.g;
        r12.a.registerObserver(this.m);
        this.x = false;
        this.R = true;
        if (this.i < 0) goto L29;
        i r13 = this.g;
        Parcelable r14 = this.j;
        ClassLoader r15 = this.k;
        a(this.i, false, true);
        this.i = -1;
        this.j = null;
        this.k = null;
        goto L25
    L29:
        c();
    L25:
        if (this.Z == null) goto L34;
        if (r11 == r7) goto L35;
        aa r16 = this.Z;
        return;
    L35:
        return;
    }

    final void setChildrenDrawingOrderEnabledCompat(boolean r6) {
        if (this.ab == null) goto L13;
    L11:
        this.ab.invoke(this, new Object[]{Boolean.valueOf(r6)});     // Catch: Exception -> L9
        return;
    L9:
        e = move-exception;
        Log.e("ViewPager", "Error changing children drawing order", e);
        return;
    L13:
        this.ab = ViewGroup.class.getDeclaredMethod("setChildrenDrawingOrderEnabled", new Class[]{Boolean.TYPE});     // Catch: NoSuchMethodException -> L7
    L7:
        e = move-exception;
        Log.e("ViewPager", "Can't find setChildrenDrawingOrderEnabled", e);
        goto L11
    }

    public final void setCurrentItem(int r3) {
        this.x = false;
        if (this.R == true) goto L7;
        boolean r0 = true;
    L5:
        a(r3, r0, false);
        return;
    L7:
        r0 = false;
        goto L5
    }

    public final void setOffscreenPageLimit(int r4) {
        if (r4 > 0) goto L5;
        Log.w("ViewPager", "Requested offscreen page limit " + r4 + " too small; defaulting to 1");
        r4 = 1;
    L5:
        if (r4 == this.y) goto L8;
        this.y = r4;
        c();
        return;
    }

    final void setOnAdapterChangeListener(aa r1) {
        this.Z = r1;
    }

    public final void setOnPageChangeListener(ab r1) {
        this.V = r1;
    }

    public final void setPageMargin(int r3) {
        int r0 = this.n;
        this.n = r3;
        int r1 = getWidth();
        a(r1, r1, r3, r0);
        requestLayout();
    }

    public final void setPageMarginDrawable(int r2) {
        setPageMarginDrawable(getContext().getResources().getDrawable(r2));
    }

    public final void setPageMarginDrawable(Drawable r2) {
        this.o = r2;
        if (r2 == null) goto L5;
        refreshDrawableState();
    L5:
        if (r2 != null) goto L9;
        boolean r0 = true;
    L7:
        setWillNotDraw(r0);
        invalidate();
        return;
    L9:
        r0 = false;
        goto L7
    }

    @Override // android.view.View
    protected final boolean verifyDrawable(Drawable r2) {
        if (super.verifyDrawable(r2) == false) goto L5;
    L6:
        return true;
    L5:
        if (r2 == this.o) goto L6;
        return false;
    }
}
