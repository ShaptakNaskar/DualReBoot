package android.support.v4.view;

import android.view.KeyEvent;

/* JADX INFO: loaded from: classes.dex */
final class c implements d {
    c() {
    }

    @Override // android.support.v4.view.d
    public final boolean a(int i) {
        return KeyEvent.metaStateHasModifiers(i, 1);
    }

    @Override // android.support.v4.view.d
    public final boolean b(int i) {
        return KeyEvent.metaStateHasNoModifiers(i);
    }
}
