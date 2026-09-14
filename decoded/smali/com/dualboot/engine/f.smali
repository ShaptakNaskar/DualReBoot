.class public abstract Lcom/dualboot/engine/f;
.super Ljava/lang/Object;


# instance fields
.field protected b:Ljava/lang/String;

.field protected c:Ljava/lang/String;

.field protected d:Ljava/lang/String;

.field protected e:Ljava/lang/String;

.field protected f:Ljava/util/ArrayList;

.field protected g:Ljava/lang/String;

.field protected h:Ljava/lang/String;

.field protected i:Ljava/lang/String;

.field final synthetic j:Lcom/dualboot/engine/c;


# direct methods
.method protected constructor <init>(Lcom/dualboot/engine/c;)V
    .locals 1

    const/4 v0, 0x0

    iput-object p1, p0, Lcom/dualboot/engine/f;->j:Lcom/dualboot/engine/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/f;->b:Ljava/lang/String;

    iput-object v0, p0, Lcom/dualboot/engine/f;->c:Ljava/lang/String;

    iput-object v0, p0, Lcom/dualboot/engine/f;->d:Ljava/lang/String;

    iput-object v0, p0, Lcom/dualboot/engine/f;->e:Ljava/lang/String;

    iput-object v0, p0, Lcom/dualboot/engine/f;->f:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/f;->g:Ljava/lang/String;

    iput-object v0, p0, Lcom/dualboot/engine/f;->h:Ljava/lang/String;

    iput-object v0, p0, Lcom/dualboot/engine/f;->i:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/dualboot/engine/f;->b()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/content/Context;Landroid/preference/PreferenceGroup;Lcom/dualboot/engine/d;)Landroid/preference/Preference;
    .locals 2

    const/4 v1, 0x0

    iget-object v0, p0, Lcom/dualboot/engine/f;->b:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    if-lez v0, :cond_1

    invoke-virtual {p0, p1, p3}, Lcom/dualboot/engine/f;->a(Landroid/content/Context;Lcom/dualboot/engine/d;)Landroid/preference/Preference;

    move-result-object v1

    if-eqz v1, :cond_1

    iget-object v0, p0, Lcom/dualboot/engine/f;->b:Ljava/lang/String;

    invoke-virtual {v1, v0}, Landroid/preference/Preference;->setKey(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/dualboot/engine/f;->c:Ljava/lang/String;

    invoke-virtual {v1, v0}, Landroid/preference/Preference;->setTitle(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/dualboot/engine/f;->d:Ljava/lang/String;

    invoke-virtual {v1, v0}, Landroid/preference/Preference;->setSummary(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/dualboot/engine/f;->h:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/dualboot/engine/f;->b(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/preference/Preference;->setDefaultValue(Ljava/lang/Object;)V

    if-eqz p2, :cond_0

    invoke-virtual {p2, v1}, Landroid/preference/PreferenceGroup;->addPreference(Landroid/preference/Preference;)Z

    :cond_0
    sget-object v0, Lcom/dualboot/engine/d;->m:Lcom/dualboot/engine/d;

    if-ne p3, v0, :cond_1

    instance-of v0, v1, Lcom/dualboot/e/a/a;

    if-eqz v0, :cond_1

    move-object v0, v1

    check-cast v0, Lcom/dualboot/e/a/a;

    invoke-virtual {v0}, Lcom/dualboot/e/a/a;->d()V

    :cond_1
    return-object v1
.end method

.method protected abstract a(Landroid/content/Context;Lcom/dualboot/engine/d;)Landroid/preference/Preference;
.end method

.method public final a(I)Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/f;->f:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-ge p1, v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/engine/f;->f:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    :goto_0
    return-object v0

    :cond_0
    const-string v0, ""

    goto :goto_0
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/engine/f;->i:Ljava/lang/String;

    return-void
.end method

.method final a(Landroid/content/SharedPreferences;)Z
    .locals 2

    if-eqz p1, :cond_1

    iget-object v0, p0, Lcom/dualboot/engine/f;->b:Ljava/lang/String;

    invoke-interface {p1, v0}, Landroid/content/SharedPreferences;->contains(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0, p1}, Lcom/dualboot/engine/f;->b(Landroid/content/SharedPreferences;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/dualboot/engine/f;->d(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    iput-object v0, p0, Lcom/dualboot/engine/f;->g:Ljava/lang/String;

    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_0
    invoke-virtual {p0}, Lcom/dualboot/engine/f;->l()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/engine/f;->g:Ljava/lang/String;

    :cond_1
    const/4 v0, 0x0

    goto :goto_0
.end method

.method final a(Ljava/io/BufferedReader;)Z
    .locals 5

    const/4 v0, 0x0

    invoke-virtual {p0}, Lcom/dualboot/engine/f;->b()V

    if-eqz p1, :cond_0

    :try_start_0
    invoke-virtual {p1}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/dualboot/engine/f;->b:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/dualboot/engine/f;->c:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/dualboot/engine/f;->d:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    move v1, v0

    :goto_0
    if-lt v1, v2, :cond_1

    const/4 v1, 0x0

    invoke-virtual {p0, v1}, Lcom/dualboot/engine/f;->b(I)V

    const/4 v0, 0x1

    :cond_0
    :goto_1
    return v0

    :cond_1
    iget-object v3, p0, Lcom/dualboot/engine/f;->f:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :catch_0
    move-exception v1

    goto :goto_1
.end method

.method final a(Lorg/json/JSONObject;)Z
    .locals 6

    const/4 v0, 0x0

    invoke-virtual {p0}, Lcom/dualboot/engine/f;->b()V

    :try_start_0
    const-string v1, "key"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/dualboot/engine/f;->b:Ljava/lang/String;

    const-string v1, "name"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/dualboot/engine/f;->c:Ljava/lang/String;

    const-string v1, "desc"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/dualboot/engine/f;->d:Ljava/lang/String;

    const-string v1, "req"

    const-string v2, ""

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/dualboot/engine/f;->e:Ljava/lang/String;

    const-string v1, "vals"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v3

    move v1, v0

    :goto_0
    if-lt v1, v3, :cond_0

    const/4 v1, 0x0

    invoke-virtual {p0, v1}, Lcom/dualboot/engine/f;->b(I)V

    const/4 v0, 0x1

    :goto_1
    return v0

    :cond_0
    iget-object v4, p0, Lcom/dualboot/engine/f;->f:Ljava/util/ArrayList;

    invoke-virtual {v2, v1}, Lorg/json/JSONArray;->getString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :catch_0
    move-exception v1

    goto :goto_1
.end method

.method protected abstract b(Ljava/lang/String;)Ljava/lang/Object;
.end method

.method protected abstract b(Landroid/content/SharedPreferences;)Ljava/lang/String;
.end method

.method final b()V
    .locals 1

    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/engine/f;->b:Ljava/lang/String;

    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/engine/f;->c:Ljava/lang/String;

    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/engine/f;->d:Ljava/lang/String;

    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/engine/f;->e:Ljava/lang/String;

    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/engine/f;->g:Ljava/lang/String;

    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/engine/f;->h:Ljava/lang/String;

    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/engine/f;->i:Ljava/lang/String;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/f;->f:Ljava/util/ArrayList;

    return-void
.end method

.method final b(I)V
    .locals 1

    invoke-virtual {p0, p1}, Lcom/dualboot/engine/f;->a(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/engine/f;->h:Ljava/lang/String;

    iget-object v0, p0, Lcom/dualboot/engine/f;->h:Ljava/lang/String;

    iput-object v0, p0, Lcom/dualboot/engine/f;->g:Ljava/lang/String;

    return-void
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/f;->b:Ljava/lang/String;

    return-object v0
.end method

.method final c(Ljava/lang/String;)V
    .locals 3

    const/4 v1, 0x0

    move v0, v1

    :goto_0
    iget-object v2, p0, Lcom/dualboot/engine/f;->f:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lt v0, v2, :cond_1

    move v0, v1

    :cond_0
    invoke-virtual {p0, v0}, Lcom/dualboot/engine/f;->b(I)V

    return-void

    :cond_1
    invoke-virtual {p0, v0}, Lcom/dualboot/engine/f;->a(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/f;->c:Ljava/lang/String;

    return-object v0
.end method

.method public final d(Ljava/lang/String;)Z
    .locals 3

    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/dualboot/engine/f;->b:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-virtual {v0, v1, p1, v2}, Lcom/dualboot/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/util/Collection;)Z

    move-result v0

    :goto_0
    return v0

    :cond_0
    const/4 v0, 0x1

    goto :goto_0
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/f;->d:Ljava/lang/String;

    return-object v0
.end method

.method public final f()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/f;->e:Ljava/lang/String;

    return-object v0
.end method

.method public final g()I
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/f;->f:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    return v0
.end method

.method public final h()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/f;->g:Ljava/lang/String;

    return-object v0
.end method

.method public final i()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/f;->h:Ljava/lang/String;

    return-object v0
.end method

.method public final j()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/f;->i:Ljava/lang/String;

    return-object v0
.end method

.method public final k()I
    .locals 4

    const/4 v1, 0x0

    move v0, v1

    :goto_0
    iget-object v2, p0, Lcom/dualboot/engine/f;->f:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lt v0, v2, :cond_1

    move v0, v1

    :cond_0
    return v0

    :cond_1
    invoke-virtual {p0, v0}, Lcom/dualboot/engine/f;->a(I)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/dualboot/engine/f;->g:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0
.end method

.method public l()Ljava/lang/String;
    .locals 5

    iget-object v0, p0, Lcom/dualboot/engine/f;->h:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/dualboot/engine/f;->d(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    :cond_0
    :goto_0
    return-object v0

    :cond_1
    iget-object v1, p0, Lcom/dualboot/engine/f;->f:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v3

    const/4 v1, 0x0

    move v2, v1

    :goto_1
    if-ge v2, v3, :cond_0

    invoke-virtual {p0, v2}, Lcom/dualboot/engine/f;->a(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/dualboot/engine/f;->d(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_2

    move-object v0, v1

    goto :goto_0

    :cond_2
    add-int/lit8 v1, v2, 0x1

    move v2, v1

    goto :goto_1
.end method

.method public m()V
    .locals 1

    invoke-virtual {p0}, Lcom/dualboot/engine/f;->l()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/dualboot/engine/f;->c(Ljava/lang/String;)V

    return-void
.end method
