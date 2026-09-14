package com.dualboot.c;

import android.content.Context;
import android.os.SystemClock;
import com.dualboot.engine.EngineInterface;
import java.util.ArrayList;
import javax.microedition.khronos.egl.EGL10;
import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.egl.EGLContext;
import javax.microedition.khronos.egl.EGLDisplay;
import javax.microedition.khronos.egl.EGLSurface;
import javax.microedition.khronos.opengles.GL11;

/* JADX INFO: loaded from: classes.dex */
public final class g extends Thread {
    private static /* synthetic */ int[] P;
    private static /* synthetic */ int[] Q;
    private static /* synthetic */ int[] R;
    private boolean L;
    private boolean M;
    private boolean N;
    private boolean O;
    private final Context a;
    private final String b;
    private final String c;
    private int d;
    private final ArrayList e;
    private GL11 f;
    private EGL10 g;
    private EGLDisplay h;
    private EGLSurface i;
    private EGLContext j;
    private EGLConfig k;
    private a l;
    private Object m;
    private int n;
    private int o;
    private int p;
    private double q = 0.5d;
    private double r = 0.5d;
    private double s = 0.5d;
    private i t = i.CAMERA_ANIM_HOMESCREEN;
    private h u = h.AUTOPAN_SPEED_MEDIUM;
    private long v = 45000;
    private double w = 2.2222222222222223E-5d;
    private k x = k.POWERMANAGE_BALANCED;
    private long y = 10;
    private boolean z = false;
    private long A = 0;
    private long B = 0;
    private float C = -1.0f;
    private float D = -1.0f;
    private boolean E = false;
    private boolean F = false;
    private boolean G = false;
    private long H = 0;
    private long I = 0;
    private float J = -1000.0f;
    private float K = -1000.0f;

    private g(Context context, String str, String str2) {
        setUncaughtExceptionHandler(new l(this, (byte) 0));
        this.a = context;
        this.b = str;
        this.c = str2;
        this.d = 0;
        this.e = new ArrayList();
        this.f = null;
        this.g = null;
        this.h = null;
        this.i = null;
        this.j = null;
        this.k = null;
        this.l = new a(5, 6, 5, 0, 16, b.ES_1_1);
        this.m = null;
        this.n = 0;
        this.o = 0;
        this.p = 0;
        this.L = false;
        this.M = false;
        this.N = false;
        this.O = false;
        setName("DualBootGames/OpenGLThread");
        setPriority(5);
    }

    public static g a(Context context, String str, String str2) {
        g gVar = new g(context, str, str2);
        gVar.start();
        return gVar;
    }

    private static void a(long j) {
        if (j <= 0) {
            Thread.yield();
        } else {
            try {
                Thread.sleep(j);
            } catch (InterruptedException e) {
            }
        }
    }

    private void a(j jVar) {
        synchronized (this.e) {
            int size = this.e.size();
            j jVar2 = size > 0 ? (j) this.e.get(size - 1) : null;
            if (jVar2 == null || jVar2.ordinal() != jVar.ordinal()) {
                this.e.add(jVar);
            }
        }
    }

    private boolean c() {
        int iGlGetError;
        int iEglGetError;
        boolean z = true;
        if (this.g != null && (iEglGetError = this.g.eglGetError()) != 12288) {
            String str = "Error (EGL): " + iEglGetError;
            z = false;
        }
        if (this.f == null || (iGlGetError = this.f.glGetError()) == 0) {
            return z;
        }
        String str2 = "Error ( GL): " + iGlGetError;
        return false;
    }

    private j d() {
        synchronized (this.e) {
            if (this.e.isEmpty()) {
                return null;
            }
            return (j) this.e.remove(0);
        }
    }

    private int e() {
        int size;
        synchronized (this.e) {
            size = this.e.size();
        }
        return size;
    }

    /* JADX WARN: Code duplicated, block: B:42:0x008a A[Catch: all -> 0x0081, TryCatch #0 {, blocks: (B:4:0x0003, B:6:0x000a, B:8:0x000c, B:9:0x002c, B:10:0x002f, B:11:0x0033, B:13:0x0037, B:15:0x003b, B:17:0x003f, B:19:0x0043, B:21:0x0047, B:23:0x004b, B:25:0x004f, B:27:0x005f, B:30:0x006c, B:41:0x0086, B:31:0x006e, B:33:0x0072, B:35:0x0076, B:42:0x008a, B:44:0x008e, B:46:0x009f, B:47:0x00a8, B:49:0x00ac, B:50:0x00b5, B:52:0x00b9, B:53:0x00c0, B:54:0x00d7, B:56:0x00db, B:58:0x00e1, B:60:0x00ed, B:62:0x00fb, B:64:0x0108, B:66:0x0112, B:67:0x012d, B:69:0x0131, B:70:0x014c, B:72:0x0150, B:73:0x016b, B:75:0x016f, B:76:0x018a, B:78:0x018e, B:79:0x01ac, B:81:0x01b0, B:82:0x01ce, B:84:0x01d2, B:85:0x01f1, B:87:0x01f5, B:88:0x0214, B:90:0x0218, B:91:0x021e, B:92:0x0221, B:94:0x0225, B:95:0x022b, B:97:0x023d, B:99:0x0250, B:101:0x025e, B:105:0x0276, B:106:0x0279, B:102:0x0261, B:104:0x0265, B:107:0x027c, B:108:0x0281, B:109:0x0286, B:110:0x028b, B:111:0x0292), top: B:114:0x0003 }] */
    /* JADX WARN: Code duplicated, block: B:44:0x008e A[Catch: all -> 0x0081, TryCatch #0 {, blocks: (B:4:0x0003, B:6:0x000a, B:8:0x000c, B:9:0x002c, B:10:0x002f, B:11:0x0033, B:13:0x0037, B:15:0x003b, B:17:0x003f, B:19:0x0043, B:21:0x0047, B:23:0x004b, B:25:0x004f, B:27:0x005f, B:30:0x006c, B:41:0x0086, B:31:0x006e, B:33:0x0072, B:35:0x0076, B:42:0x008a, B:44:0x008e, B:46:0x009f, B:47:0x00a8, B:49:0x00ac, B:50:0x00b5, B:52:0x00b9, B:53:0x00c0, B:54:0x00d7, B:56:0x00db, B:58:0x00e1, B:60:0x00ed, B:62:0x00fb, B:64:0x0108, B:66:0x0112, B:67:0x012d, B:69:0x0131, B:70:0x014c, B:72:0x0150, B:73:0x016b, B:75:0x016f, B:76:0x018a, B:78:0x018e, B:79:0x01ac, B:81:0x01b0, B:82:0x01ce, B:84:0x01d2, B:85:0x01f1, B:87:0x01f5, B:88:0x0214, B:90:0x0218, B:91:0x021e, B:92:0x0221, B:94:0x0225, B:95:0x022b, B:97:0x023d, B:99:0x0250, B:101:0x025e, B:105:0x0276, B:106:0x0279, B:102:0x0261, B:104:0x0265, B:107:0x027c, B:108:0x0281, B:109:0x0286, B:110:0x028b, B:111:0x0292), top: B:114:0x0003 }] */
    /* JADX WARN: Code duplicated, block: B:46:0x009f A[Catch: all -> 0x0081, TryCatch #0 {, blocks: (B:4:0x0003, B:6:0x000a, B:8:0x000c, B:9:0x002c, B:10:0x002f, B:11:0x0033, B:13:0x0037, B:15:0x003b, B:17:0x003f, B:19:0x0043, B:21:0x0047, B:23:0x004b, B:25:0x004f, B:27:0x005f, B:30:0x006c, B:41:0x0086, B:31:0x006e, B:33:0x0072, B:35:0x0076, B:42:0x008a, B:44:0x008e, B:46:0x009f, B:47:0x00a8, B:49:0x00ac, B:50:0x00b5, B:52:0x00b9, B:53:0x00c0, B:54:0x00d7, B:56:0x00db, B:58:0x00e1, B:60:0x00ed, B:62:0x00fb, B:64:0x0108, B:66:0x0112, B:67:0x012d, B:69:0x0131, B:70:0x014c, B:72:0x0150, B:73:0x016b, B:75:0x016f, B:76:0x018a, B:78:0x018e, B:79:0x01ac, B:81:0x01b0, B:82:0x01ce, B:84:0x01d2, B:85:0x01f1, B:87:0x01f5, B:88:0x0214, B:90:0x0218, B:91:0x021e, B:92:0x0221, B:94:0x0225, B:95:0x022b, B:97:0x023d, B:99:0x0250, B:101:0x025e, B:105:0x0276, B:106:0x0279, B:102:0x0261, B:104:0x0265, B:107:0x027c, B:108:0x0281, B:109:0x0286, B:110:0x028b, B:111:0x0292), top: B:114:0x0003 }] */
    /* JADX WARN: Code duplicated, block: B:49:0x00ac A[Catch: all -> 0x0081, TryCatch #0 {, blocks: (B:4:0x0003, B:6:0x000a, B:8:0x000c, B:9:0x002c, B:10:0x002f, B:11:0x0033, B:13:0x0037, B:15:0x003b, B:17:0x003f, B:19:0x0043, B:21:0x0047, B:23:0x004b, B:25:0x004f, B:27:0x005f, B:30:0x006c, B:41:0x0086, B:31:0x006e, B:33:0x0072, B:35:0x0076, B:42:0x008a, B:44:0x008e, B:46:0x009f, B:47:0x00a8, B:49:0x00ac, B:50:0x00b5, B:52:0x00b9, B:53:0x00c0, B:54:0x00d7, B:56:0x00db, B:58:0x00e1, B:60:0x00ed, B:62:0x00fb, B:64:0x0108, B:66:0x0112, B:67:0x012d, B:69:0x0131, B:70:0x014c, B:72:0x0150, B:73:0x016b, B:75:0x016f, B:76:0x018a, B:78:0x018e, B:79:0x01ac, B:81:0x01b0, B:82:0x01ce, B:84:0x01d2, B:85:0x01f1, B:87:0x01f5, B:88:0x0214, B:90:0x0218, B:91:0x021e, B:92:0x0221, B:94:0x0225, B:95:0x022b, B:97:0x023d, B:99:0x0250, B:101:0x025e, B:105:0x0276, B:106:0x0279, B:102:0x0261, B:104:0x0265, B:107:0x027c, B:108:0x0281, B:109:0x0286, B:110:0x028b, B:111:0x0292), top: B:114:0x0003 }] */
    /* JADX WARN: Code duplicated, block: B:52:0x00b9 A[Catch: all -> 0x0081, TryCatch #0 {, blocks: (B:4:0x0003, B:6:0x000a, B:8:0x000c, B:9:0x002c, B:10:0x002f, B:11:0x0033, B:13:0x0037, B:15:0x003b, B:17:0x003f, B:19:0x0043, B:21:0x0047, B:23:0x004b, B:25:0x004f, B:27:0x005f, B:30:0x006c, B:41:0x0086, B:31:0x006e, B:33:0x0072, B:35:0x0076, B:42:0x008a, B:44:0x008e, B:46:0x009f, B:47:0x00a8, B:49:0x00ac, B:50:0x00b5, B:52:0x00b9, B:53:0x00c0, B:54:0x00d7, B:56:0x00db, B:58:0x00e1, B:60:0x00ed, B:62:0x00fb, B:64:0x0108, B:66:0x0112, B:67:0x012d, B:69:0x0131, B:70:0x014c, B:72:0x0150, B:73:0x016b, B:75:0x016f, B:76:0x018a, B:78:0x018e, B:79:0x01ac, B:81:0x01b0, B:82:0x01ce, B:84:0x01d2, B:85:0x01f1, B:87:0x01f5, B:88:0x0214, B:90:0x0218, B:91:0x021e, B:92:0x0221, B:94:0x0225, B:95:0x022b, B:97:0x023d, B:99:0x0250, B:101:0x025e, B:105:0x0276, B:106:0x0279, B:102:0x0261, B:104:0x0265, B:107:0x027c, B:108:0x0281, B:109:0x0286, B:110:0x028b, B:111:0x0292), top: B:114:0x0003 }] */
    private void f() {
        synchronized (this) {
            int iE = e();
            for (int i = 0; i < iE; i++) {
                j jVarD = d();
                String str = "Processing Msg " + jVarD.name();
                switch (h()[jVarD.ordinal()]) {
                    case 1:
                        if (this.L) {
                            if (this.O) {
                                if (this.d != 0 && this.g != null && this.h != null && this.i != null && this.j != null) {
                                    if (this.g.eglMakeCurrent(this.h, this.i, this.i, this.j)) {
                                        this.d = EngineInterface.Destroy(this.d);
                                        this.O = this.d != 0;
                                    } else {
                                        c();
                                    }
                                }
                                if (this.d != 0 || this.O) {
                                    a(j.REQUEST_SLEEP);
                                    a(j.REQUEST_SURFACE_DESTROY);
                                } else {
                                    if (this.g != null) {
                                        this.g.eglMakeCurrent(this.h, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_CONTEXT);
                                        if (this.j != null) {
                                            this.g.eglDestroyContext(this.h, this.j);
                                        }
                                        if (this.i != null) {
                                            this.g.eglDestroySurface(this.h, this.i);
                                        }
                                        if (this.h != null) {
                                            this.g.eglTerminate(this.h);
                                        }
                                    }
                                    this.k = null;
                                    this.j = null;
                                    this.i = null;
                                    this.h = null;
                                    this.g = null;
                                    this.f = null;
                                    this.L = false;
                                }
                            } else {
                                if (this.g != null) {
                                    this.g.eglMakeCurrent(this.h, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_CONTEXT);
                                    if (this.j != null) {
                                        this.g.eglDestroyContext(this.h, this.j);
                                    }
                                    if (this.i != null) {
                                        this.g.eglDestroySurface(this.h, this.i);
                                    }
                                    if (this.h != null) {
                                        this.g.eglTerminate(this.h);
                                    }
                                }
                                this.k = null;
                                this.j = null;
                                this.i = null;
                                this.h = null;
                                this.g = null;
                                this.f = null;
                                this.L = false;
                            }
                        }
                        break;
                    case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                        if (!this.L && g()) {
                            this.g = (EGL10) EGLContext.getEGL();
                            if (this.g != null) {
                                this.h = this.g.eglGetDisplay(EGL10.EGL_DEFAULT_DISPLAY);
                                if (this.h != null) {
                                    if (this.g.eglInitialize(this.h, new int[2])) {
                                        this.l = null;
                                        this.k = null;
                                        if (this.k == null) {
                                            this.l = new a(5, 6, 5, 0, 16, b.ES_1_1);
                                            this.k = this.l.a(this.g, this.h);
                                        }
                                        if (this.k == null) {
                                            this.l = new a(4, 4, 4, 0, 16, b.ES_1_1);
                                            this.k = this.l.a(this.g, this.h);
                                        }
                                        if (this.k == null) {
                                            this.l = new a(5, 6, 5, 0, 24, b.ES_1_1);
                                            this.k = this.l.a(this.g, this.h);
                                        }
                                        if (this.k == null) {
                                            this.l = new a(4, 4, 4, 0, 24, b.ES_1_1);
                                            this.k = this.l.a(this.g, this.h);
                                        }
                                        if (this.k == null) {
                                            this.l = new a(8, 8, 8, 0, 16, b.ES_1_1);
                                            this.k = this.l.a(this.g, this.h);
                                        }
                                        if (this.k == null) {
                                            this.l = new a(8, 8, 8, 0, 24, b.ES_1_1);
                                            this.k = this.l.a(this.g, this.h);
                                        }
                                        if (this.k == null) {
                                            this.l = new a(8, 8, 8, 8, 16, b.ES_1_1);
                                            this.k = this.l.a(this.g, this.h);
                                        }
                                        if (this.k == null) {
                                            this.l = new a(8, 8, 8, 8, 24, b.ES_1_1);
                                            this.k = this.l.a(this.g, this.h);
                                        }
                                        if (this.k != null) {
                                            a aVar = this.l;
                                            b bVar = b.Unspecified;
                                            switch (aVar.a) {
                                                case 1:
                                                    bVar = b.ES_1_1;
                                                    break;
                                                case com.dualboot.h.TextViewHeaderImg_img_layout_height_scale /* 4 */:
                                                    bVar = b.ES_2_0;
                                                    break;
                                            }
                                            this.j = this.g.eglCreateContext(this.h, this.k, EGL10.EGL_NO_CONTEXT, bVar == b.ES_2_0 ? new int[]{12440, 2, 12344} : null);
                                            if (this.j != null) {
                                                this.i = this.g.eglCreateWindowSurface(this.h, this.k, this.m, null);
                                                if (this.i != null) {
                                                    this.f = (GL11) this.j.getGL();
                                                    if (this.f != null) {
                                                        this.L = true;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if (!this.L) {
                            a(j.REQUEST_SLEEP_LONG);
                            a(j.REQUEST_SURFACE_DESTROY);
                            a(j.REQUEST_SURFACE_CREATE);
                        }
                        break;
                    case com.dualboot.h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                        this.N = true;
                        break;
                    case com.dualboot.h.TextViewHeaderImg_img_layout_height_scale /* 4 */:
                        this.N = false;
                        break;
                    case com.dualboot.h.TextViewHeaderImg_img_corner_radius /* 5 */:
                        this.M = false;
                        break;
                    case com.dualboot.h.TextViewHeaderImg_img_stroke_enabled /* 6 */:
                        a(100L);
                        break;
                    case com.dualboot.h.TextViewHeaderImg_img_stroke_width /* 7 */:
                        a(1000L);
                        break;
                }
            }
        }
    }

    private boolean g() {
        return this.m != null && this.n != 0 && this.o > 0 && this.p > 0;
    }

    private static /* synthetic */ int[] h() {
        int[] iArr = P;
        if (iArr == null) {
            iArr = new int[j.valuesCustom().length];
            try {
                iArr[j.REQUEST_MAKE_HIDDEN.ordinal()] = 4;
            } catch (NoSuchFieldError e) {
            }
            try {
                iArr[j.REQUEST_MAKE_VISIBLE.ordinal()] = 3;
            } catch (NoSuchFieldError e2) {
            }
            try {
                iArr[j.REQUEST_SHUTDOWN.ordinal()] = 5;
            } catch (NoSuchFieldError e3) {
            }
            try {
                iArr[j.REQUEST_SLEEP.ordinal()] = 6;
            } catch (NoSuchFieldError e4) {
            }
            try {
                iArr[j.REQUEST_SLEEP_LONG.ordinal()] = 7;
            } catch (NoSuchFieldError e5) {
            }
            try {
                iArr[j.REQUEST_SURFACE_CREATE.ordinal()] = 2;
            } catch (NoSuchFieldError e6) {
            }
            try {
                iArr[j.REQUEST_SURFACE_DESTROY.ordinal()] = 1;
            } catch (NoSuchFieldError e7) {
            }
            P = iArr;
        }
        return iArr;
    }

    private static /* synthetic */ int[] i() {
        int[] iArr = Q;
        if (iArr == null) {
            iArr = new int[h.valuesCustom().length];
            try {
                iArr[h.AUTOPAN_SPEED_FAST.ordinal()] = 3;
            } catch (NoSuchFieldError e) {
            }
            try {
                iArr[h.AUTOPAN_SPEED_MEDIUM.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                iArr[h.AUTOPAN_SPEED_SLOW.ordinal()] = 1;
            } catch (NoSuchFieldError e3) {
            }
            Q = iArr;
        }
        return iArr;
    }

    private static /* synthetic */ int[] j() {
        int[] iArr = R;
        if (iArr == null) {
            iArr = new int[k.valuesCustom().length];
            try {
                iArr[k.POWERMANAGE_BALANCED.ordinal()] = 2;
            } catch (NoSuchFieldError e) {
            }
            try {
                iArr[k.POWERMANAGE_BATTERY_SAVER.ordinal()] = 3;
            } catch (NoSuchFieldError e2) {
            }
            try {
                iArr[k.POWERMANAGE_HIGH_PERFORMANCE.ordinal()] = 1;
            } catch (NoSuchFieldError e3) {
            }
            R = iArr;
        }
        return iArr;
    }

    public final void a() {
        synchronized (this) {
            this.F = true;
        }
    }

    public final void a(float f) {
        synchronized (this) {
            this.q = f;
        }
    }

    public final void a(float f, float f2) {
        synchronized (this) {
            this.J = f;
            this.K = f2;
        }
    }

    public final void a(float f, float f2, long j) {
        synchronized (this) {
            this.C = f;
            this.D = f2;
            this.B = j;
        }
    }

    public final void a(h hVar, long j) {
        synchronized (this) {
            this.u = hVar;
            switch (i()[this.u.ordinal()]) {
                case 1:
                    this.v = 90000L;
                    break;
                case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                default:
                    this.v = 45000L;
                    break;
                case com.dualboot.h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                    this.v = 22500L;
                    break;
            }
            this.v *= j;
            this.w = 1.0f / this.v;
        }
    }

    public final void a(i iVar) {
        synchronized (this) {
            this.t = iVar;
        }
    }

    public final void a(k kVar) {
        synchronized (this) {
            this.x = kVar;
            switch (j()[this.x.ordinal()]) {
                case 1:
                    this.y = 0L;
                    break;
                case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                default:
                    this.y = 10L;
                    break;
                case com.dualboot.h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                    this.y = 20L;
                    break;
            }
        }
    }

    public final void a(Object obj, int i, int i2, int i3) {
        boolean zEquals;
        synchronized (this) {
            boolean z = this.L;
            if (this.m == null) {
                zEquals = obj == null;
            } else {
                zEquals = this.m.equals(obj);
            }
            boolean z2 = this.n == i;
            this.m = obj;
            this.n = i;
            this.o = i2;
            this.p = i3;
            if (!zEquals || !z2) {
                if (z) {
                    a(j.REQUEST_SURFACE_DESTROY);
                    a(j.REQUEST_SLEEP);
                }
                if (g()) {
                    a(j.REQUEST_SURFACE_CREATE);
                }
            }
        }
    }

    public final void a(boolean z) {
        synchronized (this) {
            try {
                if (z) {
                    a(j.REQUEST_MAKE_VISIBLE);
                } else {
                    a(j.REQUEST_MAKE_HIDDEN);
                }
            } catch (Throwable th) {
                throw th;
            }
        }
    }

    public final void b() {
        synchronized (this) {
            a(j.REQUEST_SURFACE_DESTROY);
            a(j.REQUEST_SHUTDOWN);
        }
        try {
            join();
        } catch (InterruptedException e) {
        }
    }

    public final void b(float f) {
        synchronized (this) {
            this.r = f;
        }
    }

    public final void b(boolean z) {
        synchronized (this) {
            this.z = z;
            if (this.z) {
                this.A = SystemClock.uptimeMillis();
            } else {
                this.A = 0L;
            }
        }
    }

    public final void c(boolean z) {
        synchronized (this) {
            this.E = z;
        }
    }

    /* JADX WARN: Code duplicated, block: B:90:0x02c5  */
    @Override // java.lang.Thread, java.lang.Runnable
    public final void run() {
        boolean z;
        boolean z2;
        float f;
        float f2;
        double d;
        double d2;
        boolean z3;
        boolean z4;
        float f3;
        i iVar;
        boolean z5;
        long j;
        this.L = false;
        this.N = false;
        this.F = false;
        this.G = false;
        this.M = true;
        long j2 = 0;
        while (this.M) {
            long jUptimeMillis = SystemClock.uptimeMillis();
            long j3 = jUptimeMillis - j2;
            synchronized (this) {
                z = this.N;
                z2 = this.E;
                f = this.J;
                f2 = this.K;
                d = this.q;
                d2 = this.r;
            }
            if (EngineInterface.a() && z && this.L && this.g.eglMakeCurrent(this.h, this.i, this.i, this.j)) {
                boolean z6 = this.F && !this.G;
                this.G = this.F;
                if (!this.O || this.F) {
                    if (this.F) {
                        if (z6) {
                            this.H = jUptimeMillis;
                        }
                        long j4 = jUptimeMillis - this.H;
                        if (j4 <= 750) {
                            float f4 = (j4 - 250) / 500.0f;
                            z3 = false;
                            z4 = true;
                            f3 = f4;
                        } else {
                            z3 = true;
                            z4 = false;
                            f3 = 0.0f;
                        }
                    } else {
                        z3 = true;
                        z4 = false;
                        f3 = 0.0f;
                    }
                    if (!this.O || z3) {
                        this.d = EngineInterface.a(this.d, this.a, this.b, this.c, f, f2);
                        this.O = this.d != 0;
                        this.I = jUptimeMillis;
                        this.F = false;
                        String str = "Load scene (" + this.b + "), settings (" + this.c + ") = " + this.d;
                        String str2 = "   GL_VENDOR   = " + this.f.glGetString(7936);
                        String str3 = "   GL_RENDERER = " + this.f.glGetString(7937);
                        String str4 = "   GL_VERSION  = " + this.f.glGetString(7938);
                    }
                } else {
                    z4 = false;
                    f3 = 0.0f;
                }
                long j5 = jUptimeMillis - this.I;
                if (j5 <= 1000) {
                    f3 = 1.0f - (j5 / 1000.0f);
                }
                float f5 = 1.0f - f3;
                float f6 = 1.0f - (f5 * f5);
                double dCos = 0.5d;
                synchronized (this) {
                    iVar = this.t;
                    z5 = this.z;
                    j = this.A;
                }
                if (z5) {
                    if (z4) {
                        dCos = this.s;
                    } else {
                        long j6 = (jUptimeMillis - j) - 250;
                        if (j6 <= 15000) {
                            if (j6 >= 0) {
                                dCos = (Math.sin((j6 % 15000) * 6.666666666666667E-5d * 2.0d * 3.141592653589793d) * 0.5d) + 0.5d;
                            } else {
                                dCos = 0.5d;
                                this.s = 0.5d;
                            }
                        }
                    }
                } else if (iVar == i.CAMERA_ANIM_AUTOPAN) {
                    dCos = (Math.cos((jUptimeMillis % this.v) * this.w * 2.0d * 3.141592653589793d) * 0.5d) + 0.5d;
                    this.s = dCos;
                } else if (iVar == i.CAMERA_ANIM_HOMESCREEN) {
                    dCos = d;
                } else if (iVar == i.CAMERA_ANIM_MANUAL) {
                    dCos = d2;
                }
                this.s = ((dCos - this.s) * Math.min(1.0d, 0.006d * j3)) + this.s;
                EngineInterface.SetStateLocation(this.d, f, f2);
                this.d = EngineInterface.Update(this.d, this.o, this.p, this.C, this.D, this.B, this.s, f6, z2);
                if (EngineInterface.GetNeedsReload(this.d)) {
                    synchronized (this) {
                        this.F = true;
                    }
                }
                c();
                if (!this.g.eglSwapBuffers(this.h, this.i)) {
                    c();
                }
            }
            if (z) {
                EngineInterface.Sleep(this.y);
            } else {
                EngineInterface.Sleep(34L);
            }
            f();
            j2 = jUptimeMillis;
        }
        String str5 = "...has resources=(" + this.O + "), has surface=(" + this.L + ")";
    }
}
