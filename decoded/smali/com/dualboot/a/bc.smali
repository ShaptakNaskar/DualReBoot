.class public final Lcom/dualboot/a/bc;
.super Lcom/dualboot/util/i;


# instance fields
.field final a:Lcom/dualboot/a/ay;


# direct methods
.method public constructor <init>()V
    .locals 1

    const-string v0, "STG.PaymentSystem.Thread"

    invoke-direct {p0, v0}, Lcom/dualboot/util/i;-><init>(Ljava/lang/String;)V

    new-instance v0, Lcom/dualboot/a/ay;

    invoke-direct {v0}, Lcom/dualboot/a/ay;-><init>()V

    iput-object v0, p0, Lcom/dualboot/a/bc;->a:Lcom/dualboot/a/ay;

    return-void
.end method


# virtual methods
.method public final a(Ljava/util/concurrent/locks/Lock;Ljava/lang/String;)Ljava/util/Collection;
    .locals 5

    const/4 v0, 0x0

    if-nez p1, :cond_0

    :goto_0
    return-object v0

    :cond_0
    invoke-interface {p1}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-object v2, p0, Lcom/dualboot/a/bc;->a:Lcom/dualboot/a/ay;

    iget-object v1, v2, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->isEmpty()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-result v1

    if-eqz v1, :cond_1

    :goto_1
    invoke-interface {p1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    goto :goto_0

    :cond_1
    :try_start_1
    new-instance v1, Ljava/util/ArrayList;

    const/4 v0, 0x2

    invoke-direct {v1, v0}, Ljava/util/ArrayList;-><init>(I)V

    iget-object v0, v2, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_2
    :goto_2
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_3

    move-object v0, v1

    goto :goto_1

    :cond_3
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/ax;

    iget-object v4, v2, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-static {v0, v4}, Lcom/dualboot/a/ay;->a(Lcom/dualboot/a/ax;Ljava/util/Map;)Lcom/dualboot/a/ab;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {v0, p2}, Lcom/dualboot/a/ab;->b(Ljava/lang/String;)Lcom/dualboot/a/ah;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    invoke-interface {p1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0
.end method

.method public final a(Lcom/dualboot/a/ae;Lcom/dualboot/a/bp;)V
    .locals 1

    new-instance v0, Lcom/dualboot/a/bd;

    invoke-direct {v0, p0, p1, p2}, Lcom/dualboot/a/bd;-><init>(Lcom/dualboot/a/bc;Lcom/dualboot/a/ae;Lcom/dualboot/a/bp;)V

    invoke-virtual {p0, v0}, Lcom/dualboot/a/bc;->a(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final a(Lcom/dualboot/a/bp;)V
    .locals 1

    new-instance v0, Lcom/dualboot/a/be;

    invoke-direct {v0, p0, p1}, Lcom/dualboot/a/be;-><init>(Lcom/dualboot/a/bc;Lcom/dualboot/a/bp;)V

    invoke-virtual {p0, v0}, Lcom/dualboot/a/bc;->a(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/dualboot/a/bp;)V
    .locals 1

    new-instance v0, Lcom/dualboot/a/bh;

    invoke-direct {v0, p0, p1, p2}, Lcom/dualboot/a/bh;-><init>(Lcom/dualboot/a/bc;Ljava/lang/String;Lcom/dualboot/a/bp;)V

    invoke-virtual {p0, v0}, Lcom/dualboot/a/bc;->a(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/dualboot/a/bp;)V
    .locals 6

    new-instance v0, Lcom/dualboot/a/bi;

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    invoke-direct/range {v0 .. v5}, Lcom/dualboot/a/bi;-><init>(Lcom/dualboot/a/bc;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/dualboot/a/bp;)V

    invoke-virtual {p0, v0}, Lcom/dualboot/a/bc;->a(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    new-instance v0, Lcom/dualboot/a/bf;

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    invoke-direct/range {v0 .. v5}, Lcom/dualboot/a/bf;-><init>(Lcom/dualboot/a/bc;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/dualboot/a/bc;->a(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final a(Ljava/util/concurrent/locks/Lock;IILandroid/content/Intent;)Z
    .locals 5

    const/4 v0, 0x0

    if-nez p1, :cond_0

    :goto_0
    return v0

    :cond_0
    invoke-interface {p1}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-object v2, p0, Lcom/dualboot/a/bc;->a:Lcom/dualboot/a/ay;

    iget-object v1, v2, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->isEmpty()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-result v1

    if-eqz v1, :cond_1

    :goto_1
    invoke-interface {p1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    goto :goto_0

    :cond_1
    :try_start_1
    iget-object v1, v2, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    move v1, v0

    :cond_2
    :goto_2
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_3

    move v0, v1

    goto :goto_1

    :cond_3
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/ax;

    iget-object v4, v2, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-static {v0, v4}, Lcom/dualboot/a/ay;->a(Lcom/dualboot/a/ax;Ljava/util/Map;)Lcom/dualboot/a/ab;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {v0, p2, p3, p4}, Lcom/dualboot/a/ab;->a(IILandroid/content/Intent;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-result v0

    if-eqz v0, :cond_2

    const/4 v1, 0x1

    goto :goto_2

    :catchall_0
    move-exception v0

    invoke-interface {p1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0
.end method

.method public final a(Ljava/util/concurrent/locks/Lock;Lcom/dualboot/a/ax;Ljava/lang/String;Landroid/app/Activity;Lcom/dualboot/a/am;)Z
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    :goto_0
    return v0

    :cond_0
    invoke-interface {p1}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-object v1, p0, Lcom/dualboot/a/bc;->a:Lcom/dualboot/a/ay;

    iget-object v1, v1, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-static {p2, v1}, Lcom/dualboot/a/ay;->a(Lcom/dualboot/a/ax;Ljava/util/Map;)Lcom/dualboot/a/ab;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-result-object v1

    if-nez v1, :cond_1

    :goto_1
    invoke-interface {p1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    goto :goto_0

    :cond_1
    :try_start_1
    invoke-virtual {v1, p3, p4, p5}, Lcom/dualboot/a/ab;->a(Ljava/lang/String;Landroid/app/Activity;Lcom/dualboot/a/am;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-result v0

    goto :goto_1

    :catchall_0
    move-exception v0

    invoke-interface {p1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0
.end method

.method public final b(Lcom/dualboot/a/bp;)V
    .locals 1

    new-instance v0, Lcom/dualboot/a/bg;

    invoke-direct {v0, p0, p1}, Lcom/dualboot/a/bg;-><init>(Lcom/dualboot/a/bc;Lcom/dualboot/a/bp;)V

    invoke-virtual {p0, v0}, Lcom/dualboot/a/bc;->a(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final c(Lcom/dualboot/a/bp;)V
    .locals 1

    new-instance v0, Lcom/dualboot/a/bj;

    invoke-direct {v0, p0, p1}, Lcom/dualboot/a/bj;-><init>(Lcom/dualboot/a/bc;Lcom/dualboot/a/bp;)V

    invoke-virtual {p0, v0}, Lcom/dualboot/a/bc;->a(Ljava/lang/Runnable;)Z

    return-void
.end method
