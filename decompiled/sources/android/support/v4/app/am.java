package android.support.v4.app;

import android.app.Notification;

/* JADX INFO: loaded from: classes.dex */
final class am implements ai {
    am() {
    }

    @Override // android.support.v4.app.ai
    public final Notification a(ag agVar) {
        ao aoVar = new ao(agVar.a, agVar.r, agVar.b, agVar.c, agVar.h, agVar.f, agVar.i, agVar.d, agVar.e, agVar.g, agVar.n, agVar.o, agVar.p, agVar.k, agVar.j, agVar.m);
        for (ad adVar : agVar.q) {
            aoVar.a.addAction(adVar.a, adVar.b, adVar.c);
        }
        if (agVar.l != null) {
            if (agVar.l instanceof af) {
                af afVar = (af) agVar.l;
                CharSequence charSequence = afVar.b;
                boolean z = afVar.d;
                CharSequence charSequence2 = afVar.c;
                Notification.BigTextStyle bigTextStyleBigText = new Notification.BigTextStyle(aoVar.a).setBigContentTitle(charSequence).bigText(afVar.a);
                if (z) {
                    bigTextStyleBigText.setSummaryText(charSequence2);
                }
            } else if (agVar.l instanceof ah) {
                ah ahVar = (ah) agVar.l;
                aoVar.a(ahVar.b, ahVar.d, ahVar.c, ahVar.a);
            } else if (agVar.l instanceof ae) {
                ae aeVar = (ae) agVar.l;
                CharSequence charSequence3 = aeVar.b;
                boolean z2 = aeVar.d;
                CharSequence charSequence4 = aeVar.c;
                Notification.BigPictureStyle bigPictureStyleBigPicture = new Notification.BigPictureStyle(aoVar.a).setBigContentTitle(charSequence3).bigPicture(aeVar.a);
                if (z2) {
                    bigPictureStyleBigPicture.setSummaryText(charSequence4);
                }
            }
        }
        return aoVar.a.build();
    }
}
