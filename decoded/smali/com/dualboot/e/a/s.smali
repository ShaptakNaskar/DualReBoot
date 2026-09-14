.class public final Lcom/dualboot/e/a/s;
.super Landroid/preference/Preference;


# instance fields
.field private a:Landroid/app/Activity;

.field private b:Landroid/content/Intent;

.field private c:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/dualboot/e/a/s;-><init>(Landroid/content/Context;B)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;B)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/dualboot/e/a/s;-><init>(Landroid/content/Context;C)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;C)V
    .locals 2

    const/4 v1, 0x0

    const v0, 0x101008b

    invoke-direct {p0, p1, v1, v0}, Landroid/preference/Preference;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    iput-object v1, p0, Lcom/dualboot/e/a/s;->a:Landroid/app/Activity;

    iput-object v1, p0, Lcom/dualboot/e/a/s;->b:Landroid/content/Intent;

    const/4 v0, -0x1

    iput v0, p0, Lcom/dualboot/e/a/s;->c:I

    return-void
.end method


# virtual methods
.method public final a(Landroid/app/Activity;Landroid/content/Intent;)V
    .locals 1

    iput-object p1, p0, Lcom/dualboot/e/a/s;->a:Landroid/app/Activity;

    iput-object p2, p0, Lcom/dualboot/e/a/s;->b:Landroid/content/Intent;

    const/16 v0, 0x402

    iput v0, p0, Lcom/dualboot/e/a/s;->c:I

    return-void
.end method

.method protected final onClick()V
    .locals 3

    invoke-super {p0}, Landroid/preference/Preference;->onClick()V

    iget-object v0, p0, Lcom/dualboot/e/a/s;->b:Landroid/content/Intent;

    if-nez v0, :cond_0

    :goto_0
    return-void

    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/dualboot/e/a/s;->a:Landroid/app/Activity;

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/dualboot/e/a/s;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/dualboot/e/a/s;->b:Landroid/content/Intent;

    invoke-virtual {v0, v1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    goto :goto_0

    :catch_0
    move-exception v0

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/dualboot/e/a/s;->a:Landroid/app/Activity;

    iget-object v1, p0, Lcom/dualboot/e/a/s;->b:Landroid/content/Intent;

    iget v2, p0, Lcom/dualboot/e/a/s;->c:I

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->startActivityForResult(Landroid/content/Intent;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0
.end method

.method protected final onPrepareForRemoval()V
    .locals 1

    const/4 v0, 0x0

    invoke-super {p0}, Landroid/preference/Preference;->onPrepareForRemoval()V

    iput-object v0, p0, Lcom/dualboot/e/a/s;->a:Landroid/app/Activity;

    iput-object v0, p0, Lcom/dualboot/e/a/s;->b:Landroid/content/Intent;

    const/4 v0, -0x1

    iput v0, p0, Lcom/dualboot/e/a/s;->c:I

    return-void
.end method
