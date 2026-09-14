package com.dualboot.util;

import android.content.Context;
import android.content.res.AssetFileDescriptor;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Matrix;
import android.net.Uri;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.FileInputStream;

/* JADX INFO: loaded from: classes.dex */
public final class g {
    private static /* synthetic */ int[] d;
    public final Context a;
    public boolean b = false;
    private final Uri c;

    public g(Context context, Uri uri) {
        this.a = context;
        this.c = uri;
    }

    private boolean a() {
        boolean z;
        synchronized (this) {
            z = this.b;
        }
        return z;
    }

    private static /* synthetic */ int[] b() {
        int[] iArr = d;
        if (iArr == null) {
            iArr = new int[h.valuesCustom().length];
            try {
                iArr[h.RESIZE_FILL.ordinal()] = 2;
            } catch (NoSuchFieldError e) {
            }
            try {
                iArr[h.RESIZE_FIT.ordinal()] = 1;
            } catch (NoSuchFieldError e2) {
            }
            try {
                iArr[h.RESIZE_STRETCH.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            d = iArr;
        }
        return iArr;
    }

    public final Bitmap a(Bitmap bitmap, float f, float f2, h hVar) {
        float f3;
        int columnIndex;
        float f4 = 1.0f;
        try {
            Matrix matrix = new Matrix();
            matrix.reset();
            Cursor cursorQuery = this.a.getContentResolver().query(this.c, null, null, null, null);
            if (cursorQuery != null) {
                if (cursorQuery.moveToFirst() && (columnIndex = cursorQuery.getColumnIndex("orientation")) >= 0) {
                    matrix.postRotate(cursorQuery.getInt(columnIndex));
                }
                cursorQuery.close();
            }
            int width = bitmap.getWidth();
            int height = bitmap.getHeight();
            switch (b()[hVar.ordinal()]) {
                case 1:
                    if (width <= height) {
                        f3 = f2 / height;
                        f4 = f3;
                    } else {
                        f3 = f / width;
                        f4 = f3;
                    }
                    break;
                case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                    if (width >= height) {
                        f3 = f2 / height;
                        f4 = f3;
                    } else {
                        f3 = f / width;
                        f4 = f3;
                    }
                    break;
                case com.dualboot.h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                    f4 = f / width;
                    f3 = f2 / height;
                    break;
                default:
                    f3 = 1.0f;
                    break;
            }
            matrix.preScale(f4, f3);
            return Bitmap.createBitmap(bitmap, 0, 0, width, height, matrix, true);
        } catch (Exception e) {
            e.toString();
            return null;
        }
    }

    public final boolean a(Bitmap bitmap, String str) {
        try {
            BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(this.a.openFileOutput(str, 0));
            boolean z = bitmap.compress(Bitmap.CompressFormat.PNG, 100, bufferedOutputStream);
            bufferedOutputStream.flush();
            bufferedOutputStream.close();
            return z;
        } catch (Exception e) {
            e.toString();
            return false;
        }
    }

    public final boolean a(String str) {
        boolean z;
        BufferedOutputStream bufferedOutputStream;
        byte[] bArr;
        int i;
        try {
            AssetFileDescriptor assetFileDescriptorOpenAssetFileDescriptor = this.a.getContentResolver().openAssetFileDescriptor(this.c, "r");
            if (assetFileDescriptorOpenAssetFileDescriptor == null) {
                return false;
            }
            String str2 = "SaveURIToFile / URI = " + this.c.toString();
            String str3 = "SaveURIToFile / FD  = " + assetFileDescriptorOpenAssetFileDescriptor.toString();
            FileInputStream fileInputStreamCreateInputStream = assetFileDescriptorOpenAssetFileDescriptor.createInputStream();
            if (fileInputStreamCreateInputStream != null) {
                try {
                    Thread.sleep(500L);
                    while (true) {
                        if (fileInputStreamCreateInputStream.available() == 0) {
                            try {
                                Thread.sleep(1L);
                            } catch (Exception e) {
                            }
                            fileInputStreamCreateInputStream.mark(1);
                            if (fileInputStreamCreateInputStream.read() >= 0) {
                                fileInputStreamCreateInputStream.reset();
                                if (a()) {
                                    throw new InterruptedException("Image read cancelled");
                                }
                            }
                        }
                        int i2 = fileInputStreamCreateInputStream.read(bArr);
                        if (i2 > 0) {
                            i += i2;
                            try {
                                Thread.sleep(1L);
                            } catch (Exception e2) {
                            }
                            bufferedOutputStream.write(bArr);
                        } else if (i2 == 0) {
                            try {
                                Thread.sleep(100L);
                            } catch (Exception e3) {
                            }
                        } else {
                            z = i > 0;
                            bufferedOutputStream.flush();
                            bufferedOutputStream.close();
                            fileInputStreamCreateInputStream.close();
                        }
                    }
                } catch (Exception e4) {
                }
                bufferedOutputStream = new BufferedOutputStream(this.a.openFileOutput(str, 0));
                bArr = new byte[4096];
                i = 0;
            } else {
                z = false;
            }
            assetFileDescriptorOpenAssetFileDescriptor.close();
            return z;
        } catch (Exception e5) {
            e5.toString();
            return false;
        }
    }

    public final Bitmap b(String str) {
        Bitmap bitmapDecodeStream = null;
        int i = -1;
        int i2 = -1;
        try {
            BitmapFactory.Options options = new BitmapFactory.Options();
            options.inJustDecodeBounds = true;
            BufferedInputStream bufferedInputStream = new BufferedInputStream(this.a.openFileInput(str));
            BitmapFactory.decodeStream(bufferedInputStream, null, options);
            i = options.outWidth;
            i2 = options.outHeight;
            String str2 = "DecodeBitmap / Bounds = " + i + "x" + i2 + ", type = " + options.outMimeType;
            bufferedInputStream.close();
        } catch (Exception e) {
            e.toString();
            bitmapDecodeStream = null;
        }
        if (i > 0 && i2 > 0) {
            int[] iArr = {4, 2, 1};
            for (Bitmap.Config config : new Bitmap.Config[]{Bitmap.Config.ARGB_8888, Bitmap.Config.RGB_565}) {
                for (int i3 : iArr) {
                    if (bitmapDecodeStream == null) {
                        try {
                            BufferedInputStream bufferedInputStream2 = new BufferedInputStream(this.a.openFileInput(str));
                            BitmapFactory.Options options2 = new BitmapFactory.Options();
                            options2.inPreferredConfig = config;
                            options2.inSampleSize = i3;
                            bitmapDecodeStream = BitmapFactory.decodeStream(bufferedInputStream2, null, options2);
                            String str3 = "DecodeBitmap / Attempted " + config.toString() + " @ 1/" + i3 + " size, result = " + Boolean.toString(bitmapDecodeStream != null);
                            bufferedInputStream2.close();
                        } catch (Exception e2) {
                            e2.toString();
                            bitmapDecodeStream = null;
                        }
                    }
                }
            }
        }
        return bitmapDecodeStream;
    }
}
