package com.dualboot.engine;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import java.io.FileInputStream;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;

/* JADX INFO: loaded from: classes.dex */
public final class a {
    ByteBuffer a = null;
    int b = 0;
    int c = 0;
    int d = 0;

    private boolean a() {
        return this.a != null && this.b > 0 && this.c > 0 && this.d > 0;
    }

    public final boolean a(Context context, String str) {
        FileInputStream fileInputStreamOpenFileInput;
        if (!a()) {
            Bitmap.Config config = Bitmap.Config.RGB_565;
            this.a = null;
            this.b = 0;
            this.c = 0;
            this.d = 0;
            try {
                if (str.length() > 0 && (fileInputStreamOpenFileInput = context.openFileInput(str)) != null) {
                    BitmapFactory.Options options = new BitmapFactory.Options();
                    options.inPreferredConfig = config;
                    Bitmap bitmapDecodeStream = BitmapFactory.decodeStream(fileInputStreamOpenFileInput, null, options);
                    if (bitmapDecodeStream != null && bitmapDecodeStream.getConfig() != config) {
                        bitmapDecodeStream = bitmapDecodeStream.copy(config, false);
                        String str2 = "Conversion of bitmap to '" + config.toString() + "' result = " + Boolean.toString(bitmapDecodeStream != null);
                    }
                    if (bitmapDecodeStream != null) {
                        Bitmap.Config config2 = bitmapDecodeStream.getConfig();
                        int rowBytes = bitmapDecodeStream.getRowBytes();
                        int width = bitmapDecodeStream.getWidth();
                        int height = bitmapDecodeStream.getHeight();
                        if (config2 == config && rowBytes > 0 && width > 0 && height > 0) {
                            this.b = rowBytes * height;
                            this.a = ByteBuffer.allocateDirect(this.b);
                            this.a.order(ByteOrder.nativeOrder());
                            bitmapDecodeStream.copyPixelsToBuffer(this.a);
                            this.a.position(0);
                            this.c = width;
                            this.d = height;
                        }
                        bitmapDecodeStream.recycle();
                    }
                    fileInputStreamOpenFileInput.close();
                }
            } catch (Exception e) {
                String str3 = "Unable to load bitmap " + str + " " + e.toString();
                this.a = null;
                this.b = 0;
                this.c = 0;
                this.d = 0;
            }
        }
        return a();
    }
}
