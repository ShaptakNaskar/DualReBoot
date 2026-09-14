package android.support.v4.a;

import android.content.ComponentName;
import android.content.Intent;

/* JADX INFO: loaded from: classes.dex */
class d extends c {
    d() {
    }

    @Override // android.support.v4.a.c, android.support.v4.a.b
    public final Intent a(ComponentName componentName) {
        return Intent.makeMainActivity(componentName);
    }
}
