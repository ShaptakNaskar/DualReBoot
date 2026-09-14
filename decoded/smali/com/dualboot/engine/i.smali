.class public final Lcom/dualboot/engine/i;
.super Lcom/dualboot/engine/e;


# instance fields
.field final synthetic k:Lcom/dualboot/engine/c;


# direct methods
.method public constructor <init>(Lcom/dualboot/engine/c;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/engine/i;->k:Lcom/dualboot/engine/c;

    invoke-direct {p0, p1}, Lcom/dualboot/engine/e;-><init>(Lcom/dualboot/engine/c;)V

    return-void
.end method


# virtual methods
.method protected final a(Landroid/content/Context;Lcom/dualboot/engine/d;)Landroid/preference/Preference;
    .locals 6

    const/4 v3, 0x1

    const/4 v1, 0x0

    sget-object v0, Lcom/dualboot/engine/d;->e:Lcom/dualboot/engine/d;

    if-eq p2, v0, :cond_0

    sget-object v0, Lcom/dualboot/engine/d;->a:Lcom/dualboot/engine/d;

    if-ne p2, v0, :cond_2

    :cond_0
    new-instance v0, Lcom/dualboot/e/a/g;

    invoke-direct {v0, p1}, Lcom/dualboot/e/a/g;-><init>(Landroid/content/Context;)V

    :cond_1
    :goto_0
    return-object v0

    :cond_2
    invoke-virtual {p0}, Lcom/dualboot/engine/i;->g()I

    move-result v2

    if-nez v2, :cond_3

    new-instance v0, Lcom/dualboot/e/a/k;

    invoke-direct {v0, p1}, Lcom/dualboot/e/a/k;-><init>(Landroid/content/Context;)V

    invoke-virtual {p0}, Lcom/dualboot/engine/i;->d()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/dualboot/e/a/k;->setDialogTitle(Ljava/lang/CharSequence;)V

    invoke-virtual {v0}, Lcom/dualboot/e/a/k;->getEditText()Landroid/widget/EditText;

    move-result-object v2

    if-eqz v2, :cond_1

    new-array v3, v3, [Landroid/text/InputFilter;

    new-instance v4, Landroid/text/InputFilter$LengthFilter;

    const/16 v5, 0x50

    invoke-direct {v4, v5}, Landroid/text/InputFilter$LengthFilter;-><init>(I)V

    aput-object v4, v3, v1

    invoke-virtual {v2, v3}, Landroid/widget/EditText;->setFilters([Landroid/text/InputFilter;)V

    goto :goto_0

    :cond_3
    if-le v2, v3, :cond_5

    new-instance v0, Lcom/dualboot/e/a/m;

    invoke-direct {v0, p1}, Lcom/dualboot/e/a/m;-><init>(Landroid/content/Context;)V

    invoke-virtual {p0}, Lcom/dualboot/engine/i;->d()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/dualboot/e/a/m;->setDialogTitle(Ljava/lang/CharSequence;)V

    new-array v3, v2, [Ljava/lang/CharSequence;

    new-array v4, v2, [Ljava/lang/CharSequence;

    :goto_1
    if-lt v1, v2, :cond_4

    invoke-virtual {v0, v3}, Lcom/dualboot/e/a/m;->setEntries([Ljava/lang/CharSequence;)V

    invoke-virtual {v0, v4}, Lcom/dualboot/e/a/m;->setEntryValues([Ljava/lang/CharSequence;)V

    goto :goto_0

    :cond_4
    invoke-virtual {p0, v1}, Lcom/dualboot/engine/i;->a(I)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v3, v1

    invoke-virtual {p0, v1}, Lcom/dualboot/engine/i;->a(I)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v4, v1

    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    :cond_5
    const/4 v0, 0x0

    goto :goto_0
.end method

.method protected final b(Ljava/lang/String;)Ljava/lang/Object;
    .locals 0

    return-object p1
.end method

.method protected final b(Landroid/content/SharedPreferences;)Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/dualboot/engine/i;->c()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/dualboot/engine/i;->i()Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
