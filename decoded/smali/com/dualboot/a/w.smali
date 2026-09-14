.class final Lcom/dualboot/a/w;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;


# instance fields
.field final synthetic a:Lcom/dualboot/a/v;

.field private final synthetic b:Lcom/dualboot/a/as;

.field private final synthetic c:Lcom/dualboot/a/an;


# direct methods
.method constructor <init>(Lcom/dualboot/a/v;Lcom/dualboot/a/as;Lcom/dualboot/a/an;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iput-object p2, p0, Lcom/dualboot/a/w;->b:Lcom/dualboot/a/as;

    iput-object p3, p0, Lcom/dualboot/a/w;->c:Lcom/dualboot/a/an;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 5

    :try_start_0
    iget-object v0, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    invoke-static {p2}, Lcom/a/a/a/b;->a(Landroid/os/IBinder;)Lcom/a/a/a/a;

    move-result-object v1

    iput-object v1, v0, Lcom/dualboot/a/v;->a:Lcom/a/a/a/a;

    iget-object v0, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget-object v0, v0, Lcom/dualboot/a/v;->a:Lcom/a/a/a/a;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget-object v1, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget-object v1, v1, Lcom/dualboot/a/v;->a:Lcom/a/a/a/a;

    const/4 v2, 0x3

    iget-object v3, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget-object v3, v3, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v3

    const-string v4, "inapp"

    invoke-interface {v1, v2, v3, v4}, Lcom/a/a/a/a;->a(ILjava/lang/String;Ljava/lang/String;)I

    move-result v1

    iput v1, v0, Lcom/dualboot/a/v;->b:I

    iget-object v0, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget-object v1, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget-object v1, v1, Lcom/dualboot/a/v;->a:Lcom/a/a/a/a;

    const/4 v2, 0x3

    iget-object v3, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget-object v3, v3, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v3

    const-string v4, "subs"

    invoke-interface {v1, v2, v3, v4}, Lcom/a/a/a/a;->a(ILjava/lang/String;Ljava/lang/String;)I

    move-result v1

    iput v1, v0, Lcom/dualboot/a/v;->c:I

    iget-object v0, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget-object v0, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Support for INAPP = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget v1, v1, Lcom/dualboot/a/v;->b:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    iget-object v0, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Support for SUBS  = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget v1, v1, Lcom/dualboot/a/v;->c:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    iget-object v0, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget v0, v0, Lcom/dualboot/a/v;->b:I

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/dualboot/a/v;->d:Z

    iget-object v0, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget-object v0, p0, Lcom/dualboot/a/w;->c:Lcom/dualboot/a/an;

    invoke-virtual {v0}, Lcom/dualboot/a/an;->b()V

    :goto_0
    return-void

    :cond_0
    iget-object v0, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget-object v0, p0, Lcom/dualboot/a/w;->c:Lcom/dualboot/a/an;

    invoke-virtual {v0}, Lcom/dualboot/a/an;->c()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    iget-object v1, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Error connecting service: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    iget-object v0, p0, Lcom/dualboot/a/w;->c:Lcom/dualboot/a/an;

    invoke-virtual {v0}, Lcom/dualboot/a/an;->c()V

    goto :goto_0

    :cond_1
    :try_start_1
    iget-object v0, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget-object v0, p0, Lcom/dualboot/a/w;->c:Lcom/dualboot/a/an;

    invoke-virtual {v0}, Lcom/dualboot/a/an;->c()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0
.end method

.method public final onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Service disconnected; started = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget-boolean v1, v1, Lcom/dualboot/a/v;->d:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    iget-object v0, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget-boolean v0, v0, Lcom/dualboot/a/v;->d:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    iget-object v1, p0, Lcom/dualboot/a/w;->b:Lcom/dualboot/a/as;

    invoke-virtual {v0, v1}, Lcom/dualboot/a/v;->a(Lcom/dualboot/a/as;)V

    :cond_0
    iget-object v0, p0, Lcom/dualboot/a/w;->a:Lcom/dualboot/a/v;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/dualboot/a/v;->a:Lcom/a/a/a/a;

    return-void
.end method
