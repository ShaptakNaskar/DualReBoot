.class public final Lcom/dualboot/e/a/w;
.super Ljava/lang/Object;


# instance fields
.field final a:Ljava/util/Collection;

.field final b:[Z

.field final synthetic c:Lcom/dualboot/e/a/u;


# direct methods
.method public constructor <init>(Lcom/dualboot/e/a/u;I)V
    .locals 3

    const/4 v1, 0x0

    iput-object p1, p0, Lcom/dualboot/e/a/w;->c:Lcom/dualboot/e/a/u;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/dualboot/e/a/w;->a:Ljava/util/Collection;

    new-array v0, p2, [Z

    iput-object v0, p0, Lcom/dualboot/e/a/w;->b:[Z

    move v0, v1

    :goto_0
    if-lt v0, p2, :cond_0

    return-void

    :cond_0
    iget-object v2, p0, Lcom/dualboot/e/a/w;->b:[Z

    aput-boolean v1, v2, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0
.end method
