.class final Lcom/dualboot/a/bh;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/a/bc;

.field private final synthetic b:Ljava/lang/String;

.field private final synthetic c:Lcom/dualboot/a/bp;


# direct methods
.method constructor <init>(Lcom/dualboot/a/bc;Ljava/lang/String;Lcom/dualboot/a/bp;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/bh;->a:Lcom/dualboot/a/bc;

    iput-object p2, p0, Lcom/dualboot/a/bh;->b:Ljava/lang/String;

    iput-object p3, p0, Lcom/dualboot/a/bh;->c:Lcom/dualboot/a/bp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    const/4 v0, 0x0

    iget-object v1, p0, Lcom/dualboot/a/bh;->a:Lcom/dualboot/a/bc;

    iget-object v3, p0, Lcom/dualboot/a/bh;->b:Ljava/lang/String;

    iget-object v4, v1, Lcom/dualboot/a/bc;->a:Lcom/dualboot/a/ay;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "IsOfferOwned() - Checking status of "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    iget-object v1, v4, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_6

    iget-object v1, v4, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v5

    move v1, v0

    move v2, v0

    :cond_0
    :goto_0
    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, v4, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v0

    iget-object v3, v4, Lcom/dualboot/a/ay;->a:Ljava/util/Map;

    invoke-interface {v3}, Ljava/util/Map;->size()I

    move-result v3

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "  Num active systems   = "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "  Num failed systems   = "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "  Num report owned     = "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "  Num report not owned = "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    if-lez v2, :cond_4

    sget-object v0, Lcom/dualboot/a/ag;->c:Lcom/dualboot/a/ag;

    :goto_1
    iget-object v1, p0, Lcom/dualboot/a/bh;->c:Lcom/dualboot/a/bp;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/dualboot/a/bh;->c:Lcom/dualboot/a/bp;

    invoke-interface {v1, v0}, Lcom/dualboot/a/bp;->b(Ljava/lang/Object;)V

    :cond_1
    return-void

    :cond_2
    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/ax;

    iget-object v6, v4, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-static {v0, v6}, Lcom/dualboot/a/ay;->a(Lcom/dualboot/a/ax;Ljava/util/Map;)Lcom/dualboot/a/ab;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0, v3}, Lcom/dualboot/a/ab;->a(Ljava/lang/String;)Lcom/dualboot/a/ag;

    move-result-object v0

    sget-object v6, Lcom/dualboot/a/ag;->c:Lcom/dualboot/a/ag;

    if-ne v0, v6, :cond_3

    add-int/lit8 v0, v2, 0x1

    move v2, v0

    goto :goto_0

    :cond_3
    sget-object v6, Lcom/dualboot/a/ag;->b:Lcom/dualboot/a/ag;

    if-ne v0, v6, :cond_0

    add-int/lit8 v0, v1, 0x1

    move v1, v0

    goto :goto_0

    :cond_4
    if-lez v1, :cond_6

    if-ne v1, v0, :cond_6

    if-nez v3, :cond_5

    sget-object v0, Lcom/dualboot/a/ag;->b:Lcom/dualboot/a/ag;

    goto :goto_1

    :cond_5
    sget-object v0, Lcom/dualboot/a/ag;->a:Lcom/dualboot/a/ag;

    goto :goto_1

    :cond_6
    sget-object v0, Lcom/dualboot/a/ag;->a:Lcom/dualboot/a/ag;

    goto :goto_1
.end method
