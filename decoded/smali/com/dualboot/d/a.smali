.class public final Lcom/dualboot/d/a;
.super Lcom/dualboot/d/b;


# instance fields
.field protected final a:I

.field protected final b:I

.field protected final c:Landroid/graphics/RectF;

.field protected d:F

.field private q:Landroid/graphics/LinearGradient;

.field private r:Z


# direct methods
.method public constructor <init>(ZZFIFIIII)V
    .locals 8

    move-object v0, p0

    move v1, p1

    move v2, p2

    move v3, p3

    move v4, p4

    move v5, p5

    move/from16 v6, p8

    move/from16 v7, p9

    invoke-direct/range {v0 .. v7}, Lcom/dualboot/d/b;-><init>(ZZFIFII)V

    new-instance v0, Landroid/graphics/RectF;

    invoke-direct {v0}, Landroid/graphics/RectF;-><init>()V

    iput-object v0, p0, Lcom/dualboot/d/a;->c:Landroid/graphics/RectF;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/d/a;->q:Landroid/graphics/LinearGradient;

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/dualboot/d/a;->r:Z

    const/high16 v0, 0x3f800000    # 1.0f

    iput v0, p0, Lcom/dualboot/d/a;->d:F

    iput p6, p0, Lcom/dualboot/d/a;->a:I

    iput p7, p0, Lcom/dualboot/d/a;->b:I

    return-void
.end method


# virtual methods
.method public final a(F)V
    .locals 2

    iput p1, p0, Lcom/dualboot/d/a;->d:F

    iget v0, p0, Lcom/dualboot/d/a;->d:F

    const v1, 0x3b808081

    cmpl-float v0, v0, v1

    if-ltz v0, :cond_1

    const/4 v0, 0x1

    :goto_0
    iget-boolean v1, p0, Lcom/dualboot/d/a;->r:Z

    if-eq v1, v0, :cond_0

    iput-boolean v0, p0, Lcom/dualboot/d/a;->r:Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/d/a;->q:Landroid/graphics/LinearGradient;

    :cond_0
    return-void

    :cond_1
    const/4 v0, 0x0

    goto :goto_0
.end method

.method public final a(Landroid/graphics/Bitmap;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/dualboot/d/b;->a(Landroid/graphics/Bitmap;)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/d/a;->q:Landroid/graphics/LinearGradient;

    return-void
.end method

.method protected final a()Z
    .locals 8

    invoke-super {p0}, Lcom/dualboot/d/b;->a()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-boolean v0, p0, Lcom/dualboot/d/a;->r:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/d/a;->q:Landroid/graphics/LinearGradient;

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/d/a;->c:Landroid/graphics/RectF;

    iget-object v1, p0, Lcom/dualboot/d/a;->l:Landroid/graphics/RectF;

    invoke-virtual {v0, v1}, Landroid/graphics/RectF;->set(Landroid/graphics/RectF;)V

    iget-boolean v0, p0, Lcom/dualboot/d/a;->h:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/d/a;->c:Landroid/graphics/RectF;

    iget v1, p0, Lcom/dualboot/d/a;->i:F

    iget v2, p0, Lcom/dualboot/d/a;->i:F

    invoke-virtual {v0, v1, v2}, Landroid/graphics/RectF;->inset(FF)V

    :cond_0
    new-instance v0, Landroid/graphics/LinearGradient;

    iget-object v1, p0, Lcom/dualboot/d/a;->c:Landroid/graphics/RectF;

    iget v1, v1, Landroid/graphics/RectF;->left:F

    iget-object v2, p0, Lcom/dualboot/d/a;->c:Landroid/graphics/RectF;

    iget v2, v2, Landroid/graphics/RectF;->top:F

    iget-object v3, p0, Lcom/dualboot/d/a;->c:Landroid/graphics/RectF;

    iget v3, v3, Landroid/graphics/RectF;->left:F

    iget-object v4, p0, Lcom/dualboot/d/a;->c:Landroid/graphics/RectF;

    iget v4, v4, Landroid/graphics/RectF;->bottom:F

    iget v5, p0, Lcom/dualboot/d/a;->a:I

    iget v6, p0, Lcom/dualboot/d/a;->b:I

    sget-object v7, Landroid/graphics/Shader$TileMode;->CLAMP:Landroid/graphics/Shader$TileMode;

    invoke-direct/range {v0 .. v7}, Landroid/graphics/LinearGradient;-><init>(FFFFIILandroid/graphics/Shader$TileMode;)V

    iput-object v0, p0, Lcom/dualboot/d/a;->q:Landroid/graphics/LinearGradient;

    :cond_1
    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_2
    const/4 v0, 0x0

    goto :goto_0
.end method

.method public final draw(Landroid/graphics/Canvas;)V
    .locals 5

    invoke-super {p0, p1}, Lcom/dualboot/d/b;->draw(Landroid/graphics/Canvas;)V

    iget-boolean v0, p0, Lcom/dualboot/d/a;->r:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/d/a;->n:Landroid/graphics/Paint;

    invoke-virtual {v0}, Landroid/graphics/Paint;->getAlpha()I

    move-result v0

    iget-object v1, p0, Lcom/dualboot/d/a;->n:Landroid/graphics/Paint;

    int-to-float v2, v0

    iget v3, p0, Lcom/dualboot/d/a;->d:F

    mul-float/2addr v2, v3

    float-to-int v2, v2

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setAlpha(I)V

    iget-object v1, p0, Lcom/dualboot/d/a;->n:Landroid/graphics/Paint;

    iget-object v2, p0, Lcom/dualboot/d/a;->q:Landroid/graphics/LinearGradient;

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setShader(Landroid/graphics/Shader;)Landroid/graphics/Shader;

    iget-object v1, p0, Lcom/dualboot/d/a;->c:Landroid/graphics/RectF;

    iget v2, p0, Lcom/dualboot/d/a;->f:F

    iget v3, p0, Lcom/dualboot/d/a;->f:F

    iget-object v4, p0, Lcom/dualboot/d/a;->n:Landroid/graphics/Paint;

    invoke-virtual {p1, v1, v2, v3, v4}, Landroid/graphics/Canvas;->drawRoundRect(Landroid/graphics/RectF;FFLandroid/graphics/Paint;)V

    iget-object v1, p0, Lcom/dualboot/d/a;->n:Landroid/graphics/Paint;

    invoke-virtual {v1, v0}, Landroid/graphics/Paint;->setAlpha(I)V

    :cond_0
    return-void
.end method

.method protected final onBoundsChange(Landroid/graphics/Rect;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/dualboot/d/b;->onBoundsChange(Landroid/graphics/Rect;)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/d/a;->q:Landroid/graphics/LinearGradient;

    return-void
.end method
