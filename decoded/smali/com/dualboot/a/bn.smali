.class public abstract Lcom/dualboot/a/bn;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/dualboot/util/l;


# instance fields
.field private a:I

.field c:I


# direct methods
.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput v0, p0, Lcom/dualboot/a/bn;->a:I

    iput v0, p0, Lcom/dualboot/a/bn;->c:I

    return-void
.end method


# virtual methods
.method public final a_()V
    .locals 1

    iget v0, p0, Lcom/dualboot/a/bn;->c:I

    iget v0, p0, Lcom/dualboot/a/bn;->a:I

    invoke-virtual {p0}, Lcom/dualboot/a/bn;->c()V

    return-void
.end method

.method public abstract c()V
.end method

.method protected final d()Lcom/dualboot/a/bq;
    .locals 2

    new-instance v0, Lcom/dualboot/a/bo;

    invoke-direct {v0, p0}, Lcom/dualboot/a/bo;-><init>(Lcom/dualboot/a/bn;)V

    iget v1, p0, Lcom/dualboot/a/bn;->a:I

    add-int/lit8 v1, v1, 0x1

    iput v1, p0, Lcom/dualboot/a/bn;->a:I

    return-object v0
.end method
