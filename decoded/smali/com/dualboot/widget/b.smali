.class public final Lcom/dualboot/widget/b;
.super Lcom/dualboot/widget/TextViewLink;


# instance fields
.field protected g:Ljava/util/Collection;


# virtual methods
.method protected final a()Z
    .locals 1

    invoke-super {p0}, Lcom/dualboot/widget/TextViewLink;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/widget/b;->g:Ljava/util/Collection;

    invoke-interface {v0}, Ljava/util/Collection;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method

.method public final d()Ljava/util/ArrayList;
    .locals 2

    new-instance v0, Ljava/util/ArrayList;

    iget-object v1, p0, Lcom/dualboot/widget/b;->g:Ljava/util/Collection;

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    return-object v0
.end method
