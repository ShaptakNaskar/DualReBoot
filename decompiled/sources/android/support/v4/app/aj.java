package android.support.v4.app;

import android.app.Notification;

/* JADX INFO: loaded from: classes.dex */
final class aj implements ai {
    aj() {
    }

    @Override // android.support.v4.app.ai
    public final Notification a(ag agVar) {
        Notification notification = agVar.r;
        notification.setLatestEventInfo(agVar.a, agVar.b, agVar.c, agVar.d);
        if (agVar.j > 0) {
            notification.flags |= 128;
        }
        return notification;
    }
}
