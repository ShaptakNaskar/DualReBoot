package com.b.a.a.a;

import android.text.TextUtils;
import android.util.Log;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.security.PublicKey;
import java.security.Signature;
import java.security.SignatureException;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes.dex */
final class l implements Runnable {
    final /* synthetic */ j a;
    private final /* synthetic */ int b;
    private final /* synthetic */ String c;
    private final /* synthetic */ String d;

    l(j jVar, int i, String str, String str2) {
        this.a = jVar;
        this.b = i;
        this.c = str;
        this.d = str2;
    }

    /* JADX WARN: Code duplicated, block: B:57:0x0182 A[PHI: r0
      0x0182: PHI (r0v43 com.b.a.a.a.s) = (r0v24 com.b.a.a.a.s), (r0v9 com.b.a.a.a.s) binds: [B:55:0x0174, B:7:0x0042] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:58:0x0185  */
    /* JADX WARN: Code duplicated, block: B:59:0x0191  */
    /* JADX WARN: Code duplicated, block: B:60:0x019a  */
    /* JADX WARN: Code duplicated, block: B:61:0x01a1  */
    /* JADX WARN: Code duplicated, block: B:62:0x01ad  */
    /* JADX WARN: Code duplicated, block: B:63:0x01b9  */
    /* JADX WARN: Code duplicated, block: B:64:0x01c5  */
    /* JADX WARN: Code duplicated, block: B:65:0x01ca  */
    /* JADX WARN: Code duplicated, block: B:66:0x01cf  */
    @Override // java.lang.Runnable
    public final void run() {
        String strSubstring;
        String str;
        Log.i("LicenseChecker", "Received response.");
        if (this.a.a.i.contains(this.a.b)) {
            j.b(this.a);
            n nVar = this.a.b;
            PublicKey publicKey = this.a.a.c;
            int i = this.b;
            String str2 = this.c;
            String str3 = this.d;
            s sVar = null;
            if (i != 0 && i != 1 && i != 2) {
                switch (i) {
                    case 0:
                    case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                        b bVar = nVar.e;
                        nVar.a(256, sVar);
                        break;
                    case 1:
                        nVar.a(561, sVar);
                        break;
                    case com.dualboot.h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                        nVar.a(3);
                        break;
                    case com.dualboot.h.TextViewHeaderImg_img_layout_height_scale /* 4 */:
                        Log.w("LicenseValidator", "An error has occurred on the licensing server.");
                        nVar.a(291, sVar);
                        break;
                    case com.dualboot.h.TextViewHeaderImg_img_corner_radius /* 5 */:
                        Log.w("LicenseValidator", "Licensing server is refusing to talk to this device, over quota.");
                        nVar.a(291, sVar);
                        break;
                    case 257:
                        Log.w("LicenseValidator", "Error contacting licensing server.");
                        nVar.a(291, sVar);
                        break;
                    case 258:
                        nVar.a(1);
                        break;
                    case 259:
                        nVar.a(2);
                        break;
                    default:
                        Log.e("LicenseValidator", "Unknown response code for license check.");
                        nVar.a();
                        break;
                }
            } else {
                try {
                    if (str2 == null) {
                        Log.e("LicenseValidator", "No signed data.");
                        nVar.a();
                    } else {
                        Signature signature = Signature.getInstance("SHA1withRSA");
                        signature.initVerify(publicKey);
                        signature.update(str2.getBytes());
                        if (signature.verify(com.b.a.a.a.a.a.a(str3))) {
                            try {
                                int iIndexOf = str2.indexOf(58);
                                if (-1 == iIndexOf) {
                                    str = str2;
                                    strSubstring = "";
                                } else {
                                    String strSubstring2 = str2.substring(0, iIndexOf);
                                    if (iIndexOf >= str2.length()) {
                                        strSubstring = "";
                                        str = strSubstring2;
                                    } else {
                                        strSubstring = str2.substring(iIndexOf + 1);
                                        str = strSubstring2;
                                    }
                                }
                                String[] strArrSplit = TextUtils.split(str, Pattern.quote("|"));
                                if (strArrSplit.length >= 6) {
                                    sVar = new s();
                                    sVar.g = strSubstring;
                                    sVar.a = Integer.parseInt(strArrSplit[0]);
                                    sVar.b = Integer.parseInt(strArrSplit[1]);
                                    sVar.c = strArrSplit[2];
                                    sVar.d = strArrSplit[3];
                                    sVar.e = strArrSplit[4];
                                    sVar.f = Long.parseLong(strArrSplit[5]);
                                    if (sVar.a == i) {
                                        if (sVar.b == nVar.b) {
                                            if (!sVar.c.equals(nVar.c)) {
                                                Log.e("LicenseValidator", "Package name doesn't match.");
                                                nVar.a();
                                            } else if (!sVar.d.equals(nVar.d)) {
                                                Log.e("LicenseValidator", "Version codes don't match.");
                                                nVar.a();
                                            } else if (!TextUtils.isEmpty(sVar.e)) {
                                                switch (i) {
                                                    case 0:
                                                    case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                                                        b bVar2 = nVar.e;
                                                        nVar.a(256, sVar);
                                                        break;
                                                    case 1:
                                                        nVar.a(561, sVar);
                                                        break;
                                                    case com.dualboot.h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                                                        nVar.a(3);
                                                        break;
                                                    case com.dualboot.h.TextViewHeaderImg_img_layout_height_scale /* 4 */:
                                                        Log.w("LicenseValidator", "An error has occurred on the licensing server.");
                                                        nVar.a(291, sVar);
                                                        break;
                                                    case com.dualboot.h.TextViewHeaderImg_img_corner_radius /* 5 */:
                                                        Log.w("LicenseValidator", "Licensing server is refusing to talk to this device, over quota.");
                                                        nVar.a(291, sVar);
                                                        break;
                                                    case 257:
                                                        Log.w("LicenseValidator", "Error contacting licensing server.");
                                                        nVar.a(291, sVar);
                                                        break;
                                                    case 258:
                                                        nVar.a(1);
                                                        break;
                                                    case 259:
                                                        nVar.a(2);
                                                        break;
                                                    default:
                                                        Log.e("LicenseValidator", "Unknown response code for license check.");
                                                        nVar.a();
                                                        break;
                                                }
                                            } else {
                                                Log.e("LicenseValidator", "User identifier is empty.");
                                                nVar.a();
                                            }
                                        } else {
                                            Log.e("LicenseValidator", "Nonce doesn't match.");
                                            nVar.a();
                                        }
                                    } else {
                                        Log.e("LicenseValidator", "Response codes don't match.");
                                        nVar.a();
                                    }
                                } else {
                                    throw new IllegalArgumentException("Wrong number of fields.");
                                }
                            } catch (IllegalArgumentException e) {
                                Log.e("LicenseValidator", "Could not parse response.");
                                nVar.a();
                            }
                        } else {
                            Log.e("LicenseValidator", "Signature verification failed.");
                            nVar.a();
                        }
                    }
                } catch (com.b.a.a.a.a.b e2) {
                    Log.e("LicenseValidator", "Could not Base64-decode signature.");
                    nVar.a();
                } catch (InvalidKeyException e3) {
                    nVar.a(5);
                } catch (NoSuchAlgorithmException e4) {
                    throw new RuntimeException(e4);
                } catch (SignatureException e5) {
                    throw new RuntimeException(e5);
                }
            }
            this.a.a.a(this.a.b);
        }
    }
}
