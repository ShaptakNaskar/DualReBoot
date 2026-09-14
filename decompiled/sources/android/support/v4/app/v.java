package android.support.v4.app;

import android.os.Bundle;
import android.util.Log;
import java.io.PrintWriter;
import java.lang.reflect.Modifier;

/* JADX INFO: loaded from: classes.dex */
final class v extends t {
    static boolean a = false;
    final android.support.v4.c.c b;
    final android.support.v4.c.c c;
    final String d;
    g e;
    boolean f;
    boolean g;

    final void a(g gVar) {
        this.e = gVar;
    }

    public final void a(String str, PrintWriter printWriter) {
        if (this.b.a() > 0) {
            printWriter.print(str);
            printWriter.println("Active Loaders:");
            String str2 = str + "    ";
            for (int i = 0; i < this.b.a(); i++) {
                w wVar = (w) this.b.b(i);
                printWriter.print(str);
                printWriter.print("  #");
                printWriter.print(this.b.a(i));
                printWriter.print(": ");
                printWriter.println(wVar.toString());
                wVar.a(str2, printWriter);
            }
        }
        if (this.c.a() > 0) {
            printWriter.print(str);
            printWriter.println("Inactive Loaders:");
            String str3 = str + "    ";
            for (int i2 = 0; i2 < this.c.a(); i2++) {
                w wVar2 = (w) this.c.b(i2);
                printWriter.print(str);
                printWriter.print("  #");
                printWriter.print(this.c.a(i2));
                printWriter.print(": ");
                printWriter.println(wVar2.toString());
                wVar2.a(str3, printWriter);
            }
        }
    }

    @Override // android.support.v4.app.t
    public final boolean a() {
        int iA = this.b.a();
        boolean z = false;
        for (int i = 0; i < iA; i++) {
            w wVar = (w) this.b.b(i);
            z |= wVar.h && !wVar.f;
        }
        return z;
    }

    final void b() {
        if (a) {
            Log.v("LoaderManager", "Starting in " + this);
        }
        if (this.f) {
            RuntimeException runtimeException = new RuntimeException("here");
            runtimeException.fillInStackTrace();
            Log.w("LoaderManager", "Called doStart when already started: " + this, runtimeException);
            return;
        }
        this.f = true;
        for (int iA = this.b.a() - 1; iA >= 0; iA--) {
            w wVar = (w) this.b.b(iA);
            if (wVar.i && wVar.j) {
                wVar.h = true;
            } else if (wVar.h) {
                continue;
            } else {
                wVar.h = true;
                if (a) {
                    Log.v("LoaderManager", "  Starting: " + wVar);
                }
                if (wVar.d == null && wVar.c != null) {
                    u uVar = wVar.c;
                    int i = wVar.a;
                    Bundle bundle = wVar.b;
                    wVar.d = uVar.a();
                }
                if (wVar.d == null) {
                    continue;
                } else {
                    if (wVar.d.getClass().isMemberClass() && !Modifier.isStatic(wVar.d.getClass().getModifiers())) {
                        throw new IllegalArgumentException("Object returned from onCreateLoader must not be a non-static inner member class: " + wVar.d);
                    }
                    if (!wVar.m) {
                        android.support.v4.a.f fVar = wVar.d;
                        int i2 = wVar.a;
                        if (fVar.b != null) {
                            throw new IllegalStateException("There is already a listener registered");
                        }
                        fVar.b = wVar;
                        fVar.a = i2;
                        wVar.m = true;
                    }
                    android.support.v4.a.f fVar2 = wVar.d;
                    fVar2.c = true;
                    fVar2.e = false;
                    fVar2.d = false;
                }
            }
        }
    }

    final void c() {
        if (a) {
            Log.v("LoaderManager", "Stopping in " + this);
        }
        if (!this.f) {
            RuntimeException runtimeException = new RuntimeException("here");
            runtimeException.fillInStackTrace();
            Log.w("LoaderManager", "Called doStop when not started: " + this, runtimeException);
        } else {
            for (int iA = this.b.a() - 1; iA >= 0; iA--) {
                ((w) this.b.b(iA)).a();
            }
            this.f = false;
        }
    }

    final void d() {
        if (a) {
            Log.v("LoaderManager", "Retaining in " + this);
        }
        if (!this.f) {
            RuntimeException runtimeException = new RuntimeException("here");
            runtimeException.fillInStackTrace();
            Log.w("LoaderManager", "Called doRetain when not started: " + this, runtimeException);
            return;
        }
        this.g = true;
        this.f = false;
        for (int iA = this.b.a() - 1; iA >= 0; iA--) {
            w wVar = (w) this.b.b(iA);
            if (a) {
                Log.v("LoaderManager", "  Retaining: " + wVar);
            }
            wVar.i = true;
            wVar.j = wVar.h;
            wVar.h = false;
            wVar.c = null;
        }
    }

    final void e() {
        if (this.g) {
            if (a) {
                Log.v("LoaderManager", "Finished Retaining in " + this);
            }
            this.g = false;
            for (int iA = this.b.a() - 1; iA >= 0; iA--) {
                w wVar = (w) this.b.b(iA);
                if (wVar.i) {
                    if (a) {
                        Log.v("LoaderManager", "  Finished Retaining: " + wVar);
                    }
                    wVar.i = false;
                    if (wVar.h != wVar.j && !wVar.h) {
                        wVar.a();
                    }
                }
                if (wVar.h && wVar.e && !wVar.k) {
                    wVar.a(wVar.d, wVar.g);
                }
            }
        }
    }

    final void f() {
        for (int iA = this.b.a() - 1; iA >= 0; iA--) {
            ((w) this.b.b(iA)).k = true;
        }
    }

    final void g() {
        for (int iA = this.b.a() - 1; iA >= 0; iA--) {
            w wVar = (w) this.b.b(iA);
            if (wVar.h && wVar.k) {
                wVar.k = false;
                if (wVar.e) {
                    wVar.a(wVar.d, wVar.g);
                }
            }
        }
    }

    final void h() {
        if (!this.g) {
            if (a) {
                Log.v("LoaderManager", "Destroying Active in " + this);
            }
            for (int iA = this.b.a() - 1; iA >= 0; iA--) {
                ((w) this.b.b(iA)).b();
            }
        }
        if (a) {
            Log.v("LoaderManager", "Destroying Inactive in " + this);
        }
        for (int iA2 = this.c.a() - 1; iA2 >= 0; iA2--) {
            ((w) this.c.b(iA2)).b();
        }
        this.c.b();
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder(128);
        sb.append("LoaderManager{");
        sb.append(Integer.toHexString(System.identityHashCode(this)));
        sb.append(" in ");
        android.support.v4.c.a.a(this.e, sb);
        sb.append("}}");
        return sb.toString();
    }
}
