package com.dualboot.e;

import android.content.Context;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.os.Bundle;
import android.os.Handler;
import android.service.wallpaper.WallpaperService;
import android.view.MotionEvent;
import android.view.SurfaceHolder;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
final class n extends WallpaperService.Engine implements LocationListener {
    com.dualboot.util.b a;
    final /* synthetic */ l b;
    private com.dualboot.c.g c;
    private final Context d;
    private long e;
    private m f;
    private float g;
    private float h;
    private ArrayList i;
    private String j;
    private boolean k;
    private boolean l;
    private p m;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    n(l lVar, Context context) {
        super(lVar);
        this.b = lVar;
        this.c = null;
        this.e = 5L;
        this.f = m.DOUBLE_TAP;
        this.g = 0.0f;
        this.h = 0.0f;
        this.i = null;
        this.j = null;
        this.k = false;
        this.l = false;
        this.a = null;
        this.m = null;
        this.c = null;
        this.d = context.getApplicationContext();
    }

    private void a(Location location) {
        if (location != null) {
            float latitude = (float) location.getLatitude();
            float longitude = (float) location.getLongitude();
            if ((latitude == this.g && longitude == this.h) ? false : true) {
                this.g = latitude;
                this.h = longitude;
                String str = "Service/Engine/UpdateLocation = " + Float.toString(this.g) + " x " + Float.toString(this.h);
                if (this.c != null) {
                    this.c.a(this.g, this.h);
                }
            }
        }
    }

    private void b() {
        com.dualboot.engine.f fVarD;
        int iG;
        if (this.c != null) {
            com.dualboot.engine.c cVar = new com.dualboot.engine.c(this.d, this.b.a().b());
            if (cVar.p() > 0 && (iG = (fVarD = cVar.d(0)).g()) > 1) {
                this.i = new ArrayList(iG);
                this.j = fVarD.c();
                for (int i = 0; i < iG; i++) {
                    String strA = fVarD.a(i);
                    if (fVarD.d(strA)) {
                        this.i.add(strA);
                    }
                }
            }
            if (cVar.v()) {
                this.f = m.DOUBLE_TAP;
                int iD = cVar.d();
                if (iD == 0) {
                    this.f = m.NONE;
                } else if (iD == 1) {
                    this.f = m.DOUBLE_TAP;
                } else if (iD == 2) {
                    this.f = m.SWIPE_UP;
                }
            }
            com.dualboot.c.i iVar = com.dualboot.c.i.CAMERA_ANIM_HOMESCREEN;
            boolean zA = cVar.a();
            boolean zB = cVar.b();
            boolean zC = cVar.c();
            if (zB) {
                iVar = com.dualboot.c.i.CAMERA_ANIM_MANUAL;
            } else if (zC) {
                iVar = com.dualboot.c.i.CAMERA_ANIM_AUTOPAN;
            } else if (zA) {
                iVar = com.dualboot.c.i.CAMERA_ANIM_HOMESCREEN;
            }
            this.c.a(iVar);
            com.dualboot.c.h hVar = com.dualboot.c.h.AUTOPAN_SPEED_MEDIUM;
            int iE = cVar.e();
            if (iE == 0) {
                hVar = com.dualboot.c.h.AUTOPAN_SPEED_SLOW;
            } else if (iE == 1) {
                hVar = com.dualboot.c.h.AUTOPAN_SPEED_MEDIUM;
            } else if (iE == 2) {
                hVar = com.dualboot.c.h.AUTOPAN_SPEED_FAST;
            }
            com.dualboot.c.g gVar = this.c;
            l lVar = this.b;
            gVar.a(hVar, l.c());
            int iG2 = cVar.g();
            long j = this.e;
            if (iG2 == 0) {
                j = 3;
            } else if (iG2 == 1) {
                j = 5;
            } else if (iG2 == 2) {
                j = 7;
            }
            if (j != this.e) {
                this.e = j;
                this.a = new q(this, this.d, this.e);
            }
            com.dualboot.c.k kVar = com.dualboot.c.k.POWERMANAGE_BALANCED;
            int iF = cVar.f();
            if (iF == 0) {
                kVar = com.dualboot.c.k.POWERMANAGE_HIGH_PERFORMANCE;
            } else if (iF == 1) {
                kVar = com.dualboot.c.k.POWERMANAGE_BALANCED;
            } else if (iF == 2) {
                kVar = com.dualboot.c.k.POWERMANAGE_BATTERY_SAVER;
            }
            this.c.a(kVar);
        }
    }

    protected final void a() {
        if (this.c == null) {
            return;
        }
        if (!this.k) {
            this.l = true;
            return;
        }
        this.l = false;
        b();
        this.c.a();
    }

    @Override // android.service.wallpaper.WallpaperService.Engine
    public final void onCreate(SurfaceHolder surfaceHolder) {
        super.onCreate(surfaceHolder);
        new com.dualboot.util.r(this.d).b();
        this.m = new p(this);
        this.b.registerReceiver(this.m, new IntentFilter("com.dualboot.apps.wallpaper.PREFERENCES_CHANGED"), null, new Handler());
        j jVarA = this.b.a();
        this.a = new q(this, this.d, this.e);
        setTouchEventsEnabled(true);
        SharedPreferences sharedPreferencesA = com.dualboot.b.a.a(this.d);
        if (sharedPreferencesA != null) {
            this.b.a(sharedPreferencesA);
        }
        this.c = com.dualboot.c.g.a(this.d, jVarA.a(), jVarA.b());
        this.b.b();
        LocationManager locationManager = (LocationManager) this.d.getSystemService("location");
        if (locationManager != null) {
            try {
                a(locationManager.getLastKnownLocation("network"));
            } catch (Exception e) {
            }
            Handler handler = new Handler();
            handler.postDelayed(new o(this, locationManager, handler), 60000L);
        }
        b();
    }

    @Override // android.service.wallpaper.WallpaperService.Engine
    public final void onDestroy() {
        this.b.unregisterReceiver(this.m);
        if (this.c != null) {
            this.c.b();
            this.c = null;
        }
        super.onDestroy();
    }

    @Override // android.location.LocationListener
    public final void onLocationChanged(Location location) {
        a(location);
    }

    @Override // android.service.wallpaper.WallpaperService.Engine
    public final void onOffsetsChanged(float f, float f2, float f3, float f4, int i, int i2) {
        super.onOffsetsChanged(f, f2, f3, f4, i, i2);
        if (this.c != null) {
            this.c.a(f);
        }
    }

    @Override // android.location.LocationListener
    public final void onProviderDisabled(String str) {
    }

    @Override // android.location.LocationListener
    public final void onProviderEnabled(String str) {
    }

    @Override // android.location.LocationListener
    public final void onStatusChanged(String str, int i, Bundle bundle) {
    }

    @Override // android.service.wallpaper.WallpaperService.Engine
    public final void onSurfaceChanged(SurfaceHolder surfaceHolder, int i, int i2, int i3) {
        super.onSurfaceChanged(surfaceHolder, i, i2, i3);
        if (this.c != null) {
            this.c.a(surfaceHolder, i, i2, i3);
        }
    }

    @Override // android.service.wallpaper.WallpaperService.Engine
    public final void onSurfaceCreated(SurfaceHolder surfaceHolder) {
        super.onSurfaceCreated(surfaceHolder);
    }

    @Override // android.service.wallpaper.WallpaperService.Engine
    public final void onSurfaceDestroyed(SurfaceHolder surfaceHolder) {
        if (this.c != null) {
            this.c.a(null, 0, 0, 0);
        }
        super.onSurfaceDestroyed(surfaceHolder);
    }

    @Override // android.service.wallpaper.WallpaperService.Engine
    public final void onTouchEvent(MotionEvent motionEvent) {
        super.onTouchEvent(motionEvent);
        if (this.a != null) {
            this.a.a(motionEvent);
        }
    }

    @Override // android.service.wallpaper.WallpaperService.Engine
    public final void onVisibilityChanged(boolean z) {
        String str = "Service/Engine/onVisibilityChanged = " + z;
        super.onVisibilityChanged(z);
        this.k = z;
        if (this.c != null) {
            if (this.k && this.l) {
                a();
            }
            this.c.a(this.k);
            if (this.k) {
                if (!isPreview()) {
                    this.c.b(false);
                } else {
                    this.c.b(true);
                    this.c.a(com.dualboot.c.k.POWERMANAGE_HIGH_PERFORMANCE);
                }
            }
        }
    }
}
