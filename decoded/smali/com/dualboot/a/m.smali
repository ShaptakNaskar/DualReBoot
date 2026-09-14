.class public abstract Lcom/dualboot/a/m;
.super Lcom/dualboot/a/bn;


# instance fields
.field final a:Lcom/dualboot/a/bq;

.field final b:Lcom/dualboot/a/bq;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/dualboot/a/bn;-><init>()V

    invoke-virtual {p0}, Lcom/dualboot/a/m;->d()Lcom/dualboot/a/bq;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/a/m;->a:Lcom/dualboot/a/bq;

    invoke-virtual {p0}, Lcom/dualboot/a/m;->d()Lcom/dualboot/a/bq;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/a/m;->b:Lcom/dualboot/a/bq;

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/Boolean;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/a/m;->a:Lcom/dualboot/a/bq;

    iget-object v0, v0, Lcom/dualboot/a/bq;->b:Ljava/lang/Object;

    check-cast v0, Ljava/lang/Boolean;

    return-object v0
.end method

.method public final b()Ljava/util/Collection;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/a/m;->b:Lcom/dualboot/a/bq;

    iget-object v0, v0, Lcom/dualboot/a/bq;->b:Ljava/lang/Object;

    check-cast v0, Ljava/util/Collection;

    return-object v0
.end method
