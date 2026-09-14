.class final Lcom/dualboot/e/a/o;
.super Landroid/widget/ArrayAdapter;


# instance fields
.field final a:Lcom/dualboot/e/a/u;

.field final synthetic b:Lcom/dualboot/e/a/m;


# direct methods
.method public constructor <init>(Lcom/dualboot/e/a/m;Landroid/content/Context;[Ljava/lang/CharSequence;Lcom/dualboot/e/a/u;Z)V
    .locals 1

    iput-object p1, p0, Lcom/dualboot/e/a/o;->b:Lcom/dualboot/e/a/m;

    if-eqz p5, :cond_0

    const v0, 0x109000f

    :goto_0
    invoke-direct {p0, p2, v0, p3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I[Ljava/lang/Object;)V

    iput-object p4, p0, Lcom/dualboot/e/a/o;->a:Lcom/dualboot/e/a/u;

    return-void

    :cond_0
    const v0, 0x1090012

    goto :goto_0
.end method


# virtual methods
.method public final areAllItemsEnabled()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 3

    invoke-super {p0, p1, p2, p3}, Landroid/widget/ArrayAdapter;->getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/a/o;->a:Lcom/dualboot/e/a/u;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/e/a/o;->a:Lcom/dualboot/e/a/u;

    const/4 v2, 0x0

    invoke-virtual {v0, p1, v2}, Lcom/dualboot/e/a/u;->a(ILjava/util/Collection;)Z

    move-result v0

    :goto_0
    invoke-virtual {v1, v0}, Landroid/view/View;->setEnabled(Z)V

    :cond_0
    return-object v1

    :cond_1
    const/4 v0, 0x0

    goto :goto_0
.end method
