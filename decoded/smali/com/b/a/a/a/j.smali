.class final Lcom/b/a/a/a/j;
.super Lcom/b/a/a/a/d;


# instance fields
.field final synthetic a:Lcom/b/a/a/a/i;

.field private final b:Lcom/b/a/a/a/n;

.field private c:Ljava/lang/Runnable;


# direct methods
.method public constructor <init>(Lcom/b/a/a/a/i;Lcom/b/a/a/a/n;)V
    .locals 4

    iput-object p1, p0, Lcom/b/a/a/a/j;->a:Lcom/b/a/a/a/i;

    invoke-direct {p0}, Lcom/b/a/a/a/d;-><init>()V

    iput-object p2, p0, Lcom/b/a/a/a/j;->b:Lcom/b/a/a/a/n;

    new-instance v0, Lcom/b/a/a/a/k;

    invoke-direct {v0, p0}, Lcom/b/a/a/a/k;-><init>(Lcom/b/a/a/a/j;)V

    iput-object v0, p0, Lcom/b/a/a/a/j;->c:Ljava/lang/Runnable;

    const-string v0, "LicenseChecker"

    const-string v1, "Start monitoring timeout."

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    iget-object v0, p0, Lcom/b/a/a/a/j;->a:Lcom/b/a/a/a/i;

    invoke-static {v0}, Lcom/b/a/a/a/i;->a(Lcom/b/a/a/a/i;)Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/b/a/a/a/j;->c:Ljava/lang/Runnable;

    const-wide/16 v2, 0x2710

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method static synthetic a(Lcom/b/a/a/a/j;)Lcom/b/a/a/a/n;
    .locals 1

    iget-object v0, p0, Lcom/b/a/a/a/j;->b:Lcom/b/a/a/a/n;

    return-object v0
.end method

.method static synthetic b(Lcom/b/a/a/a/j;)V
    .locals 2

    const-string v0, "LicenseChecker"

    const-string v1, "Clearing timeout."

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    iget-object v0, p0, Lcom/b/a/a/a/j;->a:Lcom/b/a/a/a/i;

    invoke-static {v0}, Lcom/b/a/a/a/i;->a(Lcom/b/a/a/a/i;)Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/b/a/a/a/j;->c:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic c(Lcom/b/a/a/a/j;)Lcom/b/a/a/a/i;
    .locals 1

    iget-object v0, p0, Lcom/b/a/a/a/j;->a:Lcom/b/a/a/a/i;

    return-object v0
.end method


# virtual methods
.method public final a(ILjava/lang/String;Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/b/a/a/a/j;->a:Lcom/b/a/a/a/i;

    invoke-static {v0}, Lcom/b/a/a/a/i;->a(Lcom/b/a/a/a/i;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/b/a/a/a/l;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/b/a/a/a/l;-><init>(Lcom/b/a/a/a/j;ILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
