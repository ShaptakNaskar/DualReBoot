.class public final Lcom/dualboot/e/a/m;
.super Landroid/preference/ListPreference;

# interfaces
.implements Lcom/dualboot/e/a/r;


# instance fields
.field private a:I

.field private final b:Lcom/dualboot/e/a/u;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0, p1}, Landroid/preference/ListPreference;-><init>(Landroid/content/Context;)V

    const/4 v0, -0x1

    iput v0, p0, Lcom/dualboot/e/a/m;->a:I

    new-instance v0, Lcom/dualboot/e/a/p;

    invoke-direct {v0, p0, p0}, Lcom/dualboot/e/a/p;-><init>(Lcom/dualboot/e/a/m;Landroid/preference/Preference;)V

    iput-object v0, p0, Lcom/dualboot/e/a/m;->b:Lcom/dualboot/e/a/u;

    return-void
.end method

.method static synthetic a(Lcom/dualboot/e/a/m;I)V
    .locals 0

    iput p1, p0, Lcom/dualboot/e/a/m;->a:I

    return-void
.end method


# virtual methods
.method public final a()Lcom/dualboot/e/a/u;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/a/m;->b:Lcom/dualboot/e/a/u;

    return-object v0
.end method

.method public final b()V
    .locals 0

    invoke-virtual {p0}, Lcom/dualboot/e/a/m;->notifyChanged()V

    return-void
.end method

.method protected final onBindView(Landroid/view/View;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/preference/ListPreference;->onBindView(Landroid/view/View;)V

    iget-object v0, p0, Lcom/dualboot/e/a/m;->b:Lcom/dualboot/e/a/u;

    invoke-virtual {v0, p1}, Lcom/dualboot/e/a/u;->a(Landroid/view/View;)V

    return-void
.end method

.method protected final onDialogClosed(Z)V
    .locals 3

    invoke-virtual {p0}, Lcom/dualboot/e/a/m;->getEntryValues()[Ljava/lang/CharSequence;

    move-result-object v0

    if-eqz p1, :cond_0

    if-eqz v0, :cond_0

    iget v1, p0, Lcom/dualboot/e/a/m;->a:I

    if-ltz v1, :cond_0

    iget v1, p0, Lcom/dualboot/e/a/m;->a:I

    array-length v2, v0

    if-ge v1, v2, :cond_0

    iget v1, p0, Lcom/dualboot/e/a/m;->a:I

    aget-object v0, v0, v1

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/m;->callChangeListener(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/m;->setValue(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method protected final onPrepareDialogBuilder(Landroid/app/AlertDialog$Builder;)V
    .locals 7

    invoke-super {p0, p1}, Landroid/preference/ListPreference;->onPrepareDialogBuilder(Landroid/app/AlertDialog$Builder;)V

    invoke-virtual {p0}, Lcom/dualboot/e/a/m;->getValue()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/m;->findIndexOfValue(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/dualboot/e/a/m;->a:I

    new-instance v6, Lcom/dualboot/e/a/n;

    invoke-direct {v6, p0}, Lcom/dualboot/e/a/n;-><init>(Lcom/dualboot/e/a/m;)V

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xb

    if-lt v0, v1, :cond_0

    const/4 v5, 0x1

    :goto_0
    new-instance v0, Lcom/dualboot/e/a/o;

    invoke-virtual {p0}, Lcom/dualboot/e/a/m;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {p0}, Lcom/dualboot/e/a/m;->getEntryValues()[Ljava/lang/CharSequence;

    move-result-object v3

    iget-object v4, p0, Lcom/dualboot/e/a/m;->b:Lcom/dualboot/e/a/u;

    move-object v1, p0

    invoke-direct/range {v0 .. v5}, Lcom/dualboot/e/a/o;-><init>(Lcom/dualboot/e/a/m;Landroid/content/Context;[Ljava/lang/CharSequence;Lcom/dualboot/e/a/u;Z)V

    iget v1, p0, Lcom/dualboot/e/a/m;->a:I

    invoke-virtual {p1, v0, v1, v6}, Landroid/app/AlertDialog$Builder;->setSingleChoiceItems(Landroid/widget/ListAdapter;ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    return-void

    :cond_0
    const/4 v5, 0x0

    goto :goto_0
.end method

.method protected final showDialog(Landroid/os/Bundle;)V
    .locals 7

    iget-object v1, p0, Lcom/dualboot/e/a/m;->b:Lcom/dualboot/e/a/u;

    invoke-virtual {v1}, Lcom/dualboot/e/a/u;->a()I

    move-result v2

    new-instance v3, Ljava/util/HashSet;

    invoke-direct {v3}, Ljava/util/HashSet;-><init>()V

    new-instance v4, Lcom/dualboot/e/a/w;

    invoke-direct {v4, v1, v2}, Lcom/dualboot/e/a/w;-><init>(Lcom/dualboot/e/a/u;I)V

    const/4 v0, 0x0

    :goto_0
    if-lt v0, v2, :cond_0

    invoke-super {p0, p1}, Landroid/preference/ListPreference;->showDialog(Landroid/os/Bundle;)V

    return-void

    :cond_0
    invoke-virtual {v3}, Ljava/util/HashSet;->clear()V

    invoke-virtual {v1, v0, v3}, Lcom/dualboot/e/a/u;->a(ILjava/util/Collection;)Z

    move-result v5

    iget-object v6, v4, Lcom/dualboot/e/a/w;->b:[Z

    aput-boolean v5, v6, v0

    if-nez v5, :cond_1

    iget-object v5, v4, Lcom/dualboot/e/a/w;->a:Ljava/util/Collection;

    invoke-interface {v5, v3}, Ljava/util/Collection;->addAll(Ljava/util/Collection;)Z

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0
.end method
