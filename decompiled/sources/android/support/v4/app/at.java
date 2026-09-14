package android.support.v4.app;

import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;

/* JADX INFO: loaded from: classes.dex */
final class at implements ar {
    at() {
    }

    @Override // android.support.v4.app.ar
    public final PendingIntent a(Context context, Intent[] intentArr, int i) {
        intentArr[0] = new Intent(intentArr[0]).addFlags(268484608);
        return PendingIntent.getActivities(context, i, intentArr, 134217728);
    }
}
