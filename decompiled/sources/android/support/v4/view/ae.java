package android.support.v4.view;

import android.os.Parcel;

/* JADX INFO: loaded from: classes.dex */
final class ae implements android.support.v4.b.c {
    ae() {
    }

    @Override // android.support.v4.b.c
    public final /* synthetic */ Object a(Parcel parcel, ClassLoader classLoader) {
        return new ViewPager.SavedState(parcel, classLoader);
    }

    @Override // android.support.v4.b.c
    public final /* bridge */ /* synthetic */ Object[] a(int i) {
        return new ViewPager.SavedState[i];
    }
}
