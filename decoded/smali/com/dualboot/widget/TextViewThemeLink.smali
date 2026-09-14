.class public Lcom/dualboot/widget/TextViewThemeLink;
.super Lcom/dualboot/widget/TextViewLink;


# instance fields
.field protected g:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/dualboot/widget/TextViewThemeLink;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/dualboot/widget/TextViewThemeLink;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 2

    const/4 v1, 0x0

    invoke-direct {p0, p1, p2, p3}, Lcom/dualboot/widget/TextViewLink;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/widget/TextViewThemeLink;->g:Ljava/lang/String;

    sget-object v0, Lcom/dualboot/h;->TextViewThemeLink:[I

    invoke-virtual {p1, p2, v0, p3, v1}, Landroid/content/Context;->obtainStyledAttributes(Landroid/util/AttributeSet;[III)Landroid/content/res/TypedArray;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/content/res/TypedArray;->getString(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/dualboot/widget/TextViewThemeLink;->g:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewThemeLink;->b()Z

    invoke-virtual {p0}, Lcom/dualboot/widget/TextViewThemeLink;->c()V

    invoke-virtual {v0}, Landroid/content/res/TypedArray;->recycle()V

    return-void
.end method


# virtual methods
.method protected final a()Z
    .locals 1

    invoke-super {p0}, Lcom/dualboot/widget/TextViewLink;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/widget/TextViewThemeLink;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/widget/TextViewThemeLink;->g:Ljava/lang/String;

    return-object v0
.end method
