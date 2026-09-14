package android.support.v4.app;

import android.app.PendingIntent;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.Build;
import android.util.Log;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public final class aq implements Iterable {
    private static final ar a;
    private final ArrayList b = new ArrayList();
    private final Context c;

    static {
        if (Build.VERSION.SDK_INT >= 11) {
            a = new at();
        } else {
            a = new as();
        }
    }

    private aq(Context context) {
        this.c = context;
    }

    public static aq a(Context context) {
        return new aq(context);
    }

    public final PendingIntent a(int i) {
        if (this.b.isEmpty()) {
            throw new IllegalStateException("No intents added to TaskStackBuilder; cannot getPendingIntent");
        }
        Intent[] intentArr = (Intent[]) this.b.toArray(new Intent[this.b.size()]);
        intentArr[0] = new Intent(intentArr[0]).addFlags(268484608);
        return a.a(this.c, intentArr, i);
    }

    public final aq a(ComponentName componentName) {
        int size = this.b.size();
        try {
            Intent intentA = x.a(this.c, componentName);
            while (intentA != null) {
                this.b.add(size, intentA);
                intentA = x.a(this.c, intentA.getComponent());
            }
            return this;
        } catch (PackageManager.NameNotFoundException e) {
            Log.e("TaskStackBuilder", "Bad ComponentName while traversing activity parent metadata");
            throw new IllegalArgumentException(e);
        }
    }

    public final aq a(Intent intent) {
        this.b.add(intent);
        return this;
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        return this.b.iterator();
    }
}
