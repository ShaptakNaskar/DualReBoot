package com.dualboot.activity.misc;

import android.app.Activity;
import com.dualboot.widget.TextViewLink;

/* JADX INFO: loaded from: classes.dex */
final class a implements Runnable {
    final /* synthetic */ WhatsNew a;

    a(WhatsNew whatsNew) {
        this.a = whatsNew;
    }

    @Override // java.lang.Runnable
    public final void run() {
        TextViewLink.a((Activity) this.a);
    }
}
