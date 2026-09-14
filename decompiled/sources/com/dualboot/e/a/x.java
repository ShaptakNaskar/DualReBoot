package com.dualboot.e.a;

import android.R;
import android.app.Dialog;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.preference.DialogPreference;
import android.view.View;
import android.view.ViewGroup;

/* JADX INFO: loaded from: classes.dex */
public final class x extends DialogPreference {
    public x(Context context) {
        this(context, (byte) 0);
    }

    private x(Context context, byte b) {
        this(context, (char) 0);
    }

    private x(Context context, char c) {
        super(context, null, R.attr.preferenceScreenStyle);
        setWidgetLayoutResource(com.dualboot.e.pref_social);
        setTitle(com.dualboot.f.SocialTitle);
        setSummary(com.dualboot.f.SocialSummary);
        setDialogTitle(com.dualboot.f.SocialTitle);
        setDialogLayoutResource(com.dualboot.e.pref_social_dialog);
        setNegativeButtonText(R.string.cancel);
    }

    private void a(View view, int i) {
        View viewFindViewById;
        if (view == null || (viewFindViewById = view.findViewById(i)) == null) {
            return;
        }
        viewFindViewById.setOnClickListener(new y(this));
    }

    private void b(View view, int i) {
        View viewFindViewById;
        if (view == null || (viewFindViewById = view.findViewById(i)) == null) {
            return;
        }
        viewFindViewById.setOnClickListener(new z(this));
    }

    private void c(View view, int i) {
        View viewFindViewById;
        if (view == null || (viewFindViewById = view.findViewById(i)) == null) {
            return;
        }
        viewFindViewById.setOnClickListener(new aa(this));
    }

    private void d(View view, int i) {
        View viewFindViewById;
        if (view == null || (viewFindViewById = view.findViewById(i)) == null) {
            return;
        }
        viewFindViewById.setOnClickListener(new ab(this));
    }

    protected final void a() {
        Dialog dialog = getDialog();
        if (dialog != null) {
            dialog.dismiss();
        }
        Context context = getContext();
        if (context != null) {
            Intent intent = new Intent();
            intent.setAction("android.intent.action.VIEW");
            intent.setData(Uri.parse("https://plus.google.com/102237864799396768622"));
            context.startActivity(intent);
        }
    }

    protected final void b() {
        Dialog dialog = getDialog();
        if (dialog != null) {
            dialog.dismiss();
        }
        Context context = getContext();
        if (context != null) {
            Intent intent = new Intent();
            intent.setAction("android.intent.action.VIEW");
            intent.setData(Uri.parse("fb://profile/105773202838736"));
            Intent intentA = com.dualboot.e.aa.a(context, intent, false);
            if (intentA == null) {
                intentA = new Intent();
                intentA.setAction("android.intent.action.VIEW");
                intentA.setData(Uri.parse("https://facebook.com/dualbootgames"));
            }
            context.startActivity(intentA);
        }
    }

    protected final void c() {
        Dialog dialog = getDialog();
        if (dialog != null) {
            dialog.dismiss();
        }
        Context context = getContext();
        if (context != null) {
            Intent intent = new Intent();
            intent.setAction("android.intent.action.VIEW");
            intent.setData(Uri.parse("twitter://user?screen_name=dualbootgames"));
            Intent intentA = com.dualboot.e.aa.a(context, intent, false);
            if (intentA == null) {
                intentA = new Intent();
                intentA.setAction("android.intent.action.VIEW");
                intentA.setData(Uri.parse("https://twitter.com/intent/user?screen_name=dualbootgames"));
            }
            context.startActivity(intentA);
        }
    }

    protected final void d() {
        Dialog dialog = getDialog();
        if (dialog != null) {
            dialog.dismiss();
        }
        Context context = getContext();
        if (context != null) {
            Intent intent = new Intent();
            intent.setAction("android.intent.action.VIEW");
            intent.setData(Uri.parse("http://www.youtube.com/user/DualBootGames"));
            context.startActivity(intent);
        }
    }

    @Override // android.preference.DialogPreference
    protected final View onCreateDialogView() {
        View viewOnCreateDialogView = super.onCreateDialogView();
        a(viewOnCreateDialogView, com.dualboot.d.tv_social_gplus);
        b(viewOnCreateDialogView, com.dualboot.d.tv_social_facebook);
        c(viewOnCreateDialogView, com.dualboot.d.tv_social_twitter);
        d(viewOnCreateDialogView, com.dualboot.d.tv_social_ytube);
        return viewOnCreateDialogView;
    }

    @Override // android.preference.Preference
    protected final View onCreateView(ViewGroup viewGroup) {
        View viewOnCreateView = super.onCreateView(viewGroup);
        a(viewOnCreateView, com.dualboot.d.iv_social_gplus);
        b(viewOnCreateView, com.dualboot.d.iv_social_facebook);
        c(viewOnCreateView, com.dualboot.d.iv_social_twitter);
        d(viewOnCreateView, com.dualboot.d.iv_social_ytube);
        return viewOnCreateView;
    }
}
