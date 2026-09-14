.class public final Lcom/dualboot/a/an;
.super Lcom/dualboot/a/ad;


# direct methods
.method public constructor <init>(Lcom/dualboot/a/ab;Lcom/dualboot/a/ar;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/dualboot/a/ad;-><init>(Lcom/dualboot/a/ab;Lcom/dualboot/a/ac;)V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    iget-object v1, p0, Lcom/dualboot/a/ad;->b:Lcom/dualboot/a/ab;

    iget-object v0, p0, Lcom/dualboot/a/ad;->a:Lcom/dualboot/a/ac;

    check-cast v0, Lcom/dualboot/a/ar;

    sget-object v2, Lcom/dualboot/a/aw;->c:Lcom/dualboot/a/aw;

    invoke-virtual {v1, v2}, Lcom/dualboot/a/ab;->a(Lcom/dualboot/a/aw;)V

    new-instance v2, Lcom/dualboot/a/ao;

    invoke-direct {v2, p0, v0, v1}, Lcom/dualboot/a/ao;-><init>(Lcom/dualboot/a/an;Lcom/dualboot/a/ar;Lcom/dualboot/a/ab;)V

    invoke-virtual {p0, v2}, Lcom/dualboot/a/an;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final b()V
    .locals 3

    iget-object v1, p0, Lcom/dualboot/a/ad;->b:Lcom/dualboot/a/ab;

    iget-object v0, p0, Lcom/dualboot/a/ad;->a:Lcom/dualboot/a/ac;

    check-cast v0, Lcom/dualboot/a/ar;

    sget-object v2, Lcom/dualboot/a/aw;->d:Lcom/dualboot/a/aw;

    invoke-virtual {v1, v2}, Lcom/dualboot/a/ab;->a(Lcom/dualboot/a/aw;)V

    new-instance v2, Lcom/dualboot/a/ap;

    invoke-direct {v2, p0, v0, v1}, Lcom/dualboot/a/ap;-><init>(Lcom/dualboot/a/an;Lcom/dualboot/a/ar;Lcom/dualboot/a/ab;)V

    invoke-virtual {p0, v2}, Lcom/dualboot/a/an;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final c()V
    .locals 3

    iget-object v1, p0, Lcom/dualboot/a/ad;->b:Lcom/dualboot/a/ab;

    iget-object v0, p0, Lcom/dualboot/a/ad;->a:Lcom/dualboot/a/ac;

    check-cast v0, Lcom/dualboot/a/ar;

    sget-object v2, Lcom/dualboot/a/aw;->a:Lcom/dualboot/a/aw;

    invoke-virtual {v1, v2}, Lcom/dualboot/a/ab;->a(Lcom/dualboot/a/aw;)V

    new-instance v2, Lcom/dualboot/a/aq;

    invoke-direct {v2, p0, v0, v1}, Lcom/dualboot/a/aq;-><init>(Lcom/dualboot/a/an;Lcom/dualboot/a/ar;Lcom/dualboot/a/ab;)V

    invoke-virtual {p0, v2}, Lcom/dualboot/a/an;->a(Ljava/lang/Runnable;)V

    return-void
.end method
