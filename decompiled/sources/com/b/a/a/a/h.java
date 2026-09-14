package com.b.a.a.a;

import android.os.IBinder;
import android.os.Parcel;

/* JADX INFO: loaded from: classes.dex */
final class h implements f {
    private IBinder a;

    h(IBinder iBinder) {
        this.a = iBinder;
    }

    @Override // com.b.a.a.a.f
    public final void a(long j, String str, c cVar) {
        Parcel parcelObtain = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.android.vending.licensing.ILicensingService");
            parcelObtain.writeLong(j);
            parcelObtain.writeString(str);
            parcelObtain.writeStrongBinder(cVar != null ? cVar.asBinder() : null);
            this.a.transact(1, parcelObtain, null, 1);
        } finally {
            parcelObtain.recycle();
        }
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        return this.a;
    }
}
