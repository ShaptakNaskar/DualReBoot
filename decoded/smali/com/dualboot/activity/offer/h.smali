.class public final Lcom/dualboot/activity/offer/h;
.super Landroid/widget/ArrayAdapter;


# instance fields
.field final synthetic a:Lcom/dualboot/activity/offer/OfferList;


# direct methods
.method public constructor <init>(Lcom/dualboot/activity/offer/OfferList;Landroid/content/Context;Ljava/util/List;)V
    .locals 1

    iput-object p1, p0, Lcom/dualboot/activity/offer/h;->a:Lcom/dualboot/activity/offer/OfferList;

    sget v0, Lcom/dualboot/e;->offer_item:I

    invoke-direct {p0, p2, v0, p3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    return-void
.end method

.method static synthetic a(Lcom/dualboot/activity/offer/h;)Lcom/dualboot/activity/offer/OfferList;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/activity/offer/h;->a:Lcom/dualboot/activity/offer/OfferList;

    return-object v0
.end method


# virtual methods
.method public final a()Z
    .locals 4

    const/4 v1, 0x0

    invoke-virtual {p0}, Lcom/dualboot/activity/offer/h;->getCount()I

    move-result v3

    move v2, v1

    :goto_0
    if-lt v2, v3, :cond_0

    const/4 v0, 0x1

    :goto_1
    return v0

    :cond_0
    invoke-virtual {p0, v2}, Lcom/dualboot/activity/offer/h;->getItem(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/p;

    invoke-virtual {v0}, Lcom/dualboot/a/p;->h()Z

    move-result v0

    if-nez v0, :cond_1

    move v0, v1

    goto :goto_1

    :cond_1
    add-int/lit8 v0, v2, 0x1

    move v2, v0

    goto :goto_0
.end method

.method public final getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 4

    const/4 v1, 0x0

    if-nez p2, :cond_0

    iget-object v0, p0, Lcom/dualboot/activity/offer/h;->a:Lcom/dualboot/activity/offer/OfferList;

    invoke-virtual {v0}, Lcom/dualboot/activity/offer/OfferList;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v0

    sget v2, Lcom/dualboot/e;->offer_item:I

    invoke-virtual {v0, v2, p3, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p2

    :cond_0
    invoke-virtual {p0, p1}, Lcom/dualboot/activity/offer/h;->getItem(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/p;

    iget-object v2, p0, Lcom/dualboot/activity/offer/h;->a:Lcom/dualboot/activity/offer/OfferList;

    invoke-virtual {v2, p2, v0}, Lcom/dualboot/activity/offer/OfferList;->a(Landroid/view/View;Lcom/dualboot/a/p;)Z

    invoke-virtual {v0}, Lcom/dualboot/a/p;->h()Z

    move-result v2

    invoke-virtual {v0}, Lcom/dualboot/a/p;->g()Z

    move-result v3

    if-nez v2, :cond_1

    if-eqz v3, :cond_1

    const/4 v1, 0x1

    :cond_1
    invoke-static {p2, v1}, Lcom/dualboot/util/z;->a(Landroid/view/View;Z)V

    new-instance v1, Lcom/dualboot/activity/offer/i;

    invoke-direct {v1, p0, v0}, Lcom/dualboot/activity/offer/i;-><init>(Lcom/dualboot/activity/offer/h;Lcom/dualboot/a/p;)V

    invoke-virtual {p2, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-object p2
.end method
