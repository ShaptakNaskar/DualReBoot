package android.support.v4.app;

import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;

/* JADX INFO: loaded from: classes.dex */
final class as implements ar {
    as() {
    }

    @Override // android.support.v4.app.ar
    public final PendingIntent a(Context context, Intent[] intentArr, int i) {
        Intent intent = new Intent(intentArr[intentArr.length - 1]);
        intent.addFlags(268435456);
        return PendingIntent.getActivity(context, i, intent, 134217728);
    }
}
