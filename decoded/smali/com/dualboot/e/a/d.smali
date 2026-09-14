.class final Lcom/dualboot/e/a/d;
.super Lcom/dualboot/a/m;


# instance fields
.field final synthetic d:Lcom/dualboot/e/a/c;

.field private final synthetic e:Landroid/os/Handler;

.field private final synthetic f:Ljava/util/List;


# direct methods
.method constructor <init>(Lcom/dualboot/e/a/c;Landroid/os/Handler;Ljava/util/List;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/a/d;->d:Lcom/dualboot/e/a/c;

    iput-object p2, p0, Lcom/dualboot/e/a/d;->e:Landroid/os/Handler;

    iput-object p3, p0, Lcom/dualboot/e/a/d;->f:Ljava/util/List;

    invoke-direct {p0}, Lcom/dualboot/a/m;-><init>()V

    return-void
.end method


# virtual methods
.method public final c()V
    .locals 7

    const/4 v1, 0x1

    const/4 v0, 0x0

    sget-object v5, Lcom/dualboot/e/a/c;->a:Ljava/lang/Boolean;

    monitor-enter v5

    const/4 v2, 0x0

    :try_start_0
    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    sput-object v2, Lcom/dualboot/e/a/c;->a:Ljava/lang/Boolean;

    invoke-virtual {p0}, Lcom/dualboot/e/a/d;->b()Ljava/util/Collection;

    move-result-object v2

    invoke-virtual {p0}, Lcom/dualboot/e/a/d;->a()Ljava/lang/Boolean;

    move-result-object v3

    if-eqz v2, :cond_0

    invoke-interface {v2}, Ljava/util/Collection;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_0

    move v4, v0

    :goto_0
    if-eqz v3, :cond_1

    invoke-virtual {v3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_1

    move v3, v0

    :goto_1
    new-instance v6, Ljava/lang/StringBuilder;

    const-string v2, "Received results. Start = "

    invoke-direct {v6, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    if-eqz v4, :cond_2

    move v2, v0

    :goto_2
    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    move-result-object v2

    const-string v6, "; Success = "

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    if-eqz v3, :cond_3

    :goto_3
    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    invoke-static {}, Lcom/dualboot/e/a/c;->e()V

    iget-object v0, p0, Lcom/dualboot/e/a/d;->e:Landroid/os/Handler;

    new-instance v1, Lcom/dualboot/e/a/e;

    iget-object v2, p0, Lcom/dualboot/e/a/d;->f:Ljava/util/List;

    invoke-direct {v1, p0, v4, v3, v2}, Lcom/dualboot/e/a/e;-><init>(Lcom/dualboot/e/a/d;ZZLjava/util/List;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    monitor-exit v5
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :cond_0
    move v4, v1

    goto :goto_0

    :cond_1
    move v3, v1

    goto :goto_1

    :cond_2
    move v2, v1

    goto :goto_2

    :cond_3
    move v0, v1

    goto :goto_3

    :catchall_0
    move-exception v0

    monitor-exit v5

    throw v0
.end method
