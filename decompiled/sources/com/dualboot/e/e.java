package com.dualboot.e;

import android.app.Activity;
import android.os.Bundle;
import android.os.Handler;
import android.view.MotionEvent;

/* JADX INFO: loaded from: classes.dex */
public abstract class e extends Activity {
    protected i a = new i();

    static /* synthetic */ void a(e eVar, boolean z, boolean z2) {
        eVar.a.b = z;
        eVar.a.c = z2;
        eVar.a.d = true;
        String str = "Got billing result, started   = " + eVar.a.b;
        String str2 = "Got billing result, refreshed = " + eVar.a.c;
        eVar.b();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        if (isFinishing()) {
            return;
        }
        if (this.a != null && this.a.d && this.a.a) {
            finish();
        }
    }

    protected abstract j a();

    @Override // android.app.Activity
    public void onBackPressed() {
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        requestWindowFeature(1);
        setContentView(com.dualboot.e.simple_progress);
        this.a = new i();
        if (bundle != null) {
            this.a.b(bundle);
            return;
        }
        com.dualboot.a.a.a().a(this, a());
        Handler handler = new Handler();
        handler.postDelayed(new f(this), 1000L);
        com.dualboot.a.a.a().a(new g(this, handler));
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        if (isFinishing()) {
            com.dualboot.a.a.a().c();
        }
    }

    @Override // android.app.Activity
    public boolean onTouchEvent(MotionEvent motionEvent) {
        return true;
    }
}
