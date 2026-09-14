.class final Lcom/dualboot/a/k;
.super Lcom/dualboot/a/bq;


# instance fields
.field final synthetic a:Lcom/dualboot/a/a;

.field private final c:Lcom/dualboot/a/p;

.field private final d:Landroid/content/Context;


# direct methods
.method public constructor <init>(Lcom/dualboot/a/a;Lcom/dualboot/a/p;Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/k;->a:Lcom/dualboot/a/a;

    invoke-direct {p0}, Lcom/dualboot/a/bq;-><init>()V

    iput-object p2, p0, Lcom/dualboot/a/k;->c:Lcom/dualboot/a/p;

    iput-object p3, p0, Lcom/dualboot/a/k;->d:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public final bridge synthetic a(Ljava/lang/Object;)V
    .locals 3

    check-cast p1, Lcom/dualboot/a/ag;

    iget-object v0, p0, Lcom/dualboot/a/k;->c:Lcom/dualboot/a/p;

    sget-object v0, Lcom/dualboot/a/ag;->a:Lcom/dualboot/a/ag;

    if-eq p1, v0, :cond_0

    sget-object v0, Lcom/dualboot/a/ag;->c:Lcom/dualboot/a/ag;

    if-ne p1, v0, :cond_1

    const/4 v0, 0x1

    :goto_0
    iget-object v1, p0, Lcom/dualboot/a/k;->c:Lcom/dualboot/a/p;

    sget-object v2, Lcom/dualboot/a/q;->c:Lcom/dualboot/a/q;

    invoke-virtual {v1, v0, v2}, Lcom/dualboot/a/p;->a(ZLcom/dualboot/a/q;)Z

    iget-object v0, p0, Lcom/dualboot/a/k;->c:Lcom/dualboot/a/p;

    iget-object v1, p0, Lcom/dualboot/a/k;->d:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/dualboot/a/p;->a(Landroid/content/Context;)Z

    :cond_0
    return-void

    :cond_1
    const/4 v0, 0x0

    goto :goto_0
.end method
