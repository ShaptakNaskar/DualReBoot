.class final Lcom/dualboot/e/g;
.super Lcom/dualboot/a/m;


# instance fields
.field final synthetic d:Lcom/dualboot/e/e;

.field private final synthetic e:Landroid/os/Handler;


# direct methods
.method constructor <init>(Lcom/dualboot/e/e;Landroid/os/Handler;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/g;->d:Lcom/dualboot/e/e;

    iput-object p2, p0, Lcom/dualboot/e/g;->e:Landroid/os/Handler;

    invoke-direct {p0}, Lcom/dualboot/a/m;-><init>()V

    return-void
.end method


# virtual methods
.method public final c()V
    .locals 4

    const/4 v1, 0x1

    const/4 v0, 0x0

    invoke-virtual {p0}, Lcom/dualboot/e/g;->b()Ljava/util/Collection;

    move-result-object v2

    invoke-virtual {p0}, Lcom/dualboot/e/g;->a()Ljava/lang/Boolean;

    move-result-object v3

    if-eqz v2, :cond_0

    invoke-interface {v2}, Ljava/util/Collection;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_0

    move v2, v0

    :goto_0
    if-eqz v3, :cond_1

    invoke-virtual {v3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3

    if-eqz v3, :cond_1

    :goto_1
    iget-object v1, p0, Lcom/dualboot/e/g;->e:Landroid/os/Handler;

    new-instance v3, Lcom/dualboot/e/h;

    invoke-direct {v3, p0, v2, v0}, Lcom/dualboot/e/h;-><init>(Lcom/dualboot/e/g;ZZ)V

    invoke-virtual {v1, v3}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void

    :cond_0
    move v2, v1

    goto :goto_0

    :cond_1
    move v0, v1

    goto :goto_1
.end method
