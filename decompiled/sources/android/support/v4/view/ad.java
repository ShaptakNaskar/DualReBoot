package android.support.v4.view;

import android.database.DataSetObserver;

/* JADX INFO: loaded from: classes.dex */
final class ad extends DataSetObserver {
    final /* synthetic */ ViewPager a;

    private ad(ViewPager viewPager) {
        this.a = viewPager;
    }

    /* synthetic */ ad(ViewPager viewPager, byte b) {
        this(viewPager);
    }

    @Override // android.database.DataSetObserver
    public final void onChanged() {
        this.a.a();
    }

    @Override // android.database.DataSetObserver
    public final void onInvalidated() {
        this.a.a();
    }
}
