package com.dualboot.engine;

/* JADX INFO: loaded from: classes.dex */
public abstract class e extends f {
    final /* synthetic */ c a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(c cVar) {
        super(cVar);
        this.a = cVar;
    }

    final Object a() {
        return b(h());
    }

    public final void a(String str, String str2, String str3, String str4, Object[] objArr) {
        super.b();
        this.b = str;
        this.c = str2;
        this.d = str3;
        this.e = str4;
        for (Object obj : objArr) {
            this.f.add(obj.toString());
        }
        b(0);
    }

    public final void a(String str, String str2, String str3, Object[] objArr) {
        a(str, str2, str3, "", objArr);
    }
}
