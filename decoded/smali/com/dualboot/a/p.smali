.class public final Lcom/dualboot/a/p;
.super Ljava/lang/Object;


# instance fields
.field private final a:Ljava/util/concurrent/locks/ReadWriteLock;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Lcom/dualboot/a/p;

.field private g:Ljava/lang/String;

.field private h:Z

.field private i:Z

.field private j:Lcom/dualboot/a/q;

.field private k:J

.field private l:Z

.field private m:Landroid/graphics/drawable/BitmapDrawable;

.field private n:Landroid/graphics/drawable/BitmapDrawable;


# direct methods
.method protected constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/locks/ReadWriteLock;)V
    .locals 5

    const-wide/16 v3, 0x0

    const/4 v2, 0x0

    const/4 v1, 0x0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/a/p;->b:Ljava/lang/String;

    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/a/p;->c:Ljava/lang/String;

    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/a/p;->d:Ljava/lang/String;

    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/a/p;->e:Ljava/lang/String;

    iput-object v1, p0, Lcom/dualboot/a/p;->f:Lcom/dualboot/a/p;

    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/a/p;->g:Ljava/lang/String;

    iput-boolean v2, p0, Lcom/dualboot/a/p;->h:Z

    iput-boolean v2, p0, Lcom/dualboot/a/p;->i:Z

    sget-object v0, Lcom/dualboot/a/q;->a:Lcom/dualboot/a/q;

    iput-object v0, p0, Lcom/dualboot/a/p;->j:Lcom/dualboot/a/q;

    iput-wide v3, p0, Lcom/dualboot/a/p;->k:J

    iput-boolean v2, p0, Lcom/dualboot/a/p;->l:Z

    iput-object v1, p0, Lcom/dualboot/a/p;->m:Landroid/graphics/drawable/BitmapDrawable;

    iput-object v1, p0, Lcom/dualboot/a/p;->n:Landroid/graphics/drawable/BitmapDrawable;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    iput-object p6, p0, Lcom/dualboot/a/p;->a:Ljava/util/concurrent/locks/ReadWriteLock;

    iget-object v0, p0, Lcom/dualboot/a/p;->a:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/ReadWriteLock;->writeLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-object v0, p0, Lcom/dualboot/a/p;->a:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/ReadWriteLock;->writeLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/concurrent/locks/Lock;->lock()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/a/p;->b:Ljava/lang/String;

    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/a/p;->c:Ljava/lang/String;

    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/a/p;->d:Ljava/lang/String;

    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/a/p;->e:Ljava/lang/String;

    const-string v0, ""

    iput-object v0, p0, Lcom/dualboot/a/p;->g:Ljava/lang/String;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/a/p;->f:Lcom/dualboot/a/p;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/dualboot/a/p;->h:Z

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/dualboot/a/p;->i:Z

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/dualboot/a/p;->l:Z

    sget-object v0, Lcom/dualboot/a/q;->a:Lcom/dualboot/a/q;

    iput-object v0, p0, Lcom/dualboot/a/p;->j:Lcom/dualboot/a/q;

    const-wide/16 v3, 0x0

    iput-wide v3, p0, Lcom/dualboot/a/p;->k:J
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    invoke-interface {v2}, Ljava/util/concurrent/locks/Lock;->unlock()V

    iget-object v0, p0, Lcom/dualboot/a/p;->m:Landroid/graphics/drawable/BitmapDrawable;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/a/p;->m:Landroid/graphics/drawable/BitmapDrawable;

    invoke-virtual {v0}, Landroid/graphics/drawable/BitmapDrawable;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->recycle()V

    :cond_0
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/a/p;->m:Landroid/graphics/drawable/BitmapDrawable;

    :cond_1
    iget-object v0, p0, Lcom/dualboot/a/p;->n:Landroid/graphics/drawable/BitmapDrawable;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/dualboot/a/p;->n:Landroid/graphics/drawable/BitmapDrawable;

    invoke-virtual {v0}, Landroid/graphics/drawable/BitmapDrawable;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->recycle()V

    :cond_2
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/a/p;->n:Landroid/graphics/drawable/BitmapDrawable;

    :cond_3
    iput-object p1, p0, Lcom/dualboot/a/p;->b:Ljava/lang/String;

    iput-object p5, p0, Lcom/dualboot/a/p;->g:Ljava/lang/String;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/a/p;->f:Lcom/dualboot/a/p;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    iput-object p2, p0, Lcom/dualboot/a/p;->c:Ljava/lang/String;

    :cond_4
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    iput-object p3, p0, Lcom/dualboot/a/p;->d:Ljava/lang/String;

    :cond_5
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    iput-object p4, p0, Lcom/dualboot/a/p;->e:Ljava/lang/String;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :cond_6
    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return-void

    :catchall_0
    move-exception v0

    :try_start_3
    invoke-interface {v2}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :catchall_1
    move-exception v0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0
.end method

.method private a(ZLcom/dualboot/a/q;J)Z
    .locals 7

    const/4 v0, 0x1

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/dualboot/a/p;->a:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v2}, Ljava/util/concurrent/locks/ReadWriteLock;->writeLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-wide v3, p0, Lcom/dualboot/a/p;->k:J

    cmp-long v3, p3, v3

    if-lez v3, :cond_2

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "  Old Owned  = "

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v4, p0, Lcom/dualboot/a/p;->i:Z

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "  Old Source = "

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v4, p0, Lcom/dualboot/a/p;->j:Lcom/dualboot/a/q;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "  Old Time   = "

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    new-instance v4, Ljava/util/Date;

    iget-wide v5, p0, Lcom/dualboot/a/p;->k:J

    invoke-direct {v4, v5, v6}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    iget-boolean v3, p0, Lcom/dualboot/a/p;->l:Z

    if-nez v3, :cond_1

    iget-boolean v3, p0, Lcom/dualboot/a/p;->i:Z

    if-eq p1, v3, :cond_0

    sget-object v3, Lcom/dualboot/a/q;->c:Lcom/dualboot/a/q;

    if-ne p2, v3, :cond_0

    move v1, v0

    :cond_0
    iput-boolean v1, p0, Lcom/dualboot/a/p;->l:Z

    :cond_1
    iput-boolean p1, p0, Lcom/dualboot/a/p;->i:Z

    iput-object p2, p0, Lcom/dualboot/a/p;->j:Lcom/dualboot/a/q;

    iput-wide p3, p0, Lcom/dualboot/a/p;->k:J

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "  New Owned  = "

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v3, p0, Lcom/dualboot/a/p;->i:Z

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "  New Source = "

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v3, p0, Lcom/dualboot/a/p;->j:Lcom/dualboot/a/q;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "  New Time   = "

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    new-instance v3, Ljava/util/Date;

    iget-wide v4, p0, Lcom/dualboot/a/p;->k:J

    invoke-direct {v3, v4, v5}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-interface {v2}, Ljava/util/concurrent/locks/Lock;->unlock()V

    :goto_0
    return v0

    :catchall_0
    move-exception v0

    invoke-interface {v2}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0

    :cond_2
    invoke-interface {v2}, Ljava/util/concurrent/locks/Lock;->unlock()V

    move v0, v1

    goto :goto_0
.end method


# virtual methods
.method public final a(Landroid/content/Context;Z)Landroid/graphics/drawable/BitmapDrawable;
    .locals 5

    const/4 v0, 0x0

    if-nez p1, :cond_1

    :cond_0
    :goto_0
    return-object v0

    :cond_1
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    if-eqz v2, :cond_0

    if-eqz p2, :cond_2

    iget-object v1, p0, Lcom/dualboot/a/p;->m:Landroid/graphics/drawable/BitmapDrawable;

    :goto_1
    if-eqz v1, :cond_3

    move-object v0, v1

    goto :goto_0

    :cond_2
    iget-object v1, p0, Lcom/dualboot/a/p;->n:Landroid/graphics/drawable/BitmapDrawable;

    goto :goto_1

    :cond_3
    if-eqz p2, :cond_5

    :try_start_0
    const-string v1, "_owned"

    :goto_2
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "offers/"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/dualboot/a/p;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    const-string v3, ".png"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2}, Landroid/content/res/Resources;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v3

    invoke-virtual {v3, v1}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v3

    if-eqz v3, :cond_4

    new-instance v1, Landroid/graphics/drawable/BitmapDrawable;

    invoke-direct {v1, v2, v3}, Landroid/graphics/drawable/BitmapDrawable;-><init>(Landroid/content/res/Resources;Ljava/io/InputStream;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :try_start_1
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/graphics/drawable/BitmapDrawable;->setTargetDensity(Landroid/util/DisplayMetrics;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    move-object v0, v1

    :cond_4
    :goto_3
    if-eqz p2, :cond_6

    iput-object v0, p0, Lcom/dualboot/a/p;->m:Landroid/graphics/drawable/BitmapDrawable;

    goto :goto_0

    :cond_5
    :try_start_2
    const-string v1, ""
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_2

    :cond_6
    iput-object v0, p0, Lcom/dualboot/a/p;->n:Landroid/graphics/drawable/BitmapDrawable;

    goto :goto_0

    :catch_0
    move-exception v1

    goto :goto_3

    :catch_1
    move-exception v0

    move-object v0, v1

    goto :goto_3
.end method

.method public final a()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/p;->a:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/ReadWriteLock;->readLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-object v1, p0, Lcom/dualboot/a/p;->b:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return-object v1

    :catchall_0
    move-exception v1

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v1
.end method

.method protected final a(Lcom/dualboot/a/p;)V
    .locals 2

    if-nez p1, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/p;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    iput-object p1, p0, Lcom/dualboot/a/p;->f:Lcom/dualboot/a/p;

    :goto_0
    return-void

    :cond_0
    iget-object v0, p0, Lcom/dualboot/a/p;->g:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/dualboot/a/p;->a()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    iput-object p1, p0, Lcom/dualboot/a/p;->f:Lcom/dualboot/a/p;

    goto :goto_0
.end method

.method public final a(Landroid/content/Context;)Z
    .locals 6

    const/4 v0, 0x0

    iget-object v1, p0, Lcom/dualboot/a/p;->a:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v1}, Ljava/util/concurrent/locks/ReadWriteLock;->readLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-object v2, p0, Lcom/dualboot/a/p;->j:Lcom/dualboot/a/q;

    sget-object v3, Lcom/dualboot/a/q;->c:Lcom/dualboot/a/q;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-ne v2, v3, :cond_5

    if-nez p1, :cond_0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    :goto_0
    return v0

    :cond_0
    :try_start_1
    iget-object v2, p0, Lcom/dualboot/a/p;->b:Ljava/lang/String;

    invoke-static {v2}, Lcom/dualboot/a/r;->a(Ljava/lang/String;)Lcom/dualboot/a/r;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-result-object v2

    if-nez v2, :cond_1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    goto :goto_0

    :cond_1
    :try_start_2
    iget-object v3, v2, Lcom/dualboot/a/r;->a:Ljava/lang/String;

    invoke-static {p1, v3}, Lcom/dualboot/b/a;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    move-result-object v3

    if-nez v3, :cond_2

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    goto :goto_0

    :cond_2
    :try_start_3
    invoke-interface {v3}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    move-result-object v3

    if-nez v3, :cond_3

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    goto :goto_0

    :cond_3
    :try_start_4
    iget-object v4, v2, Lcom/dualboot/a/r;->b:Ljava/lang/String;

    iget-boolean v5, p0, Lcom/dualboot/a/p;->i:Z

    invoke-interface {v3, v4, v5}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    iget-object v4, v2, Lcom/dualboot/a/r;->c:Ljava/lang/String;

    iget-object v5, p0, Lcom/dualboot/a/p;->j:Lcom/dualboot/a/q;

    invoke-virtual {v5}, Lcom/dualboot/a/q;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v3, v4, v5}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    iget-object v2, v2, Lcom/dualboot/a/r;->d:Ljava/lang/String;

    iget-wide v4, p0, Lcom/dualboot/a/p;->k:J

    invoke-interface {v3, v2, v4, v5}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v3}, Landroid/content/SharedPreferences$Editor;->commit()Z

    iget-boolean v2, p0, Lcom/dualboot/a/p;->l:Z

    if-eqz v2, :cond_4

    iget-object v2, p0, Lcom/dualboot/a/p;->b:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/dualboot/a/p;->i:Z

    invoke-static {v3}, Ljava/lang/Boolean;->toString(Z)Ljava/lang/String;

    move-result-object v3

    invoke-static {p1, v2, v3}, Lcom/dualboot/e/l;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v2, 0x0

    iput-boolean v2, p0, Lcom/dualboot/a/p;->l:Z
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    :cond_4
    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    const/4 v0, 0x1

    goto :goto_0

    :catch_0
    move-exception v2

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0

    :cond_5
    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    goto :goto_0
.end method

.method protected final a(Lcom/dualboot/a/ai;)Z
    .locals 3

    iget-boolean v0, p0, Lcom/dualboot/a/p;->h:Z

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/p;->a:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/ReadWriteLock;->writeLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-object v0, p1, Lcom/dualboot/a/ai;->a:Ljava/lang/String;

    iput-object v0, p0, Lcom/dualboot/a/p;->c:Ljava/lang/String;

    iget-object v0, p1, Lcom/dualboot/a/ai;->b:Ljava/lang/String;

    iput-object v0, p0, Lcom/dualboot/a/p;->d:Ljava/lang/String;

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/dualboot/a/p;->h:Z

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "Updated details. Name = "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/dualboot/a/p;->c:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    :cond_0
    iget-boolean v0, p0, Lcom/dualboot/a/p;->h:Z

    return v0

    :catchall_0
    move-exception v0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0
.end method

.method public final a(ZLcom/dualboot/a/q;)Z
    .locals 2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-direct {p0, p1, p2, v0, v1}, Lcom/dualboot/a/p;->a(ZLcom/dualboot/a/q;J)Z

    move-result v0

    return v0
.end method

.method public final b()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/p;->a:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/ReadWriteLock;->readLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-object v1, p0, Lcom/dualboot/a/p;->c:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return-object v1

    :catchall_0
    move-exception v1

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v1
.end method

.method public final b(Landroid/content/Context;)Z
    .locals 8

    const/4 v0, 0x0

    iget-object v1, p0, Lcom/dualboot/a/p;->a:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v1}, Ljava/util/concurrent/locks/ReadWriteLock;->writeLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->lock()V

    if-nez p1, :cond_0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    :goto_0
    return v0

    :cond_0
    :try_start_0
    iget-object v2, p0, Lcom/dualboot/a/p;->b:Ljava/lang/String;

    invoke-static {v2}, Lcom/dualboot/a/r;->a(Ljava/lang/String;)Lcom/dualboot/a/r;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-result-object v2

    if-nez v2, :cond_1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    goto :goto_0

    :cond_1
    :try_start_1
    iget-object v3, v2, Lcom/dualboot/a/r;->a:Ljava/lang/String;

    invoke-static {p1, v3}, Lcom/dualboot/b/a;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-result-object v3

    if-nez v3, :cond_2

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    goto :goto_0

    :cond_2
    :try_start_2
    iget-object v4, v2, Lcom/dualboot/a/r;->b:Ljava/lang/String;

    const/4 v5, 0x0

    invoke-interface {v3, v4, v5}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v4

    iget-object v5, v2, Lcom/dualboot/a/r;->c:Ljava/lang/String;

    sget-object v6, Lcom/dualboot/a/q;->a:Lcom/dualboot/a/q;

    invoke-virtual {v6}, Lcom/dualboot/a/q;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v3, v5, v6}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iget-object v2, v2, Lcom/dualboot/a/r;->d:Ljava/lang/String;

    const-wide/16 v6, -0x1

    invoke-interface {v3, v2, v6, v7}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide v2

    invoke-static {v5}, Lcom/dualboot/a/q;->valueOf(Ljava/lang/String;)Lcom/dualboot/a/q;

    move-result-object v5

    sget-object v6, Lcom/dualboot/a/q;->c:Lcom/dualboot/a/q;

    if-ne v5, v6, :cond_3

    sget-object v5, Lcom/dualboot/a/q;->b:Lcom/dualboot/a/q;

    invoke-direct {p0, v4, v5, v2, v3}, Lcom/dualboot/a/p;->a(ZLcom/dualboot/a/q;J)Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    const/4 v0, 0x1

    goto :goto_0

    :catch_0
    move-exception v2

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0

    :cond_3
    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    goto :goto_0
.end method

.method public final c()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/p;->a:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/ReadWriteLock;->readLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-object v1, p0, Lcom/dualboot/a/p;->d:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return-object v1

    :catchall_0
    move-exception v1

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v1
.end method

.method public final d()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/p;->a:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/ReadWriteLock;->readLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-object v1, p0, Lcom/dualboot/a/p;->e:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return-object v1

    :catchall_0
    move-exception v1

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v1
.end method

.method protected final e()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/p;->a:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/ReadWriteLock;->readLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-object v1, p0, Lcom/dualboot/a/p;->g:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return-object v1

    :catchall_0
    move-exception v1

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v1
.end method

.method public final f()Lcom/dualboot/a/p;
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/p;->a:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/ReadWriteLock;->readLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-object v1, p0, Lcom/dualboot/a/p;->f:Lcom/dualboot/a/p;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return-object v1

    :catchall_0
    move-exception v1

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v1
.end method

.method public final g()Z
    .locals 3

    iget-object v0, p0, Lcom/dualboot/a/p;->a:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/ReadWriteLock;->readLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    invoke-virtual {p0}, Lcom/dualboot/a/p;->f()Lcom/dualboot/a/p;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-result-object v0

    :goto_0
    if-nez v0, :cond_0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    const/4 v0, 0x1

    :goto_1
    return v0

    :cond_0
    :try_start_1
    invoke-virtual {v0}, Lcom/dualboot/a/p;->h()Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-result v2

    if-nez v2, :cond_1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :try_start_2
    invoke-virtual {v0}, Lcom/dualboot/a/p;->f()Lcom/dualboot/a/p;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    move-result-object v0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0
.end method

.method public final h()Z
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/p;->a:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/ReadWriteLock;->readLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    invoke-virtual {p0}, Lcom/dualboot/a/p;->g()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-result v0

    if-nez v0, :cond_0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    const/4 v0, 0x0

    :goto_0
    return v0

    :cond_0
    :try_start_1
    iget-boolean v0, p0, Lcom/dualboot/a/p;->i:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0
.end method

.method public final i()Z
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/p;->a:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/ReadWriteLock;->readLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->lock()V

    :try_start_0
    iget-boolean v1, p0, Lcom/dualboot/a/p;->h:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return v1

    :catchall_0
    move-exception v1

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v1
.end method
