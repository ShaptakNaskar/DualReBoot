package com.dualboot.util;

import android.os.Bundle;
import android.text.TextUtils;
import java.lang.reflect.Field;

/* JADX INFO: loaded from: classes.dex */
public abstract class w {
    private static String a(Field field, String str) {
        Class<?> declaringClass = field.getDeclaringClass();
        if (TextUtils.isEmpty(str)) {
            str = declaringClass.getSimpleName();
        }
        return String.valueOf(str) + "." + field.getName();
    }

    private static boolean a(Bundle bundle, Object obj, Class cls, String str) {
        boolean z = false;
        if (bundle != null && obj != null && cls != null && cls != w.class) {
            for (Field field : cls.getFields()) {
                if (a(bundle, obj, field, str)) {
                    z = true;
                }
            }
        }
        return z;
    }

    /* JADX WARN: Code restructure failed: missing block: B:31:0x0015, code lost:
    
        r0 = false;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static boolean a(android.os.Bundle r5, java.lang.Object r6, java.lang.reflect.Field r7, java.lang.String r8) {
        /*
            r1 = 1
            java.lang.String r2 = a(r7, r8)     // Catch: java.lang.Exception -> L66
            java.lang.Object r0 = r7.get(r6)     // Catch: java.lang.Exception -> L66
            boolean r3 = r0 instanceof com.dualboot.util.w     // Catch: java.lang.Exception -> L66
            if (r3 == 0) goto L16
            java.lang.Class r1 = r0.getClass()     // Catch: java.lang.Exception -> L66
            boolean r0 = a(r5, r0, r1, r2)     // Catch: java.lang.Exception -> L66
        L15:
            return r0
        L16:
            java.lang.Class r3 = r7.getType()     // Catch: java.lang.Exception -> L66
            java.lang.Class r4 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L66
            if (r3 != r4) goto L27
            boolean r0 = r7.getBoolean(r6)     // Catch: java.lang.Exception -> L66
            r5.putBoolean(r2, r0)     // Catch: java.lang.Exception -> L66
            r0 = r1
            goto L15
        L27:
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L66
            if (r3 != r4) goto L34
            int r0 = r7.getInt(r6)     // Catch: java.lang.Exception -> L66
            r5.putInt(r2, r0)     // Catch: java.lang.Exception -> L66
            r0 = r1
            goto L15
        L34:
            java.lang.Class r4 = java.lang.Long.TYPE     // Catch: java.lang.Exception -> L66
            if (r3 != r4) goto L41
            long r3 = r7.getLong(r6)     // Catch: java.lang.Exception -> L66
            r5.putLong(r2, r3)     // Catch: java.lang.Exception -> L66
            r0 = r1
            goto L15
        L41:
            java.lang.Class r4 = java.lang.Float.TYPE     // Catch: java.lang.Exception -> L66
            if (r3 != r4) goto L4e
            float r0 = r7.getFloat(r6)     // Catch: java.lang.Exception -> L66
            r5.putFloat(r2, r0)     // Catch: java.lang.Exception -> L66
            r0 = r1
            goto L15
        L4e:
            java.lang.Class r4 = java.lang.Double.TYPE     // Catch: java.lang.Exception -> L66
            if (r3 != r4) goto L5b
            double r3 = r7.getDouble(r6)     // Catch: java.lang.Exception -> L66
            r5.putDouble(r2, r3)     // Catch: java.lang.Exception -> L66
            r0 = r1
            goto L15
        L5b:
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            if (r3 != r4) goto L67
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L66
            r5.putString(r2, r0)     // Catch: java.lang.Exception -> L66
            r0 = r1
            goto L15
        L66:
            r0 = move-exception
        L67:
            r0 = 0
            goto L15
        */
        throw new UnsupportedOperationException("Method not decompiled: com.dualboot.util.w.a(android.os.Bundle, java.lang.Object, java.lang.reflect.Field, java.lang.String):boolean");
    }

    private static boolean b(Bundle bundle, Object obj, Class cls, String str) {
        boolean z = false;
        if (bundle != null && obj != null && cls != null && cls != w.class) {
            for (Field field : cls.getFields()) {
                if (b(bundle, obj, field, str)) {
                    z = true;
                }
            }
        }
        return z;
    }

    private static boolean b(Bundle bundle, Object obj, Field field, String str) {
        boolean zB = false;
        try {
            String strA = a(field, str);
            Object obj2 = field.get(obj);
            if (obj2 instanceof w) {
                zB = b(bundle, obj2, obj2.getClass(), strA);
            } else if (bundle.containsKey(strA)) {
                Class<?> type = field.getType();
                if (type == Boolean.TYPE) {
                    field.setBoolean(obj, bundle.getBoolean(strA));
                    zB = true;
                } else if (type == Integer.TYPE) {
                    field.setInt(obj, bundle.getInt(strA));
                    zB = true;
                } else if (type == Long.TYPE) {
                    field.setLong(obj, bundle.getLong(strA));
                    zB = true;
                } else if (type == Float.TYPE) {
                    field.setFloat(obj, bundle.getFloat(strA));
                    zB = true;
                } else if (type == Double.TYPE) {
                    field.setDouble(obj, bundle.getDouble(strA));
                    zB = true;
                } else if (type == String.class) {
                    field.set(obj, bundle.getString(strA));
                    zB = true;
                }
            }
        } catch (Exception e) {
        }
        return zB;
    }

    public final boolean a(Bundle bundle) {
        return a(bundle, this, getClass(), (String) null);
    }

    public final boolean b(Bundle bundle) {
        return b(bundle, this, getClass(), (String) null);
    }
}
