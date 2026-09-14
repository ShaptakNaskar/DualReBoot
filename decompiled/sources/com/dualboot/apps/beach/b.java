package com.dualboot.apps.beach;

import android.content.SharedPreferences;
import android.text.TextUtils;
import com.dualboot.e.j;
import com.dualboot.e.l;
import com.dualboot.util.s;
import com.dualboot.util.t;
import com.dualboot.util.u;

/* JADX INFO: loaded from: classes.dex */
public class b extends l {
    @Override // com.dualboot.e.l
    protected final j a() {
        return new a();
    }

    @Override // com.dualboot.e.l
    protected final void a(SharedPreferences sharedPreferences) {
        SharedPreferences.Editor editorEdit;
        s sVar = new s(sharedPreferences);
        sVar.a("texturegroup_sign_type", "Private Beach", "texturegroup_sign_type", "Custom Sign");
        sVar.a("modelswap_plane_speed", "None", t.STRING, "modeltoggle_plane", "false", t.BOOLEAN);
        sVar.a("modelswap_plane_speed", "Normal", "modelswap_plane_speed", "Fast");
        sVar.a("modeltoggle_ship", "true", t.BOOLEAN, "modelswap_ship", "Cargo Ship", t.STRING);
        if (sVar.c != null) {
            for (u uVar : sVar.a) {
                if (sVar.c != null && uVar != null) {
                    String strA = sVar.a(uVar.a);
                    if (!TextUtils.isEmpty(strA)) {
                        if (!uVar.e) {
                            sVar.a(uVar.b, strA);
                        } else if (strA.equals(uVar.a.b)) {
                            sVar.a(uVar.b, uVar.b.b);
                        }
                    }
                }
            }
            if (sVar.b.isEmpty() || (editorEdit = sVar.c.edit()) == null) {
                return;
            }
            for (String str : sVar.b) {
                String str2 = "Removing old preference: " + str;
                editorEdit.remove(str);
            }
            editorEdit.commit();
        }
    }

    @Override // com.dualboot.e.l
    protected final boolean b() {
        return true;
    }
}
