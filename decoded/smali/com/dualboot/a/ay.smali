.class public final Lcom/dualboot/a/ay;
.super Ljava/lang/Object;


# instance fields
.field final a:Ljava/util/Map;

.field final b:Ljava/util/Map;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/TreeMap;

    invoke-direct {v0}, Ljava/util/TreeMap;-><init>()V

    iput-object v0, p0, Lcom/dualboot/a/ay;->a:Ljava/util/Map;

    new-instance v0, Ljava/util/TreeMap;

    invoke-direct {v0}, Ljava/util/TreeMap;-><init>()V

    iput-object v0, p0, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    return-void
.end method

.method static a(Lcom/dualboot/a/ax;Ljava/util/Map;)Lcom/dualboot/a/ab;
    .locals 1

    invoke-interface {p1, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/ab;

    :goto_0
    return-object v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method

.method static a(Ljava/util/Map;)Ljava/util/ArrayList;
    .locals 3

    new-instance v1, Ljava/util/ArrayList;

    invoke-interface {p0}, Ljava/util/Map;->size()I

    move-result v0

    invoke-direct {v1, v0}, Ljava/util/ArrayList;-><init>(I)V

    invoke-interface {p0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/ax;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_0
.end method

.method static a(Lcom/dualboot/a/ab;Ljava/util/Map;)Z
    .locals 3

    const/4 v0, 0x0

    if-nez p0, :cond_1

    :cond_0
    :goto_0
    return v0

    :cond_1
    iget-object v1, p0, Lcom/dualboot/a/ab;->e:Lcom/dualboot/a/ax;

    invoke-interface {p1, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-interface {p1, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 v0, 0x1

    goto :goto_0
.end method

.method private static b(Lcom/dualboot/a/ax;Ljava/util/Map;)Lcom/dualboot/a/ab;
    .locals 1

    invoke-interface {p1, p0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/ab;

    return-object v0
.end method


# virtual methods
.method final a(Lcom/dualboot/a/ax;)Z
    .locals 3

    const/4 v0, 0x0

    iget-object v1, p0, Lcom/dualboot/a/ay;->a:Ljava/util/Map;

    invoke-static {p1, v1}, Lcom/dualboot/a/ay;->b(Lcom/dualboot/a/ax;Ljava/util/Map;)Lcom/dualboot/a/ab;

    move-result-object v1

    if-nez v1, :cond_1

    :cond_0
    :goto_0
    return v0

    :cond_1
    iget-object v2, p0, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-static {p1, v2}, Lcom/dualboot/a/ay;->a(Lcom/dualboot/a/ax;Ljava/util/Map;)Lcom/dualboot/a/ab;

    move-result-object v2

    if-nez v2, :cond_0

    new-instance v2, Lcom/dualboot/a/ba;

    invoke-direct {v2}, Lcom/dualboot/a/ba;-><init>()V

    invoke-virtual {v1, v2}, Lcom/dualboot/a/ab;->a(Lcom/dualboot/a/ar;)V

    invoke-virtual {v2}, Lcom/dualboot/a/ba;->c()V

    invoke-virtual {v2}, Lcom/dualboot/a/ba;->d()Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v0, p0, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-static {v1, v0}, Lcom/dualboot/a/ay;->a(Lcom/dualboot/a/ab;Ljava/util/Map;)Z

    move-result v0

    goto :goto_0

    :cond_2
    iget-object v2, p0, Lcom/dualboot/a/ay;->a:Ljava/util/Map;

    invoke-static {v1, v2}, Lcom/dualboot/a/ay;->a(Lcom/dualboot/a/ab;Ljava/util/Map;)Z

    goto :goto_0
.end method

.method final b(Lcom/dualboot/a/ax;)Z
    .locals 3

    const/4 v0, 0x0

    iget-object v1, p0, Lcom/dualboot/a/ay;->b:Ljava/util/Map;

    invoke-static {p1, v1}, Lcom/dualboot/a/ay;->b(Lcom/dualboot/a/ax;Ljava/util/Map;)Lcom/dualboot/a/ab;

    move-result-object v1

    if-nez v1, :cond_1

    :cond_0
    :goto_0
    return v0

    :cond_1
    new-instance v2, Lcom/dualboot/a/bb;

    invoke-direct {v2}, Lcom/dualboot/a/bb;-><init>()V

    invoke-virtual {v1, v2}, Lcom/dualboot/a/ab;->a(Lcom/dualboot/a/av;)V

    invoke-virtual {v2}, Lcom/dualboot/a/bb;->c()V

    invoke-virtual {v2}, Lcom/dualboot/a/bb;->d()Z

    move-result v2

    if-eqz v2, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/ay;->a:Ljava/util/Map;

    invoke-static {v1, v0}, Lcom/dualboot/a/ay;->a(Lcom/dualboot/a/ab;Ljava/util/Map;)Z

    move-result v0

    goto :goto_0
.end method
