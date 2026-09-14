package com.dualboot.engine;

import android.content.Context;
import android.content.res.AssetManager;
import java.nio.ByteBuffer;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes.dex */
public class EngineInterface {
    private static final AtomicBoolean a = new AtomicBoolean(false);

    static {
        a();
    }

    public static native boolean AddBitmapData(int i, String str, ByteBuffer byteBuffer, int i2, int i3, int i4);

    public static native int Destroy(int i);

    public static native boolean GetNeedsReload(int i);

    public static native int LoadFile(int i, AssetManager assetManager, String str);

    public static native int LoadResources(int i, AssetManager assetManager);

    public static native int Recreate(int i);

    public static native boolean SetPreferenceCameraSet(int i, String str, String str2);

    public static native boolean SetPreferenceEnvironment(int i, String str, String str2);

    public static native boolean SetPreferenceFontMessage(int i, String str, String str2);

    public static native boolean SetPreferenceModelSwap(int i, String str, String str2);

    public static native boolean SetPreferenceModelToggle(int i, String str, String str2);

    public static native boolean SetPreferenceTextureGroup(int i, String str, String str2);

    public static native boolean SetPreferenceTimeOfDay(int i, String str, String str2);

    public static native boolean SetPreferenceTimeOfDayAuto(int i, String str, String str2);

    public static native boolean SetPreferenceUserImage(int i, String str, String str2);

    public static native boolean SetStateLocation(int i, float f, float f2);

    public static native boolean Sleep(long j);

    public static native int Update(int i, int i2, int i3, float f, float f2, long j, double d, float f3, boolean z);

    public static int a(int i, Context context, String str, String str2, float f, float f2) {
        int i2 = 0;
        AssetManager assets = context.getAssets();
        int iRecreate = Recreate(i);
        if (iRecreate != 0) {
            SetStateLocation(iRecreate, f, f2);
            iRecreate = LoadFile(iRecreate, assets, str);
            if (iRecreate != 0) {
                if (iRecreate != 0) {
                    c cVar = new c(context, str2);
                    for (int i3 = 0; i3 < cVar.n(); i3++) {
                        f fVarB = cVar.b(i3);
                        if (!SetPreferenceTimeOfDay(iRecreate, fVarB.c(), fVarB.h())) {
                            String str3 = "Unable to set preference '" + fVarB.d() + " = " + fVarB.h() + "'";
                        }
                    }
                    for (int i4 = 0; i4 < cVar.o(); i4++) {
                        f fVarC = cVar.c(i4);
                        if (!SetPreferenceTimeOfDayAuto(iRecreate, fVarC.c(), fVarC.h())) {
                            String str4 = "Unable to set preference '" + fVarC.d() + " = " + fVarC.h() + "'";
                        }
                    }
                    for (int i5 = 0; i5 < cVar.m(); i5++) {
                        f fVarA = cVar.a(i5);
                        if (!SetPreferenceEnvironment(iRecreate, fVarA.c(), fVarA.h())) {
                            String str5 = "Unable to set preference '" + fVarA.d() + " = " + fVarA.h() + "'";
                        }
                    }
                    for (int i6 = 0; i6 < cVar.p(); i6++) {
                        f fVarD = cVar.d(i6);
                        if (!SetPreferenceCameraSet(iRecreate, fVarD.c(), fVarD.h())) {
                            String str6 = "Unable to set preference '" + fVarD.d() + " = " + fVarD.h() + "'";
                        }
                    }
                    for (int i7 = 0; i7 < cVar.q(); i7++) {
                        f fVarE = cVar.e(i7);
                        if (!SetPreferenceTextureGroup(iRecreate, fVarE.c(), fVarE.h())) {
                            String str7 = "Unable to set preference '" + fVarE.d() + " = " + fVarE.h() + "'";
                        }
                    }
                    for (int i8 = 0; i8 < cVar.r(); i8++) {
                        f fVarF = cVar.f(i8);
                        if (!SetPreferenceModelSwap(iRecreate, fVarF.c(), fVarF.h())) {
                            String str8 = "Unable to set preference '" + fVarF.d() + " = " + fVarF.h() + "'";
                        }
                    }
                    for (int i9 = 0; i9 < cVar.s(); i9++) {
                        f fVarG = cVar.g(i9);
                        if (!SetPreferenceModelToggle(iRecreate, fVarG.c(), fVarG.h())) {
                            String str9 = "Unable to set preference '" + fVarG.d() + " = " + fVarG.h() + "'";
                        }
                    }
                    for (int i10 = 0; i10 < cVar.t(); i10++) {
                        f fVarH = cVar.h(i10);
                        if (!SetPreferenceFontMessage(iRecreate, fVarH.c(), fVarH.h())) {
                            String str10 = "Unable to set preference '" + fVarH.d() + " = " + fVarH.h() + "'";
                        }
                    }
                    while (true) {
                        int i11 = i2;
                        if (i11 >= cVar.u()) {
                            break;
                        }
                        f fVarI = cVar.i(i11);
                        if (SetPreferenceUserImage(iRecreate, fVarI.c(), fVarI.h())) {
                            a aVar = new a();
                            if (!aVar.a(context, fVarI.h())) {
                                String str11 = "Unable to load bitmap " + fVarI.h();
                            } else if (!AddBitmapData(iRecreate, fVarI.h(), aVar.a, aVar.b, aVar.c, aVar.d)) {
                                String str12 = "Unable to add bitmap " + fVarI.h();
                            }
                        } else {
                            String str13 = "Unable to set preference '" + fVarI.d() + " = " + fVarI.h() + "'";
                        }
                        i2 = i11 + 1;
                    }
                    i2 = 1;
                }
                if (i2 != 0 && (iRecreate = LoadResources(iRecreate, assets)) != 0) {
                    return iRecreate;
                }
            }
        }
        return Destroy(iRecreate);
    }

    public static boolean a() {
        if (a.get()) {
            return true;
        }
        try {
            System.loadLibrary("dbgengine");
            a.set(true);
            return true;
        } catch (UnsatisfiedLinkError e) {
            return false;
        }
    }
}
