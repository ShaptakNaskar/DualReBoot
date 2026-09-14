.class public final Lcom/dualboot/util/c;
.super Ljava/lang/Object;


# instance fields
.field public a:Lcom/dualboot/util/f;

.field public b:J


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/dualboot/util/f;

    invoke-direct {v0}, Lcom/dualboot/util/f;-><init>()V

    iput-object v0, p0, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/dualboot/util/c;->b:J

    return-void
.end method

.method public constructor <init>(Lcom/dualboot/util/c;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/dualboot/util/f;

    iget-object v1, p1, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    invoke-direct {v0, v1}, Lcom/dualboot/util/f;-><init>(Lcom/dualboot/util/f;)V

    iput-object v0, p0, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    iget-wide v0, p1, Lcom/dualboot/util/c;->b:J

    iput-wide v0, p0, Lcom/dualboot/util/c;->b:J

    return-void
.end method


# virtual methods
.method public final a(Lcom/dualboot/util/c;)Lcom/dualboot/util/f;
    .locals 5

    iget-object v0, p0, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    iget-object v1, p1, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    new-instance v2, Lcom/dualboot/util/f;

    iget v3, v0, Lcom/dualboot/util/f;->a:F

    iget v4, v1, Lcom/dualboot/util/f;->a:F

    sub-float/2addr v3, v4

    iget v0, v0, Lcom/dualboot/util/f;->b:F

    iget v1, v1, Lcom/dualboot/util/f;->b:F

    sub-float/2addr v0, v1

    invoke-direct {v2, v3, v0}, Lcom/dualboot/util/f;-><init>(FF)V

    return-object v2
.end method
