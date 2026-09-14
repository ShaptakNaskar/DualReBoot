package com.dualboot.a;

import android.content.Context;
import android.content.SharedPreferences;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.drawable.BitmapDrawable;
import android.text.TextUtils;
import java.io.InputStream;
import java.util.Date;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReadWriteLock;

/* JADX INFO: loaded from: classes.dex */
public final class p {
    private final ReadWriteLock a;
    private String b;
    private String c;
    private String d;
    private String e;
    private p f;
    private String g;
    private boolean h;
    private boolean i;
    private q j;
    private long k;
    private boolean l;
    private BitmapDrawable m;
    private BitmapDrawable n;

    protected p(String str, String str2, String str3, String str4, String str5, ReadWriteLock readWriteLock) {
        this.b = "";
        this.c = "";
        this.d = "";
        this.e = "";
        this.f = null;
        this.g = "";
        this.h = false;
        this.i = false;
        this.j = q.RESET;
        this.k = 0L;
        this.l = false;
        this.m = null;
        this.n = null;
        TextUtils.isEmpty(str);
        TextUtils.isEmpty(str2);
        TextUtils.isEmpty(str3);
        TextUtils.isEmpty(str4);
        this.a = readWriteLock;
        Lock lockWriteLock = this.a.writeLock();
        lockWriteLock.lock();
        try {
            lockWriteLock = this.a.writeLock();
            lockWriteLock.lock();
            try {
                this.b = "";
                this.c = "";
                this.d = "";
                this.e = "";
                this.g = "";
                this.f = null;
                this.h = false;
                this.i = false;
                this.l = false;
                this.j = q.RESET;
                this.k = 0L;
                lockWriteLock.unlock();
                if (this.m != null) {
                    Bitmap bitmap = this.m.getBitmap();
                    if (bitmap != null) {
                        bitmap.recycle();
                    }
                    this.m = null;
                }
                if (this.n != null) {
                    Bitmap bitmap2 = this.n.getBitmap();
                    if (bitmap2 != null) {
                        bitmap2.recycle();
                    }
                    this.n = null;
                }
                this.b = str;
                this.g = str5;
                this.f = null;
                if (!TextUtils.isEmpty(str2)) {
                    this.c = str2;
                }
                if (!TextUtils.isEmpty(str3)) {
                    this.d = str3;
                }
                if (!TextUtils.isEmpty(str4)) {
                    this.e = str4;
                }
            } finally {
                lockWriteLock.unlock();
            }
        } catch (Throwable th) {
            lockWriteLock.unlock();
            throw th;
        }
    }

    private boolean a(boolean z, q qVar, long j) {
        boolean z2 = false;
        Lock lockWriteLock = this.a.writeLock();
        lockWriteLock.lock();
        try {
            if (j <= this.k) {
                return false;
            }
            String str = "  Old Owned  = " + this.i;
            String str2 = "  Old Source = " + this.j;
            String str3 = "  Old Time   = " + new Date(this.k);
            if (!this.l) {
                if (z != this.i && qVar == q.SERVER) {
                    z2 = true;
                }
                this.l = z2;
            }
            this.i = z;
            this.j = qVar;
            this.k = j;
            String str4 = "  New Owned  = " + this.i;
            String str5 = "  New Source = " + this.j;
            String str6 = "  New Time   = " + new Date(this.k);
            return true;
        } finally {
            lockWriteLock.unlock();
        }
    }

    public final BitmapDrawable a(Context context, boolean z) {
        Resources resources;
        BitmapDrawable bitmapDrawable = null;
        if (context == null || (resources = context.getResources()) == null) {
            return null;
        }
        BitmapDrawable bitmapDrawable2 = z ? this.m : this.n;
        if (bitmapDrawable2 != null) {
            return bitmapDrawable2;
        }
        try {
            InputStream inputStreamOpen = resources.getAssets().open("offers/" + a() + (z ? "_owned" : "") + ".png");
            if (inputStreamOpen != null) {
                BitmapDrawable bitmapDrawable3 = new BitmapDrawable(resources, inputStreamOpen);
                try {
                    inputStreamOpen.close();
                    bitmapDrawable3.setTargetDensity(context.getResources().getDisplayMetrics());
                    bitmapDrawable = bitmapDrawable3;
                } catch (Exception e) {
                    bitmapDrawable = bitmapDrawable3;
                }
            }
        } catch (Exception e2) {
        }
        if (z) {
            this.m = bitmapDrawable;
            return bitmapDrawable;
        }
        this.n = bitmapDrawable;
        return bitmapDrawable;
    }

    public final String a() {
        Lock lock = this.a.readLock();
        lock.lock();
        try {
            return this.b;
        } finally {
            lock.unlock();
        }
    }

    protected final void a(p pVar) {
        if (pVar == null) {
            TextUtils.isEmpty(this.g);
            this.f = pVar;
        } else {
            TextUtils.equals(this.g, pVar.a());
            this.f = pVar;
        }
    }

    public final boolean a(Context context) {
        Lock lock = this.a.readLock();
        lock.lock();
        try {
            if (this.j != q.SERVER) {
                return false;
            }
            if (context == null) {
                return false;
            }
            r rVarA = r.a(this.b);
            if (rVarA == null) {
                return false;
            }
            SharedPreferences sharedPreferencesA = com.dualboot.b.a.a(context, rVarA.a);
            if (sharedPreferencesA == null) {
                return false;
            }
            SharedPreferences.Editor editorEdit = sharedPreferencesA.edit();
            if (editorEdit == null) {
                return false;
            }
            editorEdit.putBoolean(rVarA.b, this.i);
            editorEdit.putString(rVarA.c, this.j.toString());
            editorEdit.putLong(rVarA.d, this.k);
            editorEdit.commit();
            if (this.l) {
                com.dualboot.e.l.a(context, this.b, Boolean.toString(this.i));
                this.l = false;
            }
            return true;
        } catch (Exception e) {
            return false;
        } finally {
            lock.unlock();
        }
    }

    protected final boolean a(ai aiVar) {
        boolean z = this.h;
        if (aiVar != null) {
            Lock lockWriteLock = this.a.writeLock();
            lockWriteLock.lock();
            try {
                this.c = aiVar.a;
                this.d = aiVar.b;
                this.h = true;
                String str = "Updated details. Name = " + this.c;
            } finally {
                lockWriteLock.unlock();
            }
        }
        return this.h;
    }

    public final boolean a(boolean z, q qVar) {
        return a(z, qVar, System.currentTimeMillis());
    }

    public final String b() {
        Lock lock = this.a.readLock();
        lock.lock();
        try {
            return this.c;
        } finally {
            lock.unlock();
        }
    }

    public final boolean b(Context context) {
        Lock lockWriteLock = this.a.writeLock();
        lockWriteLock.lock();
        if (context == null) {
            lockWriteLock.unlock();
            return false;
        }
        try {
            r rVarA = r.a(this.b);
            if (rVarA == null) {
                return false;
            }
            SharedPreferences sharedPreferencesA = com.dualboot.b.a.a(context, rVarA.a);
            if (sharedPreferencesA == null) {
                return false;
            }
            boolean z = sharedPreferencesA.getBoolean(rVarA.b, false);
            String string = sharedPreferencesA.getString(rVarA.c, q.RESET.toString());
            long j = sharedPreferencesA.getLong(rVarA.d, -1L);
            if (q.valueOf(string) != q.SERVER || !a(z, q.SERVER_CACHED, j)) {
                return false;
            }
            lockWriteLock.unlock();
            return true;
        } catch (Exception e) {
            return false;
        } finally {
            lockWriteLock.unlock();
        }
    }

    public final String c() {
        Lock lock = this.a.readLock();
        lock.lock();
        try {
            return this.d;
        } finally {
            lock.unlock();
        }
    }

    public final String d() {
        Lock lock = this.a.readLock();
        lock.lock();
        try {
            return this.e;
        } finally {
            lock.unlock();
        }
    }

    protected final String e() {
        Lock lock = this.a.readLock();
        lock.lock();
        try {
            return this.g;
        } finally {
            lock.unlock();
        }
    }

    public final p f() {
        Lock lock = this.a.readLock();
        lock.lock();
        try {
            return this.f;
        } finally {
            lock.unlock();
        }
    }

    public final boolean g() {
        Lock lock = this.a.readLock();
        lock.lock();
        try {
            for (p pVarF = f(); pVarF != null; pVarF = pVarF.f()) {
                if (!pVarF.h()) {
                    lock.unlock();
                    return false;
                }
            }
            lock.unlock();
            return true;
        } catch (Throwable th) {
            lock.unlock();
            throw th;
        }
    }

    public final boolean h() {
        Lock lock = this.a.readLock();
        lock.lock();
        try {
            if (g()) {
                return this.i;
            }
            return false;
        } finally {
            lock.unlock();
        }
    }

    public final boolean i() {
        Lock lock = this.a.readLock();
        lock.lock();
        try {
            return this.h;
        } finally {
            lock.unlock();
        }
    }
}
