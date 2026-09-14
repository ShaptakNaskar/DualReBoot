package android.support.v4.app;

import android.os.Build;

/* JADX INFO: loaded from: classes.dex */
public final class ac {
    private static final ai a;

    static {
        if (Build.VERSION.SDK_INT >= 16) {
            a = new am();
            return;
        }
        if (Build.VERSION.SDK_INT >= 14) {
            a = new al();
        } else if (Build.VERSION.SDK_INT >= 11) {
            a = new ak();
        } else {
            a = new aj();
        }
    }
}
