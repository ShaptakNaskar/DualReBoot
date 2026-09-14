package com.dualboot.b;

import android.text.TextUtils;
import android.util.Base64;
import java.security.SecureRandom;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.PBEKeySpec;
import javax.crypto.spec.SecretKeySpec;

/* JADX INFO: loaded from: classes.dex */
public final class b {
    public byte[] a;
    private byte[] b;
    private Cipher c;
    private Cipher d;
    private final boolean e;

    public b(String str) {
        this(str, (byte) 0);
    }

    private b(String str, byte b) {
        boolean z = true;
        z = false;
        this.b = null;
        this.a = null;
        this.c = null;
        this.d = null;
        TextUtils.isEmpty(str);
        try {
            SecureRandom secureRandom = new SecureRandom();
            if (TextUtils.isEmpty(null)) {
                this.b = new byte[16];
                secureRandom.nextBytes(this.b);
            } else {
                this.b = Base64.decode((String) null, 0);
            }
            if (TextUtils.isEmpty(null)) {
                this.a = new byte[32];
                secureRandom.nextBytes(this.a);
            } else {
                this.a = Base64.decode((String) null, 0);
            }
            IvParameterSpec ivParameterSpec = new IvParameterSpec(this.b);
            SecretKeySpec secretKeySpec = new SecretKeySpec(SecretKeyFactory.getInstance("PBEWITHSHAAND256BITAES-CBC-BC").generateSecret(new PBEKeySpec(str.toCharArray(), this.a, 1024, 256)).getEncoded(), "AES");
            this.c = Cipher.getInstance("AES/CBC/PKCS5Padding");
            this.d = Cipher.getInstance("AES/CBC/PKCS5Padding");
            this.c.init(1, secretKeySpec, ivParameterSpec);
            this.d.init(2, secretKeySpec, ivParameterSpec);
        } catch (Exception e) {
            this.b = null;
            this.a = null;
            this.c = null;
            this.d = null;
        } finally {
            this.e = z;
        }
    }

    public static String a(String str) {
        try {
            return new String(Base64.decode(str, 0), "US-ASCII");
        } catch (Exception e) {
            return null;
        }
    }
}
