.class final Lcom/dualboot/activity/offer/e;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field final synthetic a:Lcom/dualboot/activity/offer/OfferDetail;

.field private final synthetic b:Landroid/content/Intent;


# direct methods
.method constructor <init>(Lcom/dualboot/activity/offer/OfferDetail;Landroid/content/Intent;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/activity/offer/e;->a:Lcom/dualboot/activity/offer/OfferDetail;

    iput-object p2, p0, Lcom/dualboot/activity/offer/e;->b:Landroid/content/Intent;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/dualboot/activity/offer/e;->a:Lcom/dualboot/activity/offer/OfferDetail;

    iget-object v1, p0, Lcom/dualboot/activity/offer/e;->b:Landroid/content/Intent;

    invoke-virtual {v0, v1}, Lcom/dualboot/activity/offer/OfferDetail;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :goto_0
    return-void

    :catch_0
    move-exception v0

    goto :goto_0
.end method
