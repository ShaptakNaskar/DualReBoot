.class public final Lcom/dualboot/e/a/a;
.super Landroid/preference/CheckBoxPreference;

# interfaces
.implements Lcom/dualboot/e/a/q;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Z

.field private c:Z

.field private d:Lcom/dualboot/e/a/b;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/dualboot/e/a/a;-><init>(Landroid/content/Context;B)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;B)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/dualboot/e/a/a;-><init>(Landroid/content/Context;C)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;C)V
    .locals 2

    const/4 v1, 0x0

    const v0, 0x101008b

    invoke-direct {p0, p1, v1, v0}, Landroid/preference/CheckBoxPreference;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    iput-object v1, p0, Lcom/dualboot/e/a/a;->a:Ljava/lang/String;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/dualboot/e/a/a;->b:Z

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/dualboot/e/a/a;->c:Z

    sget-object v0, Lcom/dualboot/e/a/b;->a:Lcom/dualboot/e/a/b;

    iput-object v0, p0, Lcom/dualboot/e/a/a;->d:Lcom/dualboot/e/a/b;

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/a/a;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final b()V
    .locals 1

    const/4 v0, 0x0

    invoke-super {p0, v0}, Landroid/preference/CheckBoxPreference;->setEnabled(Z)V

    invoke-super {p0, v0}, Landroid/preference/CheckBoxPreference;->setSelectable(Z)V

    return-void
.end method

.method public final c()V
    .locals 0

    invoke-virtual {p0}, Lcom/dualboot/e/a/a;->d()V

    return-void
.end method

.method public final d()V
    .locals 9

    const/4 v7, 0x0

    const/16 v8, 0x60

    const/4 v4, 0x1

    const/4 v3, 0x0

    invoke-virtual {p0}, Lcom/dualboot/e/a/a;->getKey()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/e/a/a;->a:Ljava/lang/String;

    iput-boolean v3, p0, Lcom/dualboot/e/a/a;->b:Z

    iput-boolean v4, p0, Lcom/dualboot/e/a/a;->c:Z

    invoke-virtual {p0}, Lcom/dualboot/e/a/a;->getTitle()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0}, Lcom/dualboot/e/a/a;->getSummary()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v0, Ljava/lang/String;

    invoke-direct {v0}, Ljava/lang/String;-><init>()V

    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v5

    if-eqz v5, :cond_1

    iget-object v6, p0, Lcom/dualboot/e/a/a;->a:Ljava/lang/String;

    invoke-virtual {v5, v6}, Lcom/dualboot/a/a;->b(Ljava/lang/String;)Lcom/dualboot/a/p;

    move-result-object v5

    if-eqz v5, :cond_1

    invoke-virtual {v5}, Lcom/dualboot/a/p;->h()Z

    move-result v6

    iput-boolean v6, p0, Lcom/dualboot/e/a/a;->b:Z

    invoke-virtual {v5}, Lcom/dualboot/a/p;->g()Z

    move-result v6

    iput-boolean v6, p0, Lcom/dualboot/e/a/a;->c:Z

    iget-boolean v6, p0, Lcom/dualboot/e/a/a;->c:Z

    if-nez v6, :cond_0

    invoke-virtual {v5}, Lcom/dualboot/a/p;->f()Lcom/dualboot/a/p;

    invoke-virtual {v5}, Lcom/dualboot/a/p;->f()Lcom/dualboot/a/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/dualboot/a/p;->b()Ljava/lang/String;

    move-result-object v0

    :cond_0
    invoke-virtual {v5}, Lcom/dualboot/a/p;->i()Z

    move-result v6

    if-eqz v6, :cond_1

    invoke-virtual {v5}, Lcom/dualboot/a/p;->b()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5}, Lcom/dualboot/a/p;->c()Ljava/lang/String;

    move-result-object v1

    :cond_1
    invoke-virtual {v2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v2}, Lcom/dualboot/e/a/a;->setTitle(Ljava/lang/CharSequence;)V

    invoke-virtual {p0, v1}, Lcom/dualboot/e/a/a;->setSummary(Ljava/lang/CharSequence;)V

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    iget-boolean v2, p0, Lcom/dualboot/e/a/a;->c:Z

    if-eqz v2, :cond_5

    new-instance v0, Lcom/dualboot/util/y;

    invoke-virtual {p0}, Lcom/dualboot/e/a/a;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/dualboot/util/y;-><init>(Landroid/content/Context;)V

    sget v2, Lcom/dualboot/f;->OfferSummaryOwned:I

    new-array v5, v3, [I

    invoke-virtual {v0, v2, v5}, Lcom/dualboot/util/y;->a(I[I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->htmlEncode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    sget v5, Lcom/dualboot/f;->OfferSummaryNotOwned:I

    new-array v6, v3, [I

    invoke-virtual {v0, v5, v6}, Lcom/dualboot/util/y;->a(I[I)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->htmlEncode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    new-array v5, v4, [Ljava/lang/Object;

    aput-object v1, v5, v3

    invoke-static {v2, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/Html;->fromHtml(Ljava/lang/String;)Landroid/text/Spanned;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/dualboot/e/a/a;->setSummaryOn(Ljava/lang/CharSequence;)V

    :cond_2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    new-array v2, v4, [Ljava/lang/Object;

    aput-object v1, v2, v3

    invoke-static {v0, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/Html;->fromHtml(Ljava/lang/String;)Landroid/text/Spanned;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/a;->setSummaryOff(Ljava/lang/CharSequence;)V

    :cond_3
    :goto_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xb

    if-lt v0, v1, :cond_e

    iget-boolean v0, p0, Lcom/dualboot/e/a/a;->b:Z

    if-eqz v0, :cond_6

    iget-boolean v0, p0, Lcom/dualboot/e/a/a;->c:Z

    if-eqz v0, :cond_6

    move v6, v4

    :goto_1
    if-eqz v6, :cond_7

    sget-object v0, Lcom/dualboot/e/a/b;->b:Lcom/dualboot/e/a/b;

    move-object v1, v0

    move v2, v3

    :goto_2
    iget-object v0, p0, Lcom/dualboot/e/a/a;->d:Lcom/dualboot/e/a/b;

    if-eq v0, v1, :cond_9

    move v0, v4

    :goto_3
    if-nez v0, :cond_a

    move v0, v4

    :goto_4
    if-nez v0, :cond_4

    sget v0, Lcom/dualboot/e;->pref_iab_customize:I

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/a;->setWidgetLayoutResource(I)V

    :cond_4
    iget-boolean v0, p0, Lcom/dualboot/e/a/a;->b:Z

    if-nez v0, :cond_f

    iget-boolean v0, p0, Lcom/dualboot/e/a/a;->c:Z

    if-eqz v0, :cond_f

    move v0, v4

    :goto_5
    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/a;->setEnabled(Z)V

    iget-boolean v0, p0, Lcom/dualboot/e/a/a;->b:Z

    if-nez v0, :cond_10

    iget-boolean v0, p0, Lcom/dualboot/e/a/a;->c:Z

    if-eqz v0, :cond_10

    move v0, v4

    :goto_6
    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/a;->setSelectable(Z)V

    iget-boolean v0, p0, Lcom/dualboot/e/a/a;->b:Z

    if-eqz v0, :cond_11

    iget-boolean v0, p0, Lcom/dualboot/e/a/a;->c:Z

    if-eqz v0, :cond_11

    :goto_7
    invoke-virtual {p0, v4}, Lcom/dualboot/e/a/a;->setChecked(Z)V

    invoke-virtual {p0}, Lcom/dualboot/e/a/a;->notifyChanged()V

    return-void

    :cond_5
    invoke-virtual {p0, v7}, Lcom/dualboot/e/a/a;->setSummaryOn(Ljava/lang/CharSequence;)V

    invoke-virtual {p0, v7}, Lcom/dualboot/e/a/a;->setSummaryOff(Ljava/lang/CharSequence;)V

    invoke-virtual {p0}, Lcom/dualboot/e/a/a;->getContext()Landroid/content/Context;

    move-result-object v1

    sget v2, Lcom/dualboot/f;->offer_missing_requirement:I

    new-array v5, v4, [Ljava/lang/Object;

    aput-object v0, v5, v3

    invoke-virtual {v1, v2, v5}, Landroid/content/Context;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/a;->setSummary(Ljava/lang/CharSequence;)V

    goto :goto_0

    :cond_6
    move v6, v3

    goto :goto_1

    :cond_7
    iget-boolean v0, p0, Lcom/dualboot/e/a/a;->c:Z

    if-eqz v0, :cond_8

    sget-object v0, Lcom/dualboot/e/a/b;->c:Lcom/dualboot/e/a/b;

    move-object v1, v0

    move v2, v3

    goto :goto_2

    :cond_8
    sget-object v0, Lcom/dualboot/e/a/b;->d:Lcom/dualboot/e/a/b;

    move-object v1, v0

    move v2, v4

    goto :goto_2

    :cond_9
    move v0, v3

    goto :goto_3

    :cond_a
    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v0

    if-eqz v0, :cond_e

    iget-object v5, p0, Lcom/dualboot/e/a/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v5}, Lcom/dualboot/a/a;->b(Ljava/lang/String;)Lcom/dualboot/a/p;

    move-result-object v0

    if-eqz v0, :cond_e

    invoke-virtual {p0}, Lcom/dualboot/e/a/a;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-virtual {v0, v5, v6}, Lcom/dualboot/a/p;->a(Landroid/content/Context;Z)Landroid/graphics/drawable/BitmapDrawable;

    move-result-object v0

    if-nez v0, :cond_12

    invoke-virtual {p0}, Lcom/dualboot/e/a/a;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-virtual {v5}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v5

    sget v7, Lcom/dualboot/c;->icon_offer_default:I

    invoke-virtual {v5, v7}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v5

    instance-of v7, v5, Landroid/graphics/drawable/BitmapDrawable;

    if-eqz v7, :cond_12

    invoke-virtual {v5}, Landroid/graphics/drawable/Drawable;->getConstantState()Landroid/graphics/drawable/Drawable$ConstantState;

    move-result-object v0

    invoke-virtual {p0}, Lcom/dualboot/e/a/a;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-virtual {v5}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v5

    invoke-virtual {v0, v5}, Landroid/graphics/drawable/Drawable$ConstantState;->newDrawable(Landroid/content/res/Resources;)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    invoke-virtual {v0}, Landroid/graphics/drawable/Drawable;->mutate()Landroid/graphics/drawable/Drawable;

    check-cast v0, Landroid/graphics/drawable/BitmapDrawable;

    if-eqz v6, :cond_12

    move-object v5, v0

    move v0, v4

    :goto_8
    if-eqz v5, :cond_e

    new-instance v2, Lcom/dualboot/util/z;

    invoke-virtual {p0}, Lcom/dualboot/e/a/a;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-direct {v2, v7}, Lcom/dualboot/util/z;-><init>(Landroid/content/Context;)V

    invoke-virtual {v2, v5, v8, v8}, Lcom/dualboot/util/z;->a(Landroid/graphics/drawable/BitmapDrawable;II)Landroid/graphics/drawable/BitmapDrawable;

    move-result-object v2

    if-eqz v2, :cond_c

    :goto_9
    if-nez v6, :cond_b

    iget-boolean v5, p0, Lcom/dualboot/e/a/a;->c:Z

    if-nez v5, :cond_b

    move v0, v4

    :cond_b
    if-eqz v0, :cond_d

    const/16 v0, 0x55

    :goto_a
    invoke-virtual {v2, v0}, Landroid/graphics/drawable/BitmapDrawable;->setAlpha(I)V

    invoke-virtual {p0, v2}, Lcom/dualboot/e/a/a;->setIcon(Landroid/graphics/drawable/Drawable;)V

    iput-object v1, p0, Lcom/dualboot/e/a/a;->d:Lcom/dualboot/e/a/b;

    move v0, v4

    goto/16 :goto_4

    :cond_c
    move-object v2, v5

    goto :goto_9

    :cond_d
    const/16 v0, 0xfe

    goto :goto_a

    :cond_e
    sget-object v0, Lcom/dualboot/e/a/b;->a:Lcom/dualboot/e/a/b;

    iput-object v0, p0, Lcom/dualboot/e/a/a;->d:Lcom/dualboot/e/a/b;

    move v0, v3

    goto/16 :goto_4

    :cond_f
    move v0, v3

    goto/16 :goto_5

    :cond_10
    move v0, v3

    goto/16 :goto_6

    :cond_11
    move v4, v3

    goto/16 :goto_7

    :cond_12
    move-object v5, v0

    move v0, v2

    goto :goto_8
.end method

.method public final setChecked(Z)V
    .locals 1

    iget-boolean v0, p0, Lcom/dualboot/e/a/a;->b:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/dualboot/e/a/a;->c:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    :goto_0
    invoke-super {p0, v0}, Landroid/preference/CheckBoxPreference;->setChecked(Z)V

    return-void

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method

.method public final setEnabled(Z)V
    .locals 1

    iget-boolean v0, p0, Lcom/dualboot/e/a/a;->b:Z

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/dualboot/e/a/a;->c:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    :goto_0
    invoke-super {p0, v0}, Landroid/preference/CheckBoxPreference;->setEnabled(Z)V

    return-void

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method

.method public final setSelectable(Z)V
    .locals 1

    iget-boolean v0, p0, Lcom/dualboot/e/a/a;->b:Z

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/dualboot/e/a/a;->c:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    :goto_0
    invoke-super {p0, v0}, Landroid/preference/CheckBoxPreference;->setSelectable(Z)V

    return-void

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method
