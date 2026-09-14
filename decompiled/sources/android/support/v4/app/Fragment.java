package android.support.v4.app;

import android.content.ComponentCallbacks;
import android.content.Context;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.SparseArray;
import android.view.ContextMenu;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Animation;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public final class Fragment implements ComponentCallbacks, View.OnCreateContextMenuListener {
    private static final HashMap P = new HashMap();
    boolean A;
    boolean B;
    boolean C;
    boolean D;
    boolean F;
    int G;
    ViewGroup H;
    View I;
    View J;
    boolean K;
    v M;
    boolean N;
    boolean O;
    View b;
    int c;
    Bundle d;
    SparseArray e;
    String g;
    Bundle h;
    Fragment i;
    int k;
    boolean l;
    boolean m;
    boolean n;
    boolean o;
    boolean p;
    boolean q;
    int r;
    l s;
    g t;
    l u;
    Fragment v;
    int w;
    int x;
    String y;
    boolean z;
    int a = 0;
    int f = -1;
    int j = -1;
    boolean E = true;
    boolean L = true;

    public class SavedState implements Parcelable {
        public static final Parcelable.Creator CREATOR = new f();
        final Bundle a;

        SavedState(Parcel parcel) {
            this.a = parcel.readBundle();
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            return 0;
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            parcel.writeBundle(this.a);
        }
    }

    public static Fragment a(Context context, String str) {
        return a(context, str, null);
    }

    public static Fragment a(Context context, String str, Bundle bundle) {
        try {
            Class<?> clsLoadClass = (Class) P.get(str);
            if (clsLoadClass == null) {
                clsLoadClass = context.getClassLoader().loadClass(str);
                P.put(str, clsLoadClass);
            }
            Fragment fragment = (Fragment) clsLoadClass.newInstance();
            if (bundle != null) {
                bundle.setClassLoader(fragment.getClass().getClassLoader());
                fragment.h = bundle;
            }
            return fragment;
        } catch (ClassNotFoundException e) {
            throw new e("Unable to instantiate fragment " + str + ": make sure class name exists, is public, and has an empty constructor that is public", e);
        } catch (IllegalAccessException e2) {
            throw new e("Unable to instantiate fragment " + str + ": make sure class name exists, is public, and has an empty constructor that is public", e2);
        } catch (InstantiationException e3) {
            throw new e("Unable to instantiate fragment " + str + ": make sure class name exists, is public, and has an empty constructor that is public", e3);
        }
    }

    public static void e() {
    }

    public static void f() {
    }

    public static Animation j() {
        return null;
    }

    public static void k() {
    }

    public static void n() {
    }

    final void a() {
        if (this.e != null) {
            this.J.restoreHierarchyState(this.e);
            this.e = null;
        }
        this.F = false;
        this.F = true;
        if (!this.F) {
            throw new ap("Fragment " + this + " did not call through to super.onViewStateRestored()");
        }
    }

    final void a(int i, Fragment fragment) {
        this.f = i;
        if (fragment != null) {
            this.g = fragment.g + ":" + this.f;
        } else {
            this.g = "android:fragment:" + this.f;
        }
    }

    final void a(Configuration configuration) {
        this.F = true;
        if (this.u != null) {
            this.u.a(configuration);
        }
    }

    final void a(Bundle bundle) {
        Parcelable parcelable;
        if (this.u != null) {
            this.u.g();
        }
        this.F = false;
        this.F = true;
        if (!this.F) {
            throw new ap("Fragment " + this + " did not call through to super.onCreate()");
        }
        if (bundle == null || (parcelable = bundle.getParcelable("android:support:fragments")) == null) {
            return;
        }
        if (this.u == null) {
            this.u = new l();
            this.u.a(this.t, new d(this), this);
        }
        this.u.a(parcelable, (ArrayList) null);
        this.u.h();
    }

    public final void a(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        printWriter.print(str);
        printWriter.print("mFragmentId=#");
        printWriter.print(Integer.toHexString(this.w));
        printWriter.print(" mContainerId=#");
        printWriter.print(Integer.toHexString(this.x));
        printWriter.print(" mTag=");
        printWriter.println(this.y);
        printWriter.print(str);
        printWriter.print("mState=");
        printWriter.print(this.a);
        printWriter.print(" mIndex=");
        printWriter.print(this.f);
        printWriter.print(" mWho=");
        printWriter.print(this.g);
        printWriter.print(" mBackStackNesting=");
        printWriter.println(this.r);
        printWriter.print(str);
        printWriter.print("mAdded=");
        printWriter.print(this.l);
        printWriter.print(" mRemoving=");
        printWriter.print(this.m);
        printWriter.print(" mResumed=");
        printWriter.print(this.n);
        printWriter.print(" mFromLayout=");
        printWriter.print(this.o);
        printWriter.print(" mInLayout=");
        printWriter.println(this.p);
        printWriter.print(str);
        printWriter.print("mHidden=");
        printWriter.print(this.z);
        printWriter.print(" mDetached=");
        printWriter.print(this.A);
        printWriter.print(" mMenuVisible=");
        printWriter.print(this.E);
        printWriter.print(" mHasMenu=");
        printWriter.println(this.D);
        printWriter.print(str);
        printWriter.print("mRetainInstance=");
        printWriter.print(this.B);
        printWriter.print(" mRetaining=");
        printWriter.print(this.C);
        printWriter.print(" mUserVisibleHint=");
        printWriter.println(this.L);
        if (this.s != null) {
            printWriter.print(str);
            printWriter.print("mFragmentManager=");
            printWriter.println(this.s);
        }
        if (this.t != null) {
            printWriter.print(str);
            printWriter.print("mActivity=");
            printWriter.println(this.t);
        }
        if (this.v != null) {
            printWriter.print(str);
            printWriter.print("mParentFragment=");
            printWriter.println(this.v);
        }
        if (this.h != null) {
            printWriter.print(str);
            printWriter.print("mArguments=");
            printWriter.println(this.h);
        }
        if (this.d != null) {
            printWriter.print(str);
            printWriter.print("mSavedFragmentState=");
            printWriter.println(this.d);
        }
        if (this.e != null) {
            printWriter.print(str);
            printWriter.print("mSavedViewState=");
            printWriter.println(this.e);
        }
        if (this.i != null) {
            printWriter.print(str);
            printWriter.print("mTarget=");
            printWriter.print(this.i);
            printWriter.print(" mTargetRequestCode=");
            printWriter.println(this.k);
        }
        if (this.G != 0) {
            printWriter.print(str);
            printWriter.print("mNextAnim=");
            printWriter.println(this.G);
        }
        if (this.H != null) {
            printWriter.print(str);
            printWriter.print("mContainer=");
            printWriter.println(this.H);
        }
        if (this.I != null) {
            printWriter.print(str);
            printWriter.print("mView=");
            printWriter.println(this.I);
        }
        if (this.J != null) {
            printWriter.print(str);
            printWriter.print("mInnerView=");
            printWriter.println(this.I);
        }
        if (this.b != null) {
            printWriter.print(str);
            printWriter.print("mAnimatingAway=");
            printWriter.println(this.b);
            printWriter.print(str);
            printWriter.print("mStateAfterAnimating=");
            printWriter.println(this.c);
        }
        if (this.M != null) {
            printWriter.print(str);
            printWriter.println("Loader Manager:");
            this.M.a(str + "  ", printWriter);
        }
        if (this.u != null) {
            printWriter.print(str);
            printWriter.println("Child " + this.u + ":");
            this.u.a(str + "  ", fileDescriptor, printWriter, strArr);
        }
    }

    final boolean a(Menu menu) {
        boolean z = false;
        if (this.z) {
            return false;
        }
        if (this.D && this.E) {
            z = true;
        }
        return this.u != null ? z | this.u.a(menu) : z;
    }

    final boolean a(Menu menu, MenuInflater menuInflater) {
        boolean z = false;
        if (this.z) {
            return false;
        }
        if (this.D && this.E) {
            z = true;
        }
        return this.u != null ? z | this.u.a(menu, menuInflater) : z;
    }

    final boolean a(MenuItem menuItem) {
        if (!this.z) {
            if (this.D) {
                boolean z = this.E;
            }
            if (this.u != null && this.u.a(menuItem)) {
                return true;
            }
        }
        return false;
    }

    final void b(Bundle bundle) {
        Parcelable parcelableF;
        if (this.u == null || (parcelableF = this.u.f()) == null) {
            return;
        }
        bundle.putParcelable("android:support:fragments", parcelableF);
    }

    final void b(Menu menu) {
        if (this.z) {
            return;
        }
        if (this.D) {
            boolean z = this.E;
        }
        if (this.u != null) {
            this.u.b(menu);
        }
    }

    final boolean b() {
        return this.r > 0;
    }

    final boolean b(MenuItem menuItem) {
        return (this.z || this.u == null || !this.u.b(menuItem)) ? false : true;
    }

    public final Resources c() {
        if (this.t == null) {
            throw new IllegalStateException("Fragment " + this + " not attached to Activity");
        }
        return this.t.getResources();
    }

    public final boolean d() {
        return this.A;
    }

    public final boolean equals(Object obj) {
        return super.equals(obj);
    }

    public final LayoutInflater g() {
        return this.t.getLayoutInflater();
    }

    public final void h() {
        this.F = true;
    }

    public final int hashCode() {
        return super.hashCode();
    }

    public final void i() {
        this.F = true;
    }

    final void l() {
        this.f = -1;
        this.g = null;
        this.l = false;
        this.m = false;
        this.n = false;
        this.o = false;
        this.p = false;
        this.q = false;
        this.r = 0;
        this.s = null;
        this.t = null;
        this.w = 0;
        this.x = 0;
        this.y = null;
        this.z = false;
        this.A = false;
        this.C = false;
        this.M = null;
        this.N = false;
        this.O = false;
    }

    public final void m() {
        this.F = true;
    }

    final View o() {
        if (this.u == null) {
            return null;
        }
        this.u.g();
        return null;
    }

    @Override // android.content.ComponentCallbacks
    public final void onConfigurationChanged(Configuration configuration) {
        this.F = true;
    }

    @Override // android.view.View.OnCreateContextMenuListener
    public final void onCreateContextMenu(ContextMenu contextMenu, View view, ContextMenu.ContextMenuInfo contextMenuInfo) {
        this.t.onCreateContextMenu(contextMenu, view, contextMenuInfo);
    }

    @Override // android.content.ComponentCallbacks
    public final void onLowMemory() {
        this.F = true;
    }

    final void p() {
        if (this.u != null) {
            this.u.g();
        }
        this.F = false;
        this.F = true;
        if (!this.F) {
            throw new ap("Fragment " + this + " did not call through to super.onActivityCreated()");
        }
        if (this.u != null) {
            this.u.i();
        }
    }

    final void q() {
        if (this.u != null) {
            this.u.g();
            this.u.d();
        }
        this.F = false;
        this.F = true;
        if (!this.N) {
            this.N = true;
            if (!this.O) {
                this.O = true;
                g gVar = this.t;
                String str = this.g;
                boolean z = this.N;
                this.M = gVar.b(str);
            }
            if (this.M != null) {
                this.M.b();
            }
        }
        if (!this.F) {
            throw new ap("Fragment " + this + " did not call through to super.onStart()");
        }
        if (this.u != null) {
            this.u.j();
        }
        if (this.M != null) {
            this.M.g();
        }
    }

    final void r() {
        if (this.u != null) {
            this.u.g();
            this.u.d();
        }
        this.F = false;
        this.F = true;
        if (!this.F) {
            throw new ap("Fragment " + this + " did not call through to super.onResume()");
        }
        if (this.u != null) {
            this.u.k();
            this.u.d();
        }
    }

    final void s() {
        this.F = true;
        if (this.u != null) {
            this.u.q();
        }
    }

    final void t() {
        if (this.u != null) {
            this.u.l();
        }
        this.F = false;
        this.F = true;
        if (!this.F) {
            throw new ap("Fragment " + this + " did not call through to super.onPause()");
        }
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder(128);
        android.support.v4.c.a.a(this, sb);
        if (this.f >= 0) {
            sb.append(" #");
            sb.append(this.f);
        }
        if (this.w != 0) {
            sb.append(" id=0x");
            sb.append(Integer.toHexString(this.w));
        }
        if (this.y != null) {
            sb.append(" ");
            sb.append(this.y);
        }
        sb.append('}');
        return sb.toString();
    }

    final void u() {
        if (this.u != null) {
            this.u.m();
        }
        this.F = false;
        this.F = true;
        if (!this.F) {
            throw new ap("Fragment " + this + " did not call through to super.onStop()");
        }
    }

    final void v() {
        if (this.u != null) {
            this.u.n();
        }
        if (this.N) {
            this.N = false;
            if (!this.O) {
                this.O = true;
                g gVar = this.t;
                String str = this.g;
                boolean z = this.N;
                this.M = gVar.b(str);
            }
            if (this.M != null) {
                if (this.t.h) {
                    this.M.d();
                } else {
                    this.M.c();
                }
            }
        }
    }

    final void w() {
        if (this.u != null) {
            this.u.o();
        }
        this.F = false;
        this.F = true;
        if (!this.F) {
            throw new ap("Fragment " + this + " did not call through to super.onDestroyView()");
        }
        if (this.M != null) {
            this.M.f();
        }
    }

    final void x() {
        if (this.u != null) {
            this.u.p();
        }
        this.F = false;
        this.F = true;
        if (!this.O) {
            this.O = true;
            g gVar = this.t;
            String str = this.g;
            boolean z = this.N;
            this.M = gVar.b(str);
        }
        if (this.M != null) {
            this.M.h();
        }
        if (!this.F) {
            throw new ap("Fragment " + this + " did not call through to super.onDestroy()");
        }
    }
}
