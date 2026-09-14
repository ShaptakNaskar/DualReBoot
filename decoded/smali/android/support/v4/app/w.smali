.class final Landroid/support/v4/app/w;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/support/v4/a/g;


# instance fields
.field final a:I

.field final b:Landroid/os/Bundle;

.field c:Landroid/support/v4/app/u;

.field d:Landroid/support/v4/a/f;

.field e:Z

.field f:Z

.field g:Ljava/lang/Object;

.field h:Z

.field i:Z

.field j:Z

.field k:Z

.field l:Z

.field m:Z

.field n:Landroid/support/v4/app/w;

.field final synthetic o:Landroid/support/v4/app/v;


# virtual methods
.method final a()V
    .locals 4

    const/4 v3, 0x0

    sget-boolean v0, Landroid/support/v4/app/v;->a:Z

    if-eqz v0, :cond_0

    const-string v0, "LoaderManager"

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "  Stopping: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    iput-boolean v3, p0, Landroid/support/v4/app/w;->h:Z

    iget-boolean v0, p0, Landroid/support/v4/app/w;->i:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Landroid/support/v4/app/w;->d:Landroid/support/v4/a/f;

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Landroid/support/v4/app/w;->m:Z

    if-eqz v0, :cond_1

    iput-boolean v3, p0, Landroid/support/v4/app/w;->m:Z

    iget-object v0, p0, Landroid/support/v4/app/w;->d:Landroid/support/v4/a/f;

    invoke-virtual {v0, p0}, Landroid/support/v4/a/f;->a(Landroid/support/v4/a/g;)V

    iget-object v0, p0, Landroid/support/v4/app/w;->d:Landroid/support/v4/a/f;

    iput-boolean v3, v0, Landroid/support/v4/a/f;->c:Z

    :cond_1
    return-void
.end method

.method final a(Landroid/support/v4/a/f;Ljava/lang/Object;)V
    .locals 5

    iget-object v0, p0, Landroid/support/v4/app/w;->c:Landroid/support/v4/app/u;

    if-eqz v0, :cond_2

    const/4 v0, 0x0

    iget-object v1, p0, Landroid/support/v4/app/w;->o:Landroid/support/v4/app/v;

    iget-object v1, v1, Landroid/support/v4/app/v;->e:Landroid/support/v4/app/g;

    if-eqz v1, :cond_4

    iget-object v0, p0, Landroid/support/v4/app/w;->o:Landroid/support/v4/app/v;

    iget-object v0, v0, Landroid/support/v4/app/v;->e:Landroid/support/v4/app/g;

    iget-object v0, v0, Landroid/support/v4/app/g;->b:Landroid/support/v4/app/l;

    iget-object v0, v0, Landroid/support/v4/app/l;->u:Ljava/lang/String;

    iget-object v1, p0, Landroid/support/v4/app/w;->o:Landroid/support/v4/app/v;

    iget-object v1, v1, Landroid/support/v4/app/v;->e:Landroid/support/v4/app/g;

    iget-object v1, v1, Landroid/support/v4/app/g;->b:Landroid/support/v4/app/l;

    const-string v2, "onLoadFinished"

    iput-object v2, v1, Landroid/support/v4/app/l;->u:Ljava/lang/String;

    move-object v1, v0

    :goto_0
    :try_start_0
    sget-boolean v0, Landroid/support/v4/app/v;->a:Z

    if-eqz v0, :cond_0

    const-string v0, "LoaderManager"

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "  onLoadFinished in "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v2

    const-string v3, ": "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    const/16 v4, 0x40

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(I)V

    invoke-static {p2, v3}, Landroid/support/v4/c/a;->a(Ljava/lang/Object;Ljava/lang/StringBuilder;)V

    const-string v4, "}"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    iget-object v0, p0, Landroid/support/v4/app/w;->c:Landroid/support/v4/app/u;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-object v0, p0, Landroid/support/v4/app/w;->o:Landroid/support/v4/app/v;

    iget-object v0, v0, Landroid/support/v4/app/v;->e:Landroid/support/v4/app/g;

    if-eqz v0, :cond_1

    iget-object v0, p0, Landroid/support/v4/app/w;->o:Landroid/support/v4/app/v;

    iget-object v0, v0, Landroid/support/v4/app/v;->e:Landroid/support/v4/app/g;

    iget-object v0, v0, Landroid/support/v4/app/g;->b:Landroid/support/v4/app/l;

    iput-object v1, v0, Landroid/support/v4/app/l;->u:Ljava/lang/String;

    :cond_1
    const/4 v0, 0x1

    iput-boolean v0, p0, Landroid/support/v4/app/w;->f:Z

    :cond_2
    return-void

    :catchall_0
    move-exception v0

    iget-object v2, p0, Landroid/support/v4/app/w;->o:Landroid/support/v4/app/v;

    iget-object v2, v2, Landroid/support/v4/app/v;->e:Landroid/support/v4/app/g;

    if-eqz v2, :cond_3

    iget-object v2, p0, Landroid/support/v4/app/w;->o:Landroid/support/v4/app/v;

    iget-object v2, v2, Landroid/support/v4/app/v;->e:Landroid/support/v4/app/g;

    iget-object v2, v2, Landroid/support/v4/app/g;->b:Landroid/support/v4/app/l;

    iput-object v1, v2, Landroid/support/v4/app/l;->u:Ljava/lang/String;

    :cond_3
    throw v0

    :cond_4
    move-object v1, v0

    goto :goto_0
.end method

.method public final a(Ljava/lang/String;Ljava/io/PrintWriter;)V
    .locals 3

    :goto_0
    invoke-virtual {p2, p1}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    const-string v0, "mId="

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget v0, p0, Landroid/support/v4/app/w;->a:I

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(I)V

    const-string v0, " mArgs="

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-object v0, p0, Landroid/support/v4/app/w;->b:Landroid/os/Bundle;

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->println(Ljava/lang/Object;)V

    invoke-virtual {p2, p1}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    const-string v0, "mCallbacks="

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-object v0, p0, Landroid/support/v4/app/w;->c:Landroid/support/v4/app/u;

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->println(Ljava/lang/Object;)V

    invoke-virtual {p2, p1}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    const-string v0, "mLoader="

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-object v0, p0, Landroid/support/v4/app/w;->d:Landroid/support/v4/a/f;

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->println(Ljava/lang/Object;)V

    iget-object v0, p0, Landroid/support/v4/app/w;->d:Landroid/support/v4/a/f;

    if-eqz v0, :cond_0

    iget-object v0, p0, Landroid/support/v4/app/w;->d:Landroid/support/v4/a/f;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    const-string v2, "  "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    const-string v2, "mId="

    invoke-virtual {p2, v2}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget v2, v0, Landroid/support/v4/a/f;->a:I

    invoke-virtual {p2, v2}, Ljava/io/PrintWriter;->print(I)V

    const-string v2, " mListener="

    invoke-virtual {p2, v2}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-object v2, v0, Landroid/support/v4/a/f;->b:Landroid/support/v4/a/g;

    invoke-virtual {p2, v2}, Ljava/io/PrintWriter;->println(Ljava/lang/Object;)V

    invoke-virtual {p2, v1}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    const-string v1, "mStarted="

    invoke-virtual {p2, v1}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-boolean v1, v0, Landroid/support/v4/a/f;->c:Z

    invoke-virtual {p2, v1}, Ljava/io/PrintWriter;->print(Z)V

    const-string v1, " mContentChanged="

    invoke-virtual {p2, v1}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-boolean v1, v0, Landroid/support/v4/a/f;->f:Z

    invoke-virtual {p2, v1}, Ljava/io/PrintWriter;->print(Z)V

    const-string v1, " mAbandoned="

    invoke-virtual {p2, v1}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-boolean v1, v0, Landroid/support/v4/a/f;->d:Z

    invoke-virtual {p2, v1}, Ljava/io/PrintWriter;->print(Z)V

    const-string v1, " mReset="

    invoke-virtual {p2, v1}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-boolean v0, v0, Landroid/support/v4/a/f;->e:Z

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->println(Z)V

    :cond_0
    iget-boolean v0, p0, Landroid/support/v4/app/w;->e:Z

    if-nez v0, :cond_1

    iget-boolean v0, p0, Landroid/support/v4/app/w;->f:Z

    if-eqz v0, :cond_2

    :cond_1
    invoke-virtual {p2, p1}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    const-string v0, "mHaveData="

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-boolean v0, p0, Landroid/support/v4/app/w;->e:Z

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Z)V

    const-string v0, "  mDeliveredData="

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-boolean v0, p0, Landroid/support/v4/app/w;->f:Z

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->println(Z)V

    invoke-virtual {p2, p1}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    const-string v0, "mData="

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-object v0, p0, Landroid/support/v4/app/w;->g:Ljava/lang/Object;

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->println(Ljava/lang/Object;)V

    :cond_2
    invoke-virtual {p2, p1}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    const-string v0, "mStarted="

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-boolean v0, p0, Landroid/support/v4/app/w;->h:Z

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Z)V

    const-string v0, " mReportNextStart="

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-boolean v0, p0, Landroid/support/v4/app/w;->k:Z

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Z)V

    const-string v0, " mDestroyed="

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-boolean v0, p0, Landroid/support/v4/app/w;->l:Z

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->println(Z)V

    invoke-virtual {p2, p1}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    const-string v0, "mRetaining="

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-boolean v0, p0, Landroid/support/v4/app/w;->i:Z

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Z)V

    const-string v0, " mRetainingStarted="

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-boolean v0, p0, Landroid/support/v4/app/w;->j:Z

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Z)V

    const-string v0, " mListenerRegistered="

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    iget-boolean v0, p0, Landroid/support/v4/app/w;->m:Z

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->println(Z)V

    iget-object v0, p0, Landroid/support/v4/app/w;->n:Landroid/support/v4/app/w;

    if-eqz v0, :cond_3

    invoke-virtual {p2, p1}, Ljava/io/PrintWriter;->print(Ljava/lang/String;)V

    const-string v0, "Pending Loader "

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    iget-object v0, p0, Landroid/support/v4/app/w;->n:Landroid/support/v4/app/w;

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->print(Ljava/lang/Object;)V

    const-string v0, ":"

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    iget-object p0, p0, Landroid/support/v4/app/w;->n:Landroid/support/v4/app/w;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, "  "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto/16 :goto_0

    :cond_3
    return-void
.end method

.method final b()V
    .locals 6

    const/4 v5, 0x1

    const/4 v2, 0x0

    const/4 v4, 0x0

    :goto_0
    sget-boolean v0, Landroid/support/v4/app/v;->a:Z

    if-eqz v0, :cond_0

    const-string v0, "LoaderManager"

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "  Destroying: "

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    iput-boolean v5, p0, Landroid/support/v4/app/w;->l:Z

    iget-boolean v0, p0, Landroid/support/v4/app/w;->f:Z

    iput-boolean v4, p0, Landroid/support/v4/app/w;->f:Z

    iget-object v1, p0, Landroid/support/v4/app/w;->c:Landroid/support/v4/app/u;

    if-eqz v1, :cond_2

    iget-object v1, p0, Landroid/support/v4/app/w;->d:Landroid/support/v4/a/f;

    if-eqz v1, :cond_2

    iget-boolean v1, p0, Landroid/support/v4/app/w;->e:Z

    if-eqz v1, :cond_2

    if-eqz v0, :cond_2

    sget-boolean v0, Landroid/support/v4/app/v;->a:Z

    if-eqz v0, :cond_1

    const-string v0, "LoaderManager"

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "  Reseting: "

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    iget-object v0, p0, Landroid/support/v4/app/w;->o:Landroid/support/v4/app/v;

    iget-object v0, v0, Landroid/support/v4/app/v;->e:Landroid/support/v4/app/g;

    if-eqz v0, :cond_7

    iget-object v0, p0, Landroid/support/v4/app/w;->o:Landroid/support/v4/app/v;

    iget-object v0, v0, Landroid/support/v4/app/v;->e:Landroid/support/v4/app/g;

    iget-object v0, v0, Landroid/support/v4/app/g;->b:Landroid/support/v4/app/l;

    iget-object v0, v0, Landroid/support/v4/app/l;->u:Ljava/lang/String;

    iget-object v1, p0, Landroid/support/v4/app/w;->o:Landroid/support/v4/app/v;

    iget-object v1, v1, Landroid/support/v4/app/v;->e:Landroid/support/v4/app/g;

    iget-object v1, v1, Landroid/support/v4/app/g;->b:Landroid/support/v4/app/l;

    const-string v3, "onLoaderReset"

    iput-object v3, v1, Landroid/support/v4/app/l;->u:Ljava/lang/String;

    move-object v1, v0

    :goto_1
    :try_start_0
    iget-object v0, p0, Landroid/support/v4/app/w;->c:Landroid/support/v4/app/u;

    iget-object v0, p0, Landroid/support/v4/app/w;->d:Landroid/support/v4/a/f;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-object v0, p0, Landroid/support/v4/app/w;->o:Landroid/support/v4/app/v;

    iget-object v0, v0, Landroid/support/v4/app/v;->e:Landroid/support/v4/app/g;

    if-eqz v0, :cond_2

    iget-object v0, p0, Landroid/support/v4/app/w;->o:Landroid/support/v4/app/v;

    iget-object v0, v0, Landroid/support/v4/app/v;->e:Landroid/support/v4/app/g;

    iget-object v0, v0, Landroid/support/v4/app/g;->b:Landroid/support/v4/app/l;

    iput-object v1, v0, Landroid/support/v4/app/l;->u:Ljava/lang/String;

    :cond_2
    iput-object v2, p0, Landroid/support/v4/app/w;->c:Landroid/support/v4/app/u;

    iput-object v2, p0, Landroid/support/v4/app/w;->g:Ljava/lang/Object;

    iput-boolean v4, p0, Landroid/support/v4/app/w;->e:Z

    iget-object v0, p0, Landroid/support/v4/app/w;->d:Landroid/support/v4/a/f;

    if-eqz v0, :cond_4

    iget-boolean v0, p0, Landroid/support/v4/app/w;->m:Z

    if-eqz v0, :cond_3

    iput-boolean v4, p0, Landroid/support/v4/app/w;->m:Z

    iget-object v0, p0, Landroid/support/v4/app/w;->d:Landroid/support/v4/a/f;

    invoke-virtual {v0, p0}, Landroid/support/v4/a/f;->a(Landroid/support/v4/a/g;)V

    :cond_3
    iget-object v0, p0, Landroid/support/v4/app/w;->d:Landroid/support/v4/a/f;

    iput-boolean v5, v0, Landroid/support/v4/a/f;->e:Z

    iput-boolean v4, v0, Landroid/support/v4/a/f;->c:Z

    iput-boolean v4, v0, Landroid/support/v4/a/f;->d:Z

    iput-boolean v4, v0, Landroid/support/v4/a/f;->f:Z

    :cond_4
    iget-object v0, p0, Landroid/support/v4/app/w;->n:Landroid/support/v4/app/w;

    if-eqz v0, :cond_6

    iget-object p0, p0, Landroid/support/v4/app/w;->n:Landroid/support/v4/app/w;

    goto/16 :goto_0

    :catchall_0
    move-exception v0

    iget-object v2, p0, Landroid/support/v4/app/w;->o:Landroid/support/v4/app/v;

    iget-object v2, v2, Landroid/support/v4/app/v;->e:Landroid/support/v4/app/g;

    if-eqz v2, :cond_5

    iget-object v2, p0, Landroid/support/v4/app/w;->o:Landroid/support/v4/app/v;

    iget-object v2, v2, Landroid/support/v4/app/v;->e:Landroid/support/v4/app/g;

    iget-object v2, v2, Landroid/support/v4/app/g;->b:Landroid/support/v4/app/l;

    iput-object v1, v2, Landroid/support/v4/app/l;->u:Ljava/lang/String;

    :cond_5
    throw v0

    :cond_6
    return-void

    :cond_7
    move-object v1, v2

    goto :goto_1
.end method

.method public final toString()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const/16 v1, 0x40

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(I)V

    const-string v1, "LoaderInfo{"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p0}, Ljava/lang/System;->identityHashCode(Ljava/lang/Object;)I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " #"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Landroid/support/v4/app/w;->a:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Landroid/support/v4/app/w;->d:Landroid/support/v4/a/f;

    invoke-static {v1, v0}, Landroid/support/v4/c/a;->a(Ljava/lang/Object;Ljava/lang/StringBuilder;)V

    const-string v1, "}}"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
