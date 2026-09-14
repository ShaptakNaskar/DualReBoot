.class public Lcom/dualboot/d/b;
.super Landroid/graphics/drawable/Drawable;


# instance fields
.field private a:Landroid/graphics/Bitmap;

.field private b:F

.field private c:F

.field private d:Z

.field protected final e:F

.field protected final f:F

.field protected final g:Z

.field protected final h:Z

.field protected final i:F

.field protected final j:I

.field protected k:F

.field protected final l:Landroid/graphics/RectF;

.field protected final m:Landroid/graphics/RectF;

.field protected final n:Landroid/graphics/Paint;

.field protected final o:Landroid/graphics/Matrix;

.field protected p:Landroid/graphics/BitmapShader;


# direct methods
.method public constructor <init>(ZZFIFII)V
    .locals 8

    const/4 v7, 0x0

    const/4 v1, 0x1

    const/4 v6, 0x0

    invoke-direct {p0}, Landroid/graphics/drawable/Drawable;-><init>()V

    iput-object v7, p0, Lcom/dualboot/d/b;->p:Landroid/graphics/BitmapShader;

    new-instance v0, Landroid/graphics/RectF;

    invoke-direct {v0}, Landroid/graphics/RectF;-><init>()V

    iput-object v0, p0, Lcom/dualboot/d/b;->l:Landroid/graphics/RectF;

    new-instance v0, Landroid/graphics/RectF;

    invoke-direct {v0}, Landroid/graphics/RectF;-><init>()V

    iput-object v0, p0, Lcom/dualboot/d/b;->m:Landroid/graphics/RectF;

    new-instance v0, Landroid/graphics/Matrix;

    invoke-direct {v0}, Landroid/graphics/Matrix;-><init>()V

    iput-object v0, p0, Lcom/dualboot/d/b;->o:Landroid/graphics/Matrix;

    iget-object v0, p0, Lcom/dualboot/d/b;->o:Landroid/graphics/Matrix;

    invoke-virtual {v0}, Landroid/graphics/Matrix;->reset()V

    int-to-float v0, p6

    iput v0, p0, Lcom/dualboot/d/b;->e:F

    int-to-float v0, p7

    iput v0, p0, Lcom/dualboot/d/b;->f:F

    iput-boolean p1, p0, Lcom/dualboot/d/b;->g:Z

    invoke-static {p4}, Landroid/graphics/Color;->red(I)I

    move-result v0

    invoke-static {p4}, Landroid/graphics/Color;->green(I)I

    move-result v2

    invoke-static {p4}, Landroid/graphics/Color;->blue(I)I

    move-result v3

    invoke-static {p4}, Landroid/graphics/Color;->alpha(I)I

    move-result v4

    const/high16 v5, 0x3f800000    # 1.0f

    invoke-static {v5, p5}, Ljava/lang/Math;->min(FF)F

    move-result v5

    invoke-static {v6, v5}, Ljava/lang/Math;->max(FF)F

    move-result v5

    int-to-float v4, v4

    mul-float/2addr v4, v5

    float-to-int v4, v4

    invoke-static {v4, v0, v2, v3}, Landroid/graphics/Color;->argb(IIII)I

    move-result v0

    iput v0, p0, Lcom/dualboot/d/b;->j:I

    iput p3, p0, Lcom/dualboot/d/b;->i:F

    if-eqz p2, :cond_0

    if-lez v4, :cond_0

    iget v0, p0, Lcom/dualboot/d/b;->i:F

    cmpl-float v0, v0, v6

    if-lez v0, :cond_0

    move v0, v1

    :goto_0
    iput-boolean v0, p0, Lcom/dualboot/d/b;->h:Z

    new-instance v0, Landroid/graphics/Paint;

    invoke-direct {v0}, Landroid/graphics/Paint;-><init>()V

    iput-object v0, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    iget-object v0, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    invoke-virtual {p0, v7}, Lcom/dualboot/d/b;->a(Landroid/graphics/Bitmap;)V

    return-void

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method


# virtual methods
.method public a(Landroid/graphics/Bitmap;)V
    .locals 3

    const/4 v2, 0x0

    const/4 v1, 0x0

    iput-object p1, p0, Lcom/dualboot/d/b;->a:Landroid/graphics/Bitmap;

    iget-object v0, p0, Lcom/dualboot/d/b;->a:Landroid/graphics/Bitmap;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/d/b;->a:Landroid/graphics/Bitmap;

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v0

    int-to-float v0, v0

    iput v0, p0, Lcom/dualboot/d/b;->b:F

    iget-object v0, p0, Lcom/dualboot/d/b;->a:Landroid/graphics/Bitmap;

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v0

    int-to-float v0, v0

    iput v0, p0, Lcom/dualboot/d/b;->c:F

    iget-object v0, p0, Lcom/dualboot/d/b;->a:Landroid/graphics/Bitmap;

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->hasAlpha()Z

    move-result v0

    iput-boolean v0, p0, Lcom/dualboot/d/b;->d:Z

    :goto_0
    iput-object v2, p0, Lcom/dualboot/d/b;->p:Landroid/graphics/BitmapShader;

    iget-object v0, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setShader(Landroid/graphics/Shader;)Landroid/graphics/Shader;

    invoke-virtual {p0}, Lcom/dualboot/d/b;->invalidateSelf()V

    return-void

    :cond_0
    iput v1, p0, Lcom/dualboot/d/b;->b:F

    iput v1, p0, Lcom/dualboot/d/b;->b:F

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/dualboot/d/b;->d:Z

    goto :goto_0
.end method

.method protected a()Z
    .locals 4

    iget-object v0, p0, Lcom/dualboot/d/b;->p:Landroid/graphics/BitmapShader;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/d/b;->a:Landroid/graphics/Bitmap;

    if-eqz v0, :cond_0

    new-instance v0, Landroid/graphics/BitmapShader;

    iget-object v1, p0, Lcom/dualboot/d/b;->a:Landroid/graphics/Bitmap;

    sget-object v2, Landroid/graphics/Shader$TileMode;->CLAMP:Landroid/graphics/Shader$TileMode;

    sget-object v3, Landroid/graphics/Shader$TileMode;->CLAMP:Landroid/graphics/Shader$TileMode;

    invoke-direct {v0, v1, v2, v3}, Landroid/graphics/BitmapShader;-><init>(Landroid/graphics/Bitmap;Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V

    iput-object v0, p0, Lcom/dualboot/d/b;->p:Landroid/graphics/BitmapShader;

    :cond_0
    iget-object v0, p0, Lcom/dualboot/d/b;->p:Landroid/graphics/BitmapShader;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/d/b;->p:Landroid/graphics/BitmapShader;

    iget-object v1, p0, Lcom/dualboot/d/b;->o:Landroid/graphics/Matrix;

    invoke-virtual {v0, v1}, Landroid/graphics/BitmapShader;->setLocalMatrix(Landroid/graphics/Matrix;)V

    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_1
    const/4 v0, 0x0

    goto :goto_0
.end method

.method public final b(F)V
    .locals 0

    iput p1, p0, Lcom/dualboot/d/b;->k:F

    return-void
.end method

.method public draw(Landroid/graphics/Canvas;)V
    .locals 9

    const v4, 0x3b808081

    invoke-virtual {p0}, Lcom/dualboot/d/b;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    iget-object v1, p0, Lcom/dualboot/d/b;->p:Landroid/graphics/BitmapShader;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setShader(Landroid/graphics/Shader;)Landroid/graphics/Shader;

    iget-boolean v0, p0, Lcom/dualboot/d/b;->h:Z

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/dualboot/d/b;->k:F

    cmpl-float v0, v0, v4

    if-ltz v0, :cond_2

    const/4 v0, 0x1

    :goto_0
    if-nez v0, :cond_3

    const/4 v0, 0x0

    :goto_1
    iget-boolean v1, p0, Lcom/dualboot/d/b;->g:Z

    if-nez v1, :cond_0

    new-instance v1, Landroid/graphics/RectF;

    iget-object v2, p0, Lcom/dualboot/d/b;->m:Landroid/graphics/RectF;

    invoke-direct {v1, v2}, Landroid/graphics/RectF;-><init>(Landroid/graphics/RectF;)V

    invoke-virtual {v1, v0, v0}, Landroid/graphics/RectF;->inset(FF)V

    iget-object v2, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {p1, v1, v2}, Landroid/graphics/Canvas;->drawRect(Landroid/graphics/RectF;Landroid/graphics/Paint;)V

    :cond_0
    new-instance v1, Landroid/graphics/RectF;

    iget-object v2, p0, Lcom/dualboot/d/b;->l:Landroid/graphics/RectF;

    invoke-direct {v1, v2}, Landroid/graphics/RectF;-><init>(Landroid/graphics/RectF;)V

    invoke-virtual {v1, v0, v0}, Landroid/graphics/RectF;->inset(FF)V

    iget v0, p0, Lcom/dualboot/d/b;->f:F

    iget v2, p0, Lcom/dualboot/d/b;->f:F

    iget-object v3, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {p1, v1, v0, v2, v3}, Landroid/graphics/Canvas;->drawRoundRect(Landroid/graphics/RectF;FFLandroid/graphics/Paint;)V

    iget-boolean v0, p0, Lcom/dualboot/d/b;->h:Z

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/dualboot/d/b;->k:F

    cmpl-float v0, v0, v4

    if-ltz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {v0}, Landroid/graphics/Paint;->getStrokeWidth()F

    move-result v0

    iget-object v1, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {v1}, Landroid/graphics/Paint;->getColor()I

    move-result v1

    iget-object v2, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {v2}, Landroid/graphics/Paint;->getAlpha()I

    move-result v2

    iget-object v3, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {v3}, Landroid/graphics/Paint;->getStyle()Landroid/graphics/Paint$Style;

    move-result-object v3

    iget-object v4, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {v4}, Landroid/graphics/Paint;->getShader()Landroid/graphics/Shader;

    move-result-object v4

    iget-object v5, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    iget v6, p0, Lcom/dualboot/d/b;->i:F

    invoke-virtual {v5, v6}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    iget-object v5, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    iget v6, p0, Lcom/dualboot/d/b;->j:I

    invoke-virtual {v5, v6}, Landroid/graphics/Paint;->setColor(I)V

    iget-object v5, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    iget-object v6, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {v6}, Landroid/graphics/Paint;->getAlpha()I

    move-result v6

    int-to-float v6, v6

    iget v7, p0, Lcom/dualboot/d/b;->k:F

    mul-float/2addr v6, v7

    float-to-int v6, v6

    invoke-virtual {v5, v6}, Landroid/graphics/Paint;->setAlpha(I)V

    iget-object v5, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    sget-object v6, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v5, v6}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    iget-object v5, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    const/4 v6, 0x0

    invoke-virtual {v5, v6}, Landroid/graphics/Paint;->setShader(Landroid/graphics/Shader;)Landroid/graphics/Shader;

    iget-object v5, p0, Lcom/dualboot/d/b;->l:Landroid/graphics/RectF;

    iget v6, p0, Lcom/dualboot/d/b;->f:F

    iget v7, p0, Lcom/dualboot/d/b;->f:F

    iget-object v8, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {p1, v5, v6, v7, v8}, Landroid/graphics/Canvas;->drawRoundRect(Landroid/graphics/RectF;FFLandroid/graphics/Paint;)V

    iget-object v5, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {v5, v0}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    iget-object v0, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setColor(I)V

    iget-object v0, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setAlpha(I)V

    iget-object v0, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {v0, v3}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    iget-object v0, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {v0, v4}, Landroid/graphics/Paint;->setShader(Landroid/graphics/Shader;)Landroid/graphics/Shader;

    :cond_1
    return-void

    :cond_2
    const/4 v0, 0x0

    goto/16 :goto_0

    :cond_3
    iget v0, p0, Lcom/dualboot/d/b;->i:F

    goto/16 :goto_1
.end method

.method public getIntrinsicHeight()I
    .locals 1

    iget-object v0, p0, Lcom/dualboot/d/b;->a:Landroid/graphics/Bitmap;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/d/b;->a:Landroid/graphics/Bitmap;

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v0

    :goto_0
    return v0

    :cond_0
    const/4 v0, -0x1

    goto :goto_0
.end method

.method public getIntrinsicWidth()I
    .locals 1

    iget-object v0, p0, Lcom/dualboot/d/b;->a:Landroid/graphics/Bitmap;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/d/b;->a:Landroid/graphics/Bitmap;

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v0

    :goto_0
    return v0

    :cond_0
    const/4 v0, -0x1

    goto :goto_0
.end method

.method public getOpacity()I
    .locals 2

    iget-boolean v0, p0, Lcom/dualboot/d/b;->d:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {v0}, Landroid/graphics/Paint;->getAlpha()I

    move-result v0

    const/16 v1, 0xff

    if-ge v0, v1, :cond_1

    :cond_0
    const/4 v0, -0x3

    :goto_0
    return v0

    :cond_1
    const/4 v0, -0x1

    goto :goto_0
.end method

.method protected onBoundsChange(Landroid/graphics/Rect;)V
    .locals 8

    const/4 v3, 0x0

    const/high16 v7, 0x3f000000    # 0.5f

    invoke-super {p0, p1}, Landroid/graphics/drawable/Drawable;->onBoundsChange(Landroid/graphics/Rect;)V

    invoke-virtual {p1}, Landroid/graphics/Rect;->width()I

    move-result v0

    int-to-float v1, v0

    invoke-virtual {p1}, Landroid/graphics/Rect;->height()I

    move-result v0

    int-to-float v2, v0

    iget-object v0, p0, Lcom/dualboot/d/b;->l:Landroid/graphics/RectF;

    invoke-virtual {v0, v3, v3, v1, v2}, Landroid/graphics/RectF;->set(FFFF)V

    iget-object v0, p0, Lcom/dualboot/d/b;->m:Landroid/graphics/RectF;

    iget-object v3, p0, Lcom/dualboot/d/b;->l:Landroid/graphics/RectF;

    iget v3, v3, Landroid/graphics/RectF;->left:F

    iget-object v4, p0, Lcom/dualboot/d/b;->l:Landroid/graphics/RectF;

    iget v4, v4, Landroid/graphics/RectF;->bottom:F

    iget v5, p0, Lcom/dualboot/d/b;->f:F

    sub-float/2addr v4, v5

    iget-object v5, p0, Lcom/dualboot/d/b;->l:Landroid/graphics/RectF;

    iget v5, v5, Landroid/graphics/RectF;->right:F

    iget-object v6, p0, Lcom/dualboot/d/b;->l:Landroid/graphics/RectF;

    iget v6, v6, Landroid/graphics/RectF;->bottom:F

    invoke-virtual {v0, v3, v4, v5, v6}, Landroid/graphics/RectF;->set(FFFF)V

    iget v0, p0, Lcom/dualboot/d/b;->e:F

    iget v3, p0, Lcom/dualboot/d/b;->e:F

    div-float v4, v1, v2

    iget v5, p0, Lcom/dualboot/d/b;->b:F

    iget v6, p0, Lcom/dualboot/d/b;->c:F

    div-float/2addr v5, v6

    cmpg-float v6, v4, v5

    if-gez v6, :cond_0

    const/high16 v6, 0x3f800000    # 1.0f

    cmpl-float v6, v4, v6

    if-lez v6, :cond_0

    div-float/2addr v4, v5

    iget v5, p0, Lcom/dualboot/d/b;->b:F

    mul-float/2addr v4, v5

    iget v5, p0, Lcom/dualboot/d/b;->b:F

    sub-float v4, v5, v4

    mul-float/2addr v4, v7

    add-float/2addr v0, v4

    :cond_0
    new-instance v4, Landroid/graphics/RectF;

    iget v5, p0, Lcom/dualboot/d/b;->b:F

    sub-float/2addr v5, v0

    iget v6, p0, Lcom/dualboot/d/b;->c:F

    sub-float/2addr v6, v3

    invoke-direct {v4, v0, v3, v5, v6}, Landroid/graphics/RectF;-><init>(FFFF)V

    invoke-static {v1, v2}, Ljava/lang/Math;->max(FF)F

    move-result v0

    sub-float v1, v0, v1

    mul-float/2addr v1, v7

    sub-float v2, v0, v2

    mul-float/2addr v2, v7

    new-instance v3, Landroid/graphics/RectF;

    neg-float v5, v1

    neg-float v6, v2

    neg-float v1, v1

    add-float/2addr v1, v0

    neg-float v2, v2

    add-float/2addr v0, v2

    invoke-direct {v3, v5, v6, v1, v0}, Landroid/graphics/RectF;-><init>(FFFF)V

    iget-object v0, p0, Lcom/dualboot/d/b;->o:Landroid/graphics/Matrix;

    invoke-virtual {v0}, Landroid/graphics/Matrix;->reset()V

    iget-object v0, p0, Lcom/dualboot/d/b;->o:Landroid/graphics/Matrix;

    sget-object v1, Landroid/graphics/Matrix$ScaleToFit;->CENTER:Landroid/graphics/Matrix$ScaleToFit;

    invoke-virtual {v0, v4, v3, v1}, Landroid/graphics/Matrix;->setRectToRect(Landroid/graphics/RectF;Landroid/graphics/RectF;Landroid/graphics/Matrix$ScaleToFit;)Z

    return-void
.end method

.method public setAlpha(I)V
    .locals 1

    iget-object v0, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {v0, p1}, Landroid/graphics/Paint;->setAlpha(I)V

    return-void
.end method

.method public setColorFilter(Landroid/graphics/ColorFilter;)V
    .locals 1

    iget-object v0, p0, Lcom/dualboot/d/b;->n:Landroid/graphics/Paint;

    invoke-virtual {v0, p1}, Landroid/graphics/Paint;->setColorFilter(Landroid/graphics/ColorFilter;)Landroid/graphics/ColorFilter;

    return-void
.end method
