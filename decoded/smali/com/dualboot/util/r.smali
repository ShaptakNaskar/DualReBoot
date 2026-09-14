.class public final Lcom/dualboot/util/r;
.super Ljava/lang/Object;


# instance fields
.field public final a:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    :goto_0
    iput-object v0, p0, Lcom/dualboot/util/r;->a:Landroid/content/Context;

    return-void

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method

.method public static a(Landroid/content/Context;)Z
    .locals 3

    const/4 v1, 0x0

    if-nez p0, :cond_0

    move v0, v1

    :goto_0
    return v0

    :cond_0
    :try_start_0
    const-string v0, "notification"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/NotificationManager;

    if-nez v0, :cond_1

    move v0, v1

    goto :goto_0

    :cond_1
    const/high16 v2, 0x574e0000

    invoke-virtual {v0, v2}, Landroid/app/NotificationManager;->cancel(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v0, 0x1

    goto :goto_0

    :catch_0
    move-exception v0

    move v0, v1

    goto :goto_0
.end method


# virtual methods
.method public final a()Z
    .locals 6

    const/4 v1, 0x1

    const/4 v0, 0x0

    :try_start_0
    iget-object v2, p0, Lcom/dualboot/util/r;->a:Landroid/content/Context;

    if-nez v2, :cond_1

    :cond_0
    :goto_0
    return v0

    :cond_1
    new-instance v2, Lcom/dualboot/util/aa;

    iget-object v3, p0, Lcom/dualboot/util/r;->a:Landroid/content/Context;

    invoke-direct {v2, v3}, Lcom/dualboot/util/aa;-><init>(Landroid/content/Context;)V

    invoke-virtual {v2}, Lcom/dualboot/util/aa;->a()Z

    move-result v3

    if-eqz v3, :cond_0

    iget-object v3, p0, Lcom/dualboot/util/r;->a:Landroid/content/Context;

    invoke-static {v3}, Lcom/dualboot/b/a;->a(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v3

    if-eqz v3, :cond_0

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "key_notify_wn_v"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Lcom/dualboot/util/aa;->b()I

    move-result v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v4, 0x0

    invoke-interface {v3, v2, v4}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v4

    if-nez v4, :cond_0

    invoke-interface {v3}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v3

    if-eqz v3, :cond_2

    const/4 v4, 0x1

    invoke-interface {v3, v2, v4}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v3}, Landroid/content/SharedPreferences$Editor;->commit()Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    move v0, v1

    goto :goto_0

    :catch_0
    move-exception v1

    goto :goto_0
.end method

.method public final b()Z
    .locals 8

    const/4 v2, 0x1

    const/4 v1, 0x0

    invoke-virtual {p0}, Lcom/dualboot/util/r;->a()Z

    move-result v0

    if-nez v0, :cond_0

    move v0, v1

    :goto_0
    return v0

    :cond_0
    :try_start_0
    new-instance v0, Lcom/dualboot/util/y;

    iget-object v3, p0, Lcom/dualboot/util/r;->a:Landroid/content/Context;

    invoke-direct {v0, v3}, Lcom/dualboot/util/y;-><init>(Landroid/content/Context;)V

    sget v3, Lcom/dualboot/f;->notify_whatsnew_title:I

    const/4 v4, 0x1

    new-array v4, v4, [I

    const/4 v5, 0x0

    sget v6, Lcom/dualboot/f;->app_name:I

    aput v6, v4, v5

    invoke-virtual {v0, v3, v4}, Lcom/dualboot/util/y;->a(I[I)Ljava/lang/String;

    move-result-object v3

    sget v4, Lcom/dualboot/f;->notify_whatsnew_content:I

    const/4 v5, 0x1

    new-array v5, v5, [I

    const/4 v6, 0x0

    sget v7, Lcom/dualboot/f;->app_name:I

    aput v7, v5, v6

    invoke-virtual {v0, v4, v5}, Lcom/dualboot/util/y;->a(I[I)Ljava/lang/String;

    move-result-object v4

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    :cond_1
    move v0, v1

    goto :goto_0

    :cond_2
    iget-object v0, p0, Lcom/dualboot/util/r;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    sget v5, Lcom/dualboot/c;->icon:I

    invoke-virtual {v0, v5}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    instance-of v5, v0, Landroid/graphics/drawable/BitmapDrawable;

    if-nez v5, :cond_3

    move v0, v1

    goto :goto_0

    :cond_3
    check-cast v0, Landroid/graphics/drawable/BitmapDrawable;

    invoke-virtual {v0}, Landroid/graphics/drawable/BitmapDrawable;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object v0

    if-nez v0, :cond_4

    move v0, v1

    goto :goto_0

    :cond_4
    new-instance v5, Landroid/support/v4/app/ag;

    iget-object v6, p0, Lcom/dualboot/util/r;->a:Landroid/content/Context;

    invoke-direct {v5, v6}, Landroid/support/v4/app/ag;-><init>(Landroid/content/Context;)V

    iget-object v6, v5, Landroid/support/v4/app/ag;->r:Landroid/app/Notification;

    iget v7, v6, Landroid/app/Notification;->flags:I

    or-int/lit8 v7, v7, 0x10

    iput v7, v6, Landroid/app/Notification;->flags:I

    sget v6, Lcom/dualboot/c;->notify_whatsnew:I

    iget-object v7, v5, Landroid/support/v4/app/ag;->r:Landroid/app/Notification;

    iput v6, v7, Landroid/app/Notification;->icon:I

    iput-object v3, v5, Landroid/support/v4/app/ag;->b:Ljava/lang/CharSequence;

    iput-object v4, v5, Landroid/support/v4/app/ag;->c:Ljava/lang/CharSequence;

    iget-object v3, v5, Landroid/support/v4/app/ag;->r:Landroid/app/Notification;

    iput-object v4, v3, Landroid/app/Notification;->tickerText:Ljava/lang/CharSequence;

    iput-object v0, v5, Landroid/support/v4/app/ag;->g:Landroid/graphics/Bitmap;

    iget-object v0, p0, Lcom/dualboot/util/r;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v3

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Landroid/content/pm/PackageManager;->getLaunchIntentForPackage(Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v0

    if-eqz v0, :cond_5

    const/high16 v3, 0x20000000

    invoke-virtual {v0, v3}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    :cond_5
    if-nez v0, :cond_6

    move v0, v1

    goto/16 :goto_0

    :cond_6
    const-string v3, "com.dualboot.intent.launch_from_notify"

    const/4 v4, 0x1

    invoke-virtual {v0, v3, v4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    iget-object v3, p0, Lcom/dualboot/util/r;->a:Landroid/content/Context;

    invoke-static {v3}, Landroid/support/v4/app/aq;->a(Landroid/content/Context;)Landroid/support/v4/app/aq;

    move-result-object v3

    invoke-virtual {v0}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/support/v4/app/aq;->a(Landroid/content/ComponentName;)Landroid/support/v4/app/aq;

    invoke-virtual {v3, v0}, Landroid/support/v4/app/aq;->a(Landroid/content/Intent;)Landroid/support/v4/app/aq;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    long-to-int v0, v6

    invoke-virtual {v3, v0}, Landroid/support/v4/app/aq;->a(I)Landroid/app/PendingIntent;

    move-result-object v0

    if-nez v0, :cond_7

    move v0, v1

    goto/16 :goto_0

    :cond_7
    iput-object v0, v5, Landroid/support/v4/app/ag;->d:Landroid/app/PendingIntent;

    iget-object v0, p0, Lcom/dualboot/util/r;->a:Landroid/content/Context;

    const-string v3, "notification"

    invoke-virtual {v0, v3}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/NotificationManager;

    if-nez v0, :cond_8

    move v0, v1

    goto/16 :goto_0

    :cond_8
    const/high16 v3, 0x574e0000

    invoke-static {}, Landroid/support/v4/app/ac;->a()Landroid/support/v4/app/ai;

    move-result-object v4

    invoke-interface {v4, v5}, Landroid/support/v4/app/ai;->a(Landroid/support/v4/app/ag;)Landroid/app/Notification;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/app/NotificationManager;->notify(ILandroid/app/Notification;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move v0, v2

    goto/16 :goto_0

    :catch_0
    move-exception v0

    move v0, v1

    goto/16 :goto_0
.end method
