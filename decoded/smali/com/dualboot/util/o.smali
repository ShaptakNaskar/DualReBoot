.class public final Lcom/dualboot/util/o;
.super Ljava/lang/Object;


# direct methods
.method public static a(Landroid/content/Context;)Lcom/dualboot/util/q;
    .locals 2

    if-eqz p0, :cond_3

    const-string v0, "android.permission.ACCESS_NETWORK_STATE"

    invoke-virtual {p0, v0}, Landroid/content/Context;->checkCallingOrSelfPermission(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_3

    const-string v0, "connectivity"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/dualboot/util/q;->b:Lcom/dualboot/util/q;

    :goto_0
    return-object v0

    :cond_0
    invoke-virtual {v0}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v1

    if-eqz v1, :cond_1

    sget-object v0, Lcom/dualboot/util/q;->d:Lcom/dualboot/util/q;

    goto :goto_0

    :cond_1
    invoke-virtual {v0}, Landroid/net/NetworkInfo;->isConnectedOrConnecting()Z

    move-result v0

    if-eqz v0, :cond_2

    sget-object v0, Lcom/dualboot/util/q;->c:Lcom/dualboot/util/q;

    goto :goto_0

    :cond_2
    sget-object v0, Lcom/dualboot/util/q;->b:Lcom/dualboot/util/q;

    goto :goto_0

    :cond_3
    sget-object v0, Lcom/dualboot/util/q;->a:Lcom/dualboot/util/q;

    goto :goto_0
.end method

.method public static b(Landroid/content/Context;)Ljava/lang/Runnable;
    .locals 1

    new-instance v0, Lcom/dualboot/util/p;

    invoke-direct {v0, p0}, Lcom/dualboot/util/p;-><init>(Landroid/content/Context;)V

    return-object v0
.end method
