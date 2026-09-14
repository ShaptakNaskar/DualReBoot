package com.b.a.a.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.PackageManager;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.IBinder;
import android.os.RemoteException;
import android.util.Log;
import java.security.KeyFactory;
import java.security.NoSuchAlgorithmException;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.security.spec.InvalidKeySpecException;
import java.security.spec.X509EncodedKeySpec;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Set;

/* JADX INFO: loaded from: classes.dex */
public final class i implements ServiceConnection {
    private static final SecureRandom a = new SecureRandom();
    private f b;
    private PublicKey c;
    private final Context d;
    private final q e;
    private Handler f;
    private final String g;
    private final String h;
    private final Set i = new HashSet();
    private final Queue j = new LinkedList();

    public i(Context context, q qVar, String str) {
        this.d = context;
        this.e = qVar;
        this.c = a(str);
        this.g = this.d.getPackageName();
        this.h = a(context, this.g);
        HandlerThread handlerThread = new HandlerThread("background thread");
        handlerThread.start();
        this.f = new Handler(handlerThread.getLooper());
    }

    private static String a(Context context, String str) {
        try {
            return String.valueOf(context.getPackageManager().getPackageInfo(str, 0).versionCode);
        } catch (PackageManager.NameNotFoundException e) {
            Log.e("LicenseChecker", "Package not found. could not get version code.");
            return "";
        }
    }

    private static PublicKey a(String str) {
        try {
            return KeyFactory.getInstance("RSA").generatePublic(new X509EncodedKeySpec(com.b.a.a.a.a.a.a(str)));
        } catch (com.b.a.a.a.a.b e) {
            Log.e("LicenseChecker", "Could not decode from Base64.");
            throw new IllegalArgumentException(e);
        } catch (NoSuchAlgorithmException e2) {
            throw new RuntimeException(e2);
        } catch (InvalidKeySpecException e3) {
            Log.e("LicenseChecker", "Invalid key specification.");
            throw new IllegalArgumentException(e3);
        }
    }

    private void a() {
        while (true) {
            n nVar = (n) this.j.poll();
            if (nVar == null) {
                return;
            }
            try {
                Log.i("LicenseChecker", "Calling checkLicense on service for " + nVar.c);
                this.b.a(nVar.b, nVar.c, new j(this, nVar));
                this.i.add(nVar);
            } catch (RemoteException e) {
                Log.w("LicenseChecker", "RemoteException in checkLicense call.", e);
                b(nVar);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void a(n nVar) {
        this.i.remove(nVar);
        if (this.i.isEmpty() && this.b != null) {
            try {
                this.d.unbindService(this);
            } catch (IllegalArgumentException e) {
                Log.e("LicenseChecker", "Unable to unbind from licensing service (already unbound)");
            }
            this.b = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void b(n nVar) {
        this.e.a(291, null);
        if (this.e.a()) {
            nVar.a.a(291);
        } else {
            nVar.a.b(291);
        }
    }

    public final synchronized void a(m mVar) {
        if (this.e.a()) {
            Log.i("LicenseChecker", "Using cached license response");
            mVar.a(256);
        } else {
            n nVar = new n(this.e, new o(), mVar, a.nextInt(), this.g, this.h);
            if (this.b == null) {
                Log.i("LicenseChecker", "Binding to licensing service.");
                try {
                    if (this.d.bindService(new Intent(new String(com.b.a.a.a.a.a.a("Y29tLmFuZHJvaWQudmVuZGluZy5saWNlbnNpbmcuSUxpY2Vuc2luZ1NlcnZpY2U="))), this, 1)) {
                        this.j.offer(nVar);
                    } else {
                        Log.e("LicenseChecker", "Could not bind to service.");
                        b(nVar);
                    }
                } catch (com.b.a.a.a.a.b e) {
                    e.printStackTrace();
                } catch (SecurityException e2) {
                    mVar.c(6);
                }
            } else {
                this.j.offer(nVar);
                a();
            }
        }
    }

    @Override // android.content.ServiceConnection
    public final synchronized void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        this.b = g.a(iBinder);
        a();
    }

    @Override // android.content.ServiceConnection
    public final synchronized void onServiceDisconnected(ComponentName componentName) {
        Log.w("LicenseChecker", "Service unexpectedly disconnected.");
        this.b = null;
    }
}
