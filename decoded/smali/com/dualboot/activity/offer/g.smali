.class final Lcom/dualboot/activity/offer/g;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field final synthetic a:Lcom/dualboot/activity/offer/OfferDetail;

.field private final b:Lcom/dualboot/a/ax;

.field private final c:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/dualboot/activity/offer/OfferDetail;Lcom/dualboot/a/ax;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/activity/offer/g;->a:Lcom/dualboot/activity/offer/OfferDetail;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p2, p0, Lcom/dualboot/activity/offer/g;->b:Lcom/dualboot/a/ax;

    iput-object p3, p0, Lcom/dualboot/activity/offer/g;->c:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 5

    iget-object v0, p0, Lcom/dualboot/activity/offer/g;->a:Lcom/dualboot/activity/offer/OfferDetail;

    const/4 v1, 0x2

    iget-object v2, p0, Lcom/dualboot/activity/offer/g;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/dualboot/activity/offer/OfferDetail;->a(ILjava/lang/String;)V

    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/dualboot/activity/offer/g;->b:Lcom/dualboot/a/ax;

    iget-object v2, p0, Lcom/dualboot/activity/offer/g;->c:Ljava/lang/String;

    iget-object v3, p0, Lcom/dualboot/activity/offer/g;->a:Lcom/dualboot/activity/offer/OfferDetail;

    iget-object v4, p0, Lcom/dualboot/activity/offer/g;->a:Lcom/dualboot/activity/offer/OfferDetail;

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/dualboot/a/a;->a(Lcom/dualboot/a/ax;Ljava/lang/String;Landroid/app/Activity;Lcom/dualboot/a/l;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/activity/offer/g;->a:Lcom/dualboot/activity/offer/OfferDetail;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Launching purchase flow for [ "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/dualboot/activity/offer/g;->b:Lcom/dualboot/a/ax;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, " / "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    iget-object v1, p0, Lcom/dualboot/activity/offer/g;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, " ]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    invoke-static {}, Lcom/dualboot/activity/offer/OfferDetail;->a()V

    :goto_0
    return-void

    :cond_0
    iget-object v0, p0, Lcom/dualboot/activity/offer/g;->a:Lcom/dualboot/activity/offer/OfferDetail;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Failed to start purchase flow for [ "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/dualboot/activity/offer/g;->b:Lcom/dualboot/a/ax;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, " / "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    iget-object v1, p0, Lcom/dualboot/activity/offer/g;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, " ]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    invoke-static {}, Lcom/dualboot/activity/offer/OfferDetail;->a()V

    iget-object v0, p0, Lcom/dualboot/activity/offer/g;->a:Lcom/dualboot/activity/offer/OfferDetail;

    const/4 v1, 0x1

    iget-object v2, p0, Lcom/dualboot/activity/offer/g;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/dualboot/activity/offer/OfferDetail;->a(ILjava/lang/String;)V

    goto :goto_0
.end method
