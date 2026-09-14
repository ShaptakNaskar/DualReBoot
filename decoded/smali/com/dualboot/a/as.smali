.class public final Lcom/dualboot/a/as;
.super Lcom/dualboot/a/ad;


# direct methods
.method public constructor <init>(Lcom/dualboot/a/ab;Lcom/dualboot/a/av;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/dualboot/a/ad;-><init>(Lcom/dualboot/a/ab;Lcom/dualboot/a/ac;)V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    iget-object v1, p0, Lcom/dualboot/a/ad;->b:Lcom/dualboot/a/ab;

    iget-object v0, p0, Lcom/dualboot/a/ad;->a:Lcom/dualboot/a/ac;

    check-cast v0, Lcom/dualboot/a/av;

    sget-object v2, Lcom/dualboot/a/aw;->e:Lcom/dualboot/a/aw;

    invoke-virtual {v1, v2}, Lcom/dualboot/a/ab;->a(Lcom/dualboot/a/aw;)V

    new-instance v2, Lcom/dualboot/a/at;

    invoke-direct {v2, p0, v0, v1}, Lcom/dualboot/a/at;-><init>(Lcom/dualboot/a/as;Lcom/dualboot/a/av;Lcom/dualboot/a/ab;)V

    invoke-virtual {p0, v2}, Lcom/dualboot/a/as;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final b()V
    .locals 3

    iget-object v1, p0, Lcom/dualboot/a/ad;->b:Lcom/dualboot/a/ab;

    iget-object v0, p0, Lcom/dualboot/a/ad;->a:Lcom/dualboot/a/ac;

    check-cast v0, Lcom/dualboot/a/av;

    sget-object v2, Lcom/dualboot/a/aw;->b:Lcom/dualboot/a/aw;

    invoke-virtual {v1, v2}, Lcom/dualboot/a/ab;->a(Lcom/dualboot/a/aw;)V

    new-instance v2, Lcom/dualboot/a/au;

    invoke-direct {v2, p0, v0, v1}, Lcom/dualboot/a/au;-><init>(Lcom/dualboot/a/as;Lcom/dualboot/a/av;Lcom/dualboot/a/ab;)V

    invoke-virtual {p0, v2}, Lcom/dualboot/a/as;->a(Ljava/lang/Runnable;)V

    return-void
.end method
