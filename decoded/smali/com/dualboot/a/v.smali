.class public final Lcom/dualboot/a/v;
.super Lcom/dualboot/a/ab;


# instance fields
.field a:Lcom/a/a/a/a;

.field b:I

.field c:I

.field d:Z

.field private final g:Ljava/lang/String;

.field private h:Landroid/content/ServiceConnection;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 3

    const/4 v2, 0x0

    const/4 v1, 0x6

    sget-object v0, Lcom/dualboot/a/ax;->b:Lcom/dualboot/a/ax;

    invoke-direct {p0, v0, p1}, Lcom/dualboot/a/ab;-><init>(Lcom/dualboot/a/ax;Landroid/content/Context;)V

    iput-object v2, p0, Lcom/dualboot/a/v;->a:Lcom/a/a/a/a;

    iput-object v2, p0, Lcom/dualboot/a/v;->h:Landroid/content/ServiceConnection;

    iput v1, p0, Lcom/dualboot/a/v;->b:I

    iput v1, p0, Lcom/dualboot/a/v;->c:I

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/dualboot/a/v;->d:Z

    iput-object p2, p0, Lcom/dualboot/a/v;->g:Ljava/lang/String;

    return-void
.end method

.method private static a(Landroid/content/Intent;)I
    .locals 2

    const/4 v0, 0x6

    if-nez p0, :cond_1

    :cond_0
    :goto_0
    return v0

    :cond_1
    invoke-virtual {p0}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {p0}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v0

    const-string v1, "RESPONSE_CODE"

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    invoke-static {v0}, Lcom/dualboot/a/v;->a(Ljava/lang/Object;)I

    move-result v0

    goto :goto_0
.end method

.method private static a(Landroid/os/Bundle;)I
    .locals 1

    if-nez p0, :cond_0

    const/4 v0, 0x6

    :goto_0
    return v0

    :cond_0
    const-string v0, "RESPONSE_CODE"

    invoke-virtual {p0, v0}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    invoke-static {v0}, Lcom/dualboot/a/v;->a(Ljava/lang/Object;)I

    move-result v0

    goto :goto_0
.end method

.method private static a(Ljava/lang/Object;)I
    .locals 2

    if-nez p0, :cond_0

    const/4 v0, 0x0

    :goto_0
    return v0

    :cond_0
    instance-of v0, p0, Ljava/lang/Integer;

    if-eqz v0, :cond_1

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    goto :goto_0

    :cond_1
    instance-of v0, p0, Ljava/lang/Long;

    if-eqz v0, :cond_2

    check-cast p0, Ljava/lang/Long;

    invoke-virtual {p0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    long-to-int v0, v0

    goto :goto_0

    :cond_2
    const/4 v0, 0x6

    goto :goto_0
.end method


# virtual methods
.method protected final a()I
    .locals 1

    sget v0, Lcom/dualboot/f;->payment_type_google:I

    return v0
.end method

.method protected final a(Lcom/dualboot/a/af;)Landroid/app/PendingIntent;
    .locals 7

    const/4 v6, 0x0

    :try_start_0
    iget-object v0, p0, Lcom/dualboot/a/v;->a:Lcom/a/a/a/a;

    const/4 v1, 0x3

    iget-object v2, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p1, Lcom/dualboot/a/af;->a:Ljava/lang/String;

    const-string v4, "inapp"

    const/4 v5, 0x0

    invoke-interface/range {v0 .. v5}, Lcom/a/a/a/a;->a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/os/Bundle;

    move-result-object v0

    invoke-static {v0}, Lcom/dualboot/a/v;->a(Landroid/os/Bundle;)I

    move-result v1

    if-eqz v1, :cond_1

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "Failure parsing buy intent: "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-object v0, v6

    :cond_0
    :goto_0
    return-object v0

    :cond_1
    const-string v1, "BUY_INTENT"

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->getParcelable(Ljava/lang/String;)Landroid/os/Parcelable;

    move-result-object v0

    check-cast v0, Landroid/app/PendingIntent;

    if-nez v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Failure retrieving pending buy intent for offer: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p1, Lcom/dualboot/a/af;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, v6

    goto :goto_0

    :catch_0
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Error launching purchase flow: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-object v0, v6

    goto :goto_0
.end method

.method protected final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/dualboot/a/af;
    .locals 6

    const/4 v1, 0x0

    new-instance v0, Ljava/util/ArrayList;

    const/4 v2, 0x1

    invoke-direct {v0, v2}, Ljava/util/ArrayList;-><init>(I)V

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    new-instance v2, Landroid/os/Bundle;

    invoke-direct {v2}, Landroid/os/Bundle;-><init>()V

    const-string v3, "ITEM_ID_LIST"

    invoke-virtual {v2, v3, v0}, Landroid/os/Bundle;->putStringArrayList(Ljava/lang/String;Ljava/util/ArrayList;)V

    :try_start_0
    iget-object v0, p0, Lcom/dualboot/a/v;->a:Lcom/a/a/a/a;

    const/4 v3, 0x3

    iget-object v4, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    invoke-virtual {v4}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v4

    const-string v5, "inapp"

    invoke-interface {v0, v3, v4, v5, v2}, Lcom/a/a/a/a;->a(ILjava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;

    move-result-object v0

    invoke-static {v0}, Lcom/dualboot/a/v;->a(Landroid/os/Bundle;)I

    move-result v2

    if-eqz v2, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "Failure refreshing details for = "

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v3, " response = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-object v0, v1

    :goto_0
    return-object v0

    :cond_0
    const-string v2, "DETAILS_LIST"

    invoke-virtual {v0, v2}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    move-object v0, v1

    goto :goto_0

    :cond_1
    const-string v2, "DETAILS_LIST"

    invoke-virtual {v0, v2}, Landroid/os/Bundle;->getStringArrayList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_2
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "No offer details found for: "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-object v0, v1

    goto :goto_0

    :cond_3
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/dualboot/a/x;->a(Ljava/lang/String;)Lcom/dualboot/a/x;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v3, v0, Lcom/dualboot/a/af;->a:Ljava/lang/String;

    invoke-static {v3, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-result v3

    if-eqz v3, :cond_2

    goto :goto_0

    :catch_0
    move-exception v0

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Error refreshing offer details: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-object v0, v1

    goto :goto_0
.end method

.method protected final a(Lcom/dualboot/a/af;Lcom/dualboot/a/aj;Landroid/content/Intent;)V
    .locals 5

    iget-object v0, p1, Lcom/dualboot/a/af;->a:Ljava/lang/String;

    invoke-static {p3}, Lcom/dualboot/a/v;->a(Landroid/content/Intent;)I

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "INAPP_PURCHASE_DATA"

    invoke-virtual {p3, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "INAPP_DATA_SIGNATURE"

    invoke-virtual {p3, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    new-instance v3, Lcom/dualboot/a/u;

    invoke-direct {v3, v1}, Lcom/dualboot/a/u;-><init>(Ljava/lang/String;)V

    iget-object v4, v3, Lcom/dualboot/a/u;->a:Ljava/lang/String;

    iget-object v3, v3, Lcom/dualboot/a/u;->b:Ljava/lang/String;

    invoke-static {v0, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    iget-object v4, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    invoke-virtual {v4}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    iget-object v3, p0, Lcom/dualboot/a/v;->g:Ljava/lang/String;

    invoke-static {v3, v1, v2}, Lcom/dualboot/a/a/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    sget-object v1, Lcom/dualboot/a/ag;->c:Lcom/dualboot/a/ag;

    iput-object v1, p1, Lcom/dualboot/a/af;->e:Lcom/dualboot/a/ag;

    invoke-virtual {p2, v0}, Lcom/dualboot/a/aj;->a(Ljava/lang/String;)V

    :goto_0
    return-void

    :cond_0
    invoke-virtual {p2, v0}, Lcom/dualboot/a/aj;->b(Ljava/lang/String;)V

    goto :goto_0
.end method

.method protected final a(Lcom/dualboot/a/an;Lcom/dualboot/a/as;)V
    .locals 4

    iget-boolean v0, p0, Lcom/dualboot/a/v;->d:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/v;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.android.vending.billing.InAppBillingService.BIND"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "com.android.vending"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    iget-object v1, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v0, v2}, Landroid/content/pm/PackageManager;->queryIntentServices(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    new-instance v1, Lcom/dualboot/a/w;

    invoke-direct {v1, p0, p2, p1}, Lcom/dualboot/a/w;-><init>(Lcom/dualboot/a/v;Lcom/dualboot/a/as;Lcom/dualboot/a/an;)V

    iput-object v1, p0, Lcom/dualboot/a/v;->h:Landroid/content/ServiceConnection;

    iget-object v1, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    iget-object v2, p0, Lcom/dualboot/a/v;->h:Landroid/content/ServiceConnection;

    const/4 v3, 0x1

    invoke-virtual {v1, v0, v2, v3}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0

    if-nez v0, :cond_1

    :cond_0
    invoke-virtual {p1}, Lcom/dualboot/a/an;->c()V

    :cond_1
    return-void
.end method

.method protected final a(Lcom/dualboot/a/as;)V
    .locals 5

    const/4 v4, 0x6

    const/4 v3, 0x0

    :try_start_0
    iget-object v0, p0, Lcom/dualboot/a/v;->h:Landroid/content/ServiceConnection;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    iget-object v1, p0, Lcom/dualboot/a/v;->h:Landroid/content/ServiceConnection;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    :cond_0
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/a/v;->a:Lcom/a/a/a/a;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    :goto_0
    iput-object v3, p0, Lcom/dualboot/a/v;->h:Landroid/content/ServiceConnection;

    iput-object v3, p0, Lcom/dualboot/a/v;->a:Lcom/a/a/a/a;

    iput v4, p0, Lcom/dualboot/a/v;->b:I

    iput v4, p0, Lcom/dualboot/a/v;->c:I

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/dualboot/a/v;->d:Z

    invoke-virtual {p1}, Lcom/dualboot/a/as;->b()V

    return-void

    :catch_0
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Error unbinding service"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    goto :goto_0
.end method

.method protected final a(Ljava/util/Collection;)Z
    .locals 15

    const/4 v5, 0x0

    const/4 v1, 0x0

    :cond_0
    :try_start_0
    iget-object v2, p0, Lcom/dualboot/a/v;->a:Lcom/a/a/a/a;

    const/4 v3, 0x3

    iget-object v4, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    invoke-virtual {v4}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v4

    const-string v6, "inapp"

    invoke-interface {v2, v3, v4, v6, v1}, Lcom/a/a/a/a;->a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/os/Bundle;

    move-result-object v7

    invoke-static {v7}, Lcom/dualboot/a/v;->a(Landroid/os/Bundle;)I

    move-result v1

    if-eqz v1, :cond_1

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Failure refreshing offers: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move v1, v5

    :goto_0
    return v1

    :cond_1
    const-string v1, "INAPP_PURCHASE_ITEM_LIST"

    invoke-virtual {v7, v1}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    const-string v1, "INAPP_PURCHASE_DATA_LIST"

    invoke-virtual {v7, v1}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    const-string v1, "INAPP_DATA_SIGNATURE_LIST"

    invoke-virtual {v7, v1}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_3

    :cond_2
    move v1, v5

    goto :goto_0

    :cond_3
    const-string v1, "INAPP_PURCHASE_ITEM_LIST"

    invoke-virtual {v7, v1}, Landroid/os/Bundle;->getStringArrayList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v8

    const-string v1, "INAPP_PURCHASE_DATA_LIST"

    invoke-virtual {v7, v1}, Landroid/os/Bundle;->getStringArrayList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v9

    const-string v1, "INAPP_DATA_SIGNATURE_LIST"

    invoke-virtual {v7, v1}, Landroid/os/Bundle;->getStringArrayList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v10

    invoke-interface/range {p1 .. p1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-nez v1, :cond_4

    move v6, v5

    :goto_2
    invoke-virtual {v8}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-lt v6, v1, :cond_5

    const-string v1, "INAPP_CONTINUATION_TOKEN"

    invoke-virtual {v7, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_4
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/dualboot/a/af;

    sget-object v3, Lcom/dualboot/a/ag;->b:Lcom/dualboot/a/ag;

    iput-object v3, v1, Lcom/dualboot/a/af;->e:Lcom/dualboot/a/ag;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Error refreshing offers: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move v1, v5

    goto :goto_0

    :cond_5
    :try_start_1
    invoke-virtual {v8, v6}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    move-object v4, v0

    invoke-virtual {v9, v6}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v10, v6}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-interface/range {p1 .. p1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v11

    :cond_6
    :goto_3
    invoke-interface {v11}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-nez v3, :cond_7

    add-int/lit8 v1, v6, 0x1

    move v6, v1

    goto :goto_2

    :cond_7
    invoke-interface {v11}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/dualboot/a/af;

    iget-object v12, v3, Lcom/dualboot/a/af;->a:Ljava/lang/String;

    invoke-static {v12, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v12

    if-eqz v12, :cond_6

    iget-object v12, p0, Lcom/dualboot/a/v;->g:Ljava/lang/String;

    invoke-static {v12, v1, v2}, Lcom/dualboot/a/a/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v12

    if-eqz v12, :cond_6

    new-instance v12, Lorg/json/JSONObject;

    invoke-direct {v12, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v13, "purchaseState"

    const/4 v14, 0x0

    invoke-virtual {v12, v13, v14}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v12

    if-nez v12, :cond_6

    sget-object v12, Lcom/dualboot/a/ag;->c:Lcom/dualboot/a/ag;

    iput-object v12, v3, Lcom/dualboot/a/af;->e:Lcom/dualboot/a/ag;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_3
.end method

.method protected final b()I
    .locals 1

    sget v0, Lcom/dualboot/f;->payment_desc_google:I

    return v0
.end method

.method protected final b(Lcom/dualboot/a/af;Lcom/dualboot/a/aj;Landroid/content/Intent;)Z
    .locals 2

    invoke-static {p3}, Lcom/dualboot/a/v;->a(Landroid/content/Intent;)I

    move-result v0

    const/4 v1, 0x7

    if-ne v0, v1, :cond_0

    sget-object v0, Lcom/dualboot/a/ag;->c:Lcom/dualboot/a/ag;

    iput-object v0, p1, Lcom/dualboot/a/af;->e:Lcom/dualboot/a/ag;

    iget-object v0, p1, Lcom/dualboot/a/af;->a:Ljava/lang/String;

    invoke-virtual {p2, v0}, Lcom/dualboot/a/aj;->a(Ljava/lang/String;)V

    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_0
    invoke-super {p0, p1, p2, p3}, Lcom/dualboot/a/ab;->b(Lcom/dualboot/a/af;Lcom/dualboot/a/aj;Landroid/content/Intent;)Z

    move-result v0

    goto :goto_0
.end method

.method protected final c()I
    .locals 1

    sget v0, Lcom/dualboot/c;->icon_googleplay:I

    return v0
.end method

.method public final d()Z
    .locals 1

    iget-boolean v0, p0, Lcom/dualboot/a/v;->d:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/v;->h:Landroid/content/ServiceConnection;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/v;->a:Lcom/a/a/a/a;

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/dualboot/a/v;->b:I

    if-nez v0, :cond_0

    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method

.method protected final e()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method
