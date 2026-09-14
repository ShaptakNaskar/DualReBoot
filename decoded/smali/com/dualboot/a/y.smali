.class public final Lcom/dualboot/a/y;
.super Lcom/dualboot/a/ab;


# instance fields
.field a:I

.field b:Z

.field private final c:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    sget-object v0, Lcom/dualboot/a/ax;->c:Lcom/dualboot/a/ax;

    invoke-direct {p0, v0, p1}, Lcom/dualboot/a/ab;-><init>(Lcom/dualboot/a/ax;Landroid/content/Context;)V

    const/4 v0, 0x2

    iput v0, p0, Lcom/dualboot/a/y;->a:I

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/dualboot/a/y;->b:Z

    iput-object p2, p0, Lcom/dualboot/a/y;->c:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method protected final a()I
    .locals 1

    sget v0, Lcom/dualboot/f;->payment_type_license:I

    return v0
.end method

.method protected final a(Lcom/dualboot/a/af;)Landroid/app/PendingIntent;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method protected final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/dualboot/a/af;
    .locals 1

    const-string v0, "bWFuYWdlZF9fYmFzaWNfdmVyc2lvbg=="

    invoke-static {v0}, Lcom/dualboot/b/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/dualboot/a/aa;

    invoke-direct {v0, p1, p2, p3}, Lcom/dualboot/a/aa;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-object v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method

.method protected final a(Lcom/dualboot/a/af;Lcom/dualboot/a/aj;Landroid/content/Intent;)V
    .locals 0

    return-void
.end method

.method protected final a(Lcom/dualboot/a/an;Lcom/dualboot/a/as;)V
    .locals 4

    iget-boolean v0, p0, Lcom/dualboot/a/y;->b:Z

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/dualboot/a/an;->c()V

    :goto_0
    return-void

    :cond_0
    iget-object v0, p0, Lcom/dualboot/a/y;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Lcom/dualboot/a/an;->c()V

    goto :goto_0

    :cond_1
    :try_start_0
    iget-object v0, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v1, "android_id"

    invoke-static {v0, v1}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Lcom/dualboot/b/b;

    invoke-direct {v1, v0}, Lcom/dualboot/b/b;-><init>(Ljava/lang/String;)V

    new-instance v2, Lcom/b/a/a/a/a;

    iget-object v1, v1, Lcom/dualboot/b/b;->a:[B

    iget-object v3, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v1, v3, v0}, Lcom/b/a/a/a/a;-><init>([BLjava/lang/String;Ljava/lang/String;)V

    new-instance v0, Lcom/b/a/a/a/t;

    iget-object v1, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    invoke-direct {v0, v1, v2}, Lcom/b/a/a/a/t;-><init>(Landroid/content/Context;Lcom/b/a/a/a/p;)V

    new-instance v1, Lcom/b/a/a/a/i;

    iget-object v2, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    iget-object v3, p0, Lcom/dualboot/a/y;->c:Ljava/lang/String;

    invoke-direct {v1, v2, v0, v3}, Lcom/b/a/a/a/i;-><init>(Landroid/content/Context;Lcom/b/a/a/a/q;Ljava/lang/String;)V

    new-instance v0, Lcom/dualboot/a/z;

    invoke-direct {v0, p0, p1}, Lcom/dualboot/a/z;-><init>(Lcom/dualboot/a/y;Lcom/dualboot/a/an;)V

    invoke-virtual {v1, v0}, Lcom/b/a/a/a/i;->a(Lcom/b/a/a/a/m;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Failed, exception: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    invoke-virtual {p1}, Lcom/dualboot/a/an;->c()V

    goto :goto_0
.end method

.method protected final a(Lcom/dualboot/a/as;)V
    .locals 1

    const/4 v0, 0x2

    iput v0, p0, Lcom/dualboot/a/y;->a:I

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/dualboot/a/y;->b:Z

    invoke-virtual {p1}, Lcom/dualboot/a/as;->b()V

    return-void
.end method

.method protected final a(Ljava/util/Collection;)Z
    .locals 3

    invoke-interface {p1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_1

    iget v0, p0, Lcom/dualboot/a/y;->a:I

    if-nez v0, :cond_0

    invoke-interface {p1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_2

    :cond_0
    const/4 v0, 0x1

    return v0

    :cond_1
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/af;

    sget-object v2, Lcom/dualboot/a/ag;->b:Lcom/dualboot/a/ag;

    iput-object v2, v0, Lcom/dualboot/a/af;->e:Lcom/dualboot/a/ag;

    goto :goto_0

    :cond_2
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/af;

    sget-object v2, Lcom/dualboot/a/ag;->c:Lcom/dualboot/a/ag;

    iput-object v2, v0, Lcom/dualboot/a/af;->e:Lcom/dualboot/a/ag;

    goto :goto_1
.end method

.method protected final b()I
    .locals 1

    sget v0, Lcom/dualboot/f;->payment_desc_license:I

    return v0
.end method

.method protected final c()I
    .locals 1

    sget v0, Lcom/dualboot/c;->icon_license:I

    return v0
.end method

.method public final d()Z
    .locals 2

    iget-boolean v0, p0, Lcom/dualboot/a/y;->b:Z

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/dualboot/a/y;->a:I

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method

.method protected final e()Z
    .locals 4

    new-instance v0, Lcom/dualboot/util/y;

    iget-object v1, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/dualboot/util/y;-><init>(Landroid/content/Context;)V

    new-instance v1, Ljava/lang/StringBuilder;

    sget v2, Lcom/dualboot/f;->MarketURL_Google:I

    const/4 v3, 0x0

    new-array v3, v3, [I

    invoke-virtual {v0, v2, v3}, Lcom/dualboot/util/y;->a(I[I)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    const-string v2, "android.intent.action.VIEW"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    const/high16 v0, 0x30000000

    invoke-virtual {v1, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    iget-object v0, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    invoke-static {v0, v1}, Lcom/dualboot/e/aa;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result v0

    return v0
.end method
