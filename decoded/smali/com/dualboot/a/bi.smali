.class final Lcom/dualboot/a/bi;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/a/bc;

.field private final synthetic b:Ljava/lang/String;

.field private final synthetic c:Ljava/lang/String;

.field private final synthetic d:Ljava/lang/String;

.field private final synthetic e:Lcom/dualboot/a/bp;


# direct methods
.method constructor <init>(Lcom/dualboot/a/bc;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/dualboot/a/bp;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/bi;->a:Lcom/dualboot/a/bc;

    iput-object p2, p0, Lcom/dualboot/a/bi;->b:Ljava/lang/String;

    iput-object p3, p0, Lcom/dualboot/a/bi;->c:Ljava/lang/String;

    iput-object p4, p0, Lcom/dualboot/a/bi;->d:Ljava/lang/String;

    iput-object p5, p0, Lcom/dualboot/a/bi;->e:Lcom/dualboot/a/bp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 9

    const/4 v1, 0x0

    iget-object v0, p0, Lcom/dualboot/a/bi;->a:Lcom/dualboot/a/bc;

    iget-object v2, p0, Lcom/dualboot/a/bi;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/dualboot/a/bi;->c:Ljava/lang/String;

    iget-object v4, p0, Lcom/dualboot/a/bi;->d:Ljava/lang/String;

    iget-object v5, v0, Lcom/dualboot/a/bc;->a:Lcom/dualboot/a/ay;

    iget-object v0, v5, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_1

    move-object v0, v1

    :goto_0
    iget-object v1, p0, Lcom/dualboot/a/bi;->e:Lcom/dualboot/a/bp;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/dualboot/a/bi;->e:Lcom/dualboot/a/bp;

    invoke-interface {v1, v0}, Lcom/dualboot/a/bp;->b(Ljava/lang/Object;)V

    :cond_0
    return-void

    :cond_1
    iget-object v0, v5, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v6

    :cond_2
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_3

    move-object v0, v1

    goto :goto_0

    :cond_3
    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/ax;

    iget-object v7, v5, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-static {v0, v7}, Lcom/dualboot/a/ay;->a(Lcom/dualboot/a/ax;Ljava/util/Map;)Lcom/dualboot/a/ab;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/dualboot/a/ab;->d()Z

    move-result v7

    if-eqz v7, :cond_5

    invoke-virtual {v0, v2}, Lcom/dualboot/a/ab;->c(Ljava/lang/String;)Lcom/dualboot/a/af;

    move-result-object v0

    if-eqz v0, :cond_5

    invoke-virtual {v0}, Lcom/dualboot/a/af;->a()Z

    move-result v7

    if-eqz v7, :cond_5

    iget-object v7, v0, Lcom/dualboot/a/af;->b:Ljava/lang/String;

    iget-object v0, v0, Lcom/dualboot/a/af;->c:Ljava/lang/String;

    invoke-static {v3, v7}, Lcom/dualboot/a/ai;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v4, v0}, Lcom/dualboot/a/ai;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-static {v3, v7}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-static {v4, v8}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    const/4 v0, 0x0

    :goto_1
    if-eqz v0, :cond_5

    new-instance v0, Lcom/dualboot/a/ai;

    invoke-direct {v0, v7, v8}, Lcom/dualboot/a/ai;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    if-eqz v0, :cond_2

    goto :goto_0

    :cond_4
    const/4 v0, 0x1

    goto :goto_1

    :cond_5
    move-object v0, v1

    goto :goto_2
.end method
