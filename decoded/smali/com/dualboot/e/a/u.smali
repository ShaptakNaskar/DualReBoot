.class public abstract Lcom/dualboot/e/a/u;
.super Ljava/lang/Object;


# instance fields
.field private final a:Landroid/preference/Preference;

.field public final b:Ljava/util/ArrayList;

.field public c:Lcom/dualboot/e/a/r;

.field public d:Lcom/dualboot/e/a/v;


# direct methods
.method constructor <init>(Landroid/preference/Preference;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/e/a/u;->b:Ljava/util/ArrayList;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/e/a/u;->c:Lcom/dualboot/e/a/r;

    sget-object v0, Lcom/dualboot/e/a/v;->a:Lcom/dualboot/e/a/v;

    iput-object v0, p0, Lcom/dualboot/e/a/u;->d:Lcom/dualboot/e/a/v;

    iput-object p1, p0, Lcom/dualboot/e/a/u;->a:Landroid/preference/Preference;

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/util/Collection;)Z
    .locals 3

    const/4 v1, 0x0

    if-eqz p2, :cond_0

    invoke-interface {p2}, Ljava/util/Collection;->clear()V

    :cond_0
    iget-object v0, p0, Lcom/dualboot/e/a/u;->a:Landroid/preference/Preference;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/e/a/u;->a:Landroid/preference/Preference;

    invoke-virtual {v0}, Landroid/preference/Preference;->getKey()Ljava/lang/String;

    move-result-object v0

    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    move v0, v1

    :goto_1
    return v0

    :cond_1
    const/4 v0, 0x0

    goto :goto_0

    :cond_2
    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v2

    if-eqz v2, :cond_3

    invoke-virtual {v2, v0, p1, p2}, Lcom/dualboot/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/util/Collection;)Z

    move-result v0

    goto :goto_1

    :cond_3
    move v0, v1

    goto :goto_1
.end method


# virtual methods
.method public abstract a()I
.end method

.method public abstract a(I)Ljava/lang/String;
.end method

.method public final a(Landroid/view/View;)V
    .locals 5

    const/4 v1, 0x1

    const/4 v2, 0x0

    invoke-virtual {p0}, Lcom/dualboot/e/a/u;->b()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/e/a/u;->a:Landroid/preference/Preference;

    invoke-virtual {v0}, Landroid/preference/Preference;->isEnabled()Z

    move-result v0

    if-eqz v0, :cond_1

    move v0, v1

    :goto_0
    iget-object v3, p0, Lcom/dualboot/e/a/u;->d:Lcom/dualboot/e/a/v;

    sget-object v4, Lcom/dualboot/e/a/v;->b:Lcom/dualboot/e/a/v;

    if-ne v3, v4, :cond_4

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/dualboot/e/a/u;->c:Lcom/dualboot/e/a/r;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/e/a/u;->c:Lcom/dualboot/e/a/r;

    invoke-interface {v0}, Lcom/dualboot/e/a/r;->a()Lcom/dualboot/e/a/u;

    move-result-object v0

    invoke-virtual {v0}, Lcom/dualboot/e/a/u;->b()Z

    move-result v0

    :goto_1
    if-eqz v0, :cond_3

    :cond_0
    :goto_2
    invoke-static {p1, v1}, Lcom/dualboot/util/z;->a(Landroid/view/View;Z)V

    return-void

    :cond_1
    move v0, v2

    goto :goto_0

    :cond_2
    move v0, v1

    goto :goto_1

    :cond_3
    move v1, v2

    goto :goto_2

    :cond_4
    iget-object v3, p0, Lcom/dualboot/e/a/u;->d:Lcom/dualboot/e/a/v;

    sget-object v4, Lcom/dualboot/e/a/v;->c:Lcom/dualboot/e/a/v;

    if-ne v3, v4, :cond_8

    if-eqz v0, :cond_5

    move v3, v2

    :goto_3
    iget-object v0, p0, Lcom/dualboot/e/a/u;->b:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lt v3, v0, :cond_6

    move v0, v1

    :goto_4
    if-nez v0, :cond_0

    :cond_5
    move v1, v2

    goto :goto_2

    :cond_6
    iget-object v0, p0, Lcom/dualboot/e/a/u;->b:Ljava/util/ArrayList;

    invoke-virtual {v0, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/e/a/r;

    invoke-interface {v0}, Lcom/dualboot/e/a/r;->a()Lcom/dualboot/e/a/u;

    move-result-object v0

    invoke-virtual {v0}, Lcom/dualboot/e/a/u;->b()Z

    move-result v0

    if-nez v0, :cond_7

    move v0, v2

    goto :goto_4

    :cond_7
    add-int/lit8 v0, v3, 0x1

    move v3, v0

    goto :goto_3

    :cond_8
    move v1, v0

    goto :goto_2
.end method

.method final a(ILjava/util/Collection;)Z
    .locals 1

    invoke-virtual {p0, p1}, Lcom/dualboot/e/a/u;->a(I)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0, p2}, Lcom/dualboot/e/a/u;->a(Ljava/lang/String;Ljava/util/Collection;)Z

    move-result v0

    return v0
.end method

.method public final b()Z
    .locals 7

    const/4 v6, 0x0

    const/4 v0, 0x1

    const/4 v1, 0x0

    invoke-virtual {p0}, Lcom/dualboot/e/a/u;->a()I

    move-result v4

    if-nez v4, :cond_1

    const-string v0, ""

    invoke-direct {p0, v0, v6}, Lcom/dualboot/e/a/u;->a(Ljava/lang/String;Ljava/util/Collection;)Z

    move-result v0

    :cond_0
    :goto_0
    return v0

    :cond_1
    move v3, v1

    move v2, v1

    :goto_1
    if-lt v3, v4, :cond_2

    move v0, v1

    goto :goto_0

    :cond_2
    invoke-virtual {p0, v3, v6}, Lcom/dualboot/e/a/u;->a(ILjava/util/Collection;)Z

    move-result v5

    if-eqz v5, :cond_3

    add-int/lit8 v2, v2, 0x1

    :cond_3
    if-gt v2, v0, :cond_0

    add-int/lit8 v3, v3, 0x1

    goto :goto_1
.end method
