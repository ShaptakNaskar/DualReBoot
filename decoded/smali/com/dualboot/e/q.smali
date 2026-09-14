.class final Lcom/dualboot/e/q;
.super Lcom/dualboot/util/b;


# instance fields
.field final synthetic a:Lcom/dualboot/e/n;


# direct methods
.method constructor <init>(Lcom/dualboot/e/n;Landroid/content/Context;J)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-direct {p0, p2, p3, p4}, Lcom/dualboot/util/b;-><init>(Landroid/content/Context;J)V

    return-void
.end method

.method private c()V
    .locals 5

    const/4 v0, 0x0

    iget-object v1, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-static {v1}, Lcom/dualboot/e/n;->c(Lcom/dualboot/e/n;)Ljava/util/ArrayList;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-static {v1}, Lcom/dualboot/e/n;->c(Lcom/dualboot/e/n;)Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_1

    :cond_0
    :goto_0
    return-void

    :cond_1
    iget-object v1, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-static {v1}, Lcom/dualboot/e/n;->c(Lcom/dualboot/e/n;)Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v2

    const/4 v1, 0x1

    if-le v2, v1, :cond_0

    iget-object v1, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-static {v1}, Lcom/dualboot/e/n;->a(Lcom/dualboot/e/n;)Lcom/dualboot/c/g;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-static {v1}, Lcom/dualboot/e/n;->d(Lcom/dualboot/e/n;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-static {v1}, Lcom/dualboot/e/n;->e(Lcom/dualboot/e/n;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/dualboot/b/a;->a(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v3

    if-eqz v3, :cond_0

    iget-object v1, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-static {v1}, Lcom/dualboot/e/n;->d(Lcom/dualboot/e/n;)Ljava/lang/String;

    move-result-object v1

    const/4 v4, 0x0

    invoke-interface {v3, v1, v4}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_3

    :cond_2
    :goto_1
    add-int/lit8 v0, v0, 0x1

    rem-int/2addr v0, v2

    iget-object v1, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-static {v1}, Lcom/dualboot/e/n;->c(Lcom/dualboot/e/n;)Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-interface {v3}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v2, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-static {v2}, Lcom/dualboot/e/n;->d(Lcom/dualboot/e/n;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2, v0}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    iget-object v0, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-virtual {v0}, Lcom/dualboot/e/n;->a()V

    goto :goto_0

    :cond_3
    iget-object v4, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-static {v4}, Lcom/dualboot/e/n;->c(Lcom/dualboot/e/n;)Ljava/util/ArrayList;

    move-result-object v4

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->indexOf(Ljava/lang/Object;)I

    move-result v1

    if-ltz v1, :cond_2

    move v0, v1

    goto :goto_1
.end method


# virtual methods
.method protected final a()V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-static {v0}, Lcom/dualboot/e/n;->b(Lcom/dualboot/e/n;)Lcom/dualboot/e/m;

    move-result-object v0

    sget-object v1, Lcom/dualboot/e/m;->b:Lcom/dualboot/e/m;

    if-ne v0, v1, :cond_0

    invoke-direct {p0}, Lcom/dualboot/e/q;->c()V

    :cond_0
    return-void
.end method

.method protected final a(D)V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-static {v0}, Lcom/dualboot/e/n;->a(Lcom/dualboot/e/n;)Lcom/dualboot/c/g;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-static {v0}, Lcom/dualboot/e/n;->a(Lcom/dualboot/e/n;)Lcom/dualboot/c/g;

    move-result-object v0

    double-to-float v1, p1

    invoke-virtual {v0, v1}, Lcom/dualboot/c/g;->b(F)V

    :cond_0
    return-void
.end method

.method protected final a(FFJ)V
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-static {v0}, Lcom/dualboot/e/n;->a(Lcom/dualboot/e/n;)Lcom/dualboot/c/g;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-static {v0}, Lcom/dualboot/e/n;->a(Lcom/dualboot/e/n;)Lcom/dualboot/c/g;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/dualboot/c/g;->a(FFJ)V

    :cond_0
    return-void
.end method

.method protected final b()V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/e/q;->a:Lcom/dualboot/e/n;

    invoke-static {v0}, Lcom/dualboot/e/n;->b(Lcom/dualboot/e/n;)Lcom/dualboot/e/m;

    move-result-object v0

    sget-object v1, Lcom/dualboot/e/m;->c:Lcom/dualboot/e/m;

    if-ne v0, v1, :cond_0

    invoke-direct {p0}, Lcom/dualboot/e/q;->c()V

    :cond_0
    return-void
.end method
