.class public final Lcom/dualboot/util/j;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# static fields
.field private static final a:Ljava/util/concurrent/atomic/AtomicInteger;

.field private static final b:Ljava/util/concurrent/atomic/AtomicInteger;


# instance fields
.field private final c:Lcom/dualboot/util/i;

.field private final d:Ljava/lang/Runnable;

.field private final e:Ljava/util/concurrent/locks/Lock;

.field private final f:Z

.field private g:Lcom/dualboot/util/j;

.field private h:Lcom/dualboot/util/j;

.field private i:Z

.field private j:Z


# direct methods
.method static constructor <clinit>()V
    .locals 2

    const/4 v1, 0x0

    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    sput-object v0, Lcom/dualboot/util/j;->a:Ljava/util/concurrent/atomic/AtomicInteger;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    sput-object v0, Lcom/dualboot/util/j;->b:Ljava/util/concurrent/atomic/AtomicInteger;

    return-void
.end method

.method private constructor <init>(Lcom/dualboot/util/i;Lcom/dualboot/util/j;Ljava/lang/Runnable;Ljava/util/concurrent/locks/Lock;Z)V
    .locals 2

    const/4 v1, 0x0

    const/4 v0, 0x0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/dualboot/util/j;->g:Lcom/dualboot/util/j;

    iput-object v0, p0, Lcom/dualboot/util/j;->h:Lcom/dualboot/util/j;

    iput-boolean v1, p0, Lcom/dualboot/util/j;->i:Z

    iput-boolean v1, p0, Lcom/dualboot/util/j;->j:Z

    iput-object p1, p0, Lcom/dualboot/util/j;->c:Lcom/dualboot/util/i;

    iput-object p3, p0, Lcom/dualboot/util/j;->d:Ljava/lang/Runnable;

    iput-object p4, p0, Lcom/dualboot/util/j;->e:Ljava/util/concurrent/locks/Lock;

    iput-object p2, p0, Lcom/dualboot/util/j;->g:Lcom/dualboot/util/j;

    iput-object v0, p0, Lcom/dualboot/util/j;->h:Lcom/dualboot/util/j;

    iput-boolean p5, p0, Lcom/dualboot/util/j;->f:Z

    return-void
.end method

.method protected constructor <init>(Lcom/dualboot/util/i;Ljava/util/concurrent/locks/Lock;Z)V
    .locals 6

    const/4 v2, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v3, v2

    move-object v4, p2

    move v5, p3

    invoke-direct/range {v0 .. v5}, Lcom/dualboot/util/j;-><init>(Lcom/dualboot/util/i;Lcom/dualboot/util/j;Ljava/lang/Runnable;Ljava/util/concurrent/locks/Lock;Z)V

    iput-object p0, p0, Lcom/dualboot/util/j;->g:Lcom/dualboot/util/j;

    return-void
.end method

.method static synthetic b()Ljava/util/concurrent/atomic/AtomicInteger;
    .locals 1

    sget-object v0, Lcom/dualboot/util/j;->a:Ljava/util/concurrent/atomic/AtomicInteger;

    return-object v0
.end method

.method private c()Z
    .locals 1

    iget-object v0, p0, Lcom/dualboot/util/j;->g:Lcom/dualboot/util/j;

    if-ne v0, p0, :cond_0

    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method

.method private d()Z
    .locals 1

    iget-object v0, p0, Lcom/dualboot/util/j;->h:Lcom/dualboot/util/j;

    if-nez v0, :cond_0

    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method

.method private e()V
    .locals 2

    invoke-direct {p0}, Lcom/dualboot/util/j;->c()Z

    iget-boolean v0, p0, Lcom/dualboot/util/j;->j:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/dualboot/util/j;->j:Z

    iget-object v0, p0, Lcom/dualboot/util/j;->h:Lcom/dualboot/util/j;

    :goto_0
    if-nez v0, :cond_1

    :cond_0
    return-void

    :cond_1
    iget-object v1, p0, Lcom/dualboot/util/j;->c:Lcom/dualboot/util/i;

    invoke-virtual {v1, v0}, Lcom/dualboot/util/i;->b(Ljava/lang/Runnable;)Z

    iget-object v0, v0, Lcom/dualboot/util/j;->h:Lcom/dualboot/util/j;

    goto :goto_0
.end method


# virtual methods
.method public final a(Ljava/lang/Runnable;)Lcom/dualboot/util/j;
    .locals 7

    iget-object v0, p0, Lcom/dualboot/util/j;->g:Lcom/dualboot/util/j;

    iget-object v0, p0, Lcom/dualboot/util/j;->g:Lcom/dualboot/util/j;

    move-object v6, v0

    :goto_0
    invoke-direct {v6}, Lcom/dualboot/util/j;->d()Z

    move-result v0

    if-eqz v0, :cond_0

    if-nez p1, :cond_1

    :goto_1
    return-object v6

    :cond_0
    iget-object v0, v6, Lcom/dualboot/util/j;->h:Lcom/dualboot/util/j;

    move-object v6, v0

    goto :goto_0

    :cond_1
    new-instance v0, Lcom/dualboot/util/j;

    iget-object v1, p0, Lcom/dualboot/util/j;->c:Lcom/dualboot/util/i;

    iget-object v2, p0, Lcom/dualboot/util/j;->g:Lcom/dualboot/util/j;

    iget-object v4, p0, Lcom/dualboot/util/j;->e:Ljava/util/concurrent/locks/Lock;

    iget-boolean v5, p0, Lcom/dualboot/util/j;->f:Z

    move-object v3, p1

    invoke-direct/range {v0 .. v5}, Lcom/dualboot/util/j;-><init>(Lcom/dualboot/util/i;Lcom/dualboot/util/j;Ljava/lang/Runnable;Ljava/util/concurrent/locks/Lock;Z)V

    iput-object v0, v6, Lcom/dualboot/util/j;->h:Lcom/dualboot/util/j;

    iget-object v6, v6, Lcom/dualboot/util/j;->h:Lcom/dualboot/util/j;

    goto :goto_1
.end method

.method public final a()Z
    .locals 1

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/dualboot/util/j;->a(Lcom/dualboot/util/l;)Z

    move-result v0

    return v0
.end method

.method public final a(Lcom/dualboot/util/l;)Z
    .locals 3

    const/4 v2, 0x0

    :goto_0
    invoke-direct {p0}, Lcom/dualboot/util/j;->c()Z

    move-result v0

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/dualboot/util/j;->c:Lcom/dualboot/util/i;

    if-nez v0, :cond_1

    :cond_0
    :goto_1
    return v2

    :cond_1
    invoke-direct {p0}, Lcom/dualboot/util/j;->d()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/util/j;->d:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    :cond_2
    iget-boolean v0, p0, Lcom/dualboot/util/j;->i:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/dualboot/util/j;->i:Z

    new-instance v1, Lcom/dualboot/util/k;

    invoke-direct {v1, p0, p1}, Lcom/dualboot/util/k;-><init>(Lcom/dualboot/util/j;Lcom/dualboot/util/l;)V

    iget-boolean v0, p0, Lcom/dualboot/util/j;->f:Z

    if-eqz v0, :cond_7

    new-instance v0, Lcom/dualboot/util/n;

    invoke-direct {v0, v1}, Lcom/dualboot/util/n;-><init>(Ljava/lang/Runnable;)V

    :goto_2
    invoke-virtual {p0, v0}, Lcom/dualboot/util/j;->a(Ljava/lang/Runnable;)Lcom/dualboot/util/j;

    sget-object v0, Lcom/dualboot/util/j;->a:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->incrementAndGet()I

    iget-boolean v0, p0, Lcom/dualboot/util/j;->f:Z

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/dualboot/util/j;->c:Lcom/dualboot/util/i;

    if-nez p0, :cond_3

    move v0, v2

    :goto_3
    move v2, v0

    :goto_4
    if-eqz v2, :cond_5

    iget-boolean v0, p0, Lcom/dualboot/util/j;->f:Z

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/dualboot/util/j;->e()V

    goto :goto_1

    :cond_3
    new-instance v1, Lcom/dualboot/util/n;

    invoke-direct {v1, p0}, Lcom/dualboot/util/n;-><init>(Ljava/lang/Runnable;)V

    invoke-virtual {v0, v1}, Lcom/dualboot/util/i;->b(Ljava/lang/Runnable;)Z

    move-result v0

    goto :goto_3

    :cond_4
    iget-object v0, p0, Lcom/dualboot/util/j;->c:Lcom/dualboot/util/i;

    invoke-virtual {v0, p0}, Lcom/dualboot/util/i;->b(Ljava/lang/Runnable;)Z

    move-result v2

    goto :goto_4

    :cond_5
    sget-object v0, Lcom/dualboot/util/j;->a:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    goto :goto_1

    :cond_6
    iget-object v0, p0, Lcom/dualboot/util/j;->h:Lcom/dualboot/util/j;

    iget-object p0, p0, Lcom/dualboot/util/j;->g:Lcom/dualboot/util/j;

    goto :goto_0

    :cond_7
    move-object v0, v1

    goto :goto_2
.end method

.method public final run()V
    .locals 3

    iget-object v1, p0, Lcom/dualboot/util/j;->e:Ljava/util/concurrent/locks/Lock;

    invoke-direct {p0}, Lcom/dualboot/util/j;->c()Z

    move-result v0

    invoke-direct {p0}, Lcom/dualboot/util/j;->d()Z

    move-result v2

    if-eqz v0, :cond_0

    sget-object v0, Lcom/dualboot/util/j;->b:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->incrementAndGet()I

    iget-boolean v0, p0, Lcom/dualboot/util/j;->f:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/util/j;->c:Lcom/dualboot/util/i;

    iget-boolean v0, p0, Lcom/dualboot/util/j;->j:Z

    invoke-direct {p0}, Lcom/dualboot/util/j;->e()V

    :cond_0
    iget-object v0, p0, Lcom/dualboot/util/j;->d:Ljava/lang/Runnable;

    if-eqz v0, :cond_2

    if-eqz v1, :cond_1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->lock()V

    :cond_1
    :try_start_0
    iget-object v0, p0, Lcom/dualboot/util/j;->d:Ljava/lang/Runnable;

    invoke-interface {v0}, Ljava/lang/Runnable;->run()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_2

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    :cond_2
    if-eqz v2, :cond_3

    sget-object v0, Lcom/dualboot/util/j;->b:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    :cond_3
    return-void

    :catchall_0
    move-exception v0

    if-eqz v1, :cond_4

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    :cond_4
    throw v0
.end method
