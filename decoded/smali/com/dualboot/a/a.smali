.class public final Lcom/dualboot/a/a;
.super Ljava/lang/Object;


# static fields
.field private static final h:Lcom/dualboot/a/a;


# instance fields
.field private a:Lcom/dualboot/a/bc;

.field private final b:Ljava/util/concurrent/locks/ReadWriteLock;

.field private final c:Ljava/util/Map;

.field private final d:Ljava/util/Map;

.field private e:Lcom/dualboot/util/q;

.field private f:Landroid/content/Context;

.field private final g:Ljava/util/concurrent/atomic/AtomicInteger;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/dualboot/a/a;

    invoke-direct {v0}, Lcom/dualboot/a/a;-><init>()V

    sput-object v0, Lcom/dualboot/a/a;->h:Lcom/dualboot/a/a;

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    const/4 v1, 0x0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/dualboot/a/a;->a:Lcom/dualboot/a/bc;

    new-instance v0, Ljava/util/concurrent/locks/ReentrantReadWriteLock;

    invoke-direct {v0}, Ljava/util/concurrent/locks/ReentrantReadWriteLock;-><init>()V

    iput-object v0, p0, Lcom/dualboot/a/a;->b:Ljava/util/concurrent/locks/ReadWriteLock;

    new-instance v0, Ljava/util/TreeMap;

    invoke-direct {v0}, Ljava/util/TreeMap;-><init>()V

    iput-object v0, p0, Lcom/dualboot/a/a;->c:Ljava/util/Map;

    new-instance v0, Ljava/util/TreeMap;

    invoke-direct {v0}, Ljava/util/TreeMap;-><init>()V

    iput-object v0, p0, Lcom/dualboot/a/a;->d:Ljava/util/Map;

    sget-object v0, Lcom/dualboot/util/q;->a:Lcom/dualboot/util/q;

    iput-object v0, p0, Lcom/dualboot/a/a;->e:Lcom/dualboot/util/q;

    iput-object v1, p0, Lcom/dualboot/a/a;->f:Landroid/content/Context;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v0, p0, Lcom/dualboot/a/a;->g:Ljava/util/concurrent/atomic/AtomicInteger;

    return-void
.end method

.method public static a()Lcom/dualboot/a/a;
    .locals 1

    sget-object v0, Lcom/dualboot/a/a;->h:Lcom/dualboot/a/a;

    return-object v0
.end method

.method private declared-synchronized c(Landroid/content/Context;Lcom/dualboot/e/j;)V
    .locals 3

    monitor-enter p0

    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/a/a;->f:Landroid/content/Context;

    iget-object v0, p0, Lcom/dualboot/a/a;->f:Landroid/content/Context;

    invoke-static {v0}, Lcom/dualboot/util/o;->a(Landroid/content/Context;)Lcom/dualboot/util/q;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/a/a;->e:Lcom/dualboot/util/q;

    new-instance v0, Lcom/dualboot/a/bl;

    invoke-direct {v0, p1, p2}, Lcom/dualboot/a/bl;-><init>(Landroid/content/Context;Lcom/dualboot/e/j;)V

    iget-object v1, p0, Lcom/dualboot/a/a;->a:Lcom/dualboot/a/bc;

    new-instance v1, Lcom/dualboot/a/bc;

    invoke-direct {v1}, Lcom/dualboot/a/bc;-><init>()V

    iput-object v1, p0, Lcom/dualboot/a/a;->a:Lcom/dualboot/a/bc;

    iget-object v1, p0, Lcom/dualboot/a/a;->a:Lcom/dualboot/a/bc;

    new-instance v2, Lcom/dualboot/a/b;

    invoke-direct {v2, p0, v1, v0}, Lcom/dualboot/a/b;-><init>(Lcom/dualboot/a/a;Lcom/dualboot/a/bc;Lcom/dualboot/a/ae;)V

    const/4 v0, 0x0

    invoke-virtual {v1, v0}, Lcom/dualboot/util/i;->a(Ljava/util/concurrent/locks/Lock;)Lcom/dualboot/util/j;

    move-result-object v0

    iget-object v1, p0, Lcom/dualboot/a/a;->f:Landroid/content/Context;

    invoke-static {v1}, Lcom/dualboot/util/o;->b(Landroid/content/Context;)Ljava/lang/Runnable;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/dualboot/util/j;->a(Ljava/lang/Runnable;)Lcom/dualboot/util/j;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/dualboot/util/j;->a(Ljava/lang/Runnable;)Lcom/dualboot/util/j;

    move-result-object v0

    invoke-virtual {v0}, Lcom/dualboot/util/j;->a()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private c(Ljava/lang/String;)Z
    .locals 3

    const/4 v0, 0x0

    invoke-direct {p0}, Lcom/dualboot/a/a;->e()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    invoke-virtual {p0, p1}, Lcom/dualboot/a/a;->b(Ljava/lang/String;)Lcom/dualboot/a/p;

    move-result-object v2

    if-eqz v2, :cond_0

    invoke-virtual {v2}, Lcom/dualboot/a/p;->h()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-result v0

    :cond_0
    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return v0

    :catchall_0
    move-exception v0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0
.end method

.method private e()Ljava/util/concurrent/locks/Lock;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/a/a;->b:Ljava/util/concurrent/locks/ReadWriteLock;

    iget-object v0, p0, Lcom/dualboot/a/a;->b:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/ReadWriteLock;->readLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v0

    return-object v0
.end method

.method private f()Ljava/util/concurrent/locks/Lock;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/a/a;->b:Ljava/util/concurrent/locks/ReadWriteLock;

    iget-object v0, p0, Lcom/dualboot/a/a;->b:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/ReadWriteLock;->writeLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v0

    return-object v0
.end method

.method private declared-synchronized g()V
    .locals 3

    monitor-enter p0

    const/4 v0, 0x0

    :try_start_0
    iput-object v0, p0, Lcom/dualboot/a/a;->f:Landroid/content/Context;

    iget-object v0, p0, Lcom/dualboot/a/a;->a:Lcom/dualboot/a/bc;

    const/4 v1, 0x0

    iput-object v1, p0, Lcom/dualboot/a/a;->a:Lcom/dualboot/a/bc;

    new-instance v1, Lcom/dualboot/a/c;

    invoke-direct {v1, p0, v0}, Lcom/dualboot/a/c;-><init>(Lcom/dualboot/a/a;Lcom/dualboot/a/bc;)V

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Lcom/dualboot/util/i;->a(Ljava/util/concurrent/locks/Lock;)Lcom/dualboot/util/j;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/dualboot/util/j;->a(Ljava/lang/Runnable;)Lcom/dualboot/util/j;

    move-result-object v1

    new-instance v2, Lcom/dualboot/a/n;

    invoke-direct {v2, p0, v0}, Lcom/dualboot/a/n;-><init>(Lcom/dualboot/a/a;Lcom/dualboot/a/bc;)V

    invoke-virtual {v1, v2}, Lcom/dualboot/util/j;->a(Lcom/dualboot/util/l;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 7

    const/4 v2, 0x0

    invoke-direct {p0}, Lcom/dualboot/a/a;->e()Ljava/util/concurrent/locks/Lock;

    move-result-object v5

    invoke-interface {v5}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    invoke-direct {p0, p1}, Lcom/dualboot/a/a;->c(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/a;->d:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/s;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    move v4, v1

    move-object v3, v2

    :goto_0
    iget-object v1, v0, Lcom/dualboot/a/s;->a:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-result v1

    if-lt v4, v1, :cond_1

    move-object v2, v3

    :cond_0
    invoke-interface {v5}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return-object v2

    :cond_1
    :try_start_1
    iget-object v1, v0, Lcom/dualboot/a/s;->a:Ljava/util/ArrayList;

    invoke-virtual {v1, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/dualboot/a/t;

    iget-object v2, v1, Lcom/dualboot/a/t;->a:Ljava/lang/String;

    iget-object v1, v1, Lcom/dualboot/a/t;->b:Ljava/lang/String;

    const-string v6, "theme_"

    invoke-virtual {v2, v6}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v6

    if-nez v6, :cond_2

    const/4 v6, 0x0

    invoke-virtual {p0, v2, v1, v6}, Lcom/dualboot/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/util/Collection;)Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-static {v2, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-result v1

    if-nez v1, :cond_0

    move-object v1, v2

    :goto_1
    add-int/lit8 v2, v4, 0x1

    move v4, v2

    move-object v3, v1

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-interface {v5}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0

    :cond_2
    move-object v1, v3

    goto :goto_1
.end method

.method public final a(Ljava/lang/String;)Ljava/util/Collection;
    .locals 2

    const/4 v0, 0x0

    invoke-virtual {p0}, Lcom/dualboot/a/a;->b()Z

    move-result v1

    if-nez v1, :cond_1

    :cond_0
    :goto_0
    return-object v0

    :cond_1
    invoke-virtual {p0, p1}, Lcom/dualboot/a/a;->b(Ljava/lang/String;)Lcom/dualboot/a/p;

    move-result-object v1

    invoke-virtual {v1}, Lcom/dualboot/a/p;->h()Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/a;->a:Lcom/dualboot/a/bc;

    invoke-direct {p0}, Lcom/dualboot/a/a;->e()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/dualboot/a/bc;->a(Ljava/util/concurrent/locks/Lock;Ljava/lang/String;)Ljava/util/Collection;

    move-result-object v0

    goto :goto_0
.end method

.method public final a(Landroid/content/Context;)V
    .locals 3

    invoke-direct {p0}, Lcom/dualboot/a/a;->f()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-object v0, p0, Lcom/dualboot/a/a;->c:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-result v0

    if-nez v0, :cond_0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return-void

    :cond_0
    :try_start_1
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/p;

    invoke-virtual {v0, p1}, Lcom/dualboot/a/p;->b(Landroid/content/Context;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0
.end method

.method public final a(IILandroid/content/Intent;)Z
    .locals 2

    invoke-virtual {p0}, Lcom/dualboot/a/a;->b()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    :goto_0
    return v0

    :cond_0
    iget-object v0, p0, Lcom/dualboot/a/a;->a:Lcom/dualboot/a/bc;

    invoke-direct {p0}, Lcom/dualboot/a/a;->f()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    invoke-virtual {v0, v1, p1, p2, p3}, Lcom/dualboot/a/bc;->a(Ljava/util/concurrent/locks/Lock;IILandroid/content/Intent;)Z

    move-result v0

    goto :goto_0
.end method

.method public final a(Landroid/content/Context;Lcom/dualboot/e/j;)Z
    .locals 2

    const/4 v1, 0x1

    iget-object v0, p0, Lcom/dualboot/a/a;->g:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->incrementAndGet()I

    move-result v0

    if-gt v0, v1, :cond_0

    if-ne v0, v1, :cond_0

    invoke-direct {p0, p1, p2}, Lcom/dualboot/a/a;->c(Landroid/content/Context;Lcom/dualboot/e/j;)V

    :cond_0
    invoke-virtual {p0}, Lcom/dualboot/a/a;->b()Z

    move-result v0

    return v0
.end method

.method public final a(Lcom/dualboot/a/ax;Ljava/lang/String;Landroid/app/Activity;Lcom/dualboot/a/l;)Z
    .locals 6

    const/4 v0, 0x0

    invoke-virtual {p0}, Lcom/dualboot/a/a;->b()Z

    move-result v1

    if-nez v1, :cond_1

    :cond_0
    :goto_0
    return v0

    :cond_1
    invoke-virtual {p0, p2}, Lcom/dualboot/a/a;->b(Ljava/lang/String;)Lcom/dualboot/a/p;

    move-result-object v2

    invoke-virtual {v2}, Lcom/dualboot/a/p;->h()Z

    move-result v1

    if-nez v1, :cond_0

    if-eqz p4, :cond_0

    iget-object v3, p0, Lcom/dualboot/a/a;->f:Landroid/content/Context;

    iget-object v0, p0, Lcom/dualboot/a/a;->a:Lcom/dualboot/a/bc;

    invoke-direct {p0}, Lcom/dualboot/a/a;->f()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    new-instance v5, Lcom/dualboot/a/j;

    invoke-direct {v5, p0, v2, v3, p4}, Lcom/dualboot/a/j;-><init>(Lcom/dualboot/a/a;Lcom/dualboot/a/p;Landroid/content/Context;Lcom/dualboot/a/l;)V

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    invoke-virtual/range {v0 .. v5}, Lcom/dualboot/a/bc;->a(Ljava/util/concurrent/locks/Lock;Lcom/dualboot/a/ax;Ljava/lang/String;Landroid/app/Activity;Lcom/dualboot/a/am;)Z

    move-result v0

    goto :goto_0
.end method

.method public final a(Lcom/dualboot/a/m;)Z
    .locals 8

    const/4 v0, 0x0

    invoke-virtual {p0}, Lcom/dualboot/a/a;->b()Z

    move-result v1

    if-nez v1, :cond_0

    const/4 v0, 0x0

    :goto_0
    return v0

    :cond_0
    iget-object v1, p0, Lcom/dualboot/a/a;->f:Landroid/content/Context;

    invoke-static {v1}, Lcom/dualboot/util/o;->a(Landroid/content/Context;)Lcom/dualboot/util/q;

    move-result-object v1

    iput-object v1, p0, Lcom/dualboot/a/a;->e:Lcom/dualboot/util/q;

    iget-object v2, p0, Lcom/dualboot/a/a;->f:Landroid/content/Context;

    iget-object v3, p0, Lcom/dualboot/a/a;->a:Lcom/dualboot/a/bc;

    invoke-direct {p0}, Lcom/dualboot/a/a;->f()Ljava/util/concurrent/locks/Lock;

    move-result-object v4

    if-eqz p1, :cond_1

    iget-object v1, p1, Lcom/dualboot/a/m;->b:Lcom/dualboot/a/bq;

    iget-object v0, p1, Lcom/dualboot/a/m;->a:Lcom/dualboot/a/bq;

    move-object v7, v0

    move-object v0, v1

    move-object v1, v7

    :goto_1
    invoke-virtual {v3, v4}, Lcom/dualboot/a/bc;->a(Ljava/util/concurrent/locks/Lock;)Lcom/dualboot/util/j;

    move-result-object v4

    iget-object v5, p0, Lcom/dualboot/a/a;->f:Landroid/content/Context;

    invoke-static {v5}, Lcom/dualboot/util/o;->b(Landroid/content/Context;)Ljava/lang/Runnable;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/dualboot/util/j;->a(Ljava/lang/Runnable;)Lcom/dualboot/util/j;

    new-instance v5, Lcom/dualboot/a/d;

    invoke-direct {v5, p0, v3, v0}, Lcom/dualboot/a/d;-><init>(Lcom/dualboot/a/a;Lcom/dualboot/a/bc;Lcom/dualboot/a/bp;)V

    invoke-virtual {v4, v5}, Lcom/dualboot/util/j;->a(Ljava/lang/Runnable;)Lcom/dualboot/util/j;

    iget-object v0, p0, Lcom/dualboot/a/a;->c:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v5

    :goto_2
    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/a/a;->c:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v5

    :goto_3
    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_3

    new-instance v0, Lcom/dualboot/a/g;

    invoke-direct {v0, p0, v3, v1}, Lcom/dualboot/a/g;-><init>(Lcom/dualboot/a/a;Lcom/dualboot/a/bc;Lcom/dualboot/a/bp;)V

    invoke-virtual {v4, v0}, Lcom/dualboot/util/j;->a(Ljava/lang/Runnable;)Lcom/dualboot/util/j;

    iget-object v0, p0, Lcom/dualboot/a/a;->c:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_4
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/dualboot/a/a;->c:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_5
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_5

    invoke-virtual {v4, p1}, Lcom/dualboot/util/j;->a(Lcom/dualboot/util/l;)Z

    const/4 v0, 0x1

    goto :goto_0

    :cond_1
    move-object v1, v0

    goto :goto_1

    :cond_2
    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/p;

    new-instance v6, Lcom/dualboot/a/e;

    invoke-direct {v6, p0, v0, v2}, Lcom/dualboot/a/e;-><init>(Lcom/dualboot/a/a;Lcom/dualboot/a/p;Landroid/content/Context;)V

    invoke-virtual {v4, v6}, Lcom/dualboot/util/j;->a(Ljava/lang/Runnable;)Lcom/dualboot/util/j;

    goto :goto_2

    :cond_3
    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/p;

    new-instance v6, Lcom/dualboot/a/f;

    invoke-direct {v6, p0, v3, v0}, Lcom/dualboot/a/f;-><init>(Lcom/dualboot/a/a;Lcom/dualboot/a/bc;Lcom/dualboot/a/p;)V

    invoke-virtual {v4, v6}, Lcom/dualboot/util/j;->a(Ljava/lang/Runnable;)Lcom/dualboot/util/j;

    goto :goto_3

    :cond_4
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/p;

    new-instance v5, Lcom/dualboot/a/o;

    invoke-direct {v5, p0, v0}, Lcom/dualboot/a/o;-><init>(Lcom/dualboot/a/a;Lcom/dualboot/a/p;)V

    new-instance v6, Lcom/dualboot/a/h;

    invoke-direct {v6, p0, v3, v0, v5}, Lcom/dualboot/a/h;-><init>(Lcom/dualboot/a/a;Lcom/dualboot/a/bc;Lcom/dualboot/a/p;Lcom/dualboot/a/o;)V

    invoke-virtual {v4, v6}, Lcom/dualboot/util/j;->a(Ljava/lang/Runnable;)Lcom/dualboot/util/j;

    goto :goto_4

    :cond_5
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/p;

    new-instance v5, Lcom/dualboot/a/k;

    invoke-direct {v5, p0, v0, v2}, Lcom/dualboot/a/k;-><init>(Lcom/dualboot/a/a;Lcom/dualboot/a/p;Landroid/content/Context;)V

    new-instance v6, Lcom/dualboot/a/i;

    invoke-direct {v6, p0, v3, v0, v5}, Lcom/dualboot/a/i;-><init>(Lcom/dualboot/a/a;Lcom/dualboot/a/bc;Lcom/dualboot/a/p;Lcom/dualboot/a/k;)V

    invoke-virtual {v4, v6}, Lcom/dualboot/util/j;->a(Ljava/lang/Runnable;)Lcom/dualboot/util/j;

    goto :goto_5
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 6

    const/4 v1, 0x0

    invoke-direct {p0}, Lcom/dualboot/a/a;->f()Ljava/util/concurrent/locks/Lock;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    invoke-virtual {p0, p1}, Lcom/dualboot/a/a;->b(Ljava/lang/String;)Lcom/dualboot/a/p;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/a;->d:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/s;

    if-eqz v0, :cond_0

    invoke-virtual {p2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Lcom/dualboot/a/s;->a(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-result v5

    if-eqz v5, :cond_1

    move v0, v1

    :goto_0
    move v1, v0

    :cond_0
    invoke-interface {v2}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return v1

    :cond_1
    :try_start_1
    iget-object v1, v0, Lcom/dualboot/a/s;->a:Ljava/util/ArrayList;

    new-instance v5, Lcom/dualboot/a/t;

    invoke-direct {v5, v0, v3, v4}, Lcom/dualboot/a/t;-><init>(Lcom/dualboot/a/s;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/4 v0, 0x1

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-interface {v2}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)Z
    .locals 9

    const/4 v7, 0x1

    invoke-direct {p0}, Lcom/dualboot/a/a;->f()Ljava/util/concurrent/locks/Lock;

    move-result-object v8

    invoke-interface {v8}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/a/a;->c:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {v8}, Ljava/util/concurrent/locks/Lock;->unlock()V

    move v0, v7

    :goto_0
    return v0

    :cond_0
    :try_start_1
    new-instance v0, Lcom/dualboot/a/p;

    iget-object v6, p0, Lcom/dualboot/a/a;->b:Ljava/util/concurrent/locks/ReadWriteLock;

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    invoke-direct/range {v0 .. v6}, Lcom/dualboot/a/p;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/locks/ReadWriteLock;)V

    invoke-virtual {v0, p6}, Lcom/dualboot/a/p;->b(Landroid/content/Context;)Z

    new-instance v1, Lcom/dualboot/a/s;

    invoke-direct {v1, p1}, Lcom/dualboot/a/s;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/dualboot/a/a;->c:Ljava/util/Map;

    invoke-interface {v2, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/dualboot/a/a;->d:Ljava/util/Map;

    invoke-interface {v0, p1, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    invoke-interface {v8}, Ljava/util/concurrent/locks/Lock;->unlock()V

    move v0, v7

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-interface {v8}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0

    :cond_1
    invoke-interface {v8}, Ljava/util/concurrent/locks/Lock;->unlock()V

    const/4 v0, 0x0

    goto :goto_0
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/util/Collection;)Z
    .locals 6

    const/4 v0, 0x1

    invoke-direct {p0}, Lcom/dualboot/a/a;->e()Ljava/util/concurrent/locks/Lock;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/concurrent/locks/Lock;->lock()V

    if-eqz p3, :cond_0

    :try_start_0
    invoke-interface {p3}, Ljava/util/Collection;->clear()V

    :cond_0
    iget-object v1, p0, Lcom/dualboot/a/a;->c:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v4

    move v2, v0

    :cond_1
    :goto_0
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-result v0

    if-nez v0, :cond_2

    invoke-interface {v3}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return v2

    :cond_2
    :try_start_1
    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/p;

    invoke-virtual {v0}, Lcom/dualboot/a/p;->a()Ljava/lang/String;

    move-result-object v5

    iget-object v1, p0, Lcom/dualboot/a/a;->d:Ljava/util/Map;

    invoke-interface {v1, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/dualboot/a/s;

    if-eqz v1, :cond_1

    invoke-virtual {v1, p1, p2}, Lcom/dualboot/a/s;->a(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {v0}, Lcom/dualboot/a/p;->h()Z

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x0

    if-eqz p3, :cond_3

    invoke-interface {p3, v5}, Ljava/util/Collection;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_3
    move v2, v0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-interface {v3}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0
.end method

.method public final b(Ljava/lang/String;)Lcom/dualboot/a/p;
    .locals 3

    invoke-direct {p0}, Lcom/dualboot/a/a;->e()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-object v0, p0, Lcom/dualboot/a/a;->c:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/p;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    if-nez v0, :cond_0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "No offer found matching ID: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    :cond_0
    return-object v0

    :catchall_0
    move-exception v0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0
.end method

.method public final b()Z
    .locals 3

    iget-object v0, p0, Lcom/dualboot/a/a;->a:Lcom/dualboot/a/bc;

    iget-object v1, p0, Lcom/dualboot/a/a;->b:Ljava/util/concurrent/locks/ReadWriteLock;

    iget-object v2, p0, Lcom/dualboot/a/a;->g:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    if-lez v2, :cond_0

    if-eqz v0, :cond_0

    if-eqz v1, :cond_0

    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method

.method public final b(Landroid/content/Context;Lcom/dualboot/e/j;)Z
    .locals 1

    invoke-virtual {p0}, Lcom/dualboot/a/a;->b()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    :goto_0
    return v0

    :cond_0
    invoke-direct {p0}, Lcom/dualboot/a/a;->g()V

    invoke-direct {p0, p1, p2}, Lcom/dualboot/a/a;->c(Landroid/content/Context;Lcom/dualboot/e/j;)V

    invoke-virtual {p0}, Lcom/dualboot/a/a;->b()Z

    move-result v0

    goto :goto_0
.end method

.method public final c()Z
    .locals 1

    iget-object v0, p0, Lcom/dualboot/a/a;->g:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    move-result v0

    if-ltz v0, :cond_0

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/dualboot/a/a;->g()V

    :cond_0
    invoke-virtual {p0}, Lcom/dualboot/a/a;->b()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x0

    :goto_0
    return v0

    :cond_1
    const/4 v0, 0x1

    goto :goto_0
.end method

.method public final d()V
    .locals 5

    invoke-direct {p0}, Lcom/dualboot/a/a;->f()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-object v0, p0, Lcom/dualboot/a/a;->c:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-result v0

    if-nez v0, :cond_0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return-void

    :cond_0
    :try_start_1
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/p;

    invoke-virtual {v0}, Lcom/dualboot/a/p;->e()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_1

    const/4 v3, 0x0

    invoke-virtual {v0, v3}, Lcom/dualboot/a/p;->a(Lcom/dualboot/a/p;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0

    :cond_1
    :try_start_2
    invoke-virtual {p0, v3}, Lcom/dualboot/a/a;->b(Ljava/lang/String;)Lcom/dualboot/a/p;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/dualboot/a/p;->a(Lcom/dualboot/a/p;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0
.end method
