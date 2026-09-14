.class final Lcom/dualboot/e/w;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/e/v;


# direct methods
.method constructor <init>(Lcom/dualboot/e/v;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/w;->a:Lcom/dualboot/e/v;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 8

    new-instance v0, Lcom/dualboot/e/t;

    iget-object v1, p0, Lcom/dualboot/e/w;->a:Lcom/dualboot/e/v;

    invoke-static {v1}, Lcom/dualboot/e/v;->a(Lcom/dualboot/e/v;)Lcom/dualboot/e/t;

    move-result-object v1

    invoke-static {v1}, Lcom/dualboot/e/t;->g(Lcom/dualboot/e/t;)Lcom/dualboot/e/r;

    move-result-object v1

    iget-object v2, p0, Lcom/dualboot/e/w;->a:Lcom/dualboot/e/v;

    invoke-static {v2}, Lcom/dualboot/e/v;->a(Lcom/dualboot/e/v;)Lcom/dualboot/e/t;

    move-result-object v2

    invoke-static {v2}, Lcom/dualboot/e/t;->a(Lcom/dualboot/e/t;)Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/dualboot/e/w;->a:Lcom/dualboot/e/v;

    invoke-static {v3}, Lcom/dualboot/e/v;->a(Lcom/dualboot/e/v;)Lcom/dualboot/e/t;

    move-result-object v3

    invoke-static {v3}, Lcom/dualboot/e/t;->b(Lcom/dualboot/e/t;)Landroid/content/Intent;

    move-result-object v3

    iget-object v4, p0, Lcom/dualboot/e/w;->a:Lcom/dualboot/e/v;

    invoke-static {v4}, Lcom/dualboot/e/v;->a(Lcom/dualboot/e/v;)Lcom/dualboot/e/t;

    move-result-object v4

    invoke-static {v4}, Lcom/dualboot/e/t;->c(Lcom/dualboot/e/t;)Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/dualboot/e/w;->a:Lcom/dualboot/e/v;

    invoke-static {v5}, Lcom/dualboot/e/v;->a(Lcom/dualboot/e/v;)Lcom/dualboot/e/t;

    move-result-object v5

    invoke-static {v5}, Lcom/dualboot/e/t;->d(Lcom/dualboot/e/t;)Ljava/lang/String;

    move-result-object v5

    iget-object v6, p0, Lcom/dualboot/e/w;->a:Lcom/dualboot/e/v;

    invoke-static {v6}, Lcom/dualboot/e/v;->a(Lcom/dualboot/e/v;)Lcom/dualboot/e/t;

    move-result-object v6

    invoke-static {v6}, Lcom/dualboot/e/t;->e(Lcom/dualboot/e/t;)F

    move-result v6

    iget-object v7, p0, Lcom/dualboot/e/w;->a:Lcom/dualboot/e/v;

    invoke-static {v7}, Lcom/dualboot/e/v;->a(Lcom/dualboot/e/v;)Lcom/dualboot/e/t;

    move-result-object v7

    invoke-static {v7}, Lcom/dualboot/e/t;->f(Lcom/dualboot/e/t;)F

    move-result v7

    invoke-direct/range {v0 .. v7}, Lcom/dualboot/e/t;-><init>(Lcom/dualboot/e/r;Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;FF)V

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Void;

    const/4 v2, 0x0

    const/4 v3, 0x0

    aput-object v3, v1, v2

    invoke-virtual {v0, v1}, Lcom/dualboot/e/t;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    return-void
.end method
