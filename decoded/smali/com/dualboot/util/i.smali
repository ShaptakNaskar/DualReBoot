.class public Lcom/dualboot/util/i;
.super Ljava/lang/Object;


# instance fields
.field private final a:Lcom/dualboot/util/m;

.field private final b:Ljava/util/concurrent/ExecutorService;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/dualboot/util/m;

    invoke-direct {v0, p1}, Lcom/dualboot/util/m;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/dualboot/util/i;->a:Lcom/dualboot/util/m;

    iget-object v0, p0, Lcom/dualboot/util/i;->a:Lcom/dualboot/util/m;

    invoke-static {v0}, Ljava/util/concurrent/Executors;->newSingleThreadExecutor(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/util/i;->b:Ljava/util/concurrent/ExecutorService;

    return-void
.end method


# virtual methods
.method public final a(Ljava/util/concurrent/locks/Lock;)Lcom/dualboot/util/j;
    .locals 2

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    :goto_0
    new-instance v1, Lcom/dualboot/util/j;

    invoke-direct {v1, p0, p1, v0}, Lcom/dualboot/util/j;-><init>(Lcom/dualboot/util/i;Ljava/util/concurrent/locks/Lock;Z)V

    return-object v1

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method

.method public final a()Z
    .locals 4

    iget-object v0, p0, Lcom/dualboot/util/i;->b:Ljava/util/concurrent/ExecutorService;

    invoke-interface {v0}, Ljava/util/concurrent/ExecutorService;->shutdown()V

    :try_start_0
    iget-object v0, p0, Lcom/dualboot/util/i;->b:Ljava/util/concurrent/ExecutorService;

    const-wide/16 v1, 0xf

    sget-object v3, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-interface {v0, v1, v2, v3}, Ljava/util/concurrent/ExecutorService;->awaitTermination(JLjava/util/concurrent/TimeUnit;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-result v0

    :goto_0
    return v0

    :catch_0
    move-exception v0

    const/4 v0, 0x0

    goto :goto_0
.end method

.method protected final a(Ljava/lang/Runnable;)Z
    .locals 2

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    iget-object v1, p0, Lcom/dualboot/util/i;->a:Lcom/dualboot/util/m;

    invoke-virtual {v1, v0}, Lcom/dualboot/util/m;->a(Ljava/lang/Thread;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_0
    invoke-virtual {p0, p1}, Lcom/dualboot/util/i;->b(Ljava/lang/Runnable;)Z

    move-result v0

    goto :goto_0
.end method

.method public final b(Ljava/lang/Runnable;)Z
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/dualboot/util/i;->b:Ljava/util/concurrent/ExecutorService;

    invoke-interface {v0, p1}, Ljava/util/concurrent/ExecutorService;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v0, 0x1

    :goto_0
    return v0

    :catch_0
    move-exception v0

    const/4 v0, 0x0

    goto :goto_0
.end method
