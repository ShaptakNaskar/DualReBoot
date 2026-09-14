package android.support.v4.app;

import android.app.Notification;
import android.app.PendingIntent;
import android.content.Context;
import android.graphics.Bitmap;
import android.widget.RemoteViews;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class ag {
    Context a;
    public CharSequence b;
    public CharSequence c;
    public PendingIntent d;
    PendingIntent e;
    RemoteViews f;
    public Bitmap g;
    CharSequence h;
    int i;
    int j;
    boolean k;
    an l;
    CharSequence m;
    int n;
    int o;
    boolean p;
    ArrayList q = new ArrayList();
    public Notification r = new Notification();

    public ag(Context context) {
        this.a = context;
        this.r.when = System.currentTimeMillis();
        this.r.audioStreamType = -1;
        this.j = 0;
    }
}
