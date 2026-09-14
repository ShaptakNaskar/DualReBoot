.class public Lcom/dualboot/activity/misc/WhatsNew;
.super Landroid/app/Activity;

# interfaces
.implements Lcom/dualboot/widget/a;


# instance fields
.field protected a:Landroid/widget/CheckBox;

.field protected b:I


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/activity/misc/WhatsNew;->a:Landroid/widget/CheckBox;

    const/4 v0, 0x0

    iput v0, p0, Lcom/dualboot/activity/misc/WhatsNew;->b:I

    return-void
.end method

.method private a()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "key_whatsnew_shownexttime_v"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/dualboot/activity/misc/WhatsNew;->b:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/dualboot/widget/TextViewLink;)V
    .locals 4

    const/4 v3, 0x2

    instance-of v0, p1, Lcom/dualboot/widget/b;

    if-eqz v0, :cond_1

    check-cast p1, Lcom/dualboot/widget/b;

    invoke-virtual {p1}, Lcom/dualboot/widget/b;->d()Ljava/util/ArrayList;

    move-result-object v0

    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    const-string v2, "key_result_offer_id"

    invoke-virtual {v1, v2, v0}, Landroid/content/Intent;->putStringArrayListExtra(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;

    invoke-virtual {p0, v3, v1}, Lcom/dualboot/activity/misc/WhatsNew;->setResult(ILandroid/content/Intent;)V

    invoke-virtual {p0}, Lcom/dualboot/activity/misc/WhatsNew;->finish()V

    :cond_0
    :goto_0
    return-void

    :cond_1
    instance-of v0, p1, Lcom/dualboot/widget/TextViewThemeLink;

    if-eqz v0, :cond_0

    check-cast p1, Lcom/dualboot/widget/TextViewThemeLink;

    invoke-virtual {p1}, Lcom/dualboot/widget/TextViewThemeLink;->d()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    const-string v2, "key_result_theme_name"

    invoke-virtual {v1, v2, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    invoke-virtual {p0, v3, v1}, Lcom/dualboot/activity/misc/WhatsNew;->setResult(ILandroid/content/Intent;)V

    invoke-virtual {p0}, Lcom/dualboot/activity/misc/WhatsNew;->finish()V

    goto :goto_0
.end method

.method public onClick_Continue(Landroid/view/View;)V
    .locals 0

    invoke-virtual {p0}, Lcom/dualboot/activity/misc/WhatsNew;->finish()V

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 8

    const/4 v4, 0x0

    const/4 v2, 0x0

    const/4 v3, 0x1

    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    invoke-virtual {p0, v3}, Lcom/dualboot/activity/misc/WhatsNew;->setResult(I)V

    invoke-virtual {p0}, Lcom/dualboot/activity/misc/WhatsNew;->getIntent()Landroid/content/Intent;

    move-result-object v0

    if-eqz v0, :cond_0

    const-string v1, "key_whatsnew_force_launch"

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    move v1, v0

    :goto_0
    const/4 v0, 0x3

    :try_start_0
    invoke-virtual {p0, v0}, Lcom/dualboot/activity/misc/WhatsNew;->requestWindowFeature(I)Z

    new-instance v5, Lcom/dualboot/util/aa;

    invoke-direct {v5, p0}, Lcom/dualboot/util/aa;-><init>(Landroid/content/Context;)V

    invoke-virtual {v5}, Lcom/dualboot/util/aa;->a()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/dualboot/activity/misc/WhatsNew;->finish()V

    :goto_1
    return-void

    :cond_0
    move v1, v2

    goto :goto_0

    :cond_1
    invoke-virtual {v5}, Lcom/dualboot/util/aa;->b()I

    move-result v0

    iput v0, p0, Lcom/dualboot/activity/misc/WhatsNew;->b:I

    invoke-virtual {p0}, Lcom/dualboot/activity/misc/WhatsNew;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v0

    sget v6, Lcom/dualboot/e;->whatsnew_shell:I

    const/4 v7, 0x0

    invoke-virtual {v0, v6, v7}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v6

    if-nez v6, :cond_2

    invoke-virtual {p0}, Lcom/dualboot/activity/misc/WhatsNew;->finish()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    invoke-virtual {p0}, Lcom/dualboot/activity/misc/WhatsNew;->finish()V

    goto :goto_1

    :cond_2
    :try_start_1
    sget v0, Lcom/dualboot/d;->whatsnew_shownexttime:I

    invoke-virtual {v6, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    instance-of v7, v0, Landroid/widget/CheckBox;

    if-eqz v7, :cond_3

    check-cast v0, Landroid/widget/CheckBox;

    :goto_2
    iput-object v0, p0, Lcom/dualboot/activity/misc/WhatsNew;->a:Landroid/widget/CheckBox;

    sget v0, Lcom/dualboot/d;->whatsnew_content:I

    invoke-virtual {v6, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-nez v0, :cond_4

    invoke-virtual {p0}, Lcom/dualboot/activity/misc/WhatsNew;->finish()V

    goto :goto_1

    :cond_3
    move-object v0, v4

    goto :goto_2

    :cond_4
    invoke-virtual {p0}, Lcom/dualboot/activity/misc/WhatsNew;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v4

    invoke-virtual {v5}, Lcom/dualboot/util/aa;->d()I

    move-result v7

    invoke-virtual {v4, v7, v0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    if-nez v0, :cond_5

    invoke-virtual {p0}, Lcom/dualboot/activity/misc/WhatsNew;->finish()V

    goto :goto_1

    :cond_5
    const/4 v0, 0x2

    invoke-virtual {p0, v0}, Lcom/dualboot/activity/misc/WhatsNew;->setResult(I)V

    new-instance v0, Lcom/dualboot/util/r;

    invoke-direct {v0, p0}, Lcom/dualboot/util/r;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/dualboot/util/r;->a()Z

    iget-object v0, v0, Lcom/dualboot/util/r;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/dualboot/util/r;->a(Landroid/content/Context;)Z

    invoke-direct {p0}, Lcom/dualboot/activity/misc/WhatsNew;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_6

    invoke-static {p0}, Lcom/dualboot/b/a;->a(Landroid/app/Activity;)Landroid/content/SharedPreferences;

    move-result-object v4

    if-eqz v4, :cond_6

    const/4 v7, 0x1

    invoke-interface {v4, v0, v7}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    :goto_3
    if-nez v1, :cond_7

    if-nez v0, :cond_7

    :goto_4
    if-nez v2, :cond_8

    invoke-virtual {p0}, Lcom/dualboot/activity/misc/WhatsNew;->finish()V

    goto :goto_1

    :cond_6
    move v0, v3

    goto :goto_3

    :cond_7
    move v2, v3

    goto :goto_4

    :cond_8
    iget-object v1, p0, Lcom/dualboot/activity/misc/WhatsNew;->a:Landroid/widget/CheckBox;

    if-eqz v1, :cond_9

    iget-object v1, p0, Lcom/dualboot/activity/misc/WhatsNew;->a:Landroid/widget/CheckBox;

    invoke-virtual {v1, v0}, Landroid/widget/CheckBox;->setChecked(Z)V

    :cond_9
    invoke-virtual {v5}, Lcom/dualboot/util/aa;->c()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/dualboot/activity/misc/WhatsNew;->setTitle(I)V

    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    const/4 v1, -0x1

    const/4 v2, -0x1

    invoke-direct {v0, v1, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v6, v0}, Lcom/dualboot/activity/misc/WhatsNew;->setContentView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-virtual {p0}, Lcom/dualboot/activity/misc/WhatsNew;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/4 v1, 0x3

    sget v2, Lcom/dualboot/c;->icon:I

    invoke-virtual {v0, v1, v2}, Landroid/view/Window;->setFeatureDrawableResource(II)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto/16 :goto_1
.end method

.method protected onPause()V
    .locals 3

    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    iget-object v0, p0, Lcom/dualboot/activity/misc/WhatsNew;->a:Landroid/widget/CheckBox;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/activity/misc/WhatsNew;->a:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    invoke-direct {p0}, Lcom/dualboot/activity/misc/WhatsNew;->a()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-static {p0}, Lcom/dualboot/b/a;->a(Landroid/app/Activity;)Landroid/content/SharedPreferences;

    move-result-object v2

    if-eqz v2, :cond_0

    invoke-interface {v2}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v2

    if-eqz v2, :cond_0

    invoke-interface {v2, v1, v0}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v2}, Landroid/content/SharedPreferences$Editor;->commit()Z

    :cond_0
    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/dualboot/widget/TextViewLink;->a(Landroid/app/Activity;Z)V

    return-void
.end method

.method protected onResume()V
    .locals 4

    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    new-instance v1, Lcom/dualboot/activity/misc/a;

    invoke-direct {v1, p0}, Lcom/dualboot/activity/misc/a;-><init>(Lcom/dualboot/activity/misc/WhatsNew;)V

    const-wide/16 v2, 0x2ee

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method
