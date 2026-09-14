package android.support.v4.d;

import android.graphics.Canvas;
import android.widget.EdgeEffect;

/* JADX INFO: loaded from: classes.dex */
final class c implements d {
    c() {
    }

    @Override // android.support.v4.d.d
    public final void a(Object obj, int i, int i2) {
        ((EdgeEffect) obj).setSize(i, i2);
    }

    @Override // android.support.v4.d.d
    public final boolean a(Object obj) {
        return ((EdgeEffect) obj).isFinished();
    }

    @Override // android.support.v4.d.d
    public final boolean a(Object obj, float f) {
        ((EdgeEffect) obj).onPull(f);
        return true;
    }

    @Override // android.support.v4.d.d
    public final boolean a(Object obj, Canvas canvas) {
        return ((EdgeEffect) obj).draw(canvas);
    }

    @Override // android.support.v4.d.d
    public final void b(Object obj) {
        ((EdgeEffect) obj).finish();
    }

    @Override // android.support.v4.d.d
    public final boolean c(Object obj) {
        EdgeEffect edgeEffect = (EdgeEffect) obj;
        edgeEffect.onRelease();
        return edgeEffect.isFinished();
    }
}
