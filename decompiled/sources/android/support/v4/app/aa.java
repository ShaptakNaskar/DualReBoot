package android.support.v4.app;

import android.content.Context;
import android.content.pm.ActivityInfo;

/* JADX INFO: loaded from: classes.dex */
final class aa extends z {
    aa() {
    }

    @Override // android.support.v4.app.z, android.support.v4.app.y
    public final String a(Context context, ActivityInfo activityInfo) {
        String str = activityInfo.parentActivityName;
        return str == null ? super.a(context, activityInfo) : str;
    }
}
