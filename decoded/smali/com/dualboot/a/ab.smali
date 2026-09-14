.class public abstract Lcom/dualboot/a/ab;
.super Ljava/lang/Object;


# instance fields
.field private a:Lcom/dualboot/a/aw;

.field private b:J

.field private final c:Ljava/util/HashMap;

.field private d:Lcom/dualboot/a/an;

.field final e:Lcom/dualboot/a/ax;

.field final f:Landroid/content/Context;

.field private g:Lcom/dualboot/a/as;

.field private h:Lcom/dualboot/a/aj;

.field private i:Ljava/lang/String;

.field private j:I


# direct methods
.method protected constructor <init>(Lcom/dualboot/a/ax;Landroid/content/Context;)V
    .locals 2

    const/4 v0, 0x0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/dualboot/a/ab;->d:Lcom/dualboot/a/an;

    iput-object v0, p0, Lcom/dualboot/a/ab;->g:Lcom/dualboot/a/as;

    iput-object v0, p0, Lcom/dualboot/a/ab;->h:Lcom/dualboot/a/aj;

    iput-object v0, p0, Lcom/dualboot/a/ab;->i:Ljava/lang/String;

    const/4 v1, -0x1

    iput v1, p0, Lcom/dualboot/a/ab;->j:I

    iput-object p1, p0, Lcom/dualboot/a/ab;->e:Lcom/dualboot/a/ax;

    if-eqz p2, :cond_0

    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    :cond_0
    iput-object v0, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/dualboot/a/ab;->c:Ljava/util/HashMap;

    sget-object v0, Lcom/dualboot/a/aw;->b:Lcom/dualboot/a/aw;

    iput-object v0, p0, Lcom/dualboot/a/ab;->a:Lcom/dualboot/a/aw;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/dualboot/a/ab;->b:J

    return-void
.end method


# virtual methods
.method protected abstract a()I
.end method

.method protected abstract a(Lcom/dualboot/a/af;)Landroid/app/PendingIntent;
.end method

.method protected abstract a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/dualboot/a/af;
.end method

.method public final a(Ljava/lang/String;)Lcom/dualboot/a/ag;
    .locals 1

    invoke-virtual {p0}, Lcom/dualboot/a/ab;->d()Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/dualboot/a/ag;->a:Lcom/dualboot/a/ag;

    :goto_0
    return-object v0

    :cond_0
    invoke-virtual {p0, p1}, Lcom/dualboot/a/ab;->c(Ljava/lang/String;)Lcom/dualboot/a/af;

    move-result-object v0

    if-nez v0, :cond_1

    sget-object v0, Lcom/dualboot/a/ag;->a:Lcom/dualboot/a/ag;

    goto :goto_0

    :cond_1
    iget-object v0, v0, Lcom/dualboot/a/af;->e:Lcom/dualboot/a/ag;

    goto :goto_0
.end method

.method protected abstract a(Lcom/dualboot/a/af;Lcom/dualboot/a/aj;Landroid/content/Intent;)V
.end method

.method protected abstract a(Lcom/dualboot/a/an;Lcom/dualboot/a/as;)V
.end method

.method public final a(Lcom/dualboot/a/ar;)V
    .locals 3

    const/4 v2, 0x0

    new-instance v0, Lcom/dualboot/a/an;

    invoke-direct {v0, p0, p1}, Lcom/dualboot/a/an;-><init>(Lcom/dualboot/a/ab;Lcom/dualboot/a/ar;)V

    iput-object v0, p0, Lcom/dualboot/a/ab;->d:Lcom/dualboot/a/an;

    new-instance v0, Lcom/dualboot/a/as;

    invoke-direct {v0, p0, v2}, Lcom/dualboot/a/as;-><init>(Lcom/dualboot/a/ab;Lcom/dualboot/a/av;)V

    iput-object v0, p0, Lcom/dualboot/a/ab;->g:Lcom/dualboot/a/as;

    iget-object v0, p0, Lcom/dualboot/a/ab;->f:Landroid/content/Context;

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/dualboot/a/ab;->d()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/ab;->d:Lcom/dualboot/a/an;

    invoke-virtual {v0}, Lcom/dualboot/a/an;->a()V

    iget-object v0, p0, Lcom/dualboot/a/ab;->d:Lcom/dualboot/a/an;

    iget-object v1, p0, Lcom/dualboot/a/ab;->g:Lcom/dualboot/a/as;

    invoke-virtual {p0, v0, v1}, Lcom/dualboot/a/ab;->a(Lcom/dualboot/a/an;Lcom/dualboot/a/as;)V

    :goto_0
    iput-object v2, p0, Lcom/dualboot/a/ab;->g:Lcom/dualboot/a/as;

    iput-object v2, p0, Lcom/dualboot/a/ab;->d:Lcom/dualboot/a/an;

    return-void

    :cond_0
    iget-object v0, p0, Lcom/dualboot/a/ab;->d:Lcom/dualboot/a/an;

    invoke-virtual {v0}, Lcom/dualboot/a/an;->c()V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/dualboot/a/ab;->d:Lcom/dualboot/a/an;

    invoke-virtual {v0}, Lcom/dualboot/a/an;->c()V

    goto :goto_0
.end method

.method protected abstract a(Lcom/dualboot/a/as;)V
.end method

.method public final a(Lcom/dualboot/a/av;)V
    .locals 1

    new-instance v0, Lcom/dualboot/a/as;

    invoke-direct {v0, p0, p1}, Lcom/dualboot/a/as;-><init>(Lcom/dualboot/a/ab;Lcom/dualboot/a/av;)V

    iput-object v0, p0, Lcom/dualboot/a/ab;->g:Lcom/dualboot/a/as;

    iget-object v0, p0, Lcom/dualboot/a/ab;->g:Lcom/dualboot/a/as;

    invoke-virtual {v0}, Lcom/dualboot/a/as;->a()V

    iget-object v0, p0, Lcom/dualboot/a/ab;->g:Lcom/dualboot/a/as;

    invoke-virtual {p0, v0}, Lcom/dualboot/a/ab;->a(Lcom/dualboot/a/as;)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/a/ab;->g:Lcom/dualboot/a/as;

    return-void
.end method

.method protected final a(Lcom/dualboot/a/aw;)V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/ab;->a:Lcom/dualboot/a/aw;

    if-eq p1, v0, :cond_0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/dualboot/a/ab;->b:J

    iput-object p1, p0, Lcom/dualboot/a/ab;->a:Lcom/dualboot/a/aw;

    :cond_0
    return-void
.end method

.method public final a(IILandroid/content/Intent;)Z
    .locals 6

    const/4 v5, 0x0

    const/4 v0, 0x0

    const/4 v4, -0x1

    const/4 v1, 0x1

    iget v2, p0, Lcom/dualboot/a/ab;->j:I

    if-eq p1, v2, :cond_0

    :goto_0
    return v0

    :cond_0
    if-eqz p3, :cond_1

    iget-object v2, p0, Lcom/dualboot/a/ab;->i:Ljava/lang/String;

    invoke-virtual {p0, v2}, Lcom/dualboot/a/ab;->c(Ljava/lang/String;)Lcom/dualboot/a/af;

    move-result-object v2

    if-eqz v2, :cond_1

    if-ne p2, v4, :cond_3

    iget-object v0, p0, Lcom/dualboot/a/ab;->h:Lcom/dualboot/a/aj;

    invoke-virtual {p0, v2, v0, p3}, Lcom/dualboot/a/ab;->a(Lcom/dualboot/a/af;Lcom/dualboot/a/aj;Landroid/content/Intent;)V

    move v0, v1

    :cond_1
    :goto_1
    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/a/ab;->h:Lcom/dualboot/a/aj;

    iget-object v2, p0, Lcom/dualboot/a/ab;->i:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/dualboot/a/aj;->b(Ljava/lang/String;)V

    :cond_2
    iput-object v5, p0, Lcom/dualboot/a/ab;->h:Lcom/dualboot/a/aj;

    iput-object v5, p0, Lcom/dualboot/a/ab;->i:Ljava/lang/String;

    iput v4, p0, Lcom/dualboot/a/ab;->j:I

    move v0, v1

    goto :goto_0

    :cond_3
    if-nez p2, :cond_1

    iget-object v3, p0, Lcom/dualboot/a/ab;->h:Lcom/dualboot/a/aj;

    invoke-virtual {p0, v2, v3, p3}, Lcom/dualboot/a/ab;->b(Lcom/dualboot/a/af;Lcom/dualboot/a/aj;Landroid/content/Intent;)Z

    move-result v2

    if-eqz v2, :cond_1

    move v0, v1

    goto :goto_1
.end method

.method public final a(Ljava/lang/String;Landroid/app/Activity;Lcom/dualboot/a/am;)Z
    .locals 11

    const/4 v7, 0x1

    const/4 v10, -0x1

    const/4 v9, 0x0

    const/4 v8, 0x0

    iput-object v9, p0, Lcom/dualboot/a/ab;->h:Lcom/dualboot/a/aj;

    iput-object v9, p0, Lcom/dualboot/a/ab;->i:Ljava/lang/String;

    iput v10, p0, Lcom/dualboot/a/ab;->j:I

    invoke-virtual {p0}, Lcom/dualboot/a/ab;->d()Z

    move-result v0

    if-nez v0, :cond_0

    move v0, v8

    :goto_0
    if-eqz v0, :cond_3

    move v0, v7

    :goto_1
    return v0

    :cond_0
    invoke-virtual {p0, p1}, Lcom/dualboot/a/ab;->c(Ljava/lang/String;)Lcom/dualboot/a/af;

    move-result-object v0

    if-nez v0, :cond_1

    move v0, v8

    goto :goto_0

    :cond_1
    iget-object v0, v0, Lcom/dualboot/a/af;->e:Lcom/dualboot/a/ag;

    sget-object v1, Lcom/dualboot/a/ag;->c:Lcom/dualboot/a/ag;

    if-ne v0, v1, :cond_2

    move v0, v8

    goto :goto_0

    :cond_2
    new-instance v0, Lcom/dualboot/a/aj;

    invoke-direct {v0, p0, p3}, Lcom/dualboot/a/aj;-><init>(Lcom/dualboot/a/ab;Lcom/dualboot/a/am;)V

    invoke-virtual {p0}, Lcom/dualboot/a/ab;->e()Z

    move-result v0

    goto :goto_0

    :cond_3
    invoke-virtual {p0}, Lcom/dualboot/a/ab;->d()Z

    move-result v0

    if-nez v0, :cond_4

    move v0, v8

    goto :goto_1

    :cond_4
    invoke-virtual {p0, p1}, Lcom/dualboot/a/ab;->c(Ljava/lang/String;)Lcom/dualboot/a/af;

    move-result-object v0

    if-nez v0, :cond_5

    move v0, v8

    goto :goto_1

    :cond_5
    iget-object v1, v0, Lcom/dualboot/a/af;->e:Lcom/dualboot/a/ag;

    sget-object v2, Lcom/dualboot/a/ag;->c:Lcom/dualboot/a/ag;

    if-ne v1, v2, :cond_6

    move v0, v8

    goto :goto_1

    :cond_6
    if-nez p2, :cond_7

    move v0, v8

    goto :goto_1

    :cond_7
    invoke-virtual {p0, v0}, Lcom/dualboot/a/ab;->a(Lcom/dualboot/a/af;)Landroid/app/PendingIntent;

    move-result-object v0

    if-nez v0, :cond_8

    move v0, v8

    goto :goto_1

    :cond_8
    :try_start_0
    new-instance v1, Lcom/dualboot/a/aj;

    invoke-direct {v1, p0, p3}, Lcom/dualboot/a/aj;-><init>(Lcom/dualboot/a/ab;Lcom/dualboot/a/am;)V

    iput-object v1, p0, Lcom/dualboot/a/ab;->h:Lcom/dualboot/a/aj;

    iput-object p1, p0, Lcom/dualboot/a/ab;->i:Ljava/lang/String;

    const/16 v1, 0x400

    iput v1, p0, Lcom/dualboot/a/ab;->j:I

    invoke-virtual {v0}, Landroid/app/PendingIntent;->getIntentSender()Landroid/content/IntentSender;

    move-result-object v1

    const/16 v2, 0x400

    new-instance v3, Landroid/content/Intent;

    invoke-direct {v3}, Landroid/content/Intent;-><init>()V

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v4

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v5

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v6

    move-object v0, p2

    invoke-virtual/range {v0 .. v6}, Landroid/app/Activity;->startIntentSenderForResult(Landroid/content/IntentSender;ILandroid/content/Intent;III)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move v0, v7

    goto :goto_1

    :catch_0
    move-exception v0

    iput-object v9, p0, Lcom/dualboot/a/ab;->h:Lcom/dualboot/a/aj;

    iput-object v9, p0, Lcom/dualboot/a/ab;->i:Ljava/lang/String;

    iput v10, p0, Lcom/dualboot/a/ab;->j:I

    move v0, v8

    goto :goto_1
.end method

.method protected abstract a(Ljava/util/Collection;)Z
.end method

.method protected abstract b()I
.end method

.method public final b(Ljava/lang/String;)Lcom/dualboot/a/ah;
    .locals 8

    const/4 v7, 0x0

    invoke-virtual {p0}, Lcom/dualboot/a/ab;->d()Z

    move-result v0

    if-nez v0, :cond_1

    move-object v0, v7

    :cond_0
    :goto_0
    return-object v0

    :cond_1
    invoke-virtual {p0, p1}, Lcom/dualboot/a/ab;->c(Ljava/lang/String;)Lcom/dualboot/a/af;

    move-result-object v2

    if-nez v2, :cond_2

    move-object v0, v7

    goto :goto_0

    :cond_2
    iget-object v0, v2, Lcom/dualboot/a/af;->e:Lcom/dualboot/a/ag;

    sget-object v1, Lcom/dualboot/a/ag;->c:Lcom/dualboot/a/ag;

    if-ne v0, v1, :cond_3

    move-object v0, v7

    goto :goto_0

    :cond_3
    new-instance v0, Lcom/dualboot/a/ah;

    iget-object v1, p0, Lcom/dualboot/a/ab;->e:Lcom/dualboot/a/ax;

    iget-object v3, v2, Lcom/dualboot/a/af;->d:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/dualboot/a/ab;->a()I

    move-result v4

    invoke-virtual {p0}, Lcom/dualboot/a/ab;->b()I

    move-result v5

    invoke-virtual {p0}, Lcom/dualboot/a/ab;->c()I

    move-result v6

    move-object v2, p1

    invoke-direct/range {v0 .. v6}, Lcom/dualboot/a/ah;-><init>(Lcom/dualboot/a/ax;Ljava/lang/String;Ljava/lang/String;III)V

    iget v1, v0, Lcom/dualboot/a/ah;->d:I

    if-eqz v1, :cond_4

    iget v1, v0, Lcom/dualboot/a/ah;->e:I

    if-eqz v1, :cond_4

    iget v1, v0, Lcom/dualboot/a/ah;->f:I

    if-eqz v1, :cond_4

    const/4 v1, 0x1

    :goto_1
    if-nez v1, :cond_0

    move-object v0, v7

    goto :goto_0

    :cond_4
    const/4 v1, 0x0

    goto :goto_1
.end method

.method protected b(Lcom/dualboot/a/af;Lcom/dualboot/a/aj;Landroid/content/Intent;)Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 3

    const/4 v1, 0x1

    const/4 v0, 0x0

    invoke-virtual {p0}, Lcom/dualboot/a/ab;->d()Z

    move-result v2

    if-nez v2, :cond_1

    :cond_0
    :goto_0
    return v0

    :cond_1
    invoke-virtual {p0, p1}, Lcom/dualboot/a/ab;->c(Ljava/lang/String;)Lcom/dualboot/a/af;

    move-result-object v2

    if-eqz v2, :cond_2

    move v0, v1

    goto :goto_0

    :cond_2
    invoke-virtual {p0, p1, p2, p3}, Lcom/dualboot/a/ab;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/dualboot/a/af;

    move-result-object v2

    if-eqz v2, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/ab;->c:Ljava/util/HashMap;

    invoke-virtual {v0, p1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move v0, v1

    goto :goto_0
.end method

.method protected abstract c()I
.end method

.method final c(Ljava/lang/String;)Lcom/dualboot/a/af;
    .locals 1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    :goto_0
    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/dualboot/a/ab;->c:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/af;

    goto :goto_0
.end method

.method public abstract d()Z
.end method

.method protected abstract e()Z
.end method

.method public final f()Z
    .locals 2

    const/4 v0, 0x0

    invoke-virtual {p0}, Lcom/dualboot/a/ab;->d()Z

    move-result v1

    if-nez v1, :cond_1

    :cond_0
    :goto_0
    return v0

    :cond_1
    iget-object v1, p0, Lcom/dualboot/a/ab;->c:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/ab;->c:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/dualboot/a/ab;->a(Ljava/util/Collection;)Z

    move-result v0

    goto :goto_0
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "STG/PaymentSystem."

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/dualboot/a/ab;->e:Lcom/dualboot/a/ax;

    invoke-virtual {v1}, Lcom/dualboot/a/ax;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
