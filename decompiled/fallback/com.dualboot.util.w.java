package com.dualboot.util;

import android.os.Bundle;
import android.text.TextUtils;
import java.lang.reflect.Field;

/* JADX INFO: loaded from: classes.dex */
public abstract class w {
    public w() {
    }

    private static String a(Field r2, String r3) {
        Class<?> r0 = r2.getDeclaringClass();
        if (TextUtils.isEmpty(r3) == false) goto L6;
        r3 = r0.getSimpleName();
    L6:
        return String.valueOf(r3) + "." + r2.getName();
    }

    private static boolean a(Bundle r5, Object r6, Class r7, String r8) {
        boolean r0 = false;
        if (r5 != null) goto L5;
    L4:
        return r0;
    L5:
        if (r6 == null) goto L4;
        if (r7 == null) goto L4;
        if (r7 == w.class) goto L4;
        Field[] r2 = r7.getFields();
        int r3 = r2.length;
        int r1 = 0;
    L10:
        if (r1 >= r3) goto L4;
        if (a(r5, r6, r2[r1], r8) == false) goto L14;
        r0 = true;
    L14:
        r1 = r1 + 1;
        goto L10
    }

    private static boolean a(Bundle r5, Object r6, Field r7, String r8) {
        String r2 = a(r7, r8);     // Catch: Exception -> L26
        Object r0 = r7.get(r6);     // Catch: Exception -> L26
        if ((r0 instanceof w) == false) goto L7;
        boolean r1 = a(r5, r0, r0.getClass(), r2);     // Catch: Exception -> L26
    L28:
        return r1;
    L7:
        Class<?> r3 = r7.getType();     // Catch: Exception -> L26
        if (r3 != Boolean.TYPE) goto L11;
        r5.putBoolean(r2, r7.getBoolean(r6));     // Catch: Exception -> L26
        r1 = true;
        goto L28
    L11:
        if (r3 != Integer.TYPE) goto L14;
        r5.putInt(r2, r7.getInt(r6));     // Catch: Exception -> L26
        r1 = true;
        goto L28
    L14:
        if (r3 != Long.TYPE) goto L17;
        r5.putLong(r2, r7.getLong(r6));     // Catch: Exception -> L26
        r1 = true;
        goto L28
    L17:
        if (r3 != Float.TYPE) goto L20;
        r5.putFloat(r2, r7.getFloat(r6));     // Catch: Exception -> L26
        r1 = true;
        goto L28
    L20:
        if (r3 != Double.TYPE) goto L23;
        r5.putDouble(r2, r7.getDouble(r6));     // Catch: Exception -> L26
        r1 = true;
        goto L28
    L23:
        if (r3 != String.class) goto L27;
        r5.putString(r2, (String) r0);     // Catch: Exception -> L26
        r1 = true;
        goto L28
    L31:
        r1 = false;
    L27:
        r1 = false;
        goto L28
    }

    private static boolean b(Bundle r5, Object r6, Class r7, String r8) {
        boolean r0 = false;
        if (r5 != null) goto L5;
    L4:
        return r0;
    L5:
        if (r6 == null) goto L4;
        if (r7 == null) goto L4;
        if (r7 == w.class) goto L4;
        Field[] r2 = r7.getFields();
        int r3 = r2.length;
        int r1 = 0;
    L10:
        if (r1 >= r3) goto L4;
        if (b(r5, r6, r2[r1], r8) == false) goto L14;
        r0 = true;
    L14:
        r1 = r1 + 1;
        goto L10
    }

    private static boolean b(Bundle r5, Object r6, Field r7, String r8) {
        boolean r0 = false;
        String r2 = a(r7, r8);     // Catch: Exception -> L28
        Object r3 = r7.get(r6);     // Catch: Exception -> L28
        if ((r3 instanceof w) == false) goto L8;
        r0 = b(r5, r3, r3.getClass(), r2);     // Catch: Exception -> L28
    L30:
        goto L6
    L8:
        if (r5.containsKey(r2) == false) goto L30;
        Class<?> r4 = r7.getType();     // Catch: Exception -> L28
        if (r4 != Boolean.TYPE) goto L13;
        r7.setBoolean(r6, r5.getBoolean(r2));     // Catch: Exception -> L28
        r0 = true;
        goto L30
    L13:
        if (r4 != Integer.TYPE) goto L16;
        r7.setInt(r6, r5.getInt(r2));     // Catch: Exception -> L28
        r0 = true;
        goto L30
    L16:
        if (r4 != Long.TYPE) goto L19;
        r7.setLong(r6, r5.getLong(r2));     // Catch: Exception -> L28
        r0 = true;
        goto L30
    L19:
        if (r4 != Float.TYPE) goto L22;
        r7.setFloat(r6, r5.getFloat(r2));     // Catch: Exception -> L28
        r0 = true;
        goto L30
    L22:
        if (r4 != Double.TYPE) goto L25;
        r7.setDouble(r6, r5.getDouble(r2));     // Catch: Exception -> L28
        r0 = true;
        goto L30
    L25:
        if (r4 != String.class) goto L30;
        r7.set(r6, r5.getString(r2));     // Catch: Exception -> L28
        r0 = true;
    L6:
        return r0;
    }

    public final boolean a(Bundle r3) {
        return a(r3, this, getClass(), null);
    }

    public final boolean b(Bundle r3) {
        return b(r3, this, getClass(), null);
    }
}
