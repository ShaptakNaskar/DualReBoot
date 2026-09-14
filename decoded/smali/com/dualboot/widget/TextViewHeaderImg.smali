.class public Lcom/dualboot/widget/TextViewHeaderImg;
.super Landroid/widget/TextView;


# instance fields
.field private final a:Lcom/dualboot/d/a;

.field private final b:I

.field private final c:I

.field private final d:I

.field private final e:I

.field private final f:I

.field private final g:J

.field private final h:J

.field private final i:Z

.field private final j:Z

.field private final k:Z

.field private final l:F

.field private m:I

.field private n:F

.field private o:F

.field private p:F

.field private q:J

.field private r:J


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/dualboot/widget/TextViewHeaderImg;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const v0, 0x1010084

    invoke-direct {p0, p1, p2, v0}, Lcom/dualboot/widget/TextViewHeaderImg;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 11

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/TextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 v0, -0x1

    iput v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->m:I

    const/high16 v0, 0x3f800000    # 1.0f

    iput v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->n:F

    const/high16 v0, 0x3f800000    # 1.0f

    iput v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->o:F

    const/high16 v0, 0x3f800000    # 1.0f

    iput v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->p:F

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->q:J

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->r:J

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->getTextColors()Landroid/content/res/ColorStateList;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/ColorStateList;->getDefaultColor()I

    move-result v0

    iput v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->b:I

    iget v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->b:I

    invoke-virtual {p0, v0}, Lcom/dualboot/widget/TextViewHeaderImg;->setTextColor(I)V

    iget v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->b:I

    invoke-static {v0}, Landroid/graphics/Color;->red(I)I

    move-result v0

    iput v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->c:I

    iget v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->b:I

    invoke-static {v0}, Landroid/graphics/Color;->green(I)I

    move-result v0

    iput v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->d:I

    iget v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->b:I

    invoke-static {v0}, Landroid/graphics/Color;->blue(I)I

    move-result v0

    iput v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->e:I

    iget v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->b:I

    invoke-static {v0}, Landroid/graphics/Color;->alpha(I)I

    move-result v0

    iput v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->f:I

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const/high16 v1, 0x10e0000

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getInteger(I)I

    move-result v0

    int-to-long v0, v0

    iput-wide v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->g:J

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x10e0002

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getInteger(I)I

    move-result v0

    int-to-long v0, v0

    iput-wide v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->h:J

    sget-object v0, Lcom/dualboot/h;->TextViewHeaderImg:[I

    const/4 v1, 0x0

    invoke-virtual {p1, p2, v0, p3, v1}, Landroid/content/Context;->obtainStyledAttributes(Landroid/util/AttributeSet;[III)Landroid/content/res/TypedArray;

    move-result-object v10

    const/4 v0, 0x2

    const/4 v1, 0x0

    invoke-virtual {v10, v0, v1}, Landroid/content/res/TypedArray;->getDimensionPixelSize(II)I

    move-result v8

    const/4 v0, 0x5

    const/4 v1, 0x0

    invoke-virtual {v10, v0, v1}, Landroid/content/res/TypedArray;->getDimensionPixelSize(II)I

    move-result v9

    const/4 v0, 0x3

    const/4 v1, 0x0

    invoke-virtual {v10, v0, v1}, Landroid/content/res/TypedArray;->getBoolean(IZ)Z

    move-result v1

    const/4 v0, 0x4

    const/high16 v2, 0x3f800000    # 1.0f

    invoke-virtual {v10, v0, v2}, Landroid/content/res/TypedArray;->getFloat(IF)F

    move-result v0

    iput v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->l:F

    const/16 v0, 0xa

    const/4 v2, -0x1

    invoke-virtual {v10, v0, v2}, Landroid/content/res/TypedArray;->getColor(II)I

    move-result v6

    invoke-static {v6}, Landroid/graphics/Color;->red(I)I

    move-result v0

    invoke-static {v6}, Landroid/graphics/Color;->green(I)I

    move-result v2

    invoke-static {v6}, Landroid/graphics/Color;->blue(I)I

    move-result v3

    const/4 v4, 0x0

    invoke-static {v4, v0, v2, v3}, Landroid/graphics/Color;->argb(IIII)I

    move-result v0

    const/16 v2, 0xb

    invoke-virtual {v10, v2, v0}, Landroid/content/res/TypedArray;->getColor(II)I

    move-result v7

    const/4 v0, 0x6

    invoke-virtual {v10, v0, v1}, Landroid/content/res/TypedArray;->getBoolean(IZ)Z

    move-result v2

    const/4 v0, 0x7

    const/high16 v3, 0x40000000    # 2.0f

    invoke-virtual {v10, v0, v3}, Landroid/content/res/TypedArray;->getFloat(IF)F

    move-result v3

    const/16 v0, 0x8

    iget v4, p0, Lcom/dualboot/widget/TextViewHeaderImg;->b:I

    invoke-virtual {v10, v0, v4}, Landroid/content/res/TypedArray;->getColor(II)I

    move-result v4

    const/16 v0, 0x9

    const/high16 v5, 0x3f800000    # 1.0f

    invoke-virtual {v10, v0, v5}, Landroid/content/res/TypedArray;->getFloat(IF)F

    move-result v5

    new-instance v0, Lcom/dualboot/d/a;

    invoke-direct/range {v0 .. v9}, Lcom/dualboot/d/a;-><init>(ZZFIFIIII)V

    iput-object v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->a:Lcom/dualboot/d/a;

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    if-eqz v0, :cond_2

    const/4 v1, 0x2

    new-array v1, v1, [Landroid/graphics/drawable/Drawable;

    const/4 v2, 0x0

    aput-object v0, v1, v2

    const/4 v0, 0x1

    iget-object v2, p0, Lcom/dualboot/widget/TextViewHeaderImg;->a:Lcom/dualboot/d/a;

    aput-object v2, v1, v0

    new-instance v0, Landroid/graphics/drawable/LayerDrawable;

    invoke-direct {v0, v1}, Landroid/graphics/drawable/LayerDrawable;-><init>([Landroid/graphics/drawable/Drawable;)V

    :goto_0
    invoke-virtual {p0, v0}, Lcom/dualboot/widget/TextViewHeaderImg;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    const/4 v0, 0x1

    invoke-virtual {v10, v0}, Landroid/content/res/TypedArray;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/dualboot/widget/TextViewHeaderImg;->a(Landroid/graphics/drawable/Drawable;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    invoke-virtual {v10, v0}, Landroid/content/res/TypedArray;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/dualboot/widget/TextViewHeaderImg;->a(Landroid/graphics/drawable/Drawable;)Z

    :cond_0
    const/16 v0, 0xe

    const/4 v1, 0x1

    invoke-virtual {v10, v0, v1}, Landroid/content/res/TypedArray;->getBoolean(IZ)Z

    move-result v0

    iput-boolean v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->k:Z

    const/16 v0, 0xd

    const/4 v1, 0x0

    invoke-virtual {v10, v0, v1}, Landroid/content/res/TypedArray;->getBoolean(IZ)Z

    move-result v0

    iput-boolean v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->i:Z

    const/16 v0, 0xc

    const/4 v1, 0x1

    invoke-virtual {v10, v0, v1}, Landroid/content/res/TypedArray;->getBoolean(IZ)Z

    move-result v0

    iput-boolean v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->j:Z

    iget-boolean v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->i:Z

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/dualboot/widget/TextViewHeaderImg;->setClickable(Z)V

    :cond_1
    iget-boolean v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->j:Z

    if-eqz v0, :cond_3

    const/high16 v0, 0x3f800000    # 1.0f

    const-wide/16 v1, 0x0

    invoke-direct {p0, v0, v1, v2}, Lcom/dualboot/widget/TextViewHeaderImg;->a(FJ)V

    :goto_1
    invoke-virtual {v10}, Landroid/content/res/TypedArray;->recycle()V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->a:Lcom/dualboot/d/a;

    goto :goto_0

    :cond_3
    const/4 v0, 0x0

    const-wide/16 v1, 0x0

    invoke-direct {p0, v0, v1, v2}, Lcom/dualboot/widget/TextViewHeaderImg;->a(FJ)V

    goto :goto_1
.end method

.method private a()V
    .locals 3

    iget-object v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->a:Lcom/dualboot/d/a;

    iget v1, p0, Lcom/dualboot/widget/TextViewHeaderImg;->n:F

    invoke-virtual {v0, v1}, Lcom/dualboot/d/a;->a(F)V

    iget-object v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->a:Lcom/dualboot/d/a;

    iget v1, p0, Lcom/dualboot/widget/TextViewHeaderImg;->n:F

    const v2, 0x3e99999a    # 0.3f

    mul-float/2addr v1, v2

    const v2, 0x3f333333    # 0.7f

    add-float/2addr v1, v2

    invoke-virtual {v0, v1}, Lcom/dualboot/d/a;->b(F)V

    return-void
.end method

.method private a(FJ)V
    .locals 4

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v2, p2, v2

    if-nez v2, :cond_0

    iput p1, p0, Lcom/dualboot/widget/TextViewHeaderImg;->o:F

    iput p1, p0, Lcom/dualboot/widget/TextViewHeaderImg;->p:F

    iput p1, p0, Lcom/dualboot/widget/TextViewHeaderImg;->n:F

    iput-wide v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->q:J

    iput-wide v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->r:J

    :goto_0
    invoke-direct {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->a()V

    invoke-direct {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->b()V

    return-void

    :cond_0
    iget v2, p0, Lcom/dualboot/widget/TextViewHeaderImg;->n:F

    iput v2, p0, Lcom/dualboot/widget/TextViewHeaderImg;->o:F

    iput p1, p0, Lcom/dualboot/widget/TextViewHeaderImg;->p:F

    iput-wide v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->q:J

    add-long/2addr v0, p2

    iput-wide v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->r:J

    goto :goto_0
.end method

.method private b()V
    .locals 1

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->invalidate()V

    iget-object v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->a:Lcom/dualboot/d/a;

    invoke-virtual {p0, v0}, Lcom/dualboot/widget/TextViewHeaderImg;->invalidateDrawable(Landroid/graphics/drawable/Drawable;)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/graphics/drawable/Drawable;)Z
    .locals 2

    instance-of v0, p1, Landroid/graphics/drawable/BitmapDrawable;

    if-eqz v0, :cond_0

    check-cast p1, Landroid/graphics/drawable/BitmapDrawable;

    invoke-virtual {p1}, Landroid/graphics/drawable/BitmapDrawable;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/dualboot/widget/TextViewHeaderImg;->a:Lcom/dualboot/d/a;

    invoke-virtual {v1, v0}, Lcom/dualboot/d/a;->a(Landroid/graphics/Bitmap;)V

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->requestLayout()V

    invoke-direct {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->a()V

    invoke-direct {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->b()V

    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method

.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 6

    const/high16 v0, 0x3f800000    # 1.0f

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/dualboot/widget/TextViewHeaderImg;->q:J

    cmp-long v3, v1, v3

    if-lez v3, :cond_0

    iget-wide v3, p0, Lcom/dualboot/widget/TextViewHeaderImg;->r:J

    cmp-long v3, v1, v3

    if-gtz v3, :cond_0

    iget-wide v3, p0, Lcom/dualboot/widget/TextViewHeaderImg;->q:J

    sub-long/2addr v1, v3

    long-to-float v1, v1

    iget-wide v2, p0, Lcom/dualboot/widget/TextViewHeaderImg;->r:J

    iget-wide v4, p0, Lcom/dualboot/widget/TextViewHeaderImg;->q:J

    sub-long/2addr v2, v4

    long-to-float v2, v2

    div-float/2addr v1, v2

    sub-float v1, v0, v1

    mul-float v2, v1, v1

    mul-float/2addr v1, v2

    sub-float v1, v0, v1

    iget v2, p0, Lcom/dualboot/widget/TextViewHeaderImg;->p:F

    iget v3, p0, Lcom/dualboot/widget/TextViewHeaderImg;->o:F

    sub-float/2addr v2, v3

    mul-float/2addr v1, v2

    iget v2, p0, Lcom/dualboot/widget/TextViewHeaderImg;->o:F

    add-float/2addr v1, v2

    iput v1, p0, Lcom/dualboot/widget/TextViewHeaderImg;->n:F

    invoke-direct {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->b()V

    :goto_0
    invoke-direct {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->a()V

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->isEnabled()Z

    move-result v1

    if-eqz v1, :cond_1

    :goto_1
    iget v1, p0, Lcom/dualboot/widget/TextViewHeaderImg;->f:I

    int-to-float v1, v1

    iget v2, p0, Lcom/dualboot/widget/TextViewHeaderImg;->n:F

    mul-float/2addr v1, v2

    mul-float/2addr v0, v1

    float-to-int v0, v0

    iget v1, p0, Lcom/dualboot/widget/TextViewHeaderImg;->c:I

    iget v2, p0, Lcom/dualboot/widget/TextViewHeaderImg;->d:I

    iget v3, p0, Lcom/dualboot/widget/TextViewHeaderImg;->e:I

    invoke-static {v0, v1, v2, v3}, Landroid/graphics/Color;->argb(IIII)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/dualboot/widget/TextViewHeaderImg;->setTextColor(I)V

    invoke-super {p0, p1}, Landroid/widget/TextView;->onDraw(Landroid/graphics/Canvas;)V

    return-void

    :cond_0
    iget v1, p0, Lcom/dualboot/widget/TextViewHeaderImg;->p:F

    iput v1, p0, Lcom/dualboot/widget/TextViewHeaderImg;->n:F

    goto :goto_0

    :cond_1
    const v0, 0x3e99999a    # 0.3f

    goto :goto_1
.end method

.method protected onMeasure(II)V
    .locals 8

    const/high16 v6, 0x40000000    # 2.0f

    iget-object v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->a:Lcom/dualboot/d/a;

    invoke-virtual {v0}, Lcom/dualboot/d/a;->getIntrinsicWidth()I

    move-result v2

    iget-object v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->a:Lcom/dualboot/d/a;

    invoke-virtual {v0}, Lcom/dualboot/d/a;->getIntrinsicHeight()I

    move-result v0

    int-to-float v0, v0

    iget v1, p0, Lcom/dualboot/widget/TextViewHeaderImg;->l:F

    mul-float/2addr v0, v1

    float-to-int v0, v0

    invoke-static {p1}, Landroid/view/View$MeasureSpec;->getMode(I)I

    move-result v4

    invoke-static {p1}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result v3

    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getMode(I)I

    move-result v5

    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result v1

    if-nez v4, :cond_1

    if-nez v5, :cond_1

    move v1, v2

    :goto_0
    iget v2, p0, Lcom/dualboot/widget/TextViewHeaderImg;->m:I

    if-gtz v2, :cond_7

    const v2, 0x7fffffff

    :goto_1
    if-ge v2, v1, :cond_0

    int-to-float v2, v2

    int-to-float v3, v1

    div-float/2addr v2, v3

    int-to-float v1, v1

    mul-float/2addr v1, v2

    float-to-int v1, v1

    int-to-float v0, v0

    mul-float/2addr v0, v2

    float-to-int v0, v0

    :cond_0
    invoke-virtual {p0, v1, v0}, Lcom/dualboot/widget/TextViewHeaderImg;->setMeasuredDimension(II)V

    return-void

    :cond_1
    if-ne v4, v6, :cond_2

    if-ne v5, v6, :cond_2

    move v0, v1

    move v1, v3

    goto :goto_0

    :cond_2
    if-nez v5, :cond_3

    int-to-float v1, v3

    int-to-float v2, v2

    div-float/2addr v1, v2

    int-to-float v0, v0

    mul-float/2addr v0, v1

    float-to-int v0, v0

    move v1, v3

    goto :goto_0

    :cond_3
    if-ne v5, v6, :cond_5

    if-nez v4, :cond_4

    int-to-float v3, v1

    int-to-float v0, v0

    div-float v0, v3, v0

    int-to-float v2, v2

    mul-float/2addr v0, v2

    float-to-int v0, v0

    move v7, v1

    move v1, v0

    move v0, v7

    goto :goto_0

    :cond_4
    int-to-float v4, v1

    int-to-float v0, v0

    div-float v0, v4, v0

    int-to-float v2, v2

    mul-float/2addr v0, v2

    float-to-int v0, v0

    invoke-static {v3, v0}, Ljava/lang/Math;->min(II)I

    move-result v0

    move v7, v1

    move v1, v0

    move v0, v7

    goto :goto_0

    :cond_5
    const/high16 v6, -0x80000000

    if-ne v5, v6, :cond_8

    if-nez v4, :cond_6

    int-to-float v3, v1

    int-to-float v0, v0

    div-float v0, v3, v0

    int-to-float v2, v2

    mul-float/2addr v0, v2

    float-to-int v0, v0

    move v7, v1

    move v1, v0

    move v0, v7

    goto :goto_0

    :cond_6
    int-to-float v4, v3

    int-to-float v2, v2

    div-float v2, v4, v2

    int-to-float v0, v0

    mul-float/2addr v0, v2

    float-to-int v0, v0

    invoke-static {v1, v0}, Ljava/lang/Math;->min(II)I

    move-result v0

    move v1, v3

    goto :goto_0

    :cond_7
    iget v2, p0, Lcom/dualboot/widget/TextViewHeaderImg;->m:I

    goto :goto_1

    :cond_8
    move v1, v2

    goto :goto_0
.end method

.method public performClick()Z
    .locals 10

    const/4 v3, 0x1

    const/4 v4, 0x0

    iget-boolean v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->i:Z

    if-eqz v0, :cond_0

    const/high16 v0, 0x3f800000    # 1.0f

    iget v1, p0, Lcom/dualboot/widget/TextViewHeaderImg;->p:F

    sub-float v5, v0, v1

    iget v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->n:F

    sub-float v0, v5, v0

    const/4 v1, 0x0

    cmpl-float v0, v0, v1

    if-lez v0, :cond_1

    move v2, v3

    :goto_0
    if-eqz v2, :cond_2

    iget-wide v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->g:J

    :goto_1
    invoke-direct {p0, v5, v0, v1}, Lcom/dualboot/widget/TextViewHeaderImg;->a(FJ)V

    iget-boolean v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->k:Z

    if-eqz v0, :cond_0

    if-eqz v2, :cond_0

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->getTop()I

    move-result v0

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    move v2, v0

    :goto_2
    instance-of v0, v1, Landroid/view/View;

    if-nez v0, :cond_3

    :cond_0
    :goto_3
    invoke-super {p0}, Landroid/widget/TextView;->performClick()Z

    move-result v0

    return v0

    :cond_1
    move v2, v4

    goto :goto_0

    :cond_2
    iget-wide v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->h:J

    goto :goto_1

    :cond_3
    move-object v0, v1

    check-cast v0, Landroid/view/View;

    instance-of v5, v0, Landroid/widget/ScrollView;

    if-eqz v5, :cond_8

    check-cast v0, Landroid/widget/ScrollView;

    invoke-virtual {v0}, Landroid/widget/ScrollView;->getHeight()I

    move-result v1

    invoke-virtual {v0}, Landroid/widget/ScrollView;->getVerticalFadingEdgeLength()I

    move-result v5

    invoke-virtual {v0}, Landroid/widget/ScrollView;->getScrollY()I

    move-result v6

    add-int v7, v6, v1

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->getHeight()I

    move-result v8

    add-int/2addr v8, v2

    sub-int v9, v2, v5

    add-int/2addr v8, v5

    sub-int v2, v8, v9

    if-lt v2, v1, :cond_4

    move v5, v3

    :goto_4
    if-ge v9, v6, :cond_5

    move v2, v3

    :goto_5
    if-le v8, v7, :cond_6

    move v1, v3

    :goto_6
    if-eqz v2, :cond_7

    invoke-virtual {v0, v4, v9}, Landroid/widget/ScrollView;->smoothScrollTo(II)V

    goto :goto_3

    :cond_4
    move v5, v4

    goto :goto_4

    :cond_5
    move v2, v4

    goto :goto_5

    :cond_6
    move v1, v4

    goto :goto_6

    :cond_7
    if-eqz v1, :cond_0

    if-nez v5, :cond_0

    sub-int v1, v8, v7

    invoke-virtual {v0, v4, v1}, Landroid/widget/ScrollView;->smoothScrollBy(II)V

    goto :goto_3

    :cond_8
    invoke-virtual {v0}, Landroid/view/View;->getTop()I

    move-result v0

    add-int/2addr v0, v2

    invoke-interface {v1}, Landroid/view/ViewParent;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    move v2, v0

    goto :goto_2
.end method

.method public setEnabled(Z)V
    .locals 3

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewHeaderImg;->isEnabled()Z

    move-result v0

    if-ne p1, v0, :cond_0

    :goto_0
    return-void

    :cond_0
    if-eqz p1, :cond_1

    const/high16 v0, 0x3f800000    # 1.0f

    :goto_1
    iget-object v1, p0, Lcom/dualboot/widget/TextViewHeaderImg;->a:Lcom/dualboot/d/a;

    const/high16 v2, 0x437f0000    # 255.0f

    mul-float/2addr v0, v2

    float-to-int v0, v0

    invoke-virtual {v1, v0}, Lcom/dualboot/d/a;->setAlpha(I)V

    invoke-super {p0, p1}, Landroid/widget/TextView;->setEnabled(Z)V

    goto :goto_0

    :cond_1
    const v0, 0x3e99999a    # 0.3f

    goto :goto_1
.end method

.method public setMaxWidth(I)V
    .locals 0

    invoke-super {p0, p1}, Landroid/widget/TextView;->setMaxWidth(I)V

    iput p1, p0, Lcom/dualboot/widget/TextViewHeaderImg;->m:I

    return-void
.end method

.method protected verifyDrawable(Landroid/graphics/drawable/Drawable;)Z
    .locals 1

    iget-object v0, p0, Lcom/dualboot/widget/TextViewHeaderImg;->a:Lcom/dualboot/d/a;

    if-ne p1, v0, :cond_0

    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_0
    invoke-super {p0, p1}, Landroid/widget/TextView;->verifyDrawable(Landroid/graphics/drawable/Drawable;)Z

    move-result v0

    goto :goto_0
.end method
