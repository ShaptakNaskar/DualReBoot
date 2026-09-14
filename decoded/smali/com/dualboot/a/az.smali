.class public Lcom/dualboot/a/az;
.super Ljava/lang/Object;


# instance fields
.field private final a:Ljava/util/concurrent/CountDownLatch;

.field private b:Z

.field private c:Z


# direct methods
.method protected constructor <init>()V
    .locals 3

    const/4 v2, 0x0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/CountDownLatch;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/CountDownLatch;-><init>(I)V

    iput-object v0, p0, Lcom/dualboot/a/az;->a:Ljava/util/concurrent/CountDownLatch;

    iput-boolean v2, p0, Lcom/dualboot/a/az;->b:Z

    iput-boolean v2, p0, Lcom/dualboot/a/az;->c:Z

    return-void
.end method


# virtual methods
.method public final a(Z)V
    .locals 1

    iput-boolean p1, p0, Lcom/dualboot/a/az;->c:Z

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/dualboot/a/az;->b:Z

    iget-object v0, p0, Lcom/dualboot/a/az;->a:Ljava/util/concurrent/CountDownLatch;

    invoke-virtual {v0}, Ljava/util/concurrent/CountDownLatch;->getCount()J

    iget-object v0, p0, Lcom/dualboot/a/az;->a:Ljava/util/concurrent/CountDownLatch;

    invoke-virtual {v0}, Ljava/util/concurrent/CountDownLatch;->countDown()V

    return-void
.end method

.method public final c()V
    .locals 1

    :goto_0
    :try_start_0
    iget-boolean v0, p0, Lcom/dualboot/a/az;->b:Z

    if-eqz v0, :cond_0

    :goto_1
    return-void

    :cond_0
    iget-object v0, p0, Lcom/dualboot/a/az;->a:Ljava/util/concurrent/CountDownLatch;

    invoke-virtual {v0}, Ljava/util/concurrent/CountDownLatch;->await()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    goto :goto_1
.end method

.method public final d()Z
    .locals 1

    iget-boolean v0, p0, Lcom/dualboot/a/az;->b:Z

    iget-boolean v0, p0, Lcom/dualboot/a/az;->c:Z

    return v0
.end method
