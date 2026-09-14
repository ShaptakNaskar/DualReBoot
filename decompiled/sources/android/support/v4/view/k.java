package android.support.v4.view;

import android.view.VelocityTracker;

/* JADX INFO: loaded from: classes.dex */
final class k implements m {
    k() {
    }

    @Override // android.support.v4.view.m
    public final float a(VelocityTracker velocityTracker, int i) {
        return velocityTracker.getXVelocity();
    }
}
