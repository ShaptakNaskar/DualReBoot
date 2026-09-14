package com.dualboot.engine;

import android.content.Context;
import android.content.SharedPreferences;
import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Map;
import java.util.TreeMap;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public final class c {
    private static /* synthetic */ int[] v;
    protected ArrayList a = null;
    protected ArrayList b = null;
    protected ArrayList c = null;
    protected ArrayList d = null;
    protected ArrayList e = null;
    protected ArrayList f = null;
    protected ArrayList g = null;
    protected ArrayList h = null;
    protected ArrayList i = null;
    protected ArrayList j = null;
    protected ArrayList k = null;
    protected ArrayList l = null;
    protected ArrayList m = null;
    protected ArrayList n = null;
    protected ArrayList o = null;
    protected ArrayList p = null;
    protected ArrayList q = null;
    protected ArrayList r = null;
    protected ArrayList s = null;
    protected Map t = null;
    protected boolean u = true;

    public c() {
        x();
    }

    public c(Context context, String str) {
        SharedPreferences sharedPreferencesA;
        if (!a(context, str, true) || (sharedPreferencesA = com.dualboot.b.a.a(context)) == null) {
            return;
        }
        b(sharedPreferencesA, this.l);
        a(sharedPreferencesA, this.a);
        a(sharedPreferencesA, this.b);
        b(sharedPreferencesA, this.c);
        a(sharedPreferencesA, this.d);
        a(sharedPreferencesA, this.e);
        a(sharedPreferencesA, this.f);
        b(sharedPreferencesA, this.g);
        a(sharedPreferencesA, this.h);
        a(sharedPreferencesA, this.i);
        b(sharedPreferencesA, this.m);
        b(sharedPreferencesA, this.n);
        b(sharedPreferencesA, this.o);
        a(sharedPreferencesA, this.p);
        a(sharedPreferencesA, this.q);
        a(sharedPreferencesA, this.r);
        a(sharedPreferencesA, this.s);
        if (sharedPreferencesA == null || sharedPreferencesA.getBoolean("postload_checked_panning", false) || this.m.isEmpty() || this.n.isEmpty()) {
            return;
        }
        h hVar = (h) this.m.get(0);
        h hVar2 = (h) this.n.get(0);
        SharedPreferences.Editor editorEdit = sharedPreferencesA.edit();
        if (editorEdit != null) {
            if (this.u && ((Boolean) hVar2.a()).booleanValue()) {
                hVar.b(0);
                hVar2.b(0);
                hVar.a(editorEdit);
                hVar2.a(editorEdit);
            }
            editorEdit.putBoolean("postload_checked_panning", true);
            editorEdit.commit();
        }
    }

    private h a(d dVar, h hVar, ArrayList arrayList) {
        arrayList.add(hVar);
        a(dVar, hVar);
        return hVar;
    }

    private i a(d dVar, i iVar, ArrayList arrayList) {
        arrayList.add(iVar);
        a(dVar, iVar);
        return iVar;
    }

    private static void a(SharedPreferences sharedPreferences, ArrayList arrayList) {
        int i = 0;
        while (true) {
            int i2 = i;
            if (i2 >= arrayList.size()) {
                return;
            }
            ((i) arrayList.get(i2)).a(sharedPreferences);
            i = i2 + 1;
        }
    }

    private void a(d dVar, f fVar) {
        if (fVar.c().length() > 0) {
            ArrayList arrayList = (ArrayList) this.t.get(dVar);
            if (arrayList == null) {
                arrayList = new ArrayList();
                this.t.put(dVar, arrayList);
            }
            arrayList.add(fVar);
        }
    }

    private void a(d dVar, BufferedReader bufferedReader, ArrayList arrayList) {
        int i = Integer.parseInt(bufferedReader.readLine());
        for (int i2 = 0; i2 < i; i2++) {
            i iVar = new i(this);
            if (iVar.a(bufferedReader)) {
                a(dVar, iVar, arrayList);
            }
        }
    }

    private void a(d dVar, JSONObject jSONObject, String str, ArrayList arrayList) {
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(str);
        if (jSONArrayOptJSONArray != null) {
            int length = jSONArrayOptJSONArray.length();
            for (int i = 0; i < length; i++) {
                JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray.optJSONObject(i);
                if (jSONObjectOptJSONObject != null) {
                    i iVar = new i(this);
                    if (iVar.a(jSONObjectOptJSONObject)) {
                        a(dVar, iVar, arrayList);
                    }
                }
            }
        }
    }

    private boolean a(Context context, String str, boolean z) {
        com.dualboot.a.a aVarA;
        String strSubstring;
        int iG;
        x();
        if (!c(context, str) && !b(context, str)) {
            return false;
        }
        int size = this.k.size();
        if (size > 0 && (aVarA = com.dualboot.a.a.a()) != null) {
            for (int i = 0; i < size; i++) {
                i iVar = (i) this.k.get(i);
                String strD = iVar.d();
                String strF = iVar.f();
                String strE = iVar.e();
                String strSubstring2 = "$0.99";
                int iIndexOf = strE.indexOf(59);
                if (iIndexOf > 0) {
                    strSubstring = strE.substring(0, iIndexOf);
                    strE = strE.substring(iIndexOf + 1);
                    int iIndexOf2 = strE.indexOf(59);
                    if (iIndexOf2 > 0) {
                        strSubstring2 = strE.substring(iIndexOf2 + 1);
                        strE = strE.substring(0, iIndexOf2);
                    }
                } else {
                    strSubstring = strE;
                }
                if (aVarA.a(strD, strSubstring, strE, strSubstring2, strF, context) && (iG = iVar.g()) > 0) {
                    for (int i2 = 0; i2 < iG; i2++) {
                        String strA = iVar.a(i2);
                        int iIndexOf3 = strA.indexOf(61);
                        if (iIndexOf3 > 0) {
                            aVarA.a(strD, strA.substring(0, iIndexOf3), strA.substring(iIndexOf3 + 1));
                        }
                    }
                    h hVar = new h(this);
                    hVar.a(strD, strSubstring, strE, strF, new Boolean[]{false});
                    a(d.IAB_OFFERS, hVar, this.l);
                }
            }
            aVarA.d();
            if (z) {
                aVarA.a(context);
            }
        }
        ArrayList arrayList = (ArrayList) this.t.get(d.TIMEOFDAY);
        if (arrayList != null) {
            Collections.sort(arrayList, new g(this));
        }
        int i3 = 0;
        int iMax = 0;
        while (true) {
            int i4 = i3;
            if (i4 >= this.b.size()) {
                break;
            }
            i iVar2 = (i) this.b.get(i4);
            iVar2.c("noon");
            iMax = Math.max(iMax, iVar2.g());
            i3 = i4 + 1;
        }
        int i5 = 0;
        int iMax2 = 0;
        while (true) {
            int i6 = i5;
            if (i6 >= this.d.size()) {
                break;
            }
            iMax2 = Math.max(iMax2, ((i) this.d.get(i6)).g());
            i5 = i6 + 1;
        }
        if (iMax2 > 1) {
            i iVar3 = new i(this);
            iVar3.a("cameraset_switch_gesture", "Camera Gesture", "Choose the gesture that will cycle between available scenes", new String[]{"None", "Double Tap", "Swipe Up"});
            iVar3.b(1);
            iVar3.a("Gestures");
            a(d.CAMERA, iVar3, this.p);
        }
        h hVar2 = new h(this);
        hVar2.a("cameraset_pan_homescreen", "Homescreen Panning", "Pan the camera as the homescreen changes. This may not be supported on all devices", new Boolean[]{Boolean.valueOf(this.u)});
        hVar2.a("Panning Modes");
        a(d.CAMERA, hVar2, this.m);
        h hVar3 = new h(this);
        Boolean[] boolArr = new Boolean[1];
        boolArr[0] = Boolean.valueOf(!this.u);
        hVar3.a("cameraset_pan_manual", "Manual Panning", "Manually pan the camera based on swiping the screen. Recommended when homescreen panning is not supported", boolArr);
        hVar3.n();
        hVar3.a("Panning Modes");
        a(d.CAMERA, hVar3, this.n);
        h hVar4 = new h(this);
        hVar4.a("cameraset_pan_auto", "Auto Panning", "Automatically pan the camera back and forth", new Boolean[]{false});
        hVar4.n();
        hVar4.a("Panning Modes");
        a(d.CAMERA, hVar4, this.o);
        i iVar4 = new i(this);
        iVar4.a("cameraset_pan_auto_speed", "Auto Pan Speed", "Choose how fast the camera will auto pan", new String[]{"Slow", "Medium", "Fast"});
        iVar4.b(1);
        iVar4.a("Panning Settings");
        a(d.CAMERA, iVar4, this.q);
        i iVar5 = new i(this);
        iVar5.a("cameraset_pan_manual_homescreen_count", "Number of Homescreens", "Choose the number of virtual homescreens when using manual panning. Match the number of homescreens on your device for best results", new String[]{"3 Homescreens", "5 Homescreens", "7 Homescreens"});
        iVar5.b(1);
        iVar5.a("Panning Settings");
        a(d.CAMERA, iVar5, this.s);
        i iVar6 = new i(this);
        iVar6.a("advanced_power_management", "Power Management", "Maximize performance, or conserve battery life", new String[]{"High Performance", "Balanced", "Battery Saver"});
        iVar6.b(1);
        a(d.ADVANCED, iVar6, this.r);
        c(d.TIMEOFDAY);
        c(d.CUSTOMIZATION);
        c(d.TOGGLES);
        return true;
    }

    private static boolean a(ArrayList arrayList, boolean z) {
        return arrayList.size() > 0 ? ((Boolean) ((h) arrayList.get(0)).a()).booleanValue() : z;
    }

    public static String b(d dVar) {
        switch (w()[dVar.ordinal()]) {
            case 1:
                return "Themes";
            case com.dualboot.h.TextViewHeaderImg_img_bitmap_crop /* 2 */:
                return "Camera";
            case com.dualboot.h.TextViewHeaderImg_img_bitmap_round_bottom /* 3 */:
                return "Environment & Time Of Day";
            case com.dualboot.h.TextViewHeaderImg_img_layout_height_scale /* 4 */:
                return "Messages";
            case com.dualboot.h.TextViewHeaderImg_img_corner_radius /* 5 */:
                return "Pictures";
            case com.dualboot.h.TextViewHeaderImg_img_stroke_enabled /* 6 */:
                return "Customization";
            case com.dualboot.h.TextViewHeaderImg_img_stroke_width /* 7 */:
                return "Toggles";
            case com.dualboot.h.TextViewHeaderImg_img_stroke_color /* 8 */:
                return "Interaction";
            case com.dualboot.h.TextViewHeaderImg_img_stroke_alpha /* 9 */:
                return "Information";
            case com.dualboot.h.TextViewHeaderImg_img_gradient_color /* 10 */:
                return "Social";
            case com.dualboot.h.TextViewHeaderImg_img_gradient_color_end /* 11 */:
                return "Advanced";
            case com.dualboot.h.TextViewHeaderImg_img_state_toggle_default /* 12 */:
            default:
                return "Unknown";
            case com.dualboot.h.TextViewHeaderImg_img_state_toggle_click /* 13 */:
                return "Upgrades";
        }
    }

    private static void b(SharedPreferences sharedPreferences, ArrayList arrayList) {
        int i = 0;
        while (true) {
            int i2 = i;
            if (i2 >= arrayList.size()) {
                return;
            }
            ((h) arrayList.get(i2)).a(sharedPreferences);
            i = i2 + 1;
        }
    }

    private void b(d dVar, BufferedReader bufferedReader, ArrayList arrayList) {
        int i = Integer.parseInt(bufferedReader.readLine());
        for (int i2 = 0; i2 < i; i2++) {
            h hVar = new h(this);
            if (hVar.a(bufferedReader)) {
                a(dVar, hVar, arrayList);
            }
        }
    }

    private void b(d dVar, JSONObject jSONObject, String str, ArrayList arrayList) {
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(str);
        if (jSONArrayOptJSONArray != null) {
            int length = jSONArrayOptJSONArray.length();
            for (int i = 0; i < length; i++) {
                JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray.optJSONObject(i);
                if (jSONObjectOptJSONObject != null) {
                    h hVar = new h(this);
                    if (hVar.a(jSONObjectOptJSONObject)) {
                        a(dVar, hVar, arrayList);
                    }
                }
            }
        }
    }

    /* JADX WARN: Code duplicated, block: B:18:0x0085 A[Catch: Exception -> 0x00ae, TRY_LEAVE, TryCatch #3 {Exception -> 0x00ae, blocks: (B:16:0x0080, B:18:0x0085), top: B:50:0x0080 }] */
    /* JADX WARN: Code duplicated, block: B:24:0x0091 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:25:0x0093 A[Catch: Exception -> 0x009f, TRY_LEAVE, TryCatch #1 {Exception -> 0x009f, blocks: (B:23:0x008e, B:25:0x0093), top: B:48:0x008e }] */
    /* JADX WARN: Code duplicated, block: B:48:0x008e A[EXC_TOP_SPLITTER, SYNTHETIC] */
    private boolean b(Context context, String str) throws Throwable {
        InputStream inputStreamOpen;
        BufferedReader bufferedReader;
        BufferedReader bufferedReader2 = null;
        bufferedReader2 = null;
        InputStream inputStream = null;
        try {
            inputStreamOpen = context.getAssets().open(str);
            if (inputStreamOpen == null) {
                if (inputStreamOpen != null) {
                    try {
                        inputStreamOpen.close();
                    } catch (Exception e) {
                    }
                }
                return false;
            }
            try {
                bufferedReader = new BufferedReader(new InputStreamReader(inputStreamOpen), 256);
                try {
                    a(d.TIMEOFDAY, bufferedReader, this.b);
                    b(d.TIMEOFDAY, bufferedReader, this.c);
                    a(d.CAMERA, bufferedReader, this.d);
                    a(d.CUSTOMIZATION, bufferedReader, this.e);
                    b(d.TOGGLES, bufferedReader, this.g);
                    a(d.MESSAGES, bufferedReader, this.h);
                    a(d.IMAGES, bufferedReader, this.i);
                    a(d.THEMES, bufferedReader, this.j);
                    a(d.CUSTOMIZATION, bufferedReader, this.f);
                    a(d.IAB_INTERNAL, bufferedReader, this.k);
                    a(d.TIMEOFDAY, bufferedReader, this.a);
                    try {
                        bufferedReader.close();
                        if (inputStreamOpen != null) {
                            inputStreamOpen.close();
                        }
                    } catch (Exception e2) {
                    }
                    return true;
                } catch (Exception e3) {
                    inputStream = inputStreamOpen;
                    try {
                        String str2 = "Unable to read file as text: " + str;
                        if (bufferedReader != null) {
                            try {
                                bufferedReader.close();
                                if (inputStream != null) {
                                    inputStream.close();
                                }
                            } catch (Exception e4) {
                            }
                        } else if (inputStream != null) {
                            inputStream.close();
                        }
                        return false;
                    } catch (Throwable th) {
                        inputStreamOpen = inputStream;
                        bufferedReader2 = bufferedReader;
                        th = th;
                        if (bufferedReader2 != null) {
                            try {
                                bufferedReader2.close();
                                if (inputStreamOpen != null) {
                                    inputStreamOpen.close();
                                }
                            } catch (Exception e5) {
                                throw th;
                            }
                        } else if (inputStreamOpen != null) {
                            inputStreamOpen.close();
                        }
                        throw th;
                    }
                } catch (Throwable th2) {
                    bufferedReader2 = bufferedReader;
                    th = th2;
                    if (bufferedReader2 != null) {
                        bufferedReader2.close();
                        if (inputStreamOpen != null) {
                            inputStreamOpen.close();
                        }
                    } else if (inputStreamOpen != null) {
                        inputStreamOpen.close();
                    }
                    throw th;
                }
            } catch (Exception e6) {
                bufferedReader = null;
                inputStream = inputStreamOpen;
            } catch (Throwable th3) {
                th = th3;
            }
        } catch (Exception e7) {
            bufferedReader = null;
        } catch (Throwable th4) {
            th = th4;
            inputStreamOpen = null;
        }
    }

    private void c(d dVar) {
        ArrayList<f> arrayListA = a(dVar);
        if (arrayListA != null) {
            for (f fVar : arrayListA) {
                if (fVar != null) {
                    fVar.m();
                }
            }
        }
    }

    /* JADX WARN: Code duplicated, block: B:22:0x00b7 A[Catch: Exception -> 0x00e0, TRY_LEAVE, TryCatch #0 {Exception -> 0x00e0, blocks: (B:20:0x00b2, B:22:0x00b7), top: B:52:0x00b2 }] */
    /* JADX WARN: Code duplicated, block: B:28:0x00c3 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:29:0x00c5 A[Catch: Exception -> 0x00d1, TRY_LEAVE, TryCatch #10 {Exception -> 0x00d1, blocks: (B:27:0x00c0, B:29:0x00c5), top: B:60:0x00c0 }] */
    /* JADX WARN: Code duplicated, block: B:60:0x00c0 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    private boolean c(Context context, String str) throws Throwable {
        InputStream inputStreamOpen;
        BufferedReader bufferedReader;
        BufferedReader bufferedReader2 = null;
        bufferedReader2 = null;
        InputStream inputStream = null;
        try {
            inputStreamOpen = context.getAssets().open(str);
            if (inputStreamOpen == null) {
                if (inputStreamOpen != null) {
                    try {
                        inputStreamOpen.close();
                    } catch (Exception e) {
                    }
                }
                return false;
            }
            try {
                bufferedReader = new BufferedReader(new InputStreamReader(inputStreamOpen), 256);
                try {
                    StringBuilder sb = new StringBuilder();
                    for (String line = bufferedReader.readLine(); line != null; line = bufferedReader.readLine()) {
                        sb.append(line);
                    }
                    JSONObject jSONObject = new JSONObject(sb.toString());
                    a(d.TIMEOFDAY, jSONObject, "TimeOfDay", this.b);
                    b(d.TIMEOFDAY, jSONObject, "AutoTimeOfDay", this.c);
                    a(d.CAMERA, jSONObject, "CameraSets", this.d);
                    a(d.CUSTOMIZATION, jSONObject, "TextureGroups", this.e);
                    b(d.TOGGLES, jSONObject, "ModelToggles", this.g);
                    a(d.MESSAGES, jSONObject, "TextureFonts", this.h);
                    a(d.IMAGES, jSONObject, "TextureFiles", this.i);
                    a(d.THEMES, jSONObject, "Themes", this.j);
                    a(d.CUSTOMIZATION, jSONObject, "ModelSwaps", this.f);
                    a(d.IAB_INTERNAL, jSONObject, "IAB", this.k);
                    a(d.TIMEOFDAY, jSONObject, "Environments", this.a);
                    try {
                        bufferedReader.close();
                        if (inputStreamOpen != null) {
                            inputStreamOpen.close();
                        }
                    } catch (Exception e2) {
                    }
                    return true;
                } catch (Exception e3) {
                    inputStream = inputStreamOpen;
                    try {
                        String str2 = "Unable to read file as JSON: " + str;
                        if (bufferedReader != null) {
                            try {
                                bufferedReader.close();
                                if (inputStream != null) {
                                    inputStream.close();
                                }
                            } catch (Exception e4) {
                            }
                        } else if (inputStream != null) {
                            inputStream.close();
                        }
                        return false;
                    } catch (Throwable th) {
                        inputStreamOpen = inputStream;
                        bufferedReader2 = bufferedReader;
                        th = th;
                        if (bufferedReader2 != null) {
                            try {
                                bufferedReader2.close();
                                if (inputStreamOpen != null) {
                                    inputStreamOpen.close();
                                }
                            } catch (Exception e5) {
                                throw th;
                            }
                        } else if (inputStreamOpen != null) {
                            inputStreamOpen.close();
                        }
                        throw th;
                    }
                } catch (Throwable th2) {
                    bufferedReader2 = bufferedReader;
                    th = th2;
                    if (bufferedReader2 != null) {
                        bufferedReader2.close();
                        if (inputStreamOpen != null) {
                            inputStreamOpen.close();
                        }
                    } else if (inputStreamOpen != null) {
                        inputStreamOpen.close();
                    }
                    throw th;
                }
            } catch (Exception e6) {
                bufferedReader = null;
                inputStream = inputStreamOpen;
            } catch (Throwable th3) {
                th = th3;
            }
        } catch (Exception e7) {
            bufferedReader = null;
        } catch (Throwable th4) {
            th = th4;
            inputStreamOpen = null;
        }
    }

    public static /* synthetic */ int[] w() {
        int[] iArr = v;
        if (iArr == null) {
            iArr = new int[d.valuesCustom().length];
            try {
                iArr[d.ADVANCED.ordinal()] = 11;
            } catch (NoSuchFieldError e) {
            }
            try {
                iArr[d.CAMERA.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                iArr[d.CUSTOMIZATION.ordinal()] = 6;
            } catch (NoSuchFieldError e3) {
            }
            try {
                iArr[d.IAB_INTERNAL.ordinal()] = 12;
            } catch (NoSuchFieldError e4) {
            }
            try {
                iArr[d.IAB_OFFERS.ordinal()] = 13;
            } catch (NoSuchFieldError e5) {
            }
            try {
                iArr[d.IMAGES.ordinal()] = 5;
            } catch (NoSuchFieldError e6) {
            }
            try {
                iArr[d.INFORMATION.ordinal()] = 9;
            } catch (NoSuchFieldError e7) {
            }
            try {
                iArr[d.INTERACTION.ordinal()] = 8;
            } catch (NoSuchFieldError e8) {
            }
            try {
                iArr[d.MESSAGES.ordinal()] = 4;
            } catch (NoSuchFieldError e9) {
            }
            try {
                iArr[d.SOCIAL.ordinal()] = 10;
            } catch (NoSuchFieldError e10) {
            }
            try {
                iArr[d.THEMES.ordinal()] = 1;
            } catch (NoSuchFieldError e11) {
            }
            try {
                iArr[d.TIMEOFDAY.ordinal()] = 3;
            } catch (NoSuchFieldError e12) {
            }
            try {
                iArr[d.TOGGLES.ordinal()] = 7;
            } catch (NoSuchFieldError e13) {
            }
            v = iArr;
        }
        return iArr;
    }

    private void x() {
        this.a = new ArrayList();
        this.b = new ArrayList();
        this.c = new ArrayList();
        this.d = new ArrayList();
        this.e = new ArrayList();
        this.f = new ArrayList();
        this.g = new ArrayList();
        this.h = new ArrayList();
        this.i = new ArrayList();
        this.j = new ArrayList();
        this.k = new ArrayList();
        this.l = new ArrayList();
        this.m = new ArrayList();
        this.n = new ArrayList();
        this.o = new ArrayList();
        this.p = new ArrayList();
        this.q = new ArrayList();
        this.r = new ArrayList();
        this.s = new ArrayList();
        this.t = new TreeMap();
        this.u = new b().a;
    }

    public final f a(int i) {
        return (f) this.a.get(i);
    }

    public final ArrayList a(d dVar) {
        return (ArrayList) this.t.get(dVar);
    }

    public final boolean a() {
        return a(this.m, this.u);
    }

    public final boolean a(Context context, String str) {
        return a(context, str, false);
    }

    public final f b(int i) {
        return (f) this.b.get(i);
    }

    public final boolean b() {
        return a(this.n, !this.u);
    }

    public final f c(int i) {
        return (f) this.c.get(i);
    }

    public final boolean c() {
        return a(this.o, false);
    }

    public final int d() {
        return ((i) this.p.get(0)).k();
    }

    public final f d(int i) {
        return (f) this.d.get(i);
    }

    public final int e() {
        return ((i) this.q.get(0)).k();
    }

    public final f e(int i) {
        return (f) this.e.get(i);
    }

    public final int f() {
        return ((i) this.r.get(0)).k();
    }

    public final f f(int i) {
        return (f) this.f.get(i);
    }

    public final int g() {
        return ((i) this.s.get(0)).k();
    }

    public final f g(int i) {
        return (f) this.g.get(i);
    }

    public final f h(int i) {
        return (f) this.h.get(i);
    }

    public final String h() {
        return this.m.isEmpty() ? "" : ((h) this.m.get(0)).c();
    }

    public final f i(int i) {
        return (f) this.i.get(i);
    }

    public final String i() {
        return this.n.isEmpty() ? "" : ((h) this.n.get(0)).c();
    }

    public final String j() {
        return this.o.isEmpty() ? "" : ((h) this.o.get(0)).c();
    }

    public final String k() {
        return this.q.isEmpty() ? "" : ((i) this.q.get(0)).c();
    }

    public final String l() {
        return this.s.isEmpty() ? "" : ((i) this.s.get(0)).c();
    }

    public final int m() {
        return this.a.size();
    }

    public final int n() {
        return this.b.size();
    }

    public final int o() {
        return this.c.size();
    }

    public final int p() {
        return this.d.size();
    }

    public final int q() {
        return this.e.size();
    }

    public final int r() {
        return this.f.size();
    }

    public final int s() {
        return this.g.size();
    }

    public final int t() {
        return this.h.size();
    }

    public final int u() {
        return this.i.size();
    }

    public final boolean v() {
        return !this.p.isEmpty();
    }
}
