.class public Lcom/dualboot/activity/offer/OfferList;
.super Lcom/dualboot/activity/offer/a;


# instance fields
.field private c:Lcom/dualboot/activity/offer/h;

.field private d:I


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/dualboot/activity/offer/a;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/activity/offer/OfferList;->c:Lcom/dualboot/activity/offer/h;

    const/4 v0, 0x0

    iput v0, p0, Lcom/dualboot/activity/offer/OfferList;->d:I

    return-void
.end method


# virtual methods
.method protected final a(Ljava/lang/String;)Z
    .locals 3

    const/4 v0, 0x0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Launching detail screen for "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    :try_start_0
    new-instance v1, Lcom/dualboot/activity/offer/b;

    invoke-direct {v1}, Lcom/dualboot/activity/offer/b;-><init>()V

    iget-object v2, v1, Lcom/dualboot/activity/offer/b;->a:Ljava/util/ArrayList;

    invoke-virtual {v2, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const-class v2, Lcom/dualboot/activity/offer/OfferDetail;

    invoke-virtual {v1, p0, v2}, Lcom/dualboot/activity/offer/b;->a(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object v1

    if-nez v1, :cond_0

    :goto_0
    return v0

    :cond_0
    const/16 v2, 0x45

    invoke-virtual {p0, v1, v2}, Lcom/dualboot/activity/offer/OfferList;->startActivityForResult(Landroid/content/Intent;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v0, 0x1

    goto :goto_0

    :catch_0
    move-exception v1

    goto :goto_0
.end method

.method protected onActivityResult(IILandroid/content/Intent;)V
    .locals 3

    const/16 v0, 0x45

    if-ne p1, v0, :cond_1

    invoke-static {p3}, Lcom/dualboot/activity/offer/a;->a(Landroid/content/Intent;)Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_2

    iget v0, p0, Lcom/dualboot/activity/offer/OfferList;->d:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/dualboot/activity/offer/OfferList;->c:Lcom/dualboot/activity/offer/h;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/activity/offer/OfferList;->c:Lcom/dualboot/activity/offer/h;

    invoke-virtual {v0}, Lcom/dualboot/activity/offer/h;->notifyDataSetChanged()V

    iget-object v0, p0, Lcom/dualboot/activity/offer/OfferList;->c:Lcom/dualboot/activity/offer/h;

    invoke-virtual {v0}, Lcom/dualboot/activity/offer/h;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    :cond_0
    invoke-virtual {p0}, Lcom/dualboot/activity/offer/OfferList;->finish()V

    :cond_1
    return-void

    :cond_2
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/activity/offer/d;

    iget v2, v0, Lcom/dualboot/activity/offer/d;->b:I

    iget-object v0, v0, Lcom/dualboot/activity/offer/d;->a:Ljava/lang/String;

    invoke-virtual {p0, v2, v0}, Lcom/dualboot/activity/offer/OfferList;->a(ILjava/lang/String;)V

    goto :goto_0
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4

    invoke-super {p0, p1}, Lcom/dualboot/activity/offer/a;->onCreate(Landroid/os/Bundle;)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/activity/offer/OfferList;->c:Lcom/dualboot/activity/offer/h;

    :try_start_0
    iget-object v0, p0, Lcom/dualboot/activity/offer/OfferList;->a:Lcom/dualboot/activity/offer/b;

    iget-object v0, v0, Lcom/dualboot/activity/offer/b;->a:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    iput v0, p0, Lcom/dualboot/activity/offer/OfferList;->d:I

    iget v0, p0, Lcom/dualboot/activity/offer/OfferList;->d:I

    iget v0, p0, Lcom/dualboot/activity/offer/OfferList;->d:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    if-nez p1, :cond_0

    iget-object v0, p0, Lcom/dualboot/activity/offer/OfferList;->a:Lcom/dualboot/activity/offer/b;

    iget-object v0, v0, Lcom/dualboot/activity/offer/b;->a:Ljava/util/ArrayList;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/dualboot/activity/offer/OfferList;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/dualboot/activity/offer/OfferList;->finish()V

    :cond_0
    :goto_0
    return-void

    :cond_1
    new-instance v1, Ljava/util/ArrayList;

    iget v0, p0, Lcom/dualboot/activity/offer/OfferList;->d:I

    invoke-direct {v1, v0}, Ljava/util/ArrayList;-><init>(I)V

    iget-object v0, p0, Lcom/dualboot/activity/offer/OfferList;->a:Lcom/dualboot/activity/offer/b;

    iget-object v0, v0, Lcom/dualboot/activity/offer/b;->a:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_2
    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_3

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-virtual {p0}, Lcom/dualboot/activity/offer/OfferList;->finish()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {p0}, Lcom/dualboot/activity/offer/OfferList;->finish()V

    goto :goto_0

    :cond_3
    :try_start_1
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v3

    invoke-virtual {v3, v0}, Lcom/dualboot/a/a;->b(Ljava/lang/String;)Lcom/dualboot/a/p;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-interface {v1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_4
    sget v0, Lcom/dualboot/e;->offer_list:I

    invoke-virtual {p0, v0}, Lcom/dualboot/activity/offer/OfferList;->setContentView(I)V

    sget v0, Lcom/dualboot/d;->lv_item_list:I

    invoke-virtual {p0, v0}, Lcom/dualboot/activity/offer/OfferList;->findViewById(I)Landroid/view/View;

    move-result-object v0

    instance-of v2, v0, Landroid/widget/ListView;

    if-eqz v2, :cond_5

    new-instance v2, Lcom/dualboot/activity/offer/h;

    invoke-direct {v2, p0, p0, v1}, Lcom/dualboot/activity/offer/h;-><init>(Lcom/dualboot/activity/offer/OfferList;Landroid/content/Context;Ljava/util/List;)V

    iput-object v2, p0, Lcom/dualboot/activity/offer/OfferList;->c:Lcom/dualboot/activity/offer/h;

    check-cast v0, Landroid/widget/ListView;

    iget-object v1, p0, Lcom/dualboot/activity/offer/OfferList;->c:Lcom/dualboot/activity/offer/h;

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    goto :goto_0

    :cond_5
    invoke-virtual {p0}, Lcom/dualboot/activity/offer/OfferList;->finish()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0
.end method
