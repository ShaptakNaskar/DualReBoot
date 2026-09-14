package com.a.a.a;

import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import com.dualboot.h;

/* JADX INFO: loaded from: classes.dex */
public abstract class b extends Binder implements a {
    public static a a(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.android.vending.billing.IInAppBillingService");
        return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof a)) ? new c(iBinder) : (a) iInterfaceQueryLocalInterface;
    }

    @Override // android.os.Binder
    public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) {
        switch (i) {
            case 1:
                parcel.enforceInterface("com.android.vending.billing.IInAppBillingService");
                int iA = a(parcel.readInt(), parcel.readString(), parcel.readString());
                parcel2.writeNoException();
                parcel2.writeInt(iA);
                return true;
            case h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                parcel.enforceInterface("com.android.vending.billing.IInAppBillingService");
                Bundle bundleA = a(parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readInt() != 0 ? (Bundle) Bundle.CREATOR.createFromParcel(parcel) : null);
                parcel2.writeNoException();
                if (bundleA != null) {
                    parcel2.writeInt(1);
                    bundleA.writeToParcel(parcel2, 1);
                } else {
                    parcel2.writeInt(0);
                }
                return true;
            case h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                parcel.enforceInterface("com.android.vending.billing.IInAppBillingService");
                Bundle bundleA2 = a(parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readString());
                parcel2.writeNoException();
                if (bundleA2 != null) {
                    parcel2.writeInt(1);
                    bundleA2.writeToParcel(parcel2, 1);
                } else {
                    parcel2.writeInt(0);
                }
                return true;
            case h.TextViewHeaderImg_img_layout_height_scale /* 4 */:
                parcel.enforceInterface("com.android.vending.billing.IInAppBillingService");
                Bundle bundleA3 = a(parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString());
                parcel2.writeNoException();
                if (bundleA3 != null) {
                    parcel2.writeInt(1);
                    bundleA3.writeToParcel(parcel2, 1);
                } else {
                    parcel2.writeInt(0);
                }
                return true;
            case h.TextViewHeaderImg_img_corner_radius /* 5 */:
                parcel.enforceInterface("com.android.vending.billing.IInAppBillingService");
                int iB = b(parcel.readInt(), parcel.readString(), parcel.readString());
                parcel2.writeNoException();
                parcel2.writeInt(iB);
                return true;
            case 1598968902:
                parcel2.writeString("com.android.vending.billing.IInAppBillingService");
                return true;
            default:
                return super.onTransact(i, parcel, parcel2, i2);
        }
    }
}
