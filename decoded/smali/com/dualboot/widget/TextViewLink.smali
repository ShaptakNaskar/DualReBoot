.class public Lcom/dualboot/widget/TextViewLink;
.super Landroid/widget/TextView;


# instance fields
.field protected a:Lcom/dualboot/widget/a;

.field protected b:I

.field protected final c:Z

.field protected final d:I

.field protected final e:I

.field protected f:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/dualboot/widget/TextViewLink;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/dualboot/widget/TextViewLink;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 8

    const/4 v7, 0x0

    const/high16 v6, 0x3f400000    # 0.75f

    const/4 v2, 0x0

    const/high16 v5, 0x437f0000    # 255.0f

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/TextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    iput-object v7, p0, Lcom/dualboot/widget/TextViewLink;->a:Lcom/dualboot/widget/a;

    iput v2, p0, Lcom/dualboot/widget/TextViewLink;->b:I

    iput-boolean v2, p0, Lcom/dualboot/widget/TextViewLink;->f:Z

    sget-object v0, Lcom/dualboot/h;->TextViewLink:[I

    invoke-virtual {p1, p2, v0, p3, v2}, Landroid/content/Context;->obtainStyledAttributes(Landroid/util/AttributeSet;[III)Landroid/content/res/TypedArray;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v2, v1}, Landroid/content/res/TypedArray;->getBoolean(IZ)Z

    move-result v1

    iput-boolean v1, p0, Lcom/dualboot/widget/TextViewLink;->c:Z

    invoke-virtual {v0}, Landroid/content/res/TypedArray;->recycle()V

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewLink;->getLinkTextColors()Landroid/content/res/ColorStateList;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/ColorStateList;->getDefaultColor()I

    move-result v0

    iput v0, p0, Lcom/dualboot/widget/TextViewLink;->d:I

    iget-boolean v0, p0, Lcom/dualboot/widget/TextViewLink;->c:Z

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/dualboot/widget/TextViewLink;->d:I

    invoke-virtual {p0, v0}, Lcom/dualboot/widget/TextViewLink;->setTextColor(I)V

    :cond_0
    iget v0, p0, Lcom/dualboot/widget/TextViewLink;->d:I

    invoke-static {v0}, Landroid/graphics/Color;->red(I)I

    move-result v0

    int-to-float v0, v0

    div-float/2addr v0, v5

    iget v1, p0, Lcom/dualboot/widget/TextViewLink;->d:I

    invoke-static {v1}, Landroid/graphics/Color;->green(I)I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v1, v5

    iget v2, p0, Lcom/dualboot/widget/TextViewLink;->d:I

    invoke-static {v2}, Landroid/graphics/Color;->blue(I)I

    move-result v2

    int-to-float v2, v2

    div-float/2addr v2, v5

    const v3, 0x3e991687    # 0.299f

    mul-float/2addr v3, v0

    const v4, 0x3f1645a2    # 0.587f

    mul-float/2addr v4, v1

    add-float/2addr v3, v4

    const v4, 0x3de978d5    # 0.114f

    mul-float/2addr v4, v2

    add-float/2addr v3, v4

    sub-float v4, v3, v0

    mul-float/2addr v4, v6

    add-float/2addr v0, v4

    mul-float/2addr v0, v5

    sub-float v4, v3, v1

    mul-float/2addr v4, v6

    add-float/2addr v1, v4

    mul-float/2addr v1, v5

    sub-float/2addr v3, v2

    mul-float/2addr v3, v6

    add-float/2addr v2, v3

    mul-float/2addr v2, v5

    iget v3, p0, Lcom/dualboot/widget/TextViewLink;->d:I

    invoke-static {v3}, Landroid/graphics/Color;->alpha(I)I

    move-result v3

    float-to-int v0, v0

    float-to-int v1, v1

    float-to-int v2, v2

    invoke-static {v3, v0, v1, v2}, Landroid/graphics/Color;->argb(IIII)I

    move-result v0

    iput v0, p0, Lcom/dualboot/widget/TextViewLink;->e:I

    invoke-direct {p0, v7}, Lcom/dualboot/widget/TextViewLink;->a(Lcom/dualboot/widget/a;)V

    return-void
.end method

.method public static a(Landroid/app/Activity;)V
    .locals 1

    const/4 v0, 0x1

    invoke-static {p0, v0}, Lcom/dualboot/widget/TextViewLink;->a(Landroid/app/Activity;Z)V

    return-void
.end method

.method public static a(Landroid/app/Activity;Z)V
    .locals 1

    instance-of v0, p0, Lcom/dualboot/widget/a;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    check-cast p0, Lcom/dualboot/widget/a;

    if-eqz p1, :cond_1

    :goto_0
    invoke-static {v0, p0}, Lcom/dualboot/widget/TextViewLink;->a(Landroid/view/View;Lcom/dualboot/widget/a;)V

    :cond_0
    return-void

    :cond_1
    const/4 p0, 0x0

    goto :goto_0
.end method

.method private static a(Landroid/view/View;Lcom/dualboot/widget/a;)V
    .locals 3

    if-nez p0, :cond_1

    :cond_0
    :goto_0
    return-void

    :cond_1
    instance-of v0, p0, Lcom/dualboot/widget/TextViewLink;

    if-eqz v0, :cond_2

    check-cast p0, Lcom/dualboot/widget/TextViewLink;

    invoke-direct {p0, p1}, Lcom/dualboot/widget/TextViewLink;->a(Lcom/dualboot/widget/a;)V

    goto :goto_0

    :cond_2
    instance-of v0, p0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    check-cast p0, Landroid/view/ViewGroup;

    invoke-virtual {p0}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v1

    const/4 v0, 0x0

    :goto_1
    if-ge v0, v1, :cond_0

    invoke-virtual {p0, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    invoke-static {v2, p1}, Lcom/dualboot/widget/TextViewLink;->a(Landroid/view/View;Lcom/dualboot/widget/a;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_1
.end method

.method private a(Lcom/dualboot/widget/a;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/widget/TextViewLink;->a:Lcom/dualboot/widget/a;

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewLink;->b()Z

    return-void
.end method

.method private d()V
    .locals 3

    const/4 v1, 0x0

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewLink;->isEnabled()Z

    move-result v0

    if-nez v0, :cond_3

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewLink;->isInEditMode()Z

    move-result v0

    if-nez v0, :cond_3

    move v0, v1

    :goto_0
    iget v2, p0, Lcom/dualboot/widget/TextViewLink;->b:I

    and-int/lit8 v2, v2, 0x1

    if-lez v2, :cond_0

    iget-boolean v2, p0, Lcom/dualboot/widget/TextViewLink;->c:Z

    if-eqz v2, :cond_0

    if-eqz v0, :cond_4

    iget v2, p0, Lcom/dualboot/widget/TextViewLink;->d:I

    :goto_1
    invoke-virtual {p0, v2}, Lcom/dualboot/widget/TextViewLink;->setTextColor(I)V

    :cond_0
    iget v2, p0, Lcom/dualboot/widget/TextViewLink;->b:I

    and-int/lit8 v2, v2, 0x2

    if-lez v2, :cond_1

    if-eqz v0, :cond_5

    move v2, v1

    :goto_2
    invoke-virtual {p0, v2}, Lcom/dualboot/widget/TextViewLink;->setVisibility(I)V

    :cond_1
    iget v2, p0, Lcom/dualboot/widget/TextViewLink;->b:I

    and-int/lit8 v2, v2, 0x4

    if-lez v2, :cond_2

    if-eqz v0, :cond_6

    :goto_3
    invoke-virtual {p0, v1}, Lcom/dualboot/widget/TextViewLink;->setVisibility(I)V

    :cond_2
    return-void

    :cond_3
    const/4 v0, 0x1

    goto :goto_0

    :cond_4
    iget v2, p0, Lcom/dualboot/widget/TextViewLink;->e:I

    goto :goto_1

    :cond_5
    const/4 v2, 0x4

    goto :goto_2

    :cond_6
    const/16 v1, 0x8

    goto :goto_3
.end method


# virtual methods
.method protected a()Z
    .locals 1

    iget-object v0, p0, Lcom/dualboot/widget/TextViewLink;->a:Lcom/dualboot/widget/a;

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/dualboot/widget/TextViewLink;->f:Z

    if-nez v0, :cond_0

    const/4 v0, 0x0

    :goto_0
    return v0

    :cond_0
    const/4 v0, 0x1

    goto :goto_0
.end method

.method protected final b()Z
    .locals 3

    const/4 v2, 0x1

    const/4 v1, 0x0

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewLink;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0, v2}, Lcom/dualboot/widget/TextViewLink;->setEnabled(Z)V

    invoke-virtual {p0, v2}, Lcom/dualboot/widget/TextViewLink;->setClickable(Z)V

    :goto_0
    invoke-direct {p0}, Lcom/dualboot/widget/TextViewLink;->d()V

    return v0

    :cond_0
    invoke-virtual {p0, v1}, Lcom/dualboot/widget/TextViewLink;->setClickable(Z)V

    invoke-virtual {p0, v1}, Lcom/dualboot/widget/TextViewLink;->setEnabled(Z)V

    goto :goto_0
.end method

.method public final c()V
    .locals 1

    const/4 v0, 0x1

    iput v0, p0, Lcom/dualboot/widget/TextViewLink;->b:I

    invoke-direct {p0}, Lcom/dualboot/widget/TextViewLink;->d()V

    return-void
.end method

.method public performClick()Z
    .locals 2

    invoke-super {p0}, Landroid/widget/TextView;->performClick()Z

    move-result v0

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewLink;->isClickable()Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/dualboot/widget/TextViewLink;->a:Lcom/dualboot/widget/a;

    if-eqz v1, :cond_0

    iget-object v0, p0, Lcom/dualboot/widget/TextViewLink;->a:Lcom/dualboot/widget/a;

    invoke-interface {v0, p0}, Lcom/dualboot/widget/a;->a(Lcom/dualboot/widget/TextViewLink;)V

    const/4 v0, 0x1

    :cond_0
    return v0
.end method

.method public setOnClickListener(Landroid/view/View$OnClickListener;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    if-eqz p1, :cond_0

    const/4 v0, 0x1

    :goto_0
    iput-boolean v0, p0, Lcom/dualboot/widget/TextViewLink;->f:Z

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewLink;->b()Z

    return-void

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method
