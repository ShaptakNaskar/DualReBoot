package com.dualboot.a;

import android.content.Context;
import android.text.TextUtils;
import java.util.Collection;

/* JADX INFO: loaded from: classes.dex */
public final class bl extends bm {
    public bl(Context context, com.dualboot.e.j jVar) {
        super(context, jVar);
    }

    @Override // com.dualboot.a.bm, com.dualboot.a.ae
    public final Collection a() {
        Collection collectionA = super.a();
        if (this.a != null && !TextUtils.isEmpty(this.b)) {
            collectionA.add(new y(this.a, this.b));
            collectionA.add(new v(this.a, this.b));
        }
        return collectionA;
    }
}
