.class final Lcom/dualboot/a/bf;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/a/bc;

.field private final synthetic b:Ljava/lang/String;

.field private final synthetic c:Ljava/lang/String;

.field private final synthetic d:Ljava/lang/String;

.field private final synthetic e:Ljava/lang/String;

.field private final synthetic f:Lcom/dualboot/a/bp;


# direct methods
.method constructor <init>(Lcom/dualboot/a/bc;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    iput-object p1, p0, Lcom/dualboot/a/bf;->a:Lcom/dualboot/a/bc;

    iput-object p2, p0, Lcom/dualboot/a/bf;->b:Ljava/lang/String;

    iput-object p3, p0, Lcom/dualboot/a/bf;->c:Ljava/lang/String;

    iput-object p4, p0, Lcom/dualboot/a/bf;->d:Ljava/lang/String;

    iput-object p5, p0, Lcom/dualboot/a/bf;->e:Ljava/lang/String;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/a/bf;->f:Lcom/dualboot/a/bp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 8

    const/4 v0, 0x0

    iget-object v1, p0, Lcom/dualboot/a/bf;->a:Lcom/dualboot/a/bc;

    iget-object v2, p0, Lcom/dualboot/a/bf;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/dualboot/a/bf;->c:Ljava/lang/String;

    iget-object v4, p0, Lcom/dualboot/a/bf;->d:Ljava/lang/String;

    iget-object v5, p0, Lcom/dualboot/a/bf;->e:Ljava/lang/String;

    iget-object v5, v1, Lcom/dualboot/a/bc;->a:Lcom/dualboot/a/ay;

    iget-object v1, v5, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_1

    :goto_0
    iget-object v1, p0, Lcom/dualboot/a/bf;->f:Lcom/dualboot/a/bp;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/dualboot/a/bf;->f:Lcom/dualboot/a/bp;

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-interface {v1, v0}, Lcom/dualboot/a/bp;->b(Ljava/lang/Object;)V

    :cond_0
    return-void

    :cond_1
    iget-object v1, v5, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v6

    move v1, v0

    :cond_2
    :goto_1
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_3

    move v0, v1

    goto :goto_0

    :cond_3
    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/ax;

    iget-object v7, v5, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-static {v0, v7}, Lcom/dualboot/a/ay;->a(Lcom/dualboot/a/ax;Ljava/util/Map;)Lcom/dualboot/a/ab;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {v0, v2, v3, v4}, Lcom/dualboot/a/ab;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 v0, 0x1

    move v1, v0

    goto :goto_1
.end method
