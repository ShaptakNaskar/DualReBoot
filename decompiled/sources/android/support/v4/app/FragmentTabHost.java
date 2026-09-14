package android.support.v4.app;

import android.content.Context;
import android.os.Parcel;
import android.os.Parcelable;
import android.view.View;
import android.widget.TabHost;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class FragmentTabHost extends TabHost implements TabHost.OnTabChangeListener {
    private final ArrayList a;
    private Context b;
    private k c;
    private int d;
    private TabHost.OnTabChangeListener e;
    private r f;
    private boolean g;

    class SavedState extends View.BaseSavedState {
        public static final Parcelable.Creator CREATOR = new q();
        String a;

        private SavedState(Parcel parcel) {
            super(parcel);
            this.a = parcel.readString();
        }

        /* synthetic */ SavedState(Parcel parcel, byte b) {
            this(parcel);
        }

        SavedState(Parcelable parcelable) {
            super(parcelable);
        }

        public String toString() {
            return "FragmentTabHost.SavedState{" + Integer.toHexString(System.identityHashCode(this)) + " curTab=" + this.a + "}";
        }

        @Override // android.view.View.BaseSavedState, android.view.AbsSavedState, android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeString(this.a);
        }
    }

    private s a(String str, s sVar) {
        r rVar = null;
        int i = 0;
        while (i < this.a.size()) {
            r rVar2 = (r) this.a.get(i);
            if (!rVar2.a.equals(str)) {
                rVar2 = rVar;
            }
            i++;
            rVar = rVar2;
        }
        if (rVar == null) {
            throw new IllegalStateException("No tab known for tag " + str);
        }
        if (this.f != rVar) {
            if (sVar == null) {
                sVar = this.c.a();
            }
            if (this.f != null && this.f.d != null) {
                sVar.a(this.f.d);
            }
            if (rVar != null) {
                if (rVar.d == null) {
                    rVar.d = Fragment.a(this.b, rVar.b.getName(), rVar.c);
                    sVar.a(this.d, rVar.d, rVar.a);
                } else {
                    sVar.b(rVar.d);
                }
            }
            this.f = rVar;
        }
        return sVar;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected final void onAttachedToWindow() {
        super.onAttachedToWindow();
        String currentTabTag = getCurrentTabTag();
        s sVarA = null;
        int i = 0;
        while (true) {
            int i2 = i;
            if (i2 >= this.a.size()) {
                break;
            }
            r rVar = (r) this.a.get(i2);
            rVar.d = this.c.a(rVar.a);
            if (rVar.d != null && !rVar.d.d()) {
                if (rVar.a.equals(currentTabTag)) {
                    this.f = rVar;
                } else {
                    if (sVarA == null) {
                        sVarA = this.c.a();
                    }
                    sVarA.a(rVar.d);
                }
            }
            i = i2 + 1;
        }
        this.g = true;
        s sVarA2 = a(currentTabTag, sVarA);
        if (sVarA2 != null) {
            sVarA2.a();
            this.c.b();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.g = false;
    }

    @Override // android.view.View
    protected final void onRestoreInstanceState(Parcelable parcelable) {
        SavedState savedState = (SavedState) parcelable;
        super.onRestoreInstanceState(savedState.getSuperState());
        setCurrentTabByTag(savedState.a);
    }

    @Override // android.view.View
    protected final Parcelable onSaveInstanceState() {
        SavedState savedState = new SavedState(super.onSaveInstanceState());
        savedState.a = getCurrentTabTag();
        return savedState;
    }

    @Override // android.widget.TabHost.OnTabChangeListener
    public final void onTabChanged(String str) {
        s sVarA;
        if (this.g && (sVarA = a(str, null)) != null) {
            sVarA.a();
        }
        if (this.e != null) {
            this.e.onTabChanged(str);
        }
    }

    @Override // android.widget.TabHost
    public final void setOnTabChangedListener(TabHost.OnTabChangeListener onTabChangeListener) {
        this.e = onTabChangeListener;
    }

    @Override // android.widget.TabHost
    @Deprecated
    public final void setup() {
        throw new IllegalStateException("Must call setup() that takes a Context and FragmentManager");
    }
}
