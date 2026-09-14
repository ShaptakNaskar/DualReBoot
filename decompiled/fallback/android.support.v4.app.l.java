package android.support.v4.app;

import android.content.res.Configuration;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Parcelable;
import android.util.Log;
import android.util.SparseArray;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.AccelerateInterpolator;
import android.view.animation.AlphaAnimation;
import android.view.animation.Animation;
import android.view.animation.AnimationSet;
import android.view.animation.AnimationUtils;
import android.view.animation.DecelerateInterpolator;
import android.view.animation.Interpolator;
import android.view.animation.ScaleAnimation;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
final class l extends k {
    static final Interpolator A = null;
    static final Interpolator B = null;
    static final Interpolator C = null;
    static boolean a;
    static final boolean b = false;
    static final Interpolator z = null;
    ArrayList c;
    Runnable[] d;
    boolean e;
    ArrayList f;
    ArrayList g;
    ArrayList h;
    ArrayList i;
    ArrayList j;
    ArrayList k;
    ArrayList l;
    ArrayList m;
    int n;
    g o;
    j p;
    Fragment q;
    boolean r;
    boolean s;
    boolean t;
    String u;
    boolean v;
    Bundle w;
    SparseArray x;
    Runnable y;

    static {
        boolean r0 = false;
        a = false;
        if (Build.VERSION.SDK_INT < 11) goto L5;
        r0 = true;
    L5:
        b = r0;
        z = new DecelerateInterpolator(2.5f);
        A = new DecelerateInterpolator(1.5f);
        B = new AccelerateInterpolator(2.5f);
        C = new AccelerateInterpolator(1.5f);
    }

    l() {
        this.n = 0;
        this.w = null;
        this.x = null;
        this.y = new m(this);
    }

    private Fragment a(Bundle r6, String r7) {
        int r1 = r6.getInt(r7, -1);
        if (r1 != (-1)) goto L7;
        return null;
    L7:
        if (r1 < this.f.size()) goto L9;
        a(new IllegalStateException("Fragement no longer exists for key " + r7 + ": index " + r1));
    L9:
        Fragment r0 = (Fragment) this.f.get(r1);
        if (r0 != null) goto L12;
        a(new IllegalStateException("Fragement no longer exists for key " + r7 + ": index " + r1));
        return r0;
    L12:
        return r0;
    }

    private static Animation a(float r3, float r4) {
        AlphaAnimation r0 = new AlphaAnimation(r3, r4);
        r0.setInterpolator(A);
        r0.setDuration(220);
        return r0;
    }

    private static Animation a(float r12, float r13, float r14, float r15) {
        AnimationSet r9 = new AnimationSet(false);
        ScaleAnimation r0 = new ScaleAnimation(r12, r13, r12, r13, 1, 0.5f, 1, 0.5f);
        r0.setInterpolator(z);
        r0.setDuration(220);
        r9.addAnimation(r0);
        AlphaAnimation r1 = new AlphaAnimation(r14, r15);
        r1.setInterpolator(A);
        r1.setDuration(220);
        r9.addAnimation(r1);
        return r9;
    }

    private Animation a(Fragment r7, int r8, boolean r9, int r10) {
        int r0 = r7.G;
        Fragment.j();
        if (r7.G == 0) goto L7;
        Animation r1 = AnimationUtils.loadAnimation(this.o, r7.G);
        if (r1 == null) goto L7;
        return r1;
    L7:
        if (r8 == 0) goto L36;
        byte r2 = -1;
        switch(r8) {
            case 4097: goto L13;
            case 4099: goto L19;
            case 8194: goto L16;
            default: goto L11;
        };
    L11:
        if (r2 < 0) goto L37;
        switch(r2) {
            case 1: goto L29;
            case 2: goto L30;
            case 3: goto L31;
            case 4: goto L32;
            case 5: goto L33;
            case 6: goto L34;
            default: goto L23;
        };
    L23:
        if (r10 == 0) goto L25;
    L27:
        if (r10 != 0) goto L45;
        return null;
    L45:
        return null;
    L25:
        if (this.o.getWindow() == null) goto L27;
        r10 = this.o.getWindow().getAttributes().windowAnimations;
        goto L27
    L29:
        g r3 = this.o;
        return a(1.125f, 1.0f, 0.0f, 1.0f);
    L30:
        g r4 = this.o;
        return a(1.0f, 0.975f, 1.0f, 0.0f);
    L31:
        g r5 = this.o;
        return a(0.975f, 1.0f, 0.0f, 1.0f);
    L32:
        g r6 = this.o;
        return a(1.0f, 1.075f, 1.0f, 0.0f);
    L33:
        g r11 = this.o;
        return a(0.0f, 1.0f);
    L34:
        g r12 = this.o;
        return a(1.0f, 0.0f);
    L37:
        return null;
    L13:
        if (r9 == false) goto L15;
        r2 = 1;
        goto L11
    L15:
        r2 = 2;
        goto L11
    L16:
        if (r9 == false) goto L18;
        r2 = 3;
        goto L11
    L18:
        r2 = 4;
        goto L11
    L19:
        if (r9 == false) goto L21;
        r2 = 5;
        goto L11
    L21:
        r2 = 6;
        goto L11
    L36:
        return null;
    }

    private void a(int r5, a r6) {
        monitor-enter(this);
    L27:
        th = move-exception;
        throw th;
    L4:
        if (this.k != null) goto L6;
        this.k = new ArrayList();     // Catch: Throwable -> L27
    L6:
        int r0 = this.k.size();     // Catch: Throwable -> L27
        if (r5 < r0) goto L9;
    L14:
        if (r0 >= r5) goto L23;
        this.k.add(null);     // Catch: Throwable -> L27
        if (this.l != null) goto L19;
        this.l = new ArrayList();     // Catch: Throwable -> L27
    L19:
        if (a == false) goto L21;
        Log.v("FragmentManager", "Adding available back stack index " + r0);     // Catch: Throwable -> L27
    L21:
        this.l.add(Integer.valueOf(r0));     // Catch: Throwable -> L27
        r0 = r0 + 1;     // Catch: Throwable -> L27
        goto L14
    L23:
        if (a == false) goto L25;
        Log.v("FragmentManager", "Adding back stack index " + r5 + " with " + r6);     // Catch: Throwable -> L27
    L25:
        this.k.add(r6);     // Catch: Throwable -> L27
    L12:
        monitor-exit(this);     // Catch: Throwable -> L27
        return;
    L9:
        if (a == false) goto L11;
        Log.v("FragmentManager", "Setting back stack index " + r5 + " to " + r6);     // Catch: Throwable -> L27
    L11:
        this.k.set(r5, r6);     // Catch: Throwable -> L27
        goto L12
    }

    private void a(RuntimeException r6) {
        Log.e("FragmentManager", r6.getMessage());
        Log.e("FragmentManager", "Activity state:");
        PrintWriter r1 = new PrintWriter(new android.support.v4.c.b("FragmentManager"));
        if (this.o != null) goto L14;
        a("  ", null, r1, new String[0]);     // Catch: Exception -> L10
        throw r6;
    L10:
        e = move-exception;
        Log.e("FragmentManager", "Failed dumping state", e);
        throw r6;
    L14:
        this.o.dump("  ", null, r1, new String[0]);     // Catch: Exception -> L6
        throw r6;
    L6:
        e = move-exception;
        Log.e("FragmentManager", "Failed dumping state", e);
        throw r6;
    }

    private void b(Fragment r3) {
        if (r3.J != null) goto L6;
        return;
    L6:
        if (this.x != null) goto L11;
        this.x = new SparseArray();
    L8:
        r3.J.saveHierarchyState(this.x);
        if (this.x.size() <= 0) goto L12;
        r3.e = this.x;
        this.x = null;
        return;
    L12:
        return;
    L11:
        this.x.clear();
        goto L8
    }

    public static int c(int r1) {
        switch(r1) {
            case 4097: goto L5;
            case 4099: goto L7;
            case 8194: goto L6;
            default: goto L4;
        };
    L4:
        return 0;
    L5:
        return 8194;
    L6:
        return 4097;
    L7:
        return 4099;
    }

    private void d(int r2) {
        a(r2, 0, 0, false);
    }

    private void r() {
        if (this.f != null) goto L5;
        return;
    L5:
        int r6 = 0;
    L7:
        if (r6 >= this.f.size()) goto L22;
        Fragment r1 = (Fragment) this.f.get(r6);
        if (r1 == null) goto L15;
        if (r1.K == false) goto L15;
        if (this.e == false) goto L16;
        this.v = true;
        goto L15
    L16:
        r1.K = false;
        a(r1, this.n, 0, 0, false);
    L15:
        r6 = r6 + 1;
        goto L7
    }

    private void s() {
        if (this.s == false) goto L7;
        throw new IllegalStateException("Can not perform this action after onSaveInstanceState");
    L7:
        if (this.u != null) goto L9;
        return;
    L9:
        throw new IllegalStateException("Can not perform this action inside of " + this.u);
    }

    private void t() {
        if (this.m == null) goto L8;
        int r0 = 0;
    L6:
        if (r0 >= this.m.size()) goto L10;
        this.m.get(r0);
        r0 = r0 + 1;
        goto L6
    L10:
        return;
    }

    public final int a(a r5) {
        monitor-enter(this);
    L22:
        th = move-exception;
        throw th;
    L4:
        if (this.l == null) goto L8;
        if (this.l.size() <= 0) goto L8;
        int r0 = ((Integer) this.l.remove(this.l.size() - 1)).intValue();     // Catch: Throwable -> L22
        if (a == false) goto L19;
        Log.v("FragmentManager", "Adding back stack index " + r0 + " with " + r5);     // Catch: Throwable -> L22
    L19:
        this.k.set(r0, r5);     // Catch: Throwable -> L22
        monitor-exit(this);     // Catch: Throwable -> L22
    L15:
        return r0;
    L8:
        if (this.k != null) goto L10;
        this.k = new ArrayList();     // Catch: Throwable -> L22
    L10:
        r0 = this.k.size();     // Catch: Throwable -> L22
        if (a == false) goto L13;
        Log.v("FragmentManager", "Setting back stack index " + r0 + " to " + r5);     // Catch: Throwable -> L22
    L13:
        this.k.add(r5);     // Catch: Throwable -> L22
        monitor-exit(this);     // Catch: Throwable -> L22
        goto L15
    }

    public final Fragment a(int r4) {
        if (this.g == null) goto L13;
        int r1 = this.g.size() - 1;
    L5:
        if (r1 < 0) goto L13;
        Fragment r0 = (Fragment) this.g.get(r1);
        if (r0 == null) goto L11;
        if (r0.w != r4) goto L11;
        return r0;
    L11:
        r1 = r1 - 1;
    L13:
        if (this.f == null) goto L21;
        int r2 = this.f.size() - 1;
    L15:
        if (r2 < 0) goto L21;
        Fragment r3 = (Fragment) this.f.get(r2);
        if (r3 == null) goto L20;
        if (r3.w != r4) goto L20;
        return r3;
    L20:
        r2 = r2 - 1;
    L21:
        return null;
    }

    @Override // android.support.v4.app.k
    public final Fragment a(String r4) {
        if (this.g == null) goto L14;
        if (r4 == null) goto L14;
        int r1 = this.g.size() - 1;
    L6:
        if (r1 < 0) goto L14;
        Fragment r0 = (Fragment) this.g.get(r1);
        if (r0 == null) goto L12;
        if (r4.equals(r0.y) == false) goto L12;
        return r0;
    L12:
        r1 = r1 - 1;
    L14:
        if (this.f == null) goto L23;
        if (r4 == null) goto L23;
        int r2 = this.f.size() - 1;
    L17:
        if (r2 < 0) goto L23;
        Fragment r3 = (Fragment) this.f.get(r2);
        if (r3 == null) goto L22;
        if (r4.equals(r3.y) == false) goto L22;
        return r3;
    L22:
        r2 = r2 - 1;
    L23:
        return null;
    }

    @Override // android.support.v4.app.k
    public final s a() {
        return new a(this);
    }

    final void a(int r9, int r10, int r11, boolean r12) {
        if (this.o != null) goto L7;
        if (r9 == 0) goto L7;
        throw new IllegalStateException("No activity");
    L7:
        if (r12 == false) goto L9;
    L11:
        this.n = r9;
        if (this.f == null) goto L36;
        int r6 = 0;
        boolean r7 = false;
    L15:
        if (r6 >= this.f.size()) goto L22;
        Fragment r1 = (Fragment) this.f.get(r6);
        if (r1 == null) goto L21;
        a(r1, r9, r10, r11, false);
        if (r1.M == null) goto L21;
        r7 = r7 | r1.M.a();
    L21:
        r6 = r6 + 1;
        r7 = r7;
        goto L15
    L22:
        if (r7 == true) goto L25;
        r();
    L25:
        if (this.r == true) goto L27;
        return;
    L27:
        if (this.o != null) goto L29;
        return;
    L29:
        if (this.n != 5) goto L39;
        this.o.a();
        this.r = false;
        return;
    L39:
        return;
    L36:
        return;
    L9:
        if (this.n != r9) goto L11;
    }

    public final void a(Configuration r3) {
        if (this.g == null) goto L11;
        int r0 = 0;
    L5:
        int r1 = r0;
        if (r1 >= this.g.size()) goto L15;
        Fragment r2 = (Fragment) this.g.get(r1);
        if (r2 == null) goto L10;
        r2.a(r3);
    L10:
        r0 = r1 + 1;
        goto L5
    L15:
        return;
    }

    final void a(Parcelable r9, ArrayList r10) {
        if (r9 != null) goto L5;
        return;
    L5:
        FragmentManagerState r11 = (FragmentManagerState) r9;
        if (r11.a == null) goto L94;
        if (r10 == null) goto L18;
        int r1 = 0;
    L10:
        if (r1 >= r10.size()) goto L18;
        Fragment r0 = (Fragment) r10.get(r1);
        if (a == false) goto L14;
        Log.v("FragmentManager", "restoreAllState: re-attaching retained " + r0);
    L14:
        FragmentState r3 = r11.a[r0.f];
        r3.k = r0;
        r0.e = null;
        r0.r = 0;
        r0.p = false;
        r0.l = false;
        r0.i = null;
        if (r3.j == null) goto L17;
        r3.j.setClassLoader(this.o.getClassLoader());
        r0.e = r3.j.getSparseParcelableArray("android:view_state");
    L17:
        r1 = r1 + 1;
    L18:
        this.f = new ArrayList(r11.a.length);
        if (this.h == null) goto L21;
        this.h.clear();
    L21:
        int r2 = 0;
    L23:
        if (r2 >= r11.a.length) goto L38;
        FragmentState r4 = r11.a[r2];
        if (r4 == null) goto L31;
        Fragment r5 = r4.a(this.o, this.q);
        if (a == false) goto L29;
        Log.v("FragmentManager", "restoreAllState: active #" + r2 + ": " + r5);
    L29:
        this.f.add(r5);
        r4.k = null;
    L30:
        r2 = r2 + 1;
        goto L23
    L31:
        this.f.add(null);
        if (this.h != null) goto L35;
        this.h = new ArrayList();
    L35:
        if (a == false) goto L37;
        Log.v("FragmentManager", "restoreAllState: avail #" + r2);
    L37:
        this.h.add(Integer.valueOf(r2));
        goto L30
    L38:
        if (r10 == null) goto L50;
        int r6 = 0;
    L41:
        if (r6 >= r10.size()) goto L50;
        Fragment r7 = (Fragment) r10.get(r6);
        if (r7.j < 0) goto L47;
        if (r7.j >= this.f.size()) goto L48;
        r7.i = (Fragment) this.f.get(r7.j);
        goto L47
    L48:
        Log.w("FragmentManager", "Re-attaching retained fragment " + r7 + " target no longer exists: " + r7.j);
        r7.i = null;
    L47:
        r6 = r6 + 1;
    L50:
        if (r11.b == null) goto L65;
        this.g = new ArrayList(r11.b.length);
        int r8 = 0;
    L53:
        if (r8 >= r11.b.length) goto L67;
        Fragment r12 = (Fragment) this.f.get(r11.b[r8]);
        if (r12 != null) goto L57;
        a(new IllegalStateException("No instantiated fragment for index #" + r11.b[r8]));
    L57:
        r12.l = true;
        if (a == false) goto L61;
        Log.v("FragmentManager", "restoreAllState: added #" + r8 + ": " + r12);
    L61:
        if (this.g.contains(r12) == true) goto L63;
        this.g.add(r12);
        r8 = r8 + 1;
        goto L53
    L63:
        throw new IllegalStateException("Already added!");
    L67:
        if (r11.c == null) goto L78;
        this.i = new ArrayList(r11.c.length);
        int r13 = 0;
    L70:
        if (r13 >= r11.c.length) goto L96;
        a r14 = r11.c[r13].a(this);
        if (a == false) goto L74;
        Log.v("FragmentManager", "restoreAllState: back stack #" + r13 + " (index " + r14.o + "): " + r14);
        r14.a("  ", new PrintWriter(new android.support.v4.c.b("FragmentManager")), false);
    L74:
        this.i.add(r14);
        if (r14.o < 0) goto L77;
        a(r14.o, r14);
    L77:
        r13 = r13 + 1;
        goto L70
    L96:
        return;
    L78:
        this.i = null;
        return;
    L65:
        this.g = null;
        goto L67
    }

    final void a(Fragment r7) {
        a(r7, this.n, 0, 0, false);
    }

    public final void a(Fragment r7, int r8, int r9) {
        if (a == false) goto L6;
        Log.v("FragmentManager", "remove: " + r7 + " nesting=" + r7.r);
    L6:
        if (r7.b() == true) goto L24;
        boolean r0 = true;
    L9:
        if (r7.A == false) goto L12;
        if (r0 == true) goto L12;
        return;
    L12:
        if (this.g == null) goto L15;
        this.g.remove(r7);
    L15:
        if (r7.D == true) goto L17;
    L19:
        r7.l = false;
        r7.m = true;
        if (r0 == false) goto L25;
        int r2 = 0;
    L22:
        a(r7, r2, r8, r9, false);
        return;
    L25:
        r2 = 1;
        goto L22
    L17:
        if (r7.E == false) goto L19;
        this.r = true;
        goto L19
    L24:
        r0 = false;
        goto L9
    }

    final void a(Fragment r10, int r11, int r12, int r13, boolean r14) {
        if (r10.l == true) goto L5;
    L6:
        if (r11 <= 1) goto L9;
        r11 = 1;
    L9:
        if (r10.m == false) goto L14;
        if (r11 <= r10.a) goto L14;
        r11 = r10.a;
    L14:
        if (r10.K == false) goto L20;
        if (r10.a >= 4) goto L20;
        if (r11 <= 3) goto L20;
        r11 = 3;
    L20:
        if (r10.a >= r11) goto L109;
        if (r10.o == false) goto L27;
        if (r10.p == true) goto L27;
        return;
    L27:
        if (r10.b == null) goto L30;
        r10.b = null;
        a(r10, r10.c, 0, 0, true);
    L30:
        switch(r10.a) {
            case 0: goto L33;
            case 1: goto L67;
            case 2: goto L96;
            case 3: goto L96;
            case 4: goto L101;
            default: goto L31;
        };
    L31:
        r10.a = r11;
        return;
    L67:
        if (r11 <= 1) goto L96;
        if (a == false) goto L72;
        Log.v("FragmentManager", "moveto ACTIVITY_CREATED: " + r10);
    L72:
        if (r10.o == false) goto L74;
    L92:
        Bundle r0 = r10.d;
        r10.p();
        if (r10.I == null) goto L95;
        Bundle r1 = r10.d;
        r10.a();
    L95:
        r10.d = null;
        goto L96
    L74:
        if (r10.x == 0) goto L187;
        ViewGroup r2 = (ViewGroup) this.p.a(r10.x);
        if (r2 == null) goto L78;
    L80:
        r10.H = r2;
        Bundle r3 = r10.d;
        r10.g();
        Bundle r4 = r10.d;
        r10.I = r10.o();
        if (r10.I == null) goto L107;
        r10.J = r10.I;
        r10.I = ab.a(r10.I);
        if (r2 == null) goto L89;
        Animation r5 = a(r10, r12, true, r13);
        if (r5 == null) goto L87;
        r10.I.startAnimation(r5);
    L87:
        r2.addView(r10.I);
    L89:
        if (r10.z == false) goto L91;
        r10.I.setVisibility(8);
    L91:
        View r6 = r10.I;
        Bundle r7 = r10.d;
        Fragment.k();
        goto L92
    L107:
        r10.J = null;
        goto L92
    L78:
        if (r10.q == true) goto L80;
        a(new IllegalArgumentException("No view found for id 0x" + Integer.toHexString(r10.x) + " (" + r10.c().getResourceName(r10.x) + ") for fragment " + r10));
        goto L80
    L187:
        r2 = null;
    L96:
        if (r11 <= 3) goto L101;
        if (a == false) goto L100;
        Log.v("FragmentManager", "moveto STARTED: " + r10);
    L100:
        r10.q();
    L101:
        if (r11 <= 4) goto L31;
        if (a == false) goto L105;
        Log.v("FragmentManager", "moveto RESUMED: " + r10);
    L105:
        r10.n = true;
        r10.r();
        r10.d = null;
        r10.e = null;
        goto L31
    L33:
        if (a == false) goto L36;
        Log.v("FragmentManager", "moveto CREATED: " + r10);
    L36:
        if (r10.d == null) goto L45;
        r10.e = r10.d.getSparseParcelableArray("android:view_state");
        r10.i = a(r10.d, "android:target_state");
        if (r10.i == null) goto L40;
        r10.k = r10.d.getInt("android:target_req_state", 0);
    L40:
        r10.L = r10.d.getBoolean("android:user_visible_hint", true);
        if (r10.L == true) goto L45;
        r10.K = true;
        if (r11 <= 3) goto L45;
        r11 = 3;
    L45:
        r10.t = this.o;
        r10.v = this.q;
        if (this.q == null) goto L52;
        l r8 = this.q.u;
    L48:
        r10.s = r8;
        r10.F = false;
        g r9 = this.o;
        r10.i();
        if (r10.F == true) goto L54;
        throw new ap("Fragment " + r10 + " did not call through to super.onAttach()");
    L54:
        if (r10.v != null) goto L57;
        g r15 = this.o;
        g.b();
    L57:
        if (r10.C == true) goto L59;
        r10.a(r10.d);
    L59:
        r10.C = false;
        if (r10.o == false) goto L67;
        Bundle r16 = r10.d;
        r10.g();
        Bundle r17 = r10.d;
        r10.I = r10.o();
        if (r10.I == null) goto L106;
        r10.J = r10.I;
        r10.I = ab.a(r10.I);
        if (r10.z == false) goto L66;
        r10.I.setVisibility(8);
    L66:
        View r18 = r10.I;
        Bundle r19 = r10.d;
        Fragment.k();
        goto L67
    L106:
        r10.J = null;
        goto L67
    L52:
        r8 = this.o.b;
        goto L48
    L109:
        if (r10.a <= r11) goto L31;
        switch(r10.a) {
            case 1: goto L113;
            case 2: goto L139;
            case 3: goto L133;
            case 4: goto L128;
            case 5: goto L123;
            default: goto L31;
        };
    L113:
        if (r11 > 0) goto L31;
        if (this.t == false) goto L120;
        if (r10.b == null) goto L120;
        View r20 = r10.b;
        r10.b = null;
        r20.clearAnimation();
    L120:
        if (r10.b == null) goto L164;
        r10.c = r11;
        r11 = 1;
        goto L31
    L164:
        if (a == false) goto L167;
        Log.v("FragmentManager", "movefrom CREATED: " + r10);
    L167:
        if (r10.C == true) goto L169;
        r10.x();
    L169:
        r10.F = false;
        r10.m();
        if (r10.F == false) goto L172;
        if (r14 == true) goto L31;
        if (r10.C == false) goto L177;
        r10.t = null;
        r10.s = null;
        goto L31
    L177:
        if (r10.f < 0) goto L31;
        if (a == false) goto L181;
        Log.v("FragmentManager", "Freeing fragment index " + r10);
    L181:
        this.f.set(r10.f, null);
        if (this.h != null) goto L184;
        this.h = new ArrayList();
    L184:
        this.h.add(Integer.valueOf(r10.f));
        this.o.a(r10.g);
        r10.l();
        goto L31
    L172:
        throw new ap("Fragment " + r10 + " did not call through to super.onDetach()");
    L128:
        if (r11 >= 4) goto L133;
        if (a == false) goto L132;
        Log.v("FragmentManager", "movefrom STARTED: " + r10);
    L132:
        r10.u();
    L133:
        if (r11 >= 3) goto L139;
        if (a == false) goto L137;
        Log.v("FragmentManager", "movefrom STOPPED: " + r10);
    L137:
        r10.v();
        goto L139
    L123:
        if (r11 >= 5) goto L128;
        if (a == false) goto L127;
        Log.v("FragmentManager", "movefrom RESUMED: " + r10);
    L127:
        r10.t();
        r10.n = false;
    L139:
        if (r11 >= 2) goto L113;
        if (a == false) goto L144;
        Log.v("FragmentManager", "movefrom ACTIVITY_CREATED: " + r10);
    L144:
        if (r10.I != null) goto L146;
    L150:
        r10.w();
        if (r10.I != null) goto L153;
    L162:
        r10.H = null;
        r10.I = null;
        r10.J = null;
        goto L113
    L153:
        if (r10.H == null) goto L162;
        if (this.n > 0) goto L157;
    L186:
        Animation r21 = null;
    L159:
        if (r21 == null) goto L161;
        r10.b = r10.I;
        r10.c = r11;
        r21.setAnimationListener(new n(this, r10));
        r10.I.startAnimation(r21);
    L161:
        r10.H.removeView(r10.I);
        goto L162
    L157:
        if (this.t == true) goto L186;
        r21 = a(r10, r12, false, r13);
        goto L159
    L146:
        if (this.o.isFinishing() == true) goto L150;
        if (r10.e != null) goto L150;
        b(r10);
        goto L150
    L5:
        if (r10.A == false) goto L9;
        goto L6
    }

    public final void a(Fragment r5, boolean r6) {
        if (this.g != null) goto L6;
        this.g = new ArrayList();
    L6:
        if (a == false) goto L9;
        Log.v("FragmentManager", "add: " + r5);
    L9:
        if (r5.f >= 0) goto L22;
        if (this.h == null) goto L15;
        if (this.h.size() <= 0) goto L15;
        r5.a(((Integer) this.h.remove(this.h.size() - 1)).intValue(), this.q);
        this.f.set(r5.f, r5);
    L19:
        if (a == false) goto L22;
        Log.v("FragmentManager", "Allocated fragment index " + r5);
    L15:
        if (this.f != null) goto L17;
        this.f = new ArrayList();
    L17:
        r5.a(this.f.size(), this.q);
        this.f.add(r5);
    L22:
        if (r5.A == false) goto L24;
        return;
    L24:
        if (this.g.contains(r5) == true) goto L26;
        this.g.add(r5);
        r5.l = true;
        r5.m = false;
        if (r5.D == true) goto L31;
    L33:
        if (r6 == false) goto L37;
        a(r5);
        return;
    L37:
        return;
    L31:
        if (r5.E == false) goto L33;
        this.r = true;
        goto L33
    L26:
        throw new IllegalStateException("Fragment already added: " + r5);
    }

    public final void a(g r3, j r4, Fragment r5) {
        if (this.o != null) goto L5;
        this.o = r3;
        this.p = r4;
        this.q = r5;
        return;
    L5:
        throw new IllegalStateException("Already attached");
    }

    public final void a(Runnable r3) {
        s();
        monitor-enter(this);
    L8:
        th = move-exception;
        throw th;
    L5:
        if (this.o != null) goto L12;
        throw new IllegalStateException("Activity has been destroyed");     // Catch: Throwable -> L8
    L12:
        if (this.c != null) goto L14;
        this.c = new ArrayList();     // Catch: Throwable -> L8
    L14:
        this.c.add(r3);     // Catch: Throwable -> L8
        if (this.c.size() != 1) goto L17;
        this.o.a.removeCallbacks(this.y);     // Catch: Throwable -> L8
        this.o.a.post(this.y);     // Catch: Throwable -> L8
    L17:
        monitor-exit(this);     // Catch: Throwable -> L8
    }

    public final void a(String r7, FileDescriptor r8, PrintWriter r9, String[] r10) {
        int r1 = 0;
        String r3 = r7 + "    ";
        if (this.f == null) goto L13;
        int r4 = this.f.size();
        if (r4 <= 0) goto L13;
        r9.print(r7);
        r9.print("Active Fragments in ");
        r9.print(Integer.toHexString(System.identityHashCode(this)));
        r9.println(":");
        int r2 = 0;
    L7:
        if (r2 >= r4) goto L13;
        Fragment r0 = (Fragment) this.f.get(r2);
        r9.print(r7);
        r9.print("  #");
        r9.print(r2);
        r9.print(": ");
        r9.println(r0);
        if (r0 == null) goto L11;
        r0.a(r3, r8, r9, r10);
    L11:
        r2 = r2 + 1;
    L13:
        if (this.g == null) goto L20;
        int r5 = this.g.size();
        if (r5 <= 0) goto L20;
        r9.print(r7);
        r9.println("Added Fragments:");
        int r6 = 0;
    L17:
        if (r6 >= r5) goto L20;
        Fragment r11 = (Fragment) this.g.get(r6);
        r9.print(r7);
        r9.print("  #");
        r9.print(r6);
        r9.print(": ");
        r9.println(r11.toString());
        r6 = r6 + 1;
    L20:
        if (this.j == null) goto L27;
        int r12 = this.j.size();
        if (r12 <= 0) goto L27;
        r9.print(r7);
        r9.println("Fragments Created Menus:");
        int r13 = 0;
    L24:
        if (r13 >= r12) goto L27;
        Fragment r14 = (Fragment) this.j.get(r13);
        r9.print(r7);
        r9.print("  #");
        r9.print(r13);
        r9.print(": ");
        r9.println(r14.toString());
        r13 = r13 + 1;
    L27:
        if (this.i == null) goto L33;
        int r15 = this.i.size();
        if (r15 <= 0) goto L33;
        r9.print(r7);
        r9.println("Back Stack:");
        int r16 = 0;
    L31:
        if (r16 >= r15) goto L33;
        a r17 = (a) this.i.get(r16);
        r9.print(r7);
        r9.print("  #");
        r9.print(r16);
        r9.print(": ");
        r9.println(r17.toString());
        r17.a(r3, r9);
        r16 = r16 + 1;
    L33:
        monitor-enter(this);
    L54:
        th = move-exception;
        throw th;
    L35:
        if (this.k == null) goto L42;
        int r18 = this.k.size();     // Catch: Throwable -> L54
        if (r18 <= 0) goto L42;
        r9.print(r7);     // Catch: Throwable -> L54
        r9.println("Back Stack Indices:");     // Catch: Throwable -> L54
        int r19 = 0;
    L39:
        if (r19 >= r18) goto L42;
        Object r20 = (a) this.k.get(r19);     // Catch: Throwable -> L54
        r9.print(r7);     // Catch: Throwable -> L54
        r9.print("  #");     // Catch: Throwable -> L54
        r9.print(r19);     // Catch: Throwable -> L54
        r9.print(": ");     // Catch: Throwable -> L54
        r9.println(r20);     // Catch: Throwable -> L54
        r19 = r19 + 1;     // Catch: Throwable -> L54
    L42:
        if (this.l != null) goto L44;
    L46:
        monitor-exit(this);     // Catch: Throwable -> L54
        if (this.c == null) goto L57;
        int r21 = this.c.size();
        if (r21 <= 0) goto L57;
        r9.print(r7);
        r9.println("Pending Actions:");
    L52:
        if (r1 >= r21) goto L57;
        Object r22 = (Runnable) this.c.get(r1);
        r9.print(r7);
        r9.print("  #");
        r9.print(r1);
        r9.print(": ");
        r9.println(r22);
        r1 = r1 + 1;
    L57:
        r9.print(r7);
        r9.println("FragmentManager misc state:");
        r9.print(r7);
        r9.print("  mActivity=");
        r9.println(this.o);
        r9.print(r7);
        r9.print("  mContainer=");
        r9.println(this.p);
        if (this.q == null) goto L60;
        r9.print(r7);
        r9.print("  mParent=");
        r9.println(this.q);
    L60:
        r9.print(r7);
        r9.print("  mCurState=");
        r9.print(this.n);
        r9.print(" mStateSaved=");
        r9.print(this.s);
        r9.print(" mDestroyed=");
        r9.println(this.t);
        if (this.r == false) goto L64;
        r9.print(r7);
        r9.print("  mNeedMenuInvalidate=");
        r9.println(this.r);
    L64:
        if (this.u == null) goto L67;
        r9.print(r7);
        r9.print("  mNoTransactionsBecause=");
        r9.println(this.u);
    L67:
        if (this.h != null) goto L69;
        return;
    L69:
        if (this.h.size() <= 0) goto L83;
        r9.print(r7);
        r9.print("  mAvailIndices: ");
        r9.println(Arrays.toString(this.h.toArray()));
        return;
    L83:
        return;
    L44:
        if (this.l.size() <= 0) goto L46;
        r9.print(r7);     // Catch: Throwable -> L54
        r9.print("mAvailBackStackIndices: ");     // Catch: Throwable -> L54
        r9.println(Arrays.toString(this.l.toArray()));     // Catch: Throwable -> L54
        goto L46
    }

    public final boolean a(Menu r4) {
        if (this.g == null) goto L14;
        int r1 = 0;
        boolean r2 = false;
    L6:
        if (r1 >= this.g.size()) goto L19;
        Fragment r0 = (Fragment) this.g.get(r1);
        if (r0 == null) goto L12;
        if (r0.a(r4) == false) goto L12;
        r2 = true;
    L12:
        r1 = r1 + 1;
        goto L6
    L19:
        return r2;
    L14:
        return false;
    }

    public final boolean a(Menu r7, MenuInflater r8) {
        int r4 = 0;
        ArrayList r1 = null;
        if (this.g == null) goto L16;
        int r3 = 0;
        boolean r2 = false;
    L6:
        if (r3 >= this.g.size()) goto L18;
        Fragment r0 = (Fragment) this.g.get(r3);
        if (r0 == null) goto L15;
        if (r0.a(r7, r8) == false) goto L15;
        r2 = true;
        if (r1 != null) goto L14;
        r1 = new ArrayList();
    L14:
        r1.add(r0);
    L15:
        r3 = r3 + 1;
        r2 = r2;
    L18:
        if (this.j != null) goto L20;
    L27:
        this.j = r1;
        return r2;
    L20:
        if (r4 >= this.j.size()) goto L27;
        Fragment r5 = (Fragment) this.j.get(r4);
        if (r1 != null) goto L24;
    L25:
        Fragment.n();
    L26:
        r4 = r4 + 1;
        goto L20
    L24:
        if (r1.contains(r5) == true) goto L26;
    L16:
        r2 = false;
        goto L18
    }

    public final boolean a(MenuItem r4) {
        if (this.g == null) goto L18;
        int r1 = 0;
    L6:
        if (r1 >= this.g.size()) goto L19;
        Fragment r0 = (Fragment) this.g.get(r1);
        if (r0 == null) goto L13;
        if (r0.a(r4) == false) goto L13;
        return true;
    L13:
        r1 = r1 + 1;
        goto L6
    L19:
        return false;
    L18:
        return false;
    }

    public final void b(int r4) {
        monitor-enter(this);
        this.k.set(r4, null);     // Catch: Throwable -> L12
        if (this.l != null) goto L7;
        this.l = new ArrayList();     // Catch: Throwable -> L12
    L7:
        if (a == false) goto L9;
        Log.v("FragmentManager", "Freeing back stack index " + r4);     // Catch: Throwable -> L12
    L9:
        this.l.add(Integer.valueOf(r4));     // Catch: Throwable -> L12
        monitor-exit(this);     // Catch: Throwable -> L12
        return;
    L12:
        th = move-exception;
        throw th;
    }

    public final void b(Fragment r5, int r6, int r7) {
        if (a == false) goto L6;
        Log.v("FragmentManager", "hide: " + r5);
    L6:
        if (r5.z == true) goto L22;
        r5.z = true;
        if (r5.I == null) goto L14;
        Animation r0 = a(r5, r6, true, r7);
        if (r0 == null) goto L12;
        r5.I.startAnimation(r0);
    L12:
        r5.I.setVisibility(8);
    L14:
        if (r5.l == true) goto L16;
    L20:
        Fragment.e();
        return;
    L16:
        if (r5.D == false) goto L20;
        if (r5.E == false) goto L20;
        this.r = true;
        goto L20
    }

    final void b(a r2) {
        if (this.i != null) goto L5;
        this.i = new ArrayList();
    L5:
        this.i.add(r2);
        t();
    }

    public final void b(Menu r3) {
        if (this.g == null) goto L11;
        int r0 = 0;
    L5:
        int r1 = r0;
        if (r1 >= this.g.size()) goto L15;
        Fragment r2 = (Fragment) this.g.get(r1);
        if (r2 == null) goto L10;
        r2.b(r3);
    L10:
        r0 = r1 + 1;
        goto L5
    L15:
        return;
    }

    @Override // android.support.v4.app.k
    public final boolean b() {
        return d();
    }

    public final boolean b(MenuItem r4) {
        if (this.g == null) goto L18;
        int r1 = 0;
    L6:
        if (r1 >= this.g.size()) goto L19;
        Fragment r0 = (Fragment) this.g.get(r1);
        if (r0 == null) goto L13;
        if (r0.b(r4) == false) goto L13;
        return true;
    L13:
        r1 = r1 + 1;
        goto L6
    L19:
        return false;
    L18:
        return false;
    }

    public final void c(Fragment r6, int r7, int r8) {
        if (a == false) goto L6;
        Log.v("FragmentManager", "show: " + r6);
    L6:
        if (r6.z == false) goto L22;
        r6.z = false;
        if (r6.I == null) goto L14;
        Animation r0 = a(r6, r7, true, r8);
        if (r0 == null) goto L12;
        r6.I.startAnimation(r0);
    L12:
        r6.I.setVisibility(0);
    L14:
        if (r6.l == true) goto L16;
    L20:
        Fragment.e();
        return;
    L16:
        if (r6.D == false) goto L20;
        if (r6.E == false) goto L20;
        this.r = true;
        goto L20
    }

    public final boolean c() {
        s();
        d();
        Handler r1 = this.o.a;
        if (this.i != null) goto L5;
        return false;
    L5:
        int r2 = this.i.size() - 1;
        if (r2 < 0) goto L8;
        ((a) this.i.remove(r2)).b();
        t();
        return true;
    L8:
        return false;
    }

    public final void d(Fragment r7, int r8, int r9) {
        if (a == false) goto L6;
        Log.v("FragmentManager", "detach: " + r7);
    L6:
        if (r7.A == true) goto L22;
        r7.A = true;
        if (r7.l == true) goto L10;
        return;
    L10:
        if (this.g == null) goto L16;
        if (a == false) goto L14;
        Log.v("FragmentManager", "remove from detach: " + r7);
    L14:
        this.g.remove(r7);
    L16:
        if (r7.D == true) goto L18;
    L20:
        r7.l = false;
        a(r7, 1, r8, r9, false);
        return;
    L18:
        if (r7.E == false) goto L20;
        this.r = true;
        goto L20
    }

    public final boolean d() {
        if (this.e == false) goto L7;
        throw new IllegalStateException("Recursive entry to executePendingTransactions");
    L7:
        if (Looper.myLooper() != this.o.a.getLooper()) goto L9;
        boolean r1 = false;
    L11:
        monitor-enter(this);
    L38:
        th = move-exception;
        throw th;
    L13:
        if (this.c == null) goto L16;
        if (this.c.size() == 0) goto L16;
        int r3 = this.c.size();     // Catch: Throwable -> L38
        if (this.d != null) goto L31;
    L32:
        this.d = new Runnable[r3];     // Catch: Throwable -> L38
    L33:
        this.c.toArray(this.d);     // Catch: Throwable -> L38
        this.c.clear();     // Catch: Throwable -> L38
        this.o.a.removeCallbacks(this.y);     // Catch: Throwable -> L38
        monitor-exit(this);     // Catch: Throwable -> L38
        this.e = true;
        int r2 = 0;
    L36:
        if (r2 >= r3) goto L41;
        this.d[r2].run();
        this.d[r2] = null;
        r2 = r2 + 1;
        goto L36
    L41:
        this.e = false;
        r1 = true;
        goto L11
    L31:
        if (this.d.length >= r3) goto L33;
    L16:
        monitor-exit(this);     // Catch: Throwable -> L38
        if (this.v == false) goto L44;
        int r4 = 0;
        boolean r5 = false;
    L21:
        if (r4 >= this.f.size()) goto L42;
        Fragment r0 = (Fragment) this.f.get(r4);
        if (r0 == null) goto L27;
        if (r0.M == null) goto L27;
        r5 = r5 | r0.M.a();
    L27:
        r4 = r4 + 1;
        goto L21
    L42:
        if (r5 == true) goto L44;
        this.v = false;
        r();
    L44:
        return r1;
    L9:
        throw new IllegalStateException("Must be called from main thread of process");
    }

    final ArrayList e() {
        ArrayList r1 = null;
        if (this.f == null) goto L21;
        int r0 = 0;
    L5:
        int r3 = r0;
        if (r3 >= this.f.size()) goto L21;
        Fragment r2 = (Fragment) this.f.get(r3);
        if (r2 == null) goto L19;
        if (r2.B == false) goto L19;
        if (r1 != null) goto L13;
        r1 = new ArrayList();
    L13:
        r1.add(r2);
        r2.C = true;
        if (r2.i == null) goto L20;
        int r4 = r2.i.f;
    L16:
        r2.j = r4;
        if (a == false) goto L19;
        Log.v("FragmentManager", "retainNonConfig: keeping retained " + r2);
        goto L19
    L20:
        r4 = -1;
    L19:
        r0 = r3 + 1;
    L21:
        return r1;
    }

    public final void e(Fragment r7, int r8, int r9) {
        if (a == false) goto L6;
        Log.v("FragmentManager", "attach: " + r7);
    L6:
        if (r7.A == false) goto L26;
        r7.A = false;
        if (r7.l == false) goto L10;
        return;
    L10:
        if (this.g != null) goto L13;
        this.g = new ArrayList();
    L13:
        if (this.g.contains(r7) == false) goto L17;
        throw new IllegalStateException("Fragment already added: " + r7);
    L17:
        if (a == false) goto L19;
        Log.v("FragmentManager", "add from attach: " + r7);
    L19:
        this.g.add(r7);
        r7.l = true;
        if (r7.D == true) goto L22;
    L24:
        a(r7, this.n, r8, r9, false);
        return;
    L22:
        if (r7.E == false) goto L24;
        this.r = true;
        goto L24
    }

    final Parcelable f() {
        BackStackState[] r2 = null;
        d();
        if (b == false) goto L6;
        this.s = true;
    L6:
        if (this.f != null) goto L8;
        return null;
    L8:
        if (this.f.size() <= 0) goto L100;
        int r6 = this.f.size();
        FragmentState[] r7 = new FragmentState[r6];
        int r5 = 0;
        boolean r1 = false;
    L11:
        if (r5 >= r6) goto L60;
        Fragment r0 = (Fragment) this.f.get(r5);
        if (r0 != null) goto L15;
        boolean r3 = r1;
    L58:
        r5 = r5 + 1;
        r1 = r3;
        goto L11
    L15:
        if (r0.f >= 0) goto L17;
        a(new IllegalStateException("Failure saving state: active " + r0 + " has cleared index: " + r0.f));
    L17:
        FragmentState r8 = new FragmentState(r0);
        r7[r5] = r8;
        if (r0.a > 0) goto L20;
    L59:
        r8.j = r0.d;
    L55:
        if (a == false) goto L57;
        Log.v("FragmentManager", "Saved state of " + r0 + ": " + r8.j);
    L57:
        r3 = true;
        goto L58
    L20:
        if (r8.j != null) goto L59;
        if (this.w != null) goto L24;
        this.w = new Bundle();
    L24:
        r0.b(this.w);
        if (this.w.isEmpty() == true) goto L89;
        Bundle r4 = this.w;
        this.w = null;
    L28:
        if (r0.I == null) goto L31;
        b(r0);
    L31:
        if (r0.e == null) goto L36;
        if (r4 != null) goto L34;
        r4 = new Bundle();
    L34:
        r4.putSparseParcelableArray("android:view_state", r0.e);
    L36:
        if (r0.L == true) goto L40;
        if (r4 != null) goto L39;
        r4 = new Bundle();
    L39:
        r4.putBoolean("android:user_visible_hint", r0.L);
    L40:
        r8.j = r4;
        if (r0.i == null) goto L55;
        if (r0.i.f >= 0) goto L46;
        a(new IllegalStateException("Failure saving state: " + r0 + " has target not in fragment manager: " + r0.i));
    L46:
        if (r8.j != null) goto L48;
        r8.j = new Bundle();
    L48:
        Bundle r9 = r8.j;
        Fragment r10 = r0.i;
        if (r10.f >= 0) goto L51;
        a(new IllegalStateException("Fragment " + r10 + " is not currently in the FragmentManager"));
    L51:
        r9.putInt("android:target_state", r10.f);
        if (r0.k == 0) goto L55;
        r8.j.putInt("android:target_req_state", r0.k);
        goto L55
    L89:
        r4 = null;
        goto L28
    L60:
        if (r1 == true) goto L65;
        if (a == false) goto L101;
        Log.v("FragmentManager", "saveAllState: no fragments!");
        return null;
    L101:
        return null;
    L65:
        if (this.g == null) goto L77;
        int r11 = this.g.size();
        if (r11 <= 0) goto L77;
        int[] r12 = new int[r11];
        int r13 = 0;
    L69:
        if (r13 >= r11) goto L79;
        r12[r13] = ((Fragment) this.g.get(r13)).f;
        if (r12[r13] >= 0) goto L74;
        a(new IllegalStateException("Failure saving state: active " + this.g.get(r13) + " has cleared index: " + r12[r13]));
    L74:
        if (a == false) goto L76;
        Log.v("FragmentManager", "saveAllState: adding fragment #" + r13 + ": " + this.g.get(r13));
    L76:
        r13 = r13 + 1;
    L79:
        if (this.i == null) goto L88;
        int r14 = this.i.size();
        if (r14 <= 0) goto L88;
        r2 = new BackStackState[r14];
        int r15 = 0;
    L83:
        if (r15 >= r14) goto L88;
        r2[r15] = new BackStackState((a) this.i.get(r15));
        if (a == false) goto L87;
        Log.v("FragmentManager", "saveAllState: adding back stack #" + r15 + ": " + this.i.get(r15));
    L87:
        r15 = r15 + 1;
    L88:
        FragmentManagerState r16 = new FragmentManagerState();
        r16.a = r7;
        r16.b = r12;
        r16.c = r2;
        return r16;
    L77:
        r12 = null;
        goto L79
    L100:
        return null;
    }

    public final void g() {
        this.s = false;
    }

    public final void h() {
        this.s = false;
        d(1);
    }

    public final void i() {
        this.s = false;
        d(2);
    }

    public final void j() {
        this.s = false;
        d(4);
    }

    public final void k() {
        this.s = false;
        d(5);
    }

    public final void l() {
        d(4);
    }

    public final void m() {
        this.s = true;
        d(3);
    }

    public final void n() {
        d(2);
    }

    public final void o() {
        d(1);
    }

    public final void p() {
        this.t = true;
        d();
        d(0);
        this.o = null;
        this.p = null;
        this.q = null;
    }

    public final void q() {
        if (this.g == null) goto L11;
        int r0 = 0;
    L5:
        int r1 = r0;
        if (r1 >= this.g.size()) goto L15;
        Fragment r2 = (Fragment) this.g.get(r1);
        if (r2 == null) goto L10;
        r2.s();
    L10:
        r0 = r1 + 1;
        goto L5
    L15:
        return;
    }

    public final String toString() {
        StringBuilder r0 = new StringBuilder(128);
        r0.append("FragmentManager{");
        r0.append(Integer.toHexString(System.identityHashCode(this)));
        r0.append(" in ");
        if (this.q == null) goto L7;
        android.support.v4.c.a.a(this.q, r0);
    L5:
        r0.append("}}");
        return r0.toString();
    L7:
        android.support.v4.c.a.a(this.o, r0);
        goto L5
    }
}
