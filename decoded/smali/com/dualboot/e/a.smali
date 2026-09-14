.class public abstract Lcom/dualboot/e/a;
.super Landroid/app/Activity;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method

.method private a(Landroid/content/Intent;)Z
    .locals 4

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v2

    if-eqz v2, :cond_1

    const-string v3, "com.dualboot.intent.launch_from_notify"

    invoke-virtual {v2, v3, v1}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;Z)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-static {p0}, Lcom/dualboot/e/aa;->a(Landroid/content/Context;)Landroid/content/Intent;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v2, "com.dualboot.intent.launch_from_notify"

    invoke-virtual {v1, v2, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    invoke-static {p0, v1}, Lcom/dualboot/e/aa;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    :cond_0
    :goto_0
    return v0

    :cond_1
    move v0, v1

    goto :goto_0
.end method


# virtual methods
.method public onChooseWallpaper(Landroid/view/View;)V
    .locals 7

    const/4 v2, 0x1

    const/4 v1, 0x0

    new-instance v3, Lcom/dualboot/util/y;

    invoke-direct {v3, p0}, Lcom/dualboot/util/y;-><init>(Landroid/content/Context;)V

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x10

    if-lt v0, v4, :cond_1

    new-instance v0, Landroid/content/ComponentName;

    invoke-virtual {p0}, Lcom/dualboot/e/a;->getApplicationContext()Landroid/content/Context;

    move-result-object v4

    sget v5, Lcom/dualboot/f;->component_service:I

    new-array v6, v1, [I

    invoke-virtual {v3, v5, v6}, Lcom/dualboot/util/y;->a(I[I)Ljava/lang/String;

    move-result-object v5

    invoke-direct {v0, v4, v5}, Landroid/content/ComponentName;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    invoke-static {v0}, Lcom/dualboot/e/aa;->a(Landroid/content/ComponentName;)Landroid/content/Intent;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/dualboot/e/aa;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result v0

    if-eqz v0, :cond_1

    move v0, v1

    :goto_0
    if-eqz v0, :cond_0

    sget v0, Lcom/dualboot/f;->Intro_Toast:I

    new-array v4, v2, [I

    sget v5, Lcom/dualboot/f;->app_name:I

    aput v5, v4, v1

    invoke-virtual {v3, v0, v4}, Lcom/dualboot/util/y;->a(I[I)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    const/16 v2, 0x11

    invoke-virtual {v0, v2, v1, v1}, Landroid/widget/Toast;->setGravity(III)V

    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    const-string v2, "android.service.wallpaper.LIVE_WALLPAPER_CHOOSER"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    invoke-static {p0, v1}, Lcom/dualboot/e/aa;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    :cond_0
    invoke-virtual {p0}, Lcom/dualboot/e/a;->finish()V

    return-void

    :cond_1
    move v0, v2

    goto :goto_0
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 9

    const/4 v8, 0x1

    const/4 v7, 0x0

    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    invoke-virtual {p0}, Lcom/dualboot/e/a;->getIntent()Landroid/content/Intent;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/dualboot/e/a;->a(Landroid/content/Intent;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {p0}, Lcom/dualboot/e/a;->finish()V

    :goto_0
    return-void

    :cond_0
    sget v1, Lcom/dualboot/e;->intro_shell:I

    invoke-virtual {p0, v1}, Lcom/dualboot/e/a;->setContentView(I)V

    sget v1, Lcom/dualboot/d;->intro_summary_text:I

    invoke-virtual {p0, v1}, Lcom/dualboot/e/a;->findViewById(I)Landroid/view/View;

    move-result-object v1

    sget v2, Lcom/dualboot/d;->intro_picker_directions:I

    invoke-virtual {p0, v2}, Lcom/dualboot/e/a;->findViewById(I)Landroid/view/View;

    move-result-object v2

    sget v3, Lcom/dualboot/d;->intro_version:I

    invoke-virtual {p0, v3}, Lcom/dualboot/e/a;->findViewById(I)Landroid/view/View;

    move-result-object v3

    sget v4, Lcom/dualboot/f;->app_name:I

    invoke-virtual {p0, v4}, Lcom/dualboot/e/a;->getString(I)Ljava/lang/String;

    move-result-object v4

    instance-of v5, v1, Landroid/widget/TextView;

    if-eqz v5, :cond_1

    sget v5, Lcom/dualboot/f;->Intro_Summary:I

    new-array v6, v8, [Ljava/lang/Object;

    aput-object v4, v6, v7

    invoke-virtual {p0, v5, v6}, Lcom/dualboot/e/a;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    check-cast v1, Landroid/widget/TextView;

    invoke-virtual {v1, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_1
    instance-of v1, v2, Landroid/widget/TextView;

    if-eqz v1, :cond_2

    sget v1, Lcom/dualboot/f;->Intro_PickerDirections:I

    new-array v5, v8, [Ljava/lang/Object;

    aput-object v4, v5, v7

    invoke-virtual {p0, v1, v5}, Lcom/dualboot/e/a;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    move-object v1, v2

    check-cast v1, Landroid/widget/TextView;

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_2
    instance-of v1, v3, Landroid/widget/TextView;

    if-eqz v1, :cond_3

    :try_start_0
    invoke-virtual {p0}, Lcom/dualboot/e/a;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    if-eqz v1, :cond_3

    invoke-virtual {p0}, Lcom/dualboot/e/a;->getPackageName()Ljava/lang/String;

    move-result-object v2

    const/4 v4, 0x0

    invoke-virtual {v1, v2, v4}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v1

    if-eqz v1, :cond_3

    iget-object v1, v1, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    sget v2, Lcom/dualboot/f;->vcs_rev:I

    invoke-virtual {p0, v2}, Lcom/dualboot/e/a;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    sget v4, Lcom/dualboot/f;->Intro_Version:I

    const/4 v5, 0x2

    new-array v5, v5, [Ljava/lang/Object;

    const/4 v6, 0x0

    aput-object v1, v5, v6

    const/4 v1, 0x1

    aput-object v2, v5, v1

    invoke-virtual {p0, v4, v5}, Lcom/dualboot/e/a;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    move-object v0, v3

    check-cast v0, Landroid/widget/TextView;

    move-object v1, v0

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/4 v1, 0x0

    invoke-virtual {v3, v1}, Landroid/view/View;->setVisibility(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_3
    :goto_1
    new-instance v1, Lcom/dualboot/util/r;

    invoke-direct {v1, p0}, Lcom/dualboot/util/r;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1}, Lcom/dualboot/util/r;->b()Z

    goto/16 :goto_0

    :catch_0
    move-exception v1

    goto :goto_1
.end method

.method public onMoreApps(Landroid/view/View;)V
    .locals 1

    invoke-static {}, Lcom/dualboot/e/aa;->a()Landroid/content/Intent;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/dualboot/e/aa;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    return-void
.end method

.method protected onNewIntent(Landroid/content/Intent;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/app/Activity;->onNewIntent(Landroid/content/Intent;)V

    invoke-direct {p0, p1}, Lcom/dualboot/e/a;->a(Landroid/content/Intent;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/dualboot/e/a;->finish()V

    :cond_0
    return-void
.end method

.method public onOpenSettings(Landroid/view/View;)V
    .locals 1

    invoke-static {p0}, Lcom/dualboot/e/aa;->a(Landroid/content/Context;)Landroid/content/Intent;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/dualboot/e/aa;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/dualboot/e/a;->finish()V

    :cond_0
    return-void
.end method
