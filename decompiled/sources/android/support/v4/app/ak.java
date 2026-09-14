package android.support.v4.app;

import android.app.Notification;
import android.app.PendingIntent;
import android.content.Context;
import android.widget.RemoteViews;

/* JADX INFO: loaded from: classes.dex */
final class ak implements ai {
    ak() {
    }

    @Override // android.support.v4.app.ai
    public final Notification a(ag agVar) {
        Context context = agVar.a;
        Notification notification = agVar.r;
        CharSequence charSequence = agVar.b;
        CharSequence charSequence2 = agVar.c;
        CharSequence charSequence3 = agVar.h;
        RemoteViews remoteViews = agVar.f;
        int i = agVar.i;
        PendingIntent pendingIntent = agVar.d;
        return new Notification.Builder(context).setWhen(notification.when).setSmallIcon(notification.icon, notification.iconLevel).setContent(notification.contentView).setTicker(notification.tickerText, remoteViews).setSound(notification.sound, notification.audioStreamType).setVibrate(notification.vibrate).setLights(notification.ledARGB, notification.ledOnMS, notification.ledOffMS).setOngoing((notification.flags & 2) != 0).setOnlyAlertOnce((notification.flags & 8) != 0).setAutoCancel((notification.flags & 16) != 0).setDefaults(notification.defaults).setContentTitle(charSequence).setContentText(charSequence2).setContentInfo(charSequence3).setContentIntent(pendingIntent).setDeleteIntent(notification.deleteIntent).setFullScreenIntent(agVar.e, (notification.flags & 128) != 0).setLargeIcon(agVar.g).setNumber(i).getNotification();
    }
}
