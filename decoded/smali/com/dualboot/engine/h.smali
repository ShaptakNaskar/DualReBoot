.class public final Lcom/dualboot/engine/h;
.super Lcom/dualboot/engine/e;


# instance fields
.field protected k:Z

.field final synthetic l:Lcom/dualboot/engine/c;


# direct methods
.method public constructor <init>(Lcom/dualboot/engine/c;)V
    .locals 1

    iput-object p1, p0, Lcom/dualboot/engine/h;->l:Lcom/dualboot/engine/c;

    invoke-direct {p0, p1}, Lcom/dualboot/engine/e;-><init>(Lcom/dualboot/engine/c;)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/dualboot/engine/h;->k:Z

    return-void
.end method


# virtual methods
.method protected final a(Landroid/content/Context;Lcom/dualboot/engine/d;)Landroid/preference/Preference;
    .locals 2

    sget-object v0, Lcom/dualboot/engine/d;->m:Lcom/dualboot/engine/d;

    if-ne p2, v0, :cond_0

    new-instance v0, Lcom/dualboot/e/a/a;

    invoke-direct {v0, p1}, Lcom/dualboot/e/a/a;-><init>(Landroid/content/Context;)V

    iget-boolean v1, p0, Lcom/dualboot/engine/h;->k:Z

    invoke-virtual {v0, v1}, Lcom/dualboot/e/a/a;->setDisableDependentsState(Z)V

    :goto_0
    return-object v0

    :cond_0
    new-instance v0, Lcom/dualboot/e/a/i;

    invoke-direct {v0, p1}, Lcom/dualboot/e/a/i;-><init>(Landroid/content/Context;)V

    iget-boolean v1, p0, Lcom/dualboot/engine/h;->k:Z

    invoke-virtual {v0, v1}, Lcom/dualboot/e/a/i;->setDisableDependentsState(Z)V

    goto :goto_0
.end method

.method protected final a(Landroid/content/SharedPreferences$Editor;)V
    .locals 2

    if-eqz p1, :cond_0

    invoke-virtual {p0}, Lcom/dualboot/engine/h;->c()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/dualboot/engine/h;->h()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result v1

    invoke-interface {p1, v0, v1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    :cond_0
    return-void
.end method

.method protected final b(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v0

    return-object v0
.end method

.method protected final b(Landroid/content/SharedPreferences;)Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/dualboot/engine/h;->c()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/dualboot/engine/h;->i()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result v1

    invoke-interface {p1, v0, v1}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->toString(Z)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final l()Ljava/lang/String;
    .locals 3

    invoke-virtual {p0}, Lcom/dualboot/engine/h;->i()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/dualboot/engine/h;->d(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    move-object v0, v1

    :cond_0
    :goto_0
    return-object v0

    :cond_1
    invoke-static {v1}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 v0, 0x0

    :goto_1
    invoke-static {v0}, Ljava/lang/Boolean;->toString(Z)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/dualboot/engine/h;->d(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_0

    move-object v0, v1

    goto :goto_0

    :cond_2
    const/4 v0, 0x1

    goto :goto_1
.end method

.method public final m()V
    .locals 3

    invoke-virtual {p0}, Lcom/dualboot/engine/h;->l()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/dualboot/engine/h;->f:Ljava/util/ArrayList;

    const/4 v2, 0x0

    invoke-virtual {v1, v2, v0}, Ljava/util/ArrayList;->set(ILjava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {p0, v0}, Lcom/dualboot/engine/h;->c(Ljava/lang/String;)V

    return-void
.end method

.method public final n()V
    .locals 1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/dualboot/engine/h;->k:Z

    return-void
.end method
