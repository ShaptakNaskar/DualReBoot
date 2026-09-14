package android.support.v4.app;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.util.Log;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public final class g extends Activity {
    final Handler a;
    final l b;
    final j c;
    boolean d;
    boolean e;
    boolean f;
    boolean g;
    boolean h;
    boolean i;
    boolean j;
    boolean k;
    HashMap l;
    v m;

    /* JADX WARN: Failed to find 'out' block for switch in B:40:0x00ed. Please report as an issue. */
    private static String a(View view) {
        String resourcePackageName;
        StringBuilder sb = new StringBuilder(128);
        sb.append(view.getClass().getName());
        sb.append('{');
        sb.append(Integer.toHexString(System.identityHashCode(view)));
        sb.append(' ');
        switch (view.getVisibility()) {
            case 0:
                sb.append('V');
                break;
            case com.dualboot.h.TextViewHeaderImg_img_layout_height_scale /* 4 */:
                sb.append('I');
                break;
            case com.dualboot.h.TextViewHeaderImg_img_stroke_color /* 8 */:
                sb.append('G');
                break;
            default:
                sb.append('.');
                break;
        }
        sb.append(view.isFocusable() ? 'F' : '.');
        sb.append(view.isEnabled() ? 'E' : '.');
        sb.append(view.willNotDraw() ? '.' : 'D');
        sb.append(view.isHorizontalScrollBarEnabled() ? 'H' : '.');
        sb.append(view.isVerticalScrollBarEnabled() ? 'V' : '.');
        sb.append(view.isClickable() ? 'C' : '.');
        sb.append(view.isLongClickable() ? 'L' : '.');
        sb.append(' ');
        sb.append(view.isFocused() ? 'F' : '.');
        sb.append(view.isSelected() ? 'S' : '.');
        sb.append(view.isPressed() ? 'P' : '.');
        sb.append(' ');
        sb.append(view.getLeft());
        sb.append(',');
        sb.append(view.getTop());
        sb.append('-');
        sb.append(view.getRight());
        sb.append(',');
        sb.append(view.getBottom());
        int id = view.getId();
        if (id != -1) {
            sb.append(" #");
            sb.append(Integer.toHexString(id));
            Resources resources = view.getResources();
            if (id != 0 && resources != null) {
                switch ((-16777216) & id) {
                    case 16777216:
                        resourcePackageName = "android";
                        String resourceTypeName = resources.getResourceTypeName(id);
                        String resourceEntryName = resources.getResourceEntryName(id);
                        sb.append(" ");
                        sb.append(resourcePackageName);
                        sb.append(":");
                        sb.append(resourceTypeName);
                        sb.append("/");
                        sb.append(resourceEntryName);
                        break;
                    case 2130706432:
                        resourcePackageName = "app";
                        String resourceTypeName2 = resources.getResourceTypeName(id);
                        String resourceEntryName2 = resources.getResourceEntryName(id);
                        sb.append(" ");
                        sb.append(resourcePackageName);
                        sb.append(":");
                        sb.append(resourceTypeName2);
                        sb.append("/");
                        sb.append(resourceEntryName2);
                        break;
                    default:
                        try {
                            resourcePackageName = resources.getResourcePackageName(id);
                            String resourceTypeName3 = resources.getResourceTypeName(id);
                            String resourceEntryName3 = resources.getResourceEntryName(id);
                            sb.append(" ");
                            sb.append(resourcePackageName);
                            sb.append(":");
                            sb.append(resourceTypeName3);
                            sb.append("/");
                            sb.append(resourceEntryName3);
                        } catch (Resources.NotFoundException e) {
                        }
                        break;
                }
            }
        }
        sb.append("}");
        return sb.toString();
    }

    private void a(String str, PrintWriter printWriter, View view) {
        ViewGroup viewGroup;
        int childCount;
        printWriter.print(str);
        if (view == null) {
            printWriter.println("null");
            return;
        }
        printWriter.println(a(view));
        if (!(view instanceof ViewGroup) || (childCount = (viewGroup = (ViewGroup) view).getChildCount()) <= 0) {
            return;
        }
        String str2 = str + "  ";
        for (int i = 0; i < childCount; i++) {
            a(str2, printWriter, viewGroup.getChildAt(i));
        }
    }

    private void a(boolean z) {
        if (this.g) {
            return;
        }
        this.g = true;
        this.h = z;
        this.a.removeMessages(1);
        if (this.k) {
            this.k = false;
            if (this.m != null) {
                if (this.h) {
                    this.m.d();
                } else {
                    this.m.c();
                }
            }
        }
        this.b.n();
    }

    public static void b() {
    }

    public final void a() {
        if (Build.VERSION.SDK_INT >= 11) {
            invalidateOptionsMenu();
        } else {
            this.i = true;
        }
    }

    final void a(String str) {
        v vVar;
        if (this.l == null || (vVar = (v) this.l.get(str)) == null || vVar.g) {
            return;
        }
        vVar.h();
        this.l.remove(str);
    }

    final v b(String str) {
        if (this.l == null) {
            this.l = new HashMap();
        }
        v vVar = (v) this.l.get(str);
        if (vVar != null) {
            vVar.a(this);
        }
        return vVar;
    }

    @Override // android.app.Activity
    public final void dump(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        int i = Build.VERSION.SDK_INT;
        printWriter.print(str);
        printWriter.print("Local FragmentActivity ");
        printWriter.print(Integer.toHexString(System.identityHashCode(this)));
        printWriter.println(" State:");
        String str2 = str + "  ";
        printWriter.print(str2);
        printWriter.print("mCreated=");
        printWriter.print(this.d);
        printWriter.print("mResumed=");
        printWriter.print(this.e);
        printWriter.print(" mStopped=");
        printWriter.print(this.f);
        printWriter.print(" mReallyStopped=");
        printWriter.println(this.g);
        printWriter.print(str2);
        printWriter.print("mLoadersStarted=");
        printWriter.println(this.k);
        if (this.m != null) {
            printWriter.print(str);
            printWriter.print("Loader Manager ");
            printWriter.print(Integer.toHexString(System.identityHashCode(this.m)));
            printWriter.println(":");
            this.m.a(str + "  ", printWriter);
        }
        this.b.a(str, fileDescriptor, printWriter, strArr);
        printWriter.print(str);
        printWriter.println("View Hierarchy:");
        a(str + "  ", printWriter, getWindow().getDecorView());
    }

    @Override // android.app.Activity
    protected final void onActivityResult(int i, int i2, Intent intent) {
        this.b.g();
        int i3 = i >> 16;
        if (i3 == 0) {
            super.onActivityResult(i, i2, intent);
            return;
        }
        int i4 = i3 - 1;
        if (this.b.f == null || i4 < 0 || i4 >= this.b.f.size()) {
            Log.w("FragmentActivity", "Activity result fragment index out of range: 0x" + Integer.toHexString(i));
        } else if (((Fragment) this.b.f.get(i4)) == null) {
            Log.w("FragmentActivity", "Activity result no fragment exists for index: 0x" + Integer.toHexString(i));
        } else {
            Fragment.f();
        }
    }

    @Override // android.app.Activity
    public final void onBackPressed() {
        if (this.b.c()) {
            return;
        }
        finish();
    }

    @Override // android.app.Activity, android.content.ComponentCallbacks
    public final void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        this.b.a(configuration);
    }

    @Override // android.app.Activity
    protected final void onCreate(Bundle bundle) {
        this.b.a(this, this.c, (Fragment) null);
        if (getLayoutInflater().getFactory() == null) {
            getLayoutInflater().setFactory(this);
        }
        super.onCreate(bundle);
        i iVar = (i) getLastNonConfigurationInstance();
        if (iVar != null) {
            this.l = iVar.e;
        }
        if (bundle != null) {
            this.b.a(bundle.getParcelable("android:support:fragments"), iVar != null ? iVar.d : null);
        }
        this.b.h();
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public final boolean onCreatePanelMenu(int i, Menu menu) {
        if (i != 0) {
            return super.onCreatePanelMenu(i, menu);
        }
        boolean zOnCreatePanelMenu = super.onCreatePanelMenu(i, menu) | this.b.a(menu, getMenuInflater());
        if (Build.VERSION.SDK_INT >= 11) {
            return zOnCreatePanelMenu;
        }
        return true;
    }

    @Override // android.app.Activity, android.view.LayoutInflater.Factory
    public final View onCreateView(String str, Context context, AttributeSet attributeSet) {
        if (!"fragment".equals(str)) {
            return super.onCreateView(str, context, attributeSet);
        }
        String attributeValue = attributeSet.getAttributeValue(null, "class");
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, h.a);
        if (attributeValue == null) {
            attributeValue = typedArrayObtainStyledAttributes.getString(0);
        }
        int resourceId = typedArrayObtainStyledAttributes.getResourceId(1, -1);
        String string = typedArrayObtainStyledAttributes.getString(2);
        typedArrayObtainStyledAttributes.recycle();
        Fragment fragmentA = resourceId != -1 ? this.b.a(resourceId) : null;
        if (fragmentA == null && string != null) {
            fragmentA = this.b.a(string);
        }
        if (fragmentA == null) {
            fragmentA = this.b.a(0);
        }
        if (l.a) {
            Log.v("FragmentActivity", "onCreateView: id=0x" + Integer.toHexString(resourceId) + " fname=" + attributeValue + " existing=" + fragmentA);
        }
        if (fragmentA == null) {
            Fragment fragmentA2 = Fragment.a(this, attributeValue);
            fragmentA2.o = true;
            fragmentA2.w = resourceId != 0 ? resourceId : 0;
            fragmentA2.x = 0;
            fragmentA2.y = string;
            fragmentA2.p = true;
            fragmentA2.s = this.b;
            Bundle bundle = fragmentA2.d;
            fragmentA2.h();
            this.b.a(fragmentA2, true);
            fragmentA = fragmentA2;
        } else {
            if (fragmentA.p) {
                throw new IllegalArgumentException(attributeSet.getPositionDescription() + ": Duplicate id 0x" + Integer.toHexString(resourceId) + ", tag " + string + ", or parent id 0x" + Integer.toHexString(0) + " with another fragment for " + attributeValue);
            }
            fragmentA.p = true;
            if (!fragmentA.C) {
                Bundle bundle2 = fragmentA.d;
                fragmentA.h();
            }
            this.b.a(fragmentA);
        }
        if (fragmentA.I == null) {
            throw new IllegalStateException("Fragment " + attributeValue + " did not create a view.");
        }
        if (resourceId != 0) {
            fragmentA.I.setId(resourceId);
        }
        if (fragmentA.I.getTag() == null) {
            fragmentA.I.setTag(string);
        }
        return fragmentA.I;
    }

    @Override // android.app.Activity
    protected final void onDestroy() {
        super.onDestroy();
        a(false);
        this.b.p();
        if (this.m != null) {
            this.m.h();
        }
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public final boolean onKeyDown(int i, KeyEvent keyEvent) {
        if (Build.VERSION.SDK_INT >= 5 || i != 4 || keyEvent.getRepeatCount() != 0) {
            return super.onKeyDown(i, keyEvent);
        }
        onBackPressed();
        return true;
    }

    @Override // android.app.Activity, android.content.ComponentCallbacks
    public final void onLowMemory() {
        super.onLowMemory();
        this.b.q();
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public final boolean onMenuItemSelected(int i, MenuItem menuItem) {
        if (super.onMenuItemSelected(i, menuItem)) {
            return true;
        }
        switch (i) {
            case 0:
                return this.b.a(menuItem);
            case com.dualboot.h.TextViewHeaderImg_img_stroke_enabled /* 6 */:
                return this.b.b(menuItem);
            default:
                return false;
        }
    }

    @Override // android.app.Activity
    protected final void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        this.b.g();
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public final void onPanelClosed(int i, Menu menu) {
        switch (i) {
            case 0:
                this.b.b(menu);
                break;
        }
        super.onPanelClosed(i, menu);
    }

    @Override // android.app.Activity
    protected final void onPause() {
        super.onPause();
        this.e = false;
        if (this.a.hasMessages(2)) {
            this.a.removeMessages(2);
            this.b.k();
        }
        this.b.l();
    }

    @Override // android.app.Activity
    protected final void onPostResume() {
        super.onPostResume();
        this.a.removeMessages(2);
        this.b.k();
        this.b.d();
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public final boolean onPreparePanel(int i, View view, Menu menu) {
        if (i != 0 || menu == null) {
            return super.onPreparePanel(i, view, menu);
        }
        if (this.i) {
            this.i = false;
            menu.clear();
            onCreatePanelMenu(i, menu);
        }
        return (super.onPreparePanel(i, view, menu) || this.b.a(menu)) && menu.hasVisibleItems();
    }

    @Override // android.app.Activity
    protected final void onResume() {
        super.onResume();
        this.a.sendEmptyMessage(2);
        this.e = true;
        this.b.d();
    }

    @Override // android.app.Activity
    public final Object onRetainNonConfigurationInstance() {
        boolean z;
        if (this.f) {
            a(true);
        }
        ArrayList arrayListE = this.b.e();
        if (this.l != null) {
            v[] vVarArr = new v[this.l.size()];
            this.l.values().toArray(vVarArr);
            z = false;
            for (v vVar : vVarArr) {
                if (vVar.g) {
                    z = true;
                } else {
                    vVar.h();
                    this.l.remove(vVar.d);
                }
            }
        } else {
            z = false;
        }
        if (arrayListE == null && !z) {
            return null;
        }
        i iVar = new i();
        iVar.a = null;
        iVar.b = null;
        iVar.c = null;
        iVar.d = arrayListE;
        iVar.e = this.l;
        return iVar;
    }

    @Override // android.app.Activity
    protected final void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        Parcelable parcelableF = this.b.f();
        if (parcelableF != null) {
            bundle.putParcelable("android:support:fragments", parcelableF);
        }
    }

    @Override // android.app.Activity
    protected final void onStart() {
        super.onStart();
        this.f = false;
        this.g = false;
        this.a.removeMessages(1);
        if (!this.d) {
            this.d = true;
            this.b.i();
        }
        this.b.g();
        this.b.d();
        if (!this.k) {
            this.k = true;
            if (this.m != null) {
                this.m.b();
            } else if (!this.j) {
                boolean z = this.k;
                this.m = b(null);
                if (this.m != null && !this.m.f) {
                    this.m.b();
                }
            }
            this.j = true;
        }
        this.b.j();
        if (this.l != null) {
            v[] vVarArr = new v[this.l.size()];
            this.l.values().toArray(vVarArr);
            for (v vVar : vVarArr) {
                vVar.e();
                vVar.g();
            }
        }
    }

    @Override // android.app.Activity
    protected final void onStop() {
        super.onStop();
        this.f = true;
        this.a.sendEmptyMessage(1);
        this.b.m();
    }

    @Override // android.app.Activity
    public final void startActivityForResult(Intent intent, int i) {
        if (i != -1 && ((-65536) & i) != 0) {
            throw new IllegalArgumentException("Can only use lower 16 bits for requestCode");
        }
        super.startActivityForResult(intent, i);
    }
}
