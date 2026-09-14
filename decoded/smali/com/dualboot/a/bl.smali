.class public final Lcom/dualboot/a/bl;
.super Lcom/dualboot/a/bm;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/dualboot/e/j;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/dualboot/a/bm;-><init>(Landroid/content/Context;Lcom/dualboot/e/j;)V

    return-void
.end method


# virtual methods
.method public final a()Ljava/util/Collection;
    .locals 4

    invoke-super {p0}, Lcom/dualboot/a/bm;->a()Ljava/util/Collection;

    move-result-object v0

    iget-object v1, p0, Lcom/dualboot/a/bl;->a:Landroid/content/Context;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/dualboot/a/bl;->b:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    new-instance v1, Lcom/dualboot/a/y;

    iget-object v2, p0, Lcom/dualboot/a/bl;->a:Landroid/content/Context;

    iget-object v3, p0, Lcom/dualboot/a/bl;->b:Ljava/lang/String;

    invoke-direct {v1, v2, v3}, Lcom/dualboot/a/y;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    invoke-interface {v0, v1}, Ljava/util/Collection;->add(Ljava/lang/Object;)Z

    new-instance v1, Lcom/dualboot/a/v;

    iget-object v2, p0, Lcom/dualboot/a/bl;->a:Landroid/content/Context;

    iget-object v3, p0, Lcom/dualboot/a/bl;->b:Ljava/lang/String;

    invoke-direct {v1, v2, v3}, Lcom/dualboot/a/v;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    invoke-interface {v0, v1}, Ljava/util/Collection;->add(Ljava/lang/Object;)Z

    :cond_0
    return-object v0
.end method
