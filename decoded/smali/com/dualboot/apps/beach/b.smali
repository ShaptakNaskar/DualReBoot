.class public Lcom/dualboot/apps/beach/b;
.super Lcom/dualboot/e/l;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/dualboot/e/l;-><init>()V

    return-void
.end method


# virtual methods
.method protected final a()Lcom/dualboot/e/j;
    .locals 1

    new-instance v0, Lcom/dualboot/apps/beach/a;

    invoke-direct {v0}, Lcom/dualboot/apps/beach/a;-><init>()V

    return-object v0
.end method

.method protected final a(Landroid/content/SharedPreferences;)V
    .locals 7

    new-instance v0, Lcom/dualboot/util/s;

    invoke-direct {v0, p1}, Lcom/dualboot/util/s;-><init>(Landroid/content/SharedPreferences;)V

    const-string v1, "texturegroup_sign_type"

    const-string v2, "Private Beach"

    const-string v3, "texturegroup_sign_type"

    const-string v4, "Custom Sign"

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/dualboot/util/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    const-string v1, "modelswap_plane_speed"

    const-string v2, "None"

    sget-object v3, Lcom/dualboot/util/t;->a:Lcom/dualboot/util/t;

    const-string v4, "modeltoggle_plane"

    const-string v5, "false"

    sget-object v6, Lcom/dualboot/util/t;->b:Lcom/dualboot/util/t;

    invoke-virtual/range {v0 .. v6}, Lcom/dualboot/util/s;->a(Ljava/lang/String;Ljava/lang/String;Lcom/dualboot/util/t;Ljava/lang/String;Ljava/lang/String;Lcom/dualboot/util/t;)Z

    const-string v1, "modelswap_plane_speed"

    const-string v2, "Normal"

    const-string v3, "modelswap_plane_speed"

    const-string v4, "Fast"

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/dualboot/util/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    const-string v1, "modeltoggle_ship"

    const-string v2, "true"

    sget-object v3, Lcom/dualboot/util/t;->b:Lcom/dualboot/util/t;

    const-string v4, "modelswap_ship"

    const-string v5, "Cargo Ship"

    sget-object v6, Lcom/dualboot/util/t;->a:Lcom/dualboot/util/t;

    invoke-virtual/range {v0 .. v6}, Lcom/dualboot/util/s;->a(Ljava/lang/String;Ljava/lang/String;Lcom/dualboot/util/t;Ljava/lang/String;Ljava/lang/String;Lcom/dualboot/util/t;)Z

    iget-object v1, v0, Lcom/dualboot/util/s;->c:Landroid/content/SharedPreferences;

    if-eqz v1, :cond_1

    iget-object v1, v0, Lcom/dualboot/util/s;->a:Ljava/util/Collection;

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_0
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-nez v1, :cond_2

    iget-object v1, v0, Lcom/dualboot/util/s;->b:Ljava/util/Collection;

    invoke-interface {v1}, Ljava/util/Collection;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, v0, Lcom/dualboot/util/s;->c:Landroid/content/SharedPreferences;

    invoke-interface {v1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    if-eqz v1, :cond_1

    iget-object v0, v0, Lcom/dualboot/util/s;->b:Ljava/util/Collection;

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_4

    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    :cond_1
    return-void

    :cond_2
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/dualboot/util/u;

    iget-object v3, v0, Lcom/dualboot/util/s;->c:Landroid/content/SharedPreferences;

    if-eqz v3, :cond_0

    if-eqz v1, :cond_0

    iget-object v3, v1, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    invoke-virtual {v0, v3}, Lcom/dualboot/util/s;->a(Lcom/dualboot/util/v;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    iget-boolean v4, v1, Lcom/dualboot/util/u;->e:Z

    if-nez v4, :cond_3

    iget-object v1, v1, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    invoke-virtual {v0, v1, v3}, Lcom/dualboot/util/s;->a(Lcom/dualboot/util/v;Ljava/lang/String;)V

    goto :goto_0

    :cond_3
    iget-object v4, v1, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    iget-object v4, v4, Lcom/dualboot/util/v;->b:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    iget-object v3, v1, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    iget-object v1, v1, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    iget-object v1, v1, Lcom/dualboot/util/v;->b:Ljava/lang/String;

    invoke-virtual {v0, v3, v1}, Lcom/dualboot/util/s;->a(Lcom/dualboot/util/v;Ljava/lang/String;)V

    goto :goto_0

    :cond_4
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "Removing old preference: "

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    invoke-interface {v1, v0}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    goto :goto_1
.end method

.method protected final b()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method
