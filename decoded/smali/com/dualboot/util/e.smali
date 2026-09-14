.class public final Lcom/dualboot/util/e;
.super Ljava/lang/Object;


# instance fields
.field public final a:Lcom/dualboot/util/c;

.field public final b:Lcom/dualboot/util/c;


# direct methods
.method public constructor <init>(Lcom/dualboot/util/c;Lcom/dualboot/util/c;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/dualboot/util/c;

    invoke-direct {v0, p1}, Lcom/dualboot/util/c;-><init>(Lcom/dualboot/util/c;)V

    iput-object v0, p0, Lcom/dualboot/util/e;->a:Lcom/dualboot/util/c;

    new-instance v0, Lcom/dualboot/util/c;

    invoke-direct {v0, p2}, Lcom/dualboot/util/c;-><init>(Lcom/dualboot/util/c;)V

    iput-object v0, p0, Lcom/dualboot/util/e;->b:Lcom/dualboot/util/c;

    return-void
.end method
