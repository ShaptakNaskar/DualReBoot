.class final Lcom/dualboot/util/k;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/util/j;

.field private final synthetic b:Lcom/dualboot/util/l;


# direct methods
.method constructor <init>(Lcom/dualboot/util/j;Lcom/dualboot/util/l;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/util/k;->a:Lcom/dualboot/util/j;

    iput-object p2, p0, Lcom/dualboot/util/k;->b:Lcom/dualboot/util/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/dualboot/util/k;->b:Lcom/dualboot/util/l;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/util/k;->b:Lcom/dualboot/util/l;

    invoke-interface {v0}, Lcom/dualboot/util/l;->a_()V

    :cond_0
    invoke-static {}, Lcom/dualboot/util/j;->b()Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    return-void
.end method
