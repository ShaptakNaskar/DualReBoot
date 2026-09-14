package com.dualboot.e.a;

import android.app.AlertDialog;
import android.content.Context;
import android.os.Build;
import android.os.Bundle;
import android.preference.ListPreference;
import android.view.View;
import java.util.HashSet;

/* JADX INFO: loaded from: classes.dex */
public final class m extends ListPreference implements r {
    private int a;
    private final u b;

    public m(Context context) {
        super(context);
        this.a = -1;
        this.b = new p(this, this);
    }

    @Override // com.dualboot.e.a.r
    public final u a() {
        return this.b;
    }

    @Override // com.dualboot.e.a.r
    public final void b() {
        notifyChanged();
    }

    @Override // android.preference.Preference
    protected final void onBindView(View view) {
        super.onBindView(view);
        this.b.a(view);
    }

    @Override // android.preference.ListPreference, android.preference.DialogPreference
    protected final void onDialogClosed(boolean z) {
        CharSequence[] entryValues = getEntryValues();
        if (!z || entryValues == null || this.a < 0 || this.a >= entryValues.length) {
            return;
        }
        String string = entryValues[this.a].toString();
        if (callChangeListener(string)) {
            setValue(string);
        }
    }

    @Override // android.preference.ListPreference, android.preference.DialogPreference
    protected final void onPrepareDialogBuilder(AlertDialog.Builder builder) {
        super.onPrepareDialogBuilder(builder);
        this.a = findIndexOfValue(getValue());
        builder.setSingleChoiceItems(new o(this, getContext(), getEntryValues(), this.b, Build.VERSION.SDK_INT >= 11), this.a, new n(this));
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$PrimitiveArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:596)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    @Override // android.preference.DialogPreference
    protected final void showDialog(Bundle bundle) {
        u uVar = this.b;
        int iA = uVar.a();
        HashSet hashSet = new HashSet();
        w wVar = new w(uVar, iA);
        for (int i = 0; i < iA; i++) {
            hashSet.clear();
            boolean zA = uVar.a(i, hashSet);
            wVar.b[i] = zA;
            if (!zA) {
                wVar.a.addAll(hashSet);
            }
        }
        super.showDialog(bundle);
    }
}
