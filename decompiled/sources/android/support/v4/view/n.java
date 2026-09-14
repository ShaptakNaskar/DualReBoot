package android.support.v4.view;

import android.os.Build;
import android.view.View;

/* JADX INFO: loaded from: classes.dex */
public final class n {
    static final u a;

    static {
        int i = Build.VERSION.SDK_INT;
        if (i >= 17) {
            a = new t();
            return;
        }
        if (i >= 16) {
            a = new s();
            return;
        }
        if (i >= 14) {
            a = new r();
            return;
        }
        if (i >= 11) {
            a = new q();
        } else if (i >= 9) {
            a = new p();
        } else {
            a = new o();
        }
    }

    public static int a(View view) {
        return a.a(view);
    }

    public static void a(View view, Runnable runnable) {
        a.a(view, runnable);
    }

    public static boolean a(View view, int i) {
        return a.a(view, i);
    }

    public static void b(View view) {
        a.b(view);
    }

    public static void b(View view, int i) {
        a.b(view, i);
    }
}
