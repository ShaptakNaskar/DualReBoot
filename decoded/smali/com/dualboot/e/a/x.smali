.class public final Lcom/dualboot/e/a/x;
.super Landroid/preference/DialogPreference;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/dualboot/e/a/x;-><init>(Landroid/content/Context;B)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;B)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/dualboot/e/a/x;-><init>(Landroid/content/Context;C)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;C)V
    .locals 2

    const/4 v0, 0x0

    const v1, 0x101008b

    invoke-direct {p0, p1, v0, v1}, Landroid/preference/DialogPreference;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    sget v0, Lcom/dualboot/e;->pref_social:I

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/x;->setWidgetLayoutResource(I)V

    sget v0, Lcom/dualboot/f;->SocialTitle:I

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/x;->setTitle(I)V

    sget v0, Lcom/dualboot/f;->SocialSummary:I

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/x;->setSummary(I)V

    sget v0, Lcom/dualboot/f;->SocialTitle:I

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/x;->setDialogTitle(I)V

    sget v0, Lcom/dualboot/e;->pref_social_dialog:I

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/x;->setDialogLayoutResource(I)V

    const/high16 v0, 0x1040000

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/x;->setNegativeButtonText(I)V

    return-void
.end method

.method private a(Landroid/view/View;I)V
    .locals 2

    if-eqz p1, :cond_0

    invoke-virtual {p1, p2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    new-instance v1, Lcom/dualboot/e/a/y;

    invoke-direct {v1, p0}, Lcom/dualboot/e/a/y;-><init>(Lcom/dualboot/e/a/x;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method private b(Landroid/view/View;I)V
    .locals 2

    if-eqz p1, :cond_0

    invoke-virtual {p1, p2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    new-instance v1, Lcom/dualboot/e/a/z;

    invoke-direct {v1, p0}, Lcom/dualboot/e/a/z;-><init>(Lcom/dualboot/e/a/x;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method private c(Landroid/view/View;I)V
    .locals 2

    if-eqz p1, :cond_0

    invoke-virtual {p1, p2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    new-instance v1, Lcom/dualboot/e/a/aa;

    invoke-direct {v1, p0}, Lcom/dualboot/e/a/aa;-><init>(Lcom/dualboot/e/a/x;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method private d(Landroid/view/View;I)V
    .locals 2

    if-eqz p1, :cond_0

    invoke-virtual {p1, p2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    new-instance v1, Lcom/dualboot/e/a/ab;

    invoke-direct {v1, p0}, Lcom/dualboot/e/a/ab;-><init>(Lcom/dualboot/e/a/x;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method


# virtual methods
.method protected final a()V
    .locals 3

    invoke-virtual {p0}, Lcom/dualboot/e/a/x;->getDialog()Landroid/app/Dialog;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/Dialog;->dismiss()V

    :cond_0
    invoke-virtual {p0}, Lcom/dualboot/e/a/x;->getContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_1

    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    const-string v2, "android.intent.action.VIEW"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v2, "https://plus.google.com/102237864799396768622"

    invoke-static {v2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    invoke-virtual {v0, v1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    :cond_1
    return-void
.end method

.method protected final b()V
    .locals 3

    invoke-virtual {p0}, Lcom/dualboot/e/a/x;->getDialog()Landroid/app/Dialog;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/Dialog;->dismiss()V

    :cond_0
    invoke-virtual {p0}, Lcom/dualboot/e/a/x;->getContext()Landroid/content/Context;

    move-result-object v1

    if-eqz v1, :cond_2

    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v2, "android.intent.action.VIEW"

    invoke-virtual {v0, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v2, "fb://profile/105773202838736"

    invoke-static {v2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    const/4 v2, 0x0

    invoke-static {v1, v0, v2}, Lcom/dualboot/e/aa;->a(Landroid/content/Context;Landroid/content/Intent;Z)Landroid/content/Intent;

    move-result-object v0

    if-nez v0, :cond_1

    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v2, "android.intent.action.VIEW"

    invoke-virtual {v0, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v2, "https://facebook.com/dualbootgames"

    invoke-static {v2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    :cond_1
    invoke-virtual {v1, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    :cond_2
    return-void
.end method

.method protected final c()V
    .locals 3

    invoke-virtual {p0}, Lcom/dualboot/e/a/x;->getDialog()Landroid/app/Dialog;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/Dialog;->dismiss()V

    :cond_0
    invoke-virtual {p0}, Lcom/dualboot/e/a/x;->getContext()Landroid/content/Context;

    move-result-object v1

    if-eqz v1, :cond_2

    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v2, "android.intent.action.VIEW"

    invoke-virtual {v0, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v2, "twitter://user?screen_name=dualbootgames"

    invoke-static {v2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    const/4 v2, 0x0

    invoke-static {v1, v0, v2}, Lcom/dualboot/e/aa;->a(Landroid/content/Context;Landroid/content/Intent;Z)Landroid/content/Intent;

    move-result-object v0

    if-nez v0, :cond_1

    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v2, "android.intent.action.VIEW"

    invoke-virtual {v0, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v2, "https://twitter.com/intent/user?screen_name=dualbootgames"

    invoke-static {v2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    :cond_1
    invoke-virtual {v1, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    :cond_2
    return-void
.end method

.method protected final d()V
    .locals 3

    invoke-virtual {p0}, Lcom/dualboot/e/a/x;->getDialog()Landroid/app/Dialog;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/Dialog;->dismiss()V

    :cond_0
    invoke-virtual {p0}, Lcom/dualboot/e/a/x;->getContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_1

    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    const-string v2, "android.intent.action.VIEW"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v2, "http://www.youtube.com/user/DualBootGames"

    invoke-static {v2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    invoke-virtual {v0, v1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    :cond_1
    return-void
.end method

.method protected final onCreateDialogView()Landroid/view/View;
    .locals 2

    invoke-super {p0}, Landroid/preference/DialogPreference;->onCreateDialogView()Landroid/view/View;

    move-result-object v0

    sget v1, Lcom/dualboot/d;->tv_social_gplus:I

    invoke-direct {p0, v0, v1}, Lcom/dualboot/e/a/x;->a(Landroid/view/View;I)V

    sget v1, Lcom/dualboot/d;->tv_social_facebook:I

    invoke-direct {p0, v0, v1}, Lcom/dualboot/e/a/x;->b(Landroid/view/View;I)V

    sget v1, Lcom/dualboot/d;->tv_social_twitter:I

    invoke-direct {p0, v0, v1}, Lcom/dualboot/e/a/x;->c(Landroid/view/View;I)V

    sget v1, Lcom/dualboot/d;->tv_social_ytube:I

    invoke-direct {p0, v0, v1}, Lcom/dualboot/e/a/x;->d(Landroid/view/View;I)V

    return-object v0
.end method

.method protected final onCreateView(Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 2

    invoke-super {p0, p1}, Landroid/preference/DialogPreference;->onCreateView(Landroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    sget v1, Lcom/dualboot/d;->iv_social_gplus:I

    invoke-direct {p0, v0, v1}, Lcom/dualboot/e/a/x;->a(Landroid/view/View;I)V

    sget v1, Lcom/dualboot/d;->iv_social_facebook:I

    invoke-direct {p0, v0, v1}, Lcom/dualboot/e/a/x;->b(Landroid/view/View;I)V

    sget v1, Lcom/dualboot/d;->iv_social_twitter:I

    invoke-direct {p0, v0, v1}, Lcom/dualboot/e/a/x;->c(Landroid/view/View;I)V

    sget v1, Lcom/dualboot/d;->iv_social_ytube:I

    invoke-direct {p0, v0, v1}, Lcom/dualboot/e/a/x;->d(Landroid/view/View;I)V

    return-object v0
.end method
