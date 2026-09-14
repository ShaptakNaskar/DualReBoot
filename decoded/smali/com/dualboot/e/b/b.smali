.class public final Lcom/dualboot/e/b/b;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/DialogInterface$OnDismissListener;


# instance fields
.field final synthetic a:Lcom/dualboot/e/b/a;

.field private final synthetic b:Landroid/content/SharedPreferences;

.field private final synthetic c:Landroid/widget/CheckBox;


# direct methods
.method public constructor <init>(Lcom/dualboot/e/b/a;Landroid/content/SharedPreferences;Landroid/widget/CheckBox;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/b/b;->a:Lcom/dualboot/e/b/a;

    iput-object p2, p0, Lcom/dualboot/e/b/b;->b:Landroid/content/SharedPreferences;

    iput-object p3, p0, Lcom/dualboot/e/b/b;->c:Landroid/widget/CheckBox;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDismiss(Landroid/content/DialogInterface;)V
    .locals 3

    iget-object v0, p0, Lcom/dualboot/e/b/b;->b:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/b/b;->c:Landroid/widget/CheckBox;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/e/b/b;->c:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    :goto_0
    const-string v2, "key_show_about_offers"

    invoke-interface {v1, v2, v0}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    :cond_0
    return-void

    :cond_1
    const/4 v0, 0x0

    goto :goto_0
.end method
