.class final Lcom/dualboot/e/x;
.super Lcom/dualboot/util/w;


# instance fields
.field public a:I

.field public b:Z

.field public c:Z

.field public d:Z

.field public e:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0}, Lcom/dualboot/util/w;-><init>()V

    iput v0, p0, Lcom/dualboot/e/x;->a:I

    iput-boolean v0, p0, Lcom/dualboot/e/x;->b:Z

    iput-boolean v0, p0, Lcom/dualboot/e/x;->c:Z

    iput-boolean v0, p0, Lcom/dualboot/e/x;->d:Z

    iput-boolean v0, p0, Lcom/dualboot/e/x;->e:Z

    return-void
.end method
