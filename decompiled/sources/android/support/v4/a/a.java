package android.support.v4.a;

import android.content.ComponentName;
import android.content.Intent;
import android.os.Build;

/* JADX INFO: loaded from: classes.dex */
public final class a {
    private static final b a;

    static {
        int i = Build.VERSION.SDK_INT;
        if (i >= 15) {
            a = new e();
        } else if (i >= 11) {
            a = new d();
        } else {
            a = new c();
        }
    }

    public static Intent a(ComponentName componentName) {
        return a.a(componentName);
    }
}
