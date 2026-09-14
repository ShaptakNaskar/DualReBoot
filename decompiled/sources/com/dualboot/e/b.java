package com.dualboot.e;

import android.annotation.TargetApi;
import android.content.SharedPreferences;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.service.dreams.DreamService;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
@TargetApi(17)
public abstract class b extends DreamService {
    private static /* synthetic */ int[] i;
    private static /* synthetic */ int[] j;
    protected com.dualboot.c.f a = null;
    protected View b = null;
    protected View c = null;
    protected c d = c.OVERLAY_POS_BOTTOM;
    protected d e = d.OVERLAY_SIZE_MEDIUM;
    protected boolean f = false;
    protected boolean g = false;
    protected boolean h = false;

    private static /* synthetic */ int[] b() {
        int[] iArr = i;
        if (iArr == null) {
            iArr = new int[d.valuesCustom().length];
            try {
                iArr[d.OVERLAY_SIZE_LARGE.ordinal()] = 3;
            } catch (NoSuchFieldError e) {
            }
            try {
                iArr[d.OVERLAY_SIZE_MEDIUM.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                iArr[d.OVERLAY_SIZE_SMALL.ordinal()] = 1;
            } catch (NoSuchFieldError e3) {
            }
            i = iArr;
        }
        return iArr;
    }

    private static /* synthetic */ int[] c() {
        int[] iArr = j;
        if (iArr == null) {
            iArr = new int[c.valuesCustom().length];
            try {
                iArr[c.OVERLAY_POS_BOTTOM.ordinal()] = 3;
            } catch (NoSuchFieldError e) {
            }
            try {
                iArr[c.OVERLAY_POS_CENTER.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                iArr[c.OVERLAY_POS_TOP.ordinal()] = 1;
            } catch (NoSuchFieldError e3) {
            }
            j = iArr;
        }
        return iArr;
    }

    protected abstract j a();

    @Override // android.service.dreams.DreamService, android.view.Window.Callback
    public void onAttachedToWindow() {
        int height;
        float f;
        int width = 256;
        super.onAttachedToWindow();
        j jVarA = a();
        SharedPreferences sharedPreferencesA = com.dualboot.b.a.a(this);
        if (sharedPreferencesA != null) {
            HashMap map = new HashMap();
            map.put("top", c.OVERLAY_POS_TOP);
            map.put("center", c.OVERLAY_POS_CENTER);
            map.put("bottom", c.OVERLAY_POS_BOTTOM);
            c cVar = (c) map.get(sharedPreferencesA.getString("pref_dream_overlay_position", ""));
            if (cVar != null) {
                this.d = cVar;
            }
            HashMap map2 = new HashMap();
            map2.put("small", d.OVERLAY_SIZE_SMALL);
            map2.put("medium", d.OVERLAY_SIZE_MEDIUM);
            map2.put("large", d.OVERLAY_SIZE_LARGE);
            d dVar = (d) map2.get(sharedPreferencesA.getString("pref_dream_overlay_size", ""));
            if (dVar != null) {
                this.e = dVar;
            }
            this.g = sharedPreferencesA.getBoolean("pref_dream_interactive", false);
            this.h = sharedPreferencesA.getBoolean("pref_dream_brightness", false);
            this.f = sharedPreferencesA.getBoolean("pref_dream_overlay", false);
        }
        setInteractive(this.g);
        setScreenBright(this.h);
        setFullscreen(true);
        this.a = new com.dualboot.c.f(this, jVarA.a(), jVarA.b());
        setContentView(this.a);
        LayoutInflater layoutInflater = (LayoutInflater) getSystemService("layout_inflater");
        if (layoutInflater != null) {
            this.b = layoutInflater.inflate(com.dualboot.e.dream_overlay, (ViewGroup) null);
            if (this.b != null) {
                this.c = this.b.findViewById(com.dualboot.d.dream_overlay_clock);
            }
        }
        if (this.b != null && this.c != null) {
            Bitmap bitmapDecodeResource = BitmapFactory.decodeResource(getResources(), com.dualboot.c.clock_face);
            if (bitmapDecodeResource != null) {
                width = bitmapDecodeResource.getWidth();
                height = bitmapDecodeResource.getHeight();
                bitmapDecodeResource.recycle();
            } else {
                height = 256;
            }
            switch (b()[this.e.ordinal()]) {
                case 1:
                    f = 0.5f;
                    break;
                case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                default:
                    f = 0.75f;
                    break;
                case com.dualboot.h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                    f = 1.0f;
                    break;
            }
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams((int) (width * f), (int) (height * f));
            switch (c()[this.d.ordinal()]) {
                case 1:
                    layoutParams.addRule(10, -1);
                    layoutParams.addRule(14, -1);
                    break;
                case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                default:
                    layoutParams.addRule(15, -1);
                    layoutParams.addRule(14, -1);
                    break;
                case com.dualboot.h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                    layoutParams.addRule(12, -1);
                    layoutParams.addRule(14, -1);
                    break;
            }
            this.c.setLayoutParams(layoutParams);
            if (this.f) {
                this.b.setVisibility(0);
                addContentView(this.b, new RelativeLayout.LayoutParams(-1, -1));
            } else {
                this.b.setVisibility(4);
            }
        }
        if (this.a != null) {
            com.dualboot.c.d dVar2 = new com.dualboot.c.d();
            dVar2.e = true;
            if (!this.g) {
                dVar2.d = false;
                dVar2.b = com.dualboot.c.h.AUTOPAN_SPEED_SLOW;
                dVar2.a = com.dualboot.c.i.CAMERA_ANIM_AUTOPAN;
                dVar2.c = com.dualboot.c.k.POWERMANAGE_HIGH_PERFORMANCE;
            }
            this.a.a(dVar2);
        }
    }
}
