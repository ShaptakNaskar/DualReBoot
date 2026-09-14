package android.support.v4.app;

import android.content.Context;
import android.content.pm.ActivityInfo;

/* JADX INFO: loaded from: classes.dex */
class z implements y {
    z() {
    }

    @Override // android.support.v4.app.y
    public String a(Context context, ActivityInfo activityInfo) {
        String string;
        if (activityInfo.metaData != null && (string = activityInfo.metaData.getString("android.support.PARENT_ACTIVITY")) != null) {
            return string.charAt(0) == '.' ? context.getPackageName() + string : string;
        }
        return null;
    }
}
