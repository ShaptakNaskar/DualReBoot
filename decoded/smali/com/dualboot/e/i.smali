.class final Lcom/dualboot/e/i;
.super Lcom/dualboot/util/w;


# instance fields
.field public a:Z

.field public b:Z

.field public c:Z

.field public d:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0}, Lcom/dualboot/util/w;-><init>()V

    iput-boolean v0, p0, Lcom/dualboot/e/i;->a:Z

    iput-boolean v0, p0, Lcom/dualboot/e/i;->b:Z

    iput-boolean v0, p0, Lcom/dualboot/e/i;->c:Z

    iput-boolean v0, p0, Lcom/dualboot/e/i;->d:Z

    return-void
.end method
