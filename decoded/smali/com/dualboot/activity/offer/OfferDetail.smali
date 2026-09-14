.class public Lcom/dualboot/activity/offer/OfferDetail;
.super Lcom/dualboot/activity/offer/a;

# interfaces
.implements Lcom/dualboot/a/l;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/dualboot/activity/offer/a;-><init>()V

    return-void
.end method

.method private a(Landroid/view/View;Landroid/content/Intent;)Z
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_1

    :cond_0
    :goto_0
    return v0

    :cond_1
    if-eqz p2, :cond_0

    invoke-virtual {p0}, Lcom/dualboot/activity/offer/OfferDetail;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p2, v0}, Landroid/content/Intent;->resolveActivity(Landroid/content/pm/PackageManager;)Landroid/content/ComponentName;

    move-result-object v1

    if-eqz v1, :cond_2

    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0, p2}, Landroid/content/Intent;-><init>(Landroid/content/Intent;)V

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    move-object p2, v0

    :cond_2
    new-instance v0, Lcom/dualboot/activity/offer/e;

    invoke-direct {v0, p0, p2}, Lcom/dualboot/activity/offer/e;-><init>(Lcom/dualboot/activity/offer/OfferDetail;Landroid/content/Intent;)V

    invoke-virtual {p1, v0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    const/4 v0, 0x1

    goto :goto_0
.end method

.method private b(Landroid/view/View;Ljava/lang/String;)Z
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_1

    :cond_0
    :goto_0
    return v0

    :cond_1
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "android.intent.action.VIEW"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    invoke-direct {p0, p1, v0}, Lcom/dualboot/activity/offer/OfferDetail;->a(Landroid/view/View;Landroid/content/Intent;)Z

    move-result v0

    goto :goto_0
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Purchase succeeded for [ "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, " ]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    const/4 v0, 0x3

    invoke-virtual {p0, v0, p1}, Lcom/dualboot/activity/offer/OfferDetail;->a(ILjava/lang/String;)V

    invoke-virtual {p0}, Lcom/dualboot/activity/offer/OfferDetail;->finish()V

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Purchase failed / cancelled for [ "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, " ]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    const/4 v0, 0x1

    invoke-virtual {p0, v0, p1}, Lcom/dualboot/activity/offer/OfferDetail;->a(ILjava/lang/String;)V

    return-void
.end method

.method protected onActivityResult(IILandroid/content/Intent;)V
    .locals 1

    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/dualboot/a/a;->a(IILandroid/content/Intent;)Z

    move-result v0

    if-eqz v0, :cond_0

    :cond_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 15

    invoke-super/range {p0 .. p1}, Lcom/dualboot/activity/offer/a;->onCreate(Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/dualboot/activity/offer/OfferDetail;->a:Lcom/dualboot/activity/offer/b;

    iget-object v0, v0, Lcom/dualboot/activity/offer/b;->a:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    iget-object v0, p0, Lcom/dualboot/activity/offer/OfferDetail;->a:Lcom/dualboot/activity/offer/b;

    iget-object v0, v0, Lcom/dualboot/activity/offer/b;->a:Ljava/util/ArrayList;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/dualboot/a/a;->b(Ljava/lang/String;)Lcom/dualboot/a/p;

    move-result-object v1

    if-nez v1, :cond_1

    invoke-virtual {p0}, Lcom/dualboot/activity/offer/OfferDetail;->finish()V

    :cond_0
    :goto_0
    return-void

    :cond_1
    sget v2, Lcom/dualboot/e;->offer_details:I

    invoke-virtual {p0, v2}, Lcom/dualboot/activity/offer/OfferDetail;->setContentView(I)V

    invoke-virtual {p0, v1}, Lcom/dualboot/activity/offer/OfferDetail;->a(Lcom/dualboot/a/p;)Z

    move-result v1

    if-nez v1, :cond_2

    invoke-virtual {p0}, Lcom/dualboot/activity/offer/OfferDetail;->finish()V

    goto :goto_0

    :cond_2
    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/dualboot/a/a;->a(Ljava/lang/String;)Ljava/util/Collection;

    move-result-object v3

    if-eqz v3, :cond_3

    invoke-interface {v3}, Ljava/util/Collection;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_a

    :cond_3
    const/4 v2, 0x1

    invoke-virtual {p0, v2, v0}, Lcom/dualboot/activity/offer/OfferDetail;->a(ILjava/lang/String;)V

    invoke-virtual {v1, v0}, Lcom/dualboot/a/a;->b(Ljava/lang/String;)Lcom/dualboot/a/p;

    move-result-object v0

    if-nez v0, :cond_5

    const/4 v2, 0x0

    :cond_4
    :goto_1
    if-nez v2, :cond_0

    invoke-virtual {p0}, Lcom/dualboot/activity/offer/OfferDetail;->finish()V

    goto :goto_0

    :cond_5
    sget v1, Lcom/dualboot/d;->tv_offer_desc:I

    invoke-virtual {p0, v1}, Lcom/dualboot/activity/offer/OfferDetail;->findViewById(I)Landroid/view/View;

    move-result-object v1

    sget v2, Lcom/dualboot/d;->tv_na:I

    invoke-virtual {p0, v2}, Lcom/dualboot/activity/offer/OfferDetail;->findViewById(I)Landroid/view/View;

    move-result-object v2

    invoke-virtual {v0}, Lcom/dualboot/a/p;->h()Z

    move-result v3

    if-eqz v3, :cond_7

    sget v0, Lcom/dualboot/f;->OfferSummaryOwned:I

    invoke-virtual {p0, v0}, Lcom/dualboot/activity/offer/OfferDetail;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/dualboot/activity/offer/OfferDetail;->a(Landroid/view/View;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_6

    const/4 v0, 0x0

    invoke-static {v2, v0}, Lcom/dualboot/activity/offer/OfferDetail;->a(Landroid/view/View;Ljava/lang/String;)Z

    const/4 v2, 0x1

    goto :goto_1

    :cond_6
    const/4 v2, 0x0

    goto :goto_1

    :cond_7
    sget v3, Lcom/dualboot/f;->offer_error_summary:I

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/Object;

    const/4 v5, 0x0

    invoke-virtual {v0}, Lcom/dualboot/a/p;->b()Ljava/lang/String;

    move-result-object v0

    aput-object v0, v4, v5

    invoke-virtual {p0, v3, v4}, Lcom/dualboot/activity/offer/OfferDetail;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/dualboot/activity/offer/OfferDetail;->a(Landroid/view/View;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_9

    sget v0, Lcom/dualboot/f;->offer_error_help:I

    invoke-virtual {p0, v0}, Lcom/dualboot/activity/offer/OfferDetail;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/dualboot/activity/offer/OfferDetail;->a(Landroid/view/View;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_9

    sget v0, Lcom/dualboot/d;->help_intent_frame:I

    invoke-virtual {p0, v0}, Lcom/dualboot/activity/offer/OfferDetail;->findViewById(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_8

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    sget v0, Lcom/dualboot/d;->intent_settings_network:I

    invoke-virtual {p0, v0}, Lcom/dualboot/activity/offer/OfferDetail;->findViewById(I)Landroid/view/View;

    move-result-object v0

    new-instance v1, Landroid/content/Intent;

    const-string v2, "android.settings.WIRELESS_SETTINGS"

    invoke-direct {v1, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    invoke-direct {p0, v0, v1}, Lcom/dualboot/activity/offer/OfferDetail;->a(Landroid/view/View;Landroid/content/Intent;)Z

    sget v0, Lcom/dualboot/d;->intent_play_services:I

    invoke-virtual {p0, v0}, Lcom/dualboot/activity/offer/OfferDetail;->findViewById(I)Landroid/view/View;

    move-result-object v0

    sget v1, Lcom/dualboot/f;->offer_help_url_google_play_services:I

    invoke-virtual {p0, v1}, Lcom/dualboot/activity/offer/OfferDetail;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v0, v1}, Lcom/dualboot/activity/offer/OfferDetail;->b(Landroid/view/View;Ljava/lang/String;)Z

    sget v0, Lcom/dualboot/d;->intent_help_url:I

    invoke-virtual {p0, v0}, Lcom/dualboot/activity/offer/OfferDetail;->findViewById(I)Landroid/view/View;

    move-result-object v0

    sget v1, Lcom/dualboot/f;->offer_help_url_dualboot_support:I

    invoke-virtual {p0, v1}, Lcom/dualboot/activity/offer/OfferDetail;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v0, v1}, Lcom/dualboot/activity/offer/OfferDetail;->b(Landroid/view/View;Ljava/lang/String;)Z

    sget v0, Lcom/dualboot/d;->help_intent_more_resources:I

    invoke-virtual {p0, v0}, Lcom/dualboot/activity/offer/OfferDetail;->findViewById(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_8

    sget v1, Lcom/dualboot/d;->help_intent_buttons:I

    invoke-virtual {p0, v1}, Lcom/dualboot/activity/offer/OfferDetail;->findViewById(I)Landroid/view/View;

    move-result-object v1

    if-eqz v1, :cond_8

    new-instance v2, Lcom/dualboot/activity/offer/f;

    invoke-direct {v2, p0, v1}, Lcom/dualboot/activity/offer/f;-><init>(Lcom/dualboot/activity/offer/OfferDetail;Landroid/view/View;)V

    invoke-virtual {v0, v2}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_8
    const/4 v2, 0x1

    goto/16 :goto_1

    :cond_9
    const/4 v2, 0x0

    goto/16 :goto_1

    :cond_a
    const/4 v2, 0x0

    sget v1, Lcom/dualboot/d;->payment_frame:I

    invoke-virtual {p0, v1}, Lcom/dualboot/activity/offer/OfferDetail;->findViewById(I)Landroid/view/View;

    move-result-object v1

    instance-of v4, v1, Landroid/view/ViewGroup;

    if-eqz v4, :cond_11

    check-cast v1, Landroid/view/ViewGroup;

    move-object v6, v1

    :goto_2
    if-eqz v6, :cond_4

    invoke-interface {v3}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v7

    :cond_b
    :goto_3
    invoke-interface {v7}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-interface {v7}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    move-object v5, v1

    check-cast v5, Lcom/dualboot/a/ah;

    invoke-virtual {p0}, Lcom/dualboot/activity/offer/OfferDetail;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v1

    sget v3, Lcom/dualboot/e;->payment_type:I

    const/4 v4, 0x0

    invoke-virtual {v1, v3, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v8

    if-eqz v8, :cond_b

    sget v1, Lcom/dualboot/d;->payment_icon:I

    invoke-virtual {v8, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    sget v2, Lcom/dualboot/d;->payment_type:I

    invoke-virtual {v8, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    sget v3, Lcom/dualboot/d;->payment_desc:I

    invoke-virtual {v8, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    sget v4, Lcom/dualboot/d;->payment_price:I

    invoke-virtual {v8, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    iget-object v9, v5, Lcom/dualboot/a/ah;->c:Ljava/lang/String;

    iget v10, v5, Lcom/dualboot/a/ah;->d:I

    iget v11, v5, Lcom/dualboot/a/ah;->e:I

    iget v12, v5, Lcom/dualboot/a/ah;->f:I

    iget v13, v5, Lcom/dualboot/a/ah;->g:I

    iget-object v14, v5, Lcom/dualboot/a/ah;->b:Ljava/lang/String;

    invoke-static {v0, v14}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    instance-of v14, v1, Landroid/widget/ImageView;

    if-eqz v14, :cond_c

    check-cast v1, Landroid/widget/ImageView;

    invoke-virtual {v1, v12}, Landroid/widget/ImageView;->setImageResource(I)V

    :cond_c
    instance-of v1, v2, Landroid/widget/TextView;

    if-eqz v1, :cond_d

    move-object v1, v2

    check-cast v1, Landroid/widget/TextView;

    invoke-virtual {v1, v10}, Landroid/widget/TextView;->setText(I)V

    :cond_d
    instance-of v1, v3, Landroid/widget/TextView;

    if-eqz v1, :cond_e

    move-object v1, v3

    check-cast v1, Landroid/widget/TextView;

    invoke-virtual {v1, v11}, Landroid/widget/TextView;->setText(I)V

    :cond_e
    instance-of v1, v4, Landroid/widget/TextView;

    if-eqz v1, :cond_f

    move-object v1, v4

    check-cast v1, Landroid/widget/TextView;

    invoke-virtual {v1, v9}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/4 v2, 0x0

    const/4 v3, 0x0

    const/4 v4, 0x0

    invoke-virtual {v1, v2, v3, v13, v4}, Landroid/widget/TextView;->setCompoundDrawablesWithIntrinsicBounds(IIII)V

    :cond_f
    sget v1, Lcom/dualboot/d;->payment_bar:I

    invoke-virtual {v8, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    if-eqz v1, :cond_10

    new-instance v2, Lcom/dualboot/activity/offer/g;

    iget-object v3, v5, Lcom/dualboot/a/ah;->a:Lcom/dualboot/a/ax;

    iget-object v4, v5, Lcom/dualboot/a/ah;->b:Ljava/lang/String;

    invoke-direct {v2, p0, v3, v4}, Lcom/dualboot/activity/offer/g;-><init>(Lcom/dualboot/activity/offer/OfferDetail;Lcom/dualboot/a/ax;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_10
    invoke-virtual {v6, v8}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    const/4 v1, 0x1

    move v2, v1

    goto/16 :goto_3

    :cond_11
    const/4 v1, 0x0

    move-object v6, v1

    goto/16 :goto_2
.end method
