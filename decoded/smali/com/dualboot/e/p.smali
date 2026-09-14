.class public final Lcom/dualboot/e/p;
.super Landroid/content/BroadcastReceiver;


# instance fields
.field final synthetic a:Lcom/dualboot/e/n;


# direct methods
.method protected constructor <init>(Lcom/dualboot/e/n;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/p;->a:Lcom/dualboot/e/n;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public final onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 2

    if-eqz p1, :cond_0

    if-nez p2, :cond_1

    :cond_0
    :goto_0
    return-void

    :cond_1
    invoke-virtual {p2}, Landroid/content/Intent;->getPackage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/p;->a:Lcom/dualboot/e/n;

    invoke-virtual {v0}, Lcom/dualboot/e/n;->a()V

    goto :goto_0
.end method
