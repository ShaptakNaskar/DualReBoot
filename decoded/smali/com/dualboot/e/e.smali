.class public abstract Lcom/dualboot/e/e;
.super Landroid/app/Activity;


# instance fields
.field protected a:Lcom/dualboot/e/i;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    new-instance v0, Lcom/dualboot/e/i;

    invoke-direct {v0}, Lcom/dualboot/e/i;-><init>()V

    iput-object v0, p0, Lcom/dualboot/e/e;->a:Lcom/dualboot/e/i;

    return-void
.end method

.method static synthetic a(Lcom/dualboot/e/e;)V
    .locals 0

    invoke-direct {p0}, Lcom/dualboot/e/e;->b()V

    return-void
.end method

.method static synthetic a(Lcom/dualboot/e/e;ZZ)V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/e/e;->a:Lcom/dualboot/e/i;

    iput-boolean p1, v0, Lcom/dualboot/e/i;->b:Z

    iget-object v0, p0, Lcom/dualboot/e/e;->a:Lcom/dualboot/e/i;

    iput-boolean p2, v0, Lcom/dualboot/e/i;->c:Z

    iget-object v0, p0, Lcom/dualboot/e/e;->a:Lcom/dualboot/e/i;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/dualboot/e/i;->d:Z

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Got billing result, started   = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/dualboot/e/e;->a:Lcom/dualboot/e/i;

    iget-boolean v1, v1, Lcom/dualboot/e/i;->b:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Got billing result, refreshed = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/dualboot/e/e;->a:Lcom/dualboot/e/i;

    iget-boolean v1, v1, Lcom/dualboot/e/i;->c:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    invoke-direct {p0}, Lcom/dualboot/e/e;->b()V

    return-void
.end method

.method private b()V
    .locals 1

    invoke-virtual {p0}, Lcom/dualboot/e/e;->isFinishing()Z

    move-result v0

    if-eqz v0, :cond_1

    :cond_0
    :goto_0
    return-void

    :cond_1
    iget-object v0, p0, Lcom/dualboot/e/e;->a:Lcom/dualboot/e/i;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/e/e;->a:Lcom/dualboot/e/i;

    iget-boolean v0, v0, Lcom/dualboot/e/i;->d:Z

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/e/e;->a:Lcom/dualboot/e/i;

    iget-boolean v0, v0, Lcom/dualboot/e/i;->a:Z

    if-eqz v0, :cond_2

    const/4 v0, 0x1

    :goto_1
    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/dualboot/e/e;->finish()V

    goto :goto_0

    :cond_2
    const/4 v0, 0x0

    goto :goto_1
.end method


# virtual methods
.method protected abstract a()Lcom/dualboot/e/j;
.end method

.method public onBackPressed()V
    .locals 0

    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 4

    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/dualboot/e/e;->requestWindowFeature(I)Z

    sget v0, Lcom/dualboot/e;->simple_progress:I

    invoke-virtual {p0, v0}, Lcom/dualboot/e/e;->setContentView(I)V

    new-instance v0, Lcom/dualboot/e/i;

    invoke-direct {v0}, Lcom/dualboot/e/i;-><init>()V

    iput-object v0, p0, Lcom/dualboot/e/e;->a:Lcom/dualboot/e/i;

    if-nez p1, :cond_0

    invoke-virtual {p0}, Lcom/dualboot/e/e;->a()Lcom/dualboot/e/j;

    move-result-object v0

    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v1

    invoke-virtual {v1, p0, v0}, Lcom/dualboot/a/a;->a(Landroid/content/Context;Lcom/dualboot/e/j;)Z

    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    new-instance v1, Lcom/dualboot/e/f;

    invoke-direct {v1, p0}, Lcom/dualboot/e/f;-><init>(Lcom/dualboot/e/e;)V

    const-wide/16 v2, 0x3e8

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    new-instance v1, Lcom/dualboot/e/g;

    invoke-direct {v1, p0, v0}, Lcom/dualboot/e/g;-><init>(Lcom/dualboot/e/e;Landroid/os/Handler;)V

    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/dualboot/a/a;->a(Lcom/dualboot/a/m;)Z

    :goto_0
    return-void

    :cond_0
    iget-object v0, p0, Lcom/dualboot/e/e;->a:Lcom/dualboot/e/i;

    invoke-virtual {v0, p1}, Lcom/dualboot/e/i;->b(Landroid/os/Bundle;)Z

    goto :goto_0
.end method

.method protected onDestroy()V
    .locals 1

    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    invoke-virtual {p0}, Lcom/dualboot/e/e;->isFinishing()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/dualboot/a/a;->c()Z

    :cond_0
    return-void
.end method

.method public onTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method
