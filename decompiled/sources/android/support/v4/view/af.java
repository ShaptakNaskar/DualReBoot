package android.support.v4.view;

import android.view.View;
import java.util.Comparator;

/* JADX INFO: loaded from: classes.dex */
final class af implements Comparator {
    af() {
    }

    @Override // java.util.Comparator
    public final /* synthetic */ int compare(Object obj, Object obj2) {
        z zVar = (z) ((View) obj).getLayoutParams();
        z zVar2 = (z) ((View) obj2).getLayoutParams();
        if (zVar.a != zVar2.a) {
            return zVar.a ? 1 : -1;
        }
        return zVar.e - zVar2.e;
    }
}
