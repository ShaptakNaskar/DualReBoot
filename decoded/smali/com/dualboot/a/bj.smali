.class final Lcom/dualboot/a/bj;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/a/bc;

.field private final synthetic b:Lcom/dualboot/a/bp;


# direct methods
.method constructor <init>(Lcom/dualboot/a/bc;Lcom/dualboot/a/bp;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/bj;->a:Lcom/dualboot/a/bc;

    iput-object p2, p0, Lcom/dualboot/a/bj;->b:Lcom/dualboot/a/bp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    const/4 v2, 0x0

    iget-object v0, p0, Lcom/dualboot/a/bj;->a:Lcom/dualboot/a/bc;

    iget-object v3, v0, Lcom/dualboot/a/bc;->a:Lcom/dualboot/a/ay;

    iget-object v0, v3, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, v3, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-static {v0}, Lcom/dualboot/a/ay;->a(Ljava/util/Map;)Ljava/util/ArrayList;

    move-result-object v4

    invoke-virtual {v4}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v5

    move v1, v2

    :cond_0
    :goto_0
    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_3

    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-ne v1, v0, :cond_1

    const/4 v2, 0x1

    :cond_1
    iget-object v0, p0, Lcom/dualboot/a/bj;->b:Lcom/dualboot/a/bp;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/a/bj;->b:Lcom/dualboot/a/bp;

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/dualboot/a/bp;->b(Ljava/lang/Object;)V

    :cond_2
    return-void

    :cond_3
    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/ax;

    invoke-virtual {v3, v0}, Lcom/dualboot/a/ay;->b(Lcom/dualboot/a/ax;)Z

    move-result v0

    if-eqz v0, :cond_0

    add-int/lit8 v0, v1, 0x1

    move v1, v0

    goto :goto_0
.end method
