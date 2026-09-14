.class public Lcom/dualboot/activity/offer/a;
.super Landroid/app/Activity;


# instance fields
.field protected a:Lcom/dualboot/activity/offer/b;

.field protected b:Lcom/dualboot/activity/offer/c;


# direct methods
.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    iput-object v0, p0, Lcom/dualboot/activity/offer/a;->a:Lcom/dualboot/activity/offer/b;

    iput-object v0, p0, Lcom/dualboot/activity/offer/a;->b:Lcom/dualboot/activity/offer/c;

    return-void
.end method

.method public static a(Landroid/content/Intent;)Ljava/util/ArrayList;
    .locals 1

    new-instance v0, Lcom/dualboot/activity/offer/c;

    invoke-direct {v0, p0}, Lcom/dualboot/activity/offer/c;-><init>(Landroid/content/Intent;)V

    invoke-virtual {v0}, Lcom/dualboot/activity/offer/c;->a()Ljava/util/ArrayList;

    move-result-object v0

    return-object v0
.end method

.method protected static a()V
    .locals 0

    return-void
.end method

.method protected static a(Landroid/view/View;Ljava/lang/String;)Z
    .locals 2

    const/4 v0, 0x0

    instance-of v1, p0, Landroid/widget/TextView;

    if-nez v1, :cond_0

    :goto_0
    return v0

    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    const/16 v1, 0x8

    invoke-virtual {p0, v1}, Landroid/view/View;->setVisibility(I)V

    goto :goto_0

    :cond_1
    check-cast p0, Landroid/widget/TextView;

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setVisibility(I)V

    const/4 v0, 0x1

    goto :goto_0
.end method

.method private static a(Landroid/view/View;Ljava/lang/String;Z)Z
    .locals 5

    const/4 v2, 0x1

    const/4 v1, 0x0

    instance-of v0, p0, Landroid/widget/TextView;

    if-nez v0, :cond_0

    move v0, v1

    :goto_0
    return v0

    :cond_0
    move-object v0, p0

    check-cast v0, Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v3

    if-eqz p2, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->htmlEncode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    :cond_1
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    new-array v4, v2, [Ljava/lang/Object;

    aput-object p1, v4, v1

    invoke-static {v3, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    :cond_2
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/16 v0, 0x8

    invoke-virtual {p0, v0}, Landroid/view/View;->setVisibility(I)V

    move v0, v1

    goto :goto_0

    :cond_3
    if-eqz p2, :cond_4

    invoke-static {p1}, Landroid/text/Html;->fromHtml(Ljava/lang/String;)Landroid/text/Spanned;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :goto_1
    move v0, v2

    goto :goto_0

    :cond_4
    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1
.end method

.method private b()V
    .locals 5

    const/4 v2, 0x1

    iget-object v1, p0, Lcom/dualboot/activity/offer/a;->b:Lcom/dualboot/activity/offer/c;

    iget-object v0, v1, Lcom/dualboot/activity/offer/c;->a:Landroid/os/Bundle;

    invoke-virtual {v0}, Landroid/os/Bundle;->size()I

    move-result v0

    if-le v0, v2, :cond_0

    const/4 v0, 0x4

    :goto_0
    iget-object v1, p0, Lcom/dualboot/activity/offer/a;->b:Lcom/dualboot/activity/offer/c;

    iget-object v2, v1, Lcom/dualboot/activity/offer/c;->a:Landroid/os/Bundle;

    invoke-virtual {v2}, Landroid/os/Bundle;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_4

    const/4 v1, 0x0

    :goto_1
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "setResult() code: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v2

    const-string v3, "; entries: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    iget-object v3, p0, Lcom/dualboot/activity/offer/a;->b:Lcom/dualboot/activity/offer/c;

    invoke-virtual {v3}, Lcom/dualboot/activity/offer/c;->a()Ljava/util/ArrayList;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    invoke-virtual {p0, v0, v1}, Lcom/dualboot/activity/offer/a;->setResult(ILandroid/content/Intent;)V

    return-void

    :cond_0
    if-ne v0, v2, :cond_2

    iget-object v0, v1, Lcom/dualboot/activity/offer/c;->a:Landroid/os/Bundle;

    invoke-virtual {v0}, Landroid/os/Bundle;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_3

    :cond_2
    const/4 v0, 0x0

    goto :goto_0

    :cond_3
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    iget-object v3, v1, Lcom/dualboot/activity/offer/c;->a:Landroid/os/Bundle;

    const/4 v4, -0x1

    invoke-virtual {v3, v0, v4}, Landroid/os/Bundle;->getInt(Ljava/lang/String;I)I

    move-result v0

    if-lez v0, :cond_1

    goto :goto_0

    :cond_4
    new-instance v2, Landroid/os/Bundle;

    invoke-direct {v2}, Landroid/os/Bundle;-><init>()V

    iget-object v1, v1, Lcom/dualboot/activity/offer/c;->a:Landroid/os/Bundle;

    invoke-static {v2, v1}, Lcom/dualboot/activity/offer/c;->a(Landroid/os/Bundle;Landroid/os/Bundle;)V

    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    const-string v3, "com.dualboot.activity.offer.result_data"

    invoke-virtual {v1, v3, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;

    goto :goto_1
.end method

.method private b(Landroid/view/View;Lcom/dualboot/a/p;)Z
    .locals 13

    const/16 v12, 0x80

    const/16 v11, 0x8

    const/4 v4, 0x0

    const/4 v3, 0x1

    if-nez p1, :cond_1

    :cond_0
    :goto_0
    return v4

    :cond_1
    if-eqz p2, :cond_0

    sget v0, Lcom/dualboot/d;->tv_offer_name:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    sget v1, Lcom/dualboot/d;->tv_offer_price:I

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    sget v1, Lcom/dualboot/d;->tv_na:I

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    sget v1, Lcom/dualboot/d;->tv_offer_desc:I

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    sget v1, Lcom/dualboot/d;->tv_offer_prereq:I

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    sget v1, Lcom/dualboot/d;->tv_offer_theme:I

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    sget v1, Lcom/dualboot/d;->tv_offer_theme_thanks:I

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v9

    invoke-virtual {p2}, Lcom/dualboot/a/p;->b()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/dualboot/activity/offer/a;->a(Landroid/view/View;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_d

    move v1, v3

    :goto_1
    invoke-virtual {p2}, Lcom/dualboot/a/p;->b()Ljava/lang/String;

    move-result-object v10

    invoke-static {v6, v10, v3}, Lcom/dualboot/activity/offer/a;->a(Landroid/view/View;Ljava/lang/String;Z)Z

    move-result v6

    if-eqz v6, :cond_2

    move v1, v3

    :cond_2
    invoke-virtual {p2}, Lcom/dualboot/a/p;->b()Ljava/lang/String;

    move-result-object v6

    invoke-static {v9, v6, v3}, Lcom/dualboot/activity/offer/a;->a(Landroid/view/View;Ljava/lang/String;Z)Z

    move-result v6

    if-eqz v6, :cond_3

    move v1, v3

    :cond_3
    invoke-virtual {p2}, Lcom/dualboot/a/p;->d()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6, v3}, Lcom/dualboot/activity/offer/a;->a(Landroid/view/View;Ljava/lang/String;Z)Z

    move-result v6

    if-eqz v6, :cond_5

    invoke-virtual {p2}, Lcom/dualboot/a/p;->d()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-virtual {v5, v11}, Landroid/view/View;->setVisibility(I)V

    :cond_4
    move v1, v3

    :cond_5
    invoke-virtual {p2}, Lcom/dualboot/a/p;->c()Ljava/lang/String;

    move-result-object v5

    invoke-static {v7, v5, v4}, Lcom/dualboot/activity/offer/a;->a(Landroid/view/View;Ljava/lang/String;Z)Z

    move-result v5

    if-eqz v5, :cond_6

    move v1, v3

    :cond_6
    const/4 v5, 0x0

    invoke-static {v8, v5, v3}, Lcom/dualboot/activity/offer/a;->a(Landroid/view/View;Ljava/lang/String;Z)Z

    move-result v5

    if-eqz v5, :cond_7

    move v1, v3

    :cond_7
    instance-of v5, v0, Lcom/dualboot/widget/TextViewHeaderImg;

    if-eqz v5, :cond_a

    check-cast v0, Lcom/dualboot/widget/TextViewHeaderImg;

    invoke-virtual {p2, p0, v4}, Lcom/dualboot/a/p;->a(Landroid/content/Context;Z)Landroid/graphics/drawable/BitmapDrawable;

    move-result-object v5

    if-nez v5, :cond_8

    invoke-virtual {p0}, Lcom/dualboot/activity/offer/a;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v6, Lcom/dualboot/c;->icon_offer_default:I

    invoke-virtual {v1, v6}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v1

    instance-of v6, v1, Landroid/graphics/drawable/BitmapDrawable;

    if-eqz v6, :cond_8

    check-cast v1, Landroid/graphics/drawable/BitmapDrawable;

    move-object v5, v1

    :cond_8
    if-eqz v5, :cond_9

    new-instance v1, Lcom/dualboot/util/z;

    invoke-direct {v1, p0}, Lcom/dualboot/util/z;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v5, v12, v12}, Lcom/dualboot/util/z;->a(Landroid/graphics/drawable/BitmapDrawable;II)Landroid/graphics/drawable/BitmapDrawable;

    move-result-object v1

    if-eqz v1, :cond_c

    :goto_2
    invoke-virtual {v0, v1}, Lcom/dualboot/widget/TextViewHeaderImg;->a(Landroid/graphics/drawable/Drawable;)Z

    :cond_9
    move v1, v3

    :cond_a
    instance-of v0, v2, Landroid/widget/TextView;

    if-eqz v0, :cond_b

    invoke-virtual {v2, v11}, Landroid/view/View;->setVisibility(I)V

    invoke-virtual {p2}, Lcom/dualboot/a/p;->g()Z

    move-result v0

    if-nez v0, :cond_b

    invoke-virtual {p2}, Lcom/dualboot/a/p;->f()Lcom/dualboot/a/p;

    move-result-object v0

    if-eqz v0, :cond_b

    invoke-virtual {v0}, Lcom/dualboot/a/p;->b()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_b

    move-object v0, v2

    check-cast v0, Landroid/widget/TextView;

    sget v2, Lcom/dualboot/f;->offer_missing_requirement:I

    new-array v3, v3, [Ljava/lang/Object;

    aput-object v5, v3, v4

    invoke-virtual {p0, v2, v3}, Lcom/dualboot/activity/offer/a;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setVisibility(I)V

    :cond_b
    move v4, v1

    goto/16 :goto_0

    :cond_c
    move-object v1, v5

    goto :goto_2

    :cond_d
    move v1, v4

    goto/16 :goto_1
.end method


# virtual methods
.method protected final a(ILjava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/activity/offer/a;->b:Lcom/dualboot/activity/offer/c;

    iget-object v0, p0, Lcom/dualboot/activity/offer/a;->b:Lcom/dualboot/activity/offer/c;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v0, v0, Lcom/dualboot/activity/offer/c;->a:Landroid/os/Bundle;

    invoke-virtual {v0, p2, p1}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    :cond_0
    invoke-direct {p0}, Lcom/dualboot/activity/offer/a;->b()V

    return-void
.end method

.method protected final a(Landroid/view/View;Lcom/dualboot/a/p;)Z
    .locals 1

    invoke-direct {p0, p1, p2}, Lcom/dualboot/activity/offer/a;->b(Landroid/view/View;Lcom/dualboot/a/p;)Z

    move-result v0

    return v0
.end method

.method protected final a(Lcom/dualboot/a/p;)Z
    .locals 1

    invoke-virtual {p0}, Lcom/dualboot/activity/offer/a;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    invoke-direct {p0, v0, p1}, Lcom/dualboot/activity/offer/a;->b(Landroid/view/View;Lcom/dualboot/a/p;)Z

    move-result v0

    return v0
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2

    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    new-instance v0, Lcom/dualboot/activity/offer/b;

    invoke-virtual {p0}, Lcom/dualboot/activity/offer/a;->getIntent()Landroid/content/Intent;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/dualboot/activity/offer/b;-><init>(Landroid/content/Intent;)V

    iput-object v0, p0, Lcom/dualboot/activity/offer/a;->a:Lcom/dualboot/activity/offer/b;

    new-instance v0, Lcom/dualboot/activity/offer/c;

    invoke-direct {v0, p1}, Lcom/dualboot/activity/offer/c;-><init>(Landroid/os/Bundle;)V

    iput-object v0, p0, Lcom/dualboot/activity/offer/a;->b:Lcom/dualboot/activity/offer/c;

    invoke-direct {p0}, Lcom/dualboot/activity/offer/a;->b()V

    iget-object v0, p0, Lcom/dualboot/activity/offer/a;->a:Lcom/dualboot/activity/offer/b;

    invoke-virtual {v0}, Lcom/dualboot/activity/offer/b;->a()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/dualboot/activity/offer/a;->finish()V

    :cond_0
    return-void
.end method

.method protected onSaveInstanceState(Landroid/os/Bundle;)V
    .locals 2

    invoke-super {p0, p1}, Landroid/app/Activity;->onSaveInstanceState(Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/dualboot/activity/offer/a;->b:Lcom/dualboot/activity/offer/c;

    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    iget-object v0, v0, Lcom/dualboot/activity/offer/c;->a:Landroid/os/Bundle;

    invoke-static {v1, v0}, Lcom/dualboot/activity/offer/c;->a(Landroid/os/Bundle;Landroid/os/Bundle;)V

    const-string v0, "com.dualboot.activity.offer.result_data"

    invoke-virtual {p1, v0, v1}, Landroid/os/Bundle;->putBundle(Ljava/lang/String;Landroid/os/Bundle;)V

    return-void
.end method
