package com.dualboot.widget;

import java.util.ArrayList;
import java.util.Collection;

/* JADX INFO: loaded from: classes.dex */
public final class b extends TextViewLink {
    protected Collection g;

    @Override // com.dualboot.widget.TextViewLink
    protected final boolean a() {
        return super.a() && !this.g.isEmpty();
    }

    public final ArrayList d() {
        return new ArrayList(this.g);
    }
}
