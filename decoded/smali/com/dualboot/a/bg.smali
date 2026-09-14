.class final Lcom/dualboot/a/bg;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/a/bc;

.field private final synthetic b:Lcom/dualboot/a/bp;


# direct methods
.method constructor <init>(Lcom/dualboot/a/bc;Lcom/dualboot/a/bp;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/bg;->a:Lcom/dualboot/a/bc;

    iput-object p2, p0, Lcom/dualboot/a/bg;->b:Lcom/dualboot/a/bp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    const/4 v0, 0x0

    iget-object v1, p0, Lcom/dualboot/a/bg;->a:Lcom/dualboot/a/bc;

    iget-object v2, v1, Lcom/dualboot/a/bc;->a:Lcom/dualboot/a/ay;

    iget-object v1, v2, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_1

    :goto_0
    iget-object v1, p0, Lcom/dualboot/a/bg;->b:Lcom/dualboot/a/bp;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/dualboot/a/bg;->b:Lcom/dualboot/a/bp;

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-interface {v1, v0}, Lcom/dualboot/a/bp;->b(Ljava/lang/Object;)V

    :cond_0
    return-void

    :cond_1
    iget-object v1, v2, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    move v1, v0

    :cond_2
    :goto_1
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_3

    move v0, v1

    goto :goto_0

    :cond_3
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/ax;

    iget-object v4, v2, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-static {v0, v4}, Lcom/dualboot/a/ay;->a(Lcom/dualboot/a/ax;Ljava/util/Map;)Lcom/dualboot/a/ab;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/dualboot/a/ab;->f()Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 v0, 0x1

    move v1, v0

    goto :goto_1
.end method
