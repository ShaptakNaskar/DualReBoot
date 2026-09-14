package com.dualboot.util;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.drawable.BitmapDrawable;
import android.util.DisplayMetrics;
import android.view.View;
import android.view.ViewGroup;

/* JADX INFO: loaded from: classes.dex */
public final class z {
    protected final Context a;

    public z(Context context) {
        this.a = context;
    }

    private Bitmap a(Bitmap bitmap, int i, int i2) {
        if (this.a == null || bitmap == null) {
            return null;
        }
        try {
            DisplayMetrics displayMetrics = this.a.getResources().getDisplayMetrics();
            Bitmap bitmapCreateScaledBitmap = Bitmap.createScaledBitmap(bitmap, (int) (i * displayMetrics.density), (int) (i2 * displayMetrics.density), true);
            if (bitmapCreateScaledBitmap == null) {
                return null;
            }
            bitmapCreateScaledBitmap.setDensity(displayMetrics.densityDpi);
            return bitmapCreateScaledBitmap;
        } catch (Exception e) {
            return null;
        }
    }

    public static void a(View view, boolean z) {
        if (view != null) {
            view.setEnabled(z);
            if (view instanceof ViewGroup) {
                ViewGroup viewGroup = (ViewGroup) view;
                int childCount = viewGroup.getChildCount();
                for (int i = 0; i < childCount; i++) {
                    a(viewGroup.getChildAt(i), z);
                }
            }
        }
    }

    public final BitmapDrawable a(BitmapDrawable bitmapDrawable, int i, int i2) {
        Bitmap bitmap;
        Bitmap bitmapA;
        if (bitmapDrawable == null || (bitmap = bitmapDrawable.getBitmap()) == null || (bitmapA = a(bitmap, i, i2)) == null) {
            return null;
        }
        BitmapDrawable bitmapDrawable2 = new BitmapDrawable(this.a.getResources(), bitmapA);
        bitmapDrawable2.setTargetDensity(this.a.getResources().getDisplayMetrics());
        return bitmapDrawable2;
    }
}
