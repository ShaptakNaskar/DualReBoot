.class final Lcom/dualboot/e/a/e;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/e/a/d;

.field private final synthetic b:Z

.field private final synthetic c:Z

.field private final synthetic d:Ljava/util/List;


# direct methods
.method constructor <init>(Lcom/dualboot/e/a/d;ZZLjava/util/List;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/a/e;->a:Lcom/dualboot/e/a/d;

    iput-boolean p2, p0, Lcom/dualboot/e/a/e;->b:Z

    iput-boolean p3, p0, Lcom/dualboot/e/a/e;->c:Z

    iput-object p4, p0, Lcom/dualboot/e/a/e;->d:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-boolean v0, p0, Lcom/dualboot/e/a/e;->b:Z

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/dualboot/e/a/e;->c:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/a/e;->a:Lcom/dualboot/e/a/d;

    iget-object v0, v0, Lcom/dualboot/e/a/d;->d:Lcom/dualboot/e/a/c;

    iget-object v0, v0, Lcom/dualboot/e/a/c;->c:Lcom/dualboot/e/a/f;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/a/e;->a:Lcom/dualboot/e/a/d;

    iget-object v0, v0, Lcom/dualboot/e/a/d;->d:Lcom/dualboot/e/a/c;

    iget-object v0, v0, Lcom/dualboot/e/a/c;->c:Lcom/dualboot/e/a/f;

    invoke-interface {v0}, Lcom/dualboot/e/a/f;->c()V

    :cond_0
    iget-object v0, p0, Lcom/dualboot/e/a/e;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    :cond_1
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/e/a/q;

    invoke-interface {v0}, Lcom/dualboot/e/a/q;->c()V

    goto :goto_0
.end method
