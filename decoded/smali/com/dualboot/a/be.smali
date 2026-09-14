.class final Lcom/dualboot/a/be;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/a/bc;

.field private final synthetic b:Lcom/dualboot/a/bp;


# direct methods
.method constructor <init>(Lcom/dualboot/a/bc;Lcom/dualboot/a/bp;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/be;->a:Lcom/dualboot/a/bc;

    iput-object p2, p0, Lcom/dualboot/a/be;->b:Lcom/dualboot/a/bp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    iget-object v0, p0, Lcom/dualboot/a/be;->a:Lcom/dualboot/a/bc;

    iget-object v2, v0, Lcom/dualboot/a/bc;->a:Lcom/dualboot/a/ay;

    iget-object v0, v2, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    new-instance v3, Ljava/util/ArrayList;

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v1

    invoke-direct {v3, v1}, Ljava/util/ArrayList;-><init>(I)V

    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :cond_0
    :goto_0
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/a/be;->b:Lcom/dualboot/a/bp;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/a/be;->b:Lcom/dualboot/a/bp;

    invoke-interface {v0, v3}, Lcom/dualboot/a/bp;->b(Ljava/lang/Object;)V

    :cond_1
    return-void

    :cond_2
    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/ax;

    iget-object v1, v2, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-static {v0, v1}, Lcom/dualboot/a/ay;->a(Lcom/dualboot/a/ax;Ljava/util/Map;)Lcom/dualboot/a/ab;

    move-result-object v1

    if-nez v1, :cond_3

    const/4 v1, 0x0

    :goto_1
    if-eqz v1, :cond_0

    invoke-interface {v3, v0}, Ljava/util/Collection;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_3
    invoke-virtual {v1}, Lcom/dualboot/a/ab;->d()Z

    move-result v1

    goto :goto_1
.end method
