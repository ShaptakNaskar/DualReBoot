.class public abstract Lcom/dualboot/engine/e;
.super Lcom/dualboot/engine/f;


# instance fields
.field final synthetic a:Lcom/dualboot/engine/c;


# direct methods
.method public constructor <init>(Lcom/dualboot/engine/c;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/engine/e;->a:Lcom/dualboot/engine/c;

    invoke-direct {p0, p1}, Lcom/dualboot/engine/f;-><init>(Lcom/dualboot/engine/c;)V

    return-void
.end method


# virtual methods
.method final a()Ljava/lang/Object;
    .locals 1

    invoke-virtual {p0}, Lcom/dualboot/engine/e;->h()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/dualboot/engine/e;->b(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    return-object v0
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V
    .locals 4

    const/4 v1, 0x0

    invoke-super {p0}, Lcom/dualboot/engine/f;->b()V

    iput-object p1, p0, Lcom/dualboot/engine/e;->b:Ljava/lang/String;

    iput-object p2, p0, Lcom/dualboot/engine/e;->c:Ljava/lang/String;

    iput-object p3, p0, Lcom/dualboot/engine/e;->d:Ljava/lang/String;

    iput-object p4, p0, Lcom/dualboot/engine/e;->e:Ljava/lang/String;

    move v0, v1

    :goto_0
    array-length v2, p5

    if-lt v0, v2, :cond_0

    invoke-virtual {p0, v1}, Lcom/dualboot/engine/e;->b(I)V

    return-void

    :cond_0
    iget-object v2, p0, Lcom/dualboot/engine/e;->f:Ljava/util/ArrayList;

    aget-object v3, p5, v0

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v0, v0, 0x1

    goto :goto_0
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V
    .locals 6

    const-string v4, ""

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v5, p4

    invoke-virtual/range {v0 .. v5}, Lcom/dualboot/engine/e;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V

    return-void
.end method
