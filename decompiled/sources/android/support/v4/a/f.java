package android.support.v4.a;

/* JADX INFO: loaded from: classes.dex */
public final class f {
    public int a;
    public g b;
    public boolean c;
    public boolean d;
    public boolean e;
    public boolean f;

    public final void a(g gVar) {
        if (this.b == null) {
            throw new IllegalStateException("No listener register");
        }
        if (this.b != gVar) {
            throw new IllegalArgumentException("Attempting to unregister the wrong listener");
        }
        this.b = null;
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder(64);
        android.support.v4.c.a.a(this, sb);
        sb.append(" id=");
        sb.append(this.a);
        sb.append("}");
        return sb.toString();
    }
}
