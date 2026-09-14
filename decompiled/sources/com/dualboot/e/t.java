package com.dualboot.e;

import android.R;
import android.app.AlertDialog;
import android.app.ProgressDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.AsyncTask;
import android.os.Build;
import android.preference.Preference;
import android.preference.PreferenceScreen;
import android.provider.MediaStore;
import android.widget.Toast;
import java.util.Locale;

/* JADX INFO: loaded from: classes.dex */
public final class t extends AsyncTask {
    final /* synthetic */ r a;
    private final Context b;
    private final Intent c;
    private final String d;
    private final String e;
    private final float f;
    private final float g;
    private com.dualboot.util.g h;
    private boolean i;
    private ProgressDialog j = null;

    public t(r rVar, Context context, Intent intent, String str, String str2, float f, float f2) {
        this.a = rVar;
        this.h = null;
        this.i = false;
        this.b = context;
        this.c = intent;
        this.d = str;
        this.e = str2;
        this.f = f;
        this.g = f2;
        Uri data = this.c.getData();
        if (data == null || data.toString().length() <= 0) {
            return;
        }
        this.h = new com.dualboot.util.g(this.b, data);
        String string = data.toString();
        this.i = string.startsWith(MediaStore.Images.Media.EXTERNAL_CONTENT_URI.toString()) || string.startsWith(MediaStore.Images.Media.INTERNAL_CONTENT_URI.toString());
    }

    private String a() {
        if (this.h == null) {
            return "No image selected from the gallery";
        }
        this.h.a.deleteFile("img-cache");
        a(this.i ? "Copying image..." : "Downloading image...");
        if (isCancelled()) {
            return "Cancelled image download";
        }
        if (!this.h.a("img-cache")) {
            return this.i ? "Unable to copy the full image. Please check your storage device and try again." : "Unable to download the full image. Please check your network connection and try again.";
        }
        Bitmap bitmapB = null;
        for (long j = 0; bitmapB == null && j < 10; j++) {
            a("Reading image...");
            if (isCancelled()) {
                return "Cancelled image read";
            }
            try {
                Thread.sleep(1000L);
            } catch (Exception e) {
            }
            bitmapB = this.h.b("img-cache");
        }
        if (bitmapB == null) {
            return this.i ? "Unable to read the image. This may be due to an incomplete copy. Please check your storage device and try again." : "Unable to read the image. This may be due to an incomplete download. Please check your network connection and try again.";
        }
        a("Converting image...");
        if (isCancelled()) {
            return "Cancelled image conversion";
        }
        Bitmap bitmapA = this.h.a(bitmapB, this.f, this.g, com.dualboot.util.h.RESIZE_FILL);
        if (bitmapA == null) {
            return "Unable to convert the image. Please try a smaller image.";
        }
        a("Saving image...");
        if (isCancelled()) {
            return "Cancelled image saving";
        }
        return !this.h.a(bitmapA, this.e) ? "Unable to save the image. Please try another image." : "";
    }

    private void a(String str) {
        publishProgress(str);
        try {
            Thread.sleep(250L);
        } catch (Exception e) {
        }
    }

    @Override // android.os.AsyncTask
    protected final /* synthetic */ Object doInBackground(Object... objArr) {
        return a();
    }

    @Override // android.os.AsyncTask
    protected final /* synthetic */ void onCancelled(Object obj) {
        String str = "ImageLoaderAsync / onCancelled / " + ((String) obj);
        r.d();
        com.dualboot.util.g gVar = this.h;
        synchronized (gVar) {
            gVar.b = true;
        }
    }

    @Override // android.os.AsyncTask
    protected final /* synthetic */ void onPostExecute(Object obj) {
        String str = (String) obj;
        this.j.dismiss();
        this.j = null;
        if (str.length() != 0) {
            String strTrim = str.trim();
            if (strTrim.length() > 0) {
                AlertDialog.Builder builder = new AlertDialog.Builder(aa.b(this.b));
                builder.setCancelable(true);
                builder.setTitle("Couldn't set image");
                builder.setMessage(strTrim);
                builder.setNegativeButton(R.string.cancel, (DialogInterface.OnClickListener) null);
                builder.setPositiveButton("Try again", new v(this));
                builder.show();
                return;
            }
            return;
        }
        SharedPreferences.Editor editorEdit = com.dualboot.b.a.a(this.b).edit();
        if (editorEdit != null) {
            editorEdit.putString(this.d, "<undefined>");
            editorEdit.commit();
            editorEdit.putString(this.d, this.e);
            editorEdit.commit();
        }
        PreferenceScreen preferenceScreenB = this.a.b();
        Preference preferenceFindPreference = preferenceScreenB != null ? preferenceScreenB.findPreference(this.d) : null;
        if (preferenceFindPreference != null) {
            Toast toastMakeText = Toast.makeText(this.b, "Image set for the " + preferenceFindPreference.getTitle().toString().toLowerCase(Locale.US) + "!", 0);
            if (toastMakeText != null) {
                toastMakeText.setGravity(17, 0, 0);
                toastMakeText.show();
            }
        }
    }

    @Override // android.os.AsyncTask
    protected final void onPreExecute() {
        boolean z = Build.VERSION.SDK_INT >= 14;
        int i = z ? 1 : 0;
        this.j = new ProgressDialog(this.b);
        this.j.setProgressStyle(i);
        this.j.setIndeterminate(true);
        this.j.setMessage("Working...");
        this.j.setCancelable(true);
        this.j.setOnCancelListener(new u(this));
        this.j.show();
        if (!z || Build.VERSION.SDK_INT < 11) {
            return;
        }
        this.j.setProgressNumberFormat(null);
        this.j.setProgressPercentFormat(null);
    }

    @Override // android.os.AsyncTask
    protected final /* synthetic */ void onProgressUpdate(Object... objArr) {
        String str = ((String[]) objArr)[0];
        if (str == null || str.length() <= 0 || this.j == null) {
            return;
        }
        this.j.setMessage(str);
    }
}
