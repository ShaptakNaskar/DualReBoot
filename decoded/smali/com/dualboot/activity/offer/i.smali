.class final Lcom/dualboot/activity/offer/i;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field final synthetic a:Lcom/dualboot/activity/offer/h;

.field private final synthetic b:Lcom/dualboot/a/p;


# direct methods
.method constructor <init>(Lcom/dualboot/activity/offer/h;Lcom/dualboot/a/p;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/activity/offer/i;->a:Lcom/dualboot/activity/offer/h;

    iput-object p2, p0, Lcom/dualboot/activity/offer/i;->b:Lcom/dualboot/a/p;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/activity/offer/i;->a:Lcom/dualboot/activity/offer/h;

    invoke-static {v0}, Lcom/dualboot/activity/offer/h;->a(Lcom/dualboot/activity/offer/h;)Lcom/dualboot/activity/offer/OfferList;

    move-result-object v0

    iget-object v1, p0, Lcom/dualboot/activity/offer/i;->b:Lcom/dualboot/a/p;

    invoke-virtual {v1}, Lcom/dualboot/a/p;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/dualboot/activity/offer/OfferList;->a(Ljava/lang/String;)Z

    return-void
.end method
