.class public final Lcom/dualboot/a/aj;
.super Lcom/dualboot/a/ad;


# direct methods
.method public constructor <init>(Lcom/dualboot/a/ab;Lcom/dualboot/a/am;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/dualboot/a/ad;-><init>(Lcom/dualboot/a/ab;Lcom/dualboot/a/ac;)V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 3

    iget-object v1, p0, Lcom/dualboot/a/ad;->b:Lcom/dualboot/a/ab;

    iget-object v0, p0, Lcom/dualboot/a/ad;->a:Lcom/dualboot/a/ac;

    check-cast v0, Lcom/dualboot/a/am;

    new-instance v2, Lcom/dualboot/a/ak;

    invoke-direct {v2, p0, v0, v1, p1}, Lcom/dualboot/a/ak;-><init>(Lcom/dualboot/a/aj;Lcom/dualboot/a/am;Lcom/dualboot/a/ab;Ljava/lang/String;)V

    invoke-virtual {p0, v2}, Lcom/dualboot/a/aj;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 3

    iget-object v1, p0, Lcom/dualboot/a/ad;->b:Lcom/dualboot/a/ab;

    iget-object v0, p0, Lcom/dualboot/a/ad;->a:Lcom/dualboot/a/ac;

    check-cast v0, Lcom/dualboot/a/am;

    new-instance v2, Lcom/dualboot/a/al;

    invoke-direct {v2, p0, v0, v1, p1}, Lcom/dualboot/a/al;-><init>(Lcom/dualboot/a/aj;Lcom/dualboot/a/am;Lcom/dualboot/a/ab;Ljava/lang/String;)V

    invoke-virtual {p0, v2}, Lcom/dualboot/a/aj;->a(Ljava/lang/Runnable;)V

    return-void
.end method
