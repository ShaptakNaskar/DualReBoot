package com.dualboot.e.a;

import android.R;
import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import java.util.Collection;

/* JADX INFO: loaded from: classes.dex */
final class o extends ArrayAdapter {
    final u a;
    final /* synthetic */ m b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public o(m mVar, Context context, CharSequence[] charSequenceArr, u uVar, boolean z) {
        super(context, z ? R.layout.simple_list_item_single_choice : R.layout.select_dialog_singlechoice, charSequenceArr);
        this.b = mVar;
        this.a = uVar;
    }

    @Override // android.widget.BaseAdapter, android.widget.ListAdapter
    public final boolean areAllItemsEnabled() {
        return true;
    }

    @Override // android.widget.ArrayAdapter, android.widget.Adapter
    public final View getView(int i, View view, ViewGroup viewGroup) {
        View view2 = super.getView(i, view, viewGroup);
        if (view2 != null) {
            view2.setEnabled(this.a != null ? this.a.a(i, (Collection) null) : false);
        }
        return view2;
    }
}
