.class public final Lcom/dualboot/util/f;
.super Ljava/lang/Object;


# instance fields
.field public a:F

.field public b:F


# direct methods
.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput v0, p0, Lcom/dualboot/util/f;->a:F

    iput v0, p0, Lcom/dualboot/util/f;->b:F

    return-void
.end method

.method public constructor <init>(FF)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput p1, p0, Lcom/dualboot/util/f;->a:F

    iput p2, p0, Lcom/dualboot/util/f;->b:F

    return-void
.end method

.method public constructor <init>(Lcom/dualboot/util/f;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iget v0, p1, Lcom/dualboot/util/f;->a:F

    iput v0, p0, Lcom/dualboot/util/f;->a:F

    iget v0, p1, Lcom/dualboot/util/f;->b:F

    iput v0, p0, Lcom/dualboot/util/f;->b:F

    return-void
.end method

.method public static a(Lcom/dualboot/util/f;Lcom/dualboot/util/f;)F
    .locals 3

    iget v0, p0, Lcom/dualboot/util/f;->a:F

    iget v1, p1, Lcom/dualboot/util/f;->a:F

    sub-float/2addr v0, v1

    iget v1, p0, Lcom/dualboot/util/f;->b:F

    iget v2, p1, Lcom/dualboot/util/f;->b:F

    sub-float/2addr v1, v2

    mul-float/2addr v0, v0

    mul-float/2addr v1, v1

    add-float/2addr v0, v1

    return v0
.end method

.method public static a(Lcom/dualboot/util/f;)Lcom/dualboot/util/f;
    .locals 3

    new-instance v0, Lcom/dualboot/util/f;

    iget v1, p0, Lcom/dualboot/util/f;->a:F

    invoke-static {v1}, Ljava/lang/Math;->abs(F)F

    move-result v1

    iget v2, p0, Lcom/dualboot/util/f;->b:F

    invoke-static {v2}, Ljava/lang/Math;->abs(F)F

    move-result v2

    invoke-direct {v0, v1, v2}, Lcom/dualboot/util/f;-><init>(FF)V

    return-object v0
.end method


# virtual methods
.method public final a()V
    .locals 1

    const/4 v0, 0x0

    iput v0, p0, Lcom/dualboot/util/f;->a:F

    iput v0, p0, Lcom/dualboot/util/f;->b:F

    return-void
.end method
