.class final Lcom/dualboot/a/bd;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/a/bc;

.field private final synthetic b:Lcom/dualboot/a/ae;

.field private final synthetic c:Lcom/dualboot/a/bp;


# direct methods
.method constructor <init>(Lcom/dualboot/a/bc;Lcom/dualboot/a/ae;Lcom/dualboot/a/bp;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/bd;->a:Lcom/dualboot/a/bc;

    iput-object p2, p0, Lcom/dualboot/a/bd;->b:Lcom/dualboot/a/ae;

    iput-object p3, p0, Lcom/dualboot/a/bd;->c:Lcom/dualboot/a/bp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    const/4 v2, 0x0

    iget-object v0, p0, Lcom/dualboot/a/bd;->a:Lcom/dualboot/a/bc;

    iget-object v1, p0, Lcom/dualboot/a/bd;->b:Lcom/dualboot/a/ae;

    iget-object v3, v0, Lcom/dualboot/a/bc;->a:Lcom/dualboot/a/ay;

    if-eqz v1, :cond_1

    invoke-interface {v1}, Lcom/dualboot/a/ae;->a()Ljava/util/Collection;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, v3, Lcom/dualboot/a/ay;->a:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, v3, Lcom/dualboot/a/ay;->a:Ljava/util/Map;

    invoke-static {v0}, Lcom/dualboot/a/ay;->a(Ljava/util/Map;)Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v4

    move v1, v2

    :cond_0
    :goto_1
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_4

    if-lez v1, :cond_1

    const/4 v2, 0x1

    :cond_1
    iget-object v0, p0, Lcom/dualboot/a/bd;->c:Lcom/dualboot/a/bp;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/a/bd;->c:Lcom/dualboot/a/bp;

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/dualboot/a/bp;->b(Ljava/lang/Object;)V

    :cond_2
    return-void

    :cond_3
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/ab;

    iget-object v4, v3, Lcom/dualboot/a/ay;->a:Ljava/util/Map;

    invoke-static {v0, v4}, Lcom/dualboot/a/ay;->a(Lcom/dualboot/a/ab;Ljava/util/Map;)Z

    goto :goto_0

    :cond_4
    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/ax;

    invoke-virtual {v3, v0}, Lcom/dualboot/a/ay;->a(Lcom/dualboot/a/ax;)Z

    move-result v0

    if-eqz v0, :cond_0

    add-int/lit8 v0, v1, 0x1

    move v1, v0

    goto :goto_1
.end method
