.class public final Lcom/dualboot/e/a/p;
.super Lcom/dualboot/e/a/u;


# instance fields
.field final synthetic a:Lcom/dualboot/e/a/m;


# direct methods
.method constructor <init>(Lcom/dualboot/e/a/m;Landroid/preference/Preference;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/a/p;->a:Lcom/dualboot/e/a/m;

    invoke-direct {p0, p2}, Lcom/dualboot/e/a/u;-><init>(Landroid/preference/Preference;)V

    return-void
.end method


# virtual methods
.method public final a()I
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/a/p;->a:Lcom/dualboot/e/a/m;

    invoke-virtual {v0}, Lcom/dualboot/e/a/m;->getEntries()[Ljava/lang/CharSequence;

    move-result-object v0

    array-length v0, v0

    return v0
.end method

.method public final a(I)Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/dualboot/e/a/p;->a:Lcom/dualboot/e/a/m;

    invoke-virtual {v0}, Lcom/dualboot/e/a/m;->getEntries()[Ljava/lang/CharSequence;

    move-result-object v0

    array-length v1, v0

    if-ge p1, v1, :cond_0

    aget-object v0, v0, p1

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_0
    return-object v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method
