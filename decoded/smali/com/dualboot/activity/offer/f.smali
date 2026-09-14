.class final Lcom/dualboot/activity/offer/f;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field final synthetic a:Lcom/dualboot/activity/offer/OfferDetail;

.field private final synthetic b:Landroid/view/View;


# direct methods
.method constructor <init>(Lcom/dualboot/activity/offer/OfferDetail;Landroid/view/View;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/activity/offer/f;->a:Lcom/dualboot/activity/offer/OfferDetail;

    iput-object p2, p0, Lcom/dualboot/activity/offer/f;->b:Landroid/view/View;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 3

    const/4 v1, 0x0

    iget-object v0, p0, Lcom/dualboot/activity/offer/f;->b:Landroid/view/View;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/activity/offer/f;->b:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0

    if-nez v0, :cond_2

    const/4 v0, 0x1

    :goto_0
    iget-object v2, p0, Lcom/dualboot/activity/offer/f;->b:Landroid/view/View;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    :cond_0
    invoke-virtual {v2, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_1
    return-void

    :cond_2
    move v0, v1

    goto :goto_0
.end method
