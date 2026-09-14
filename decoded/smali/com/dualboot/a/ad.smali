.class public Lcom/dualboot/a/ad;
.super Ljava/lang/Object;


# instance fields
.field a:Lcom/dualboot/a/ac;

.field final b:Lcom/dualboot/a/ab;

.field private c:Landroid/os/Handler;


# direct methods
.method protected constructor <init>(Lcom/dualboot/a/ab;Lcom/dualboot/a/ac;)V
    .locals 2

    const/4 v1, 0x0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/dualboot/a/ad;->a:Lcom/dualboot/a/ac;

    iput-object v1, p0, Lcom/dualboot/a/ad;->c:Landroid/os/Handler;

    iput-object p1, p0, Lcom/dualboot/a/ad;->b:Lcom/dualboot/a/ab;

    iput-object p2, p0, Lcom/dualboot/a/ad;->a:Lcom/dualboot/a/ac;

    iget-object v0, p0, Lcom/dualboot/a/ad;->a:Lcom/dualboot/a/ac;

    if-eqz v0, :cond_0

    :try_start_0
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    iput-object v0, p0, Lcom/dualboot/a/ad;->c:Landroid/os/Handler;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    :goto_0
    return-void

    :catch_0
    move-exception v0

    iput-object v1, p0, Lcom/dualboot/a/ad;->c:Landroid/os/Handler;

    goto :goto_0
.end method


# virtual methods
.method protected final a(Ljava/lang/Runnable;)V
    .locals 1

    iget-object v0, p0, Lcom/dualboot/a/ad;->a:Lcom/dualboot/a/ac;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/ad;->b:Lcom/dualboot/a/ab;

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/ad;->c:Landroid/os/Handler;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/a/ad;->c:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    :goto_0
    return-void

    :cond_1
    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    goto :goto_0
.end method
