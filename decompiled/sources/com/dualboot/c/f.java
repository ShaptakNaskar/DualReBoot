package com.dualboot.c;

import android.annotation.TargetApi;
import android.content.Context;
import android.graphics.SurfaceTexture;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.view.TextureView;

/* JADX INFO: loaded from: classes.dex */
@TargetApi(com.dualboot.h.TextViewHeaderImg_img_scroll_to_view)
public final class f extends TextureView implements TextureView.SurfaceTextureListener {
    protected c a;
    private final boolean b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(Context context, String str, String str2) {
        super(context);
        boolean z = true;
        this.a = null;
        if (!this.b) {
            if (context == null || TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
                this.a = null;
                z = false;
            } else {
                this.a = new c(context, str, str2);
                setSurfaceTextureListener(this);
            }
        }
        this.b = z;
    }

    public final void a(d dVar) {
        if (this.a != null) {
            c cVar = this.a;
            if (dVar != null) {
                cVar.k = new d(dVar);
                cVar.a();
            }
        }
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public final void onSurfaceTextureAvailable(SurfaceTexture surfaceTexture, int i, int i2) {
        if (this.a != null) {
            c cVar = this.a;
            if (cVar.i == null) {
                cVar.i = g.a(cVar.a, cVar.e, cVar.f);
            }
            onSurfaceTextureSizeChanged(surfaceTexture, i, i2);
        }
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public final boolean onSurfaceTextureDestroyed(SurfaceTexture surfaceTexture) {
        if (this.a == null) {
            return true;
        }
        c cVar = this.a;
        if (cVar.i == null) {
            return true;
        }
        cVar.i.b();
        cVar.i = null;
        return true;
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public final void onSurfaceTextureSizeChanged(SurfaceTexture surfaceTexture, int i, int i2) {
        if (this.a != null) {
            c cVar = this.a;
            if (cVar.i != null) {
                cVar.b = -1;
                cVar.c = i;
                cVar.d = i2;
                cVar.i.a(surfaceTexture, cVar.b, cVar.c, cVar.d);
                cVar.a();
            }
        }
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public final void onSurfaceTextureUpdated(SurfaceTexture surfaceTexture) {
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        if (this.a != null) {
            c cVar = this.a;
            if (cVar.k.d && cVar.g.onTouchEvent(motionEvent)) {
                return true;
            }
        }
        return super.onTouchEvent(motionEvent);
    }

    @Override // android.view.View
    public final void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        if (this.a != null) {
            c cVar = this.a;
            cVar.j = z;
            if (cVar.i != null) {
                cVar.i.a(cVar.j);
            }
        }
    }
}
