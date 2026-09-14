.class public final Lcom/dualboot/c/g;
.super Ljava/lang/Thread;


# static fields
.field private static synthetic P:[I

.field private static synthetic Q:[I

.field private static synthetic R:[I


# instance fields
.field private A:J

.field private B:J

.field private C:F

.field private D:F

.field private E:Z

.field private F:Z

.field private G:Z

.field private H:J

.field private I:J

.field private J:F

.field private K:F

.field private L:Z

.field private M:Z

.field private N:Z

.field private O:Z

.field private final a:Landroid/content/Context;

.field private final b:Ljava/lang/String;

.field private final c:Ljava/lang/String;

.field private d:I

.field private final e:Ljava/util/ArrayList;

.field private f:Ljavax/microedition/khronos/opengles/GL11;

.field private g:Ljavax/microedition/khronos/egl/EGL10;

.field private h:Ljavax/microedition/khronos/egl/EGLDisplay;

.field private i:Ljavax/microedition/khronos/egl/EGLSurface;

.field private j:Ljavax/microedition/khronos/egl/EGLContext;

.field private k:Ljavax/microedition/khronos/egl/EGLConfig;

.field private l:Lcom/dualboot/c/a;

.field private m:Ljava/lang/Object;

.field private n:I

.field private o:I

.field private p:I

.field private q:D

.field private r:D

.field private s:D

.field private t:Lcom/dualboot/c/i;

.field private u:Lcom/dualboot/c/h;

.field private v:J

.field private w:D

.field private x:Lcom/dualboot/c/k;

.field private y:J

.field private z:Z


# direct methods
.method private constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 8

    const/4 v1, 0x5

    const-wide/high16 v2, 0x3fe0000000000000L    # 0.5

    const-wide/16 v5, 0x0

    const/4 v7, 0x0

    const/4 v4, 0x0

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    iput-wide v2, p0, Lcom/dualboot/c/g;->q:D

    iput-wide v2, p0, Lcom/dualboot/c/g;->r:D

    iput-wide v2, p0, Lcom/dualboot/c/g;->s:D

    sget-object v0, Lcom/dualboot/c/i;->a:Lcom/dualboot/c/i;

    iput-object v0, p0, Lcom/dualboot/c/g;->t:Lcom/dualboot/c/i;

    sget-object v0, Lcom/dualboot/c/h;->b:Lcom/dualboot/c/h;

    iput-object v0, p0, Lcom/dualboot/c/g;->u:Lcom/dualboot/c/h;

    const-wide/32 v2, 0xafc8

    iput-wide v2, p0, Lcom/dualboot/c/g;->v:J

    const-wide v2, 0x3ef74d3b7ba75828L    # 2.2222222222222223E-5

    iput-wide v2, p0, Lcom/dualboot/c/g;->w:D

    sget-object v0, Lcom/dualboot/c/k;->b:Lcom/dualboot/c/k;

    iput-object v0, p0, Lcom/dualboot/c/g;->x:Lcom/dualboot/c/k;

    const-wide/16 v2, 0xa

    iput-wide v2, p0, Lcom/dualboot/c/g;->y:J

    iput-boolean v4, p0, Lcom/dualboot/c/g;->z:Z

    iput-wide v5, p0, Lcom/dualboot/c/g;->A:J

    iput-wide v5, p0, Lcom/dualboot/c/g;->B:J

    const/high16 v0, -0x40800000    # -1.0f

    iput v0, p0, Lcom/dualboot/c/g;->C:F

    const/high16 v0, -0x40800000    # -1.0f

    iput v0, p0, Lcom/dualboot/c/g;->D:F

    iput-boolean v4, p0, Lcom/dualboot/c/g;->E:Z

    iput-boolean v4, p0, Lcom/dualboot/c/g;->F:Z

    iput-boolean v4, p0, Lcom/dualboot/c/g;->G:Z

    iput-wide v5, p0, Lcom/dualboot/c/g;->H:J

    iput-wide v5, p0, Lcom/dualboot/c/g;->I:J

    const/high16 v0, -0x3b860000    # -1000.0f

    iput v0, p0, Lcom/dualboot/c/g;->J:F

    const/high16 v0, -0x3b860000    # -1000.0f

    iput v0, p0, Lcom/dualboot/c/g;->K:F

    new-instance v0, Lcom/dualboot/c/l;

    invoke-direct {v0, p0, v4}, Lcom/dualboot/c/l;-><init>(Lcom/dualboot/c/g;B)V

    invoke-virtual {p0, v0}, Lcom/dualboot/c/g;->setUncaughtExceptionHandler(Ljava/lang/Thread$UncaughtExceptionHandler;)V

    iput-object p1, p0, Lcom/dualboot/c/g;->a:Landroid/content/Context;

    iput-object p2, p0, Lcom/dualboot/c/g;->b:Ljava/lang/String;

    iput-object p3, p0, Lcom/dualboot/c/g;->c:Ljava/lang/String;

    iput v4, p0, Lcom/dualboot/c/g;->d:I

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/c/g;->e:Ljava/util/ArrayList;

    iput-object v7, p0, Lcom/dualboot/c/g;->f:Ljavax/microedition/khronos/opengles/GL11;

    iput-object v7, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iput-object v7, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    iput-object v7, p0, Lcom/dualboot/c/g;->i:Ljavax/microedition/khronos/egl/EGLSurface;

    iput-object v7, p0, Lcom/dualboot/c/g;->j:Ljavax/microedition/khronos/egl/EGLContext;

    iput-object v7, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    new-instance v0, Lcom/dualboot/c/a;

    const/4 v2, 0x6

    const/16 v5, 0x10

    sget-object v6, Lcom/dualboot/c/b;->b:Lcom/dualboot/c/b;

    move v3, v1

    invoke-direct/range {v0 .. v6}, Lcom/dualboot/c/a;-><init>(IIIIILcom/dualboot/c/b;)V

    iput-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iput-object v7, p0, Lcom/dualboot/c/g;->m:Ljava/lang/Object;

    iput v4, p0, Lcom/dualboot/c/g;->n:I

    iput v4, p0, Lcom/dualboot/c/g;->o:I

    iput v4, p0, Lcom/dualboot/c/g;->p:I

    iput-boolean v4, p0, Lcom/dualboot/c/g;->L:Z

    iput-boolean v4, p0, Lcom/dualboot/c/g;->M:Z

    iput-boolean v4, p0, Lcom/dualboot/c/g;->N:Z

    iput-boolean v4, p0, Lcom/dualboot/c/g;->O:Z

    const-string v0, "DualBootGames/OpenGLThread"

    invoke-virtual {p0, v0}, Lcom/dualboot/c/g;->setName(Ljava/lang/String;)V

    invoke-virtual {p0, v1}, Lcom/dualboot/c/g;->setPriority(I)V

    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Lcom/dualboot/c/g;
    .locals 1

    new-instance v0, Lcom/dualboot/c/g;

    invoke-direct {v0, p0, p1, p2}, Lcom/dualboot/c/g;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/dualboot/c/g;->start()V

    return-object v0
.end method

.method private static a(J)V
    .locals 2

    const-wide/16 v0, 0x0

    cmp-long v0, p0, v0

    if-lez v0, :cond_0

    :try_start_0
    invoke-static {p0, p1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    :goto_0
    return-void

    :cond_0
    invoke-static {}, Ljava/lang/Thread;->yield()V

    goto :goto_0

    :catch_0
    move-exception v0

    goto :goto_0
.end method

.method private a(Lcom/dualboot/c/j;)V
    .locals 3

    iget-object v1, p0, Lcom/dualboot/c/g;->e:Ljava/util/ArrayList;

    monitor-enter v1

    const/4 v0, 0x0

    :try_start_0
    iget-object v2, p0, Lcom/dualboot/c/g;->e:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_0

    iget-object v0, p0, Lcom/dualboot/c/g;->e:Ljava/util/ArrayList;

    add-int/lit8 v2, v2, -0x1

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/c/j;

    :cond_0
    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/dualboot/c/j;->ordinal()I

    move-result v0

    invoke-virtual {p1}, Lcom/dualboot/c/j;->ordinal()I

    move-result v2

    if-eq v0, v2, :cond_2

    :cond_1
    iget-object v0, p0, Lcom/dualboot/c/g;->e:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_2
    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit v1

    throw v0
.end method

.method private c()Z
    .locals 4

    const/4 v1, 0x0

    const/4 v0, 0x1

    iget-object v2, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    invoke-interface {v2}, Ljavax/microedition/khronos/egl/EGL10;->eglGetError()I

    move-result v2

    const/16 v3, 0x3000

    if-eq v2, v3, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "Error (EGL): "

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move v0, v1

    :cond_0
    iget-object v2, p0, Lcom/dualboot/c/g;->f:Ljavax/microedition/khronos/opengles/GL11;

    if-eqz v2, :cond_1

    iget-object v2, p0, Lcom/dualboot/c/g;->f:Ljavax/microedition/khronos/opengles/GL11;

    invoke-interface {v2}, Ljavax/microedition/khronos/opengles/GL11;->glGetError()I

    move-result v2

    if-eqz v2, :cond_1

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "Error ( GL): "

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move v0, v1

    :cond_1
    return v0
.end method

.method private d()Lcom/dualboot/c/j;
    .locals 3

    iget-object v1, p0, Lcom/dualboot/c/g;->e:Ljava/util/ArrayList;

    monitor-enter v1

    :try_start_0
    iget-object v0, p0, Lcom/dualboot/c/g;->e:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    monitor-exit v1

    const/4 v0, 0x0

    :goto_0
    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/dualboot/c/g;->e:Ljava/util/ArrayList;

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/c/j;

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit v1

    throw v0
.end method

.method private e()I
    .locals 2

    iget-object v1, p0, Lcom/dualboot/c/g;->e:Ljava/util/ArrayList;

    monitor-enter v1

    :try_start_0
    iget-object v0, p0, Lcom/dualboot/c/g;->e:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit v1

    throw v0
.end method

.method private f()V
    .locals 11

    const/4 v7, 0x0

    const/4 v8, 0x0

    monitor-enter p0

    :try_start_0
    invoke-direct {p0}, Lcom/dualboot/c/g;->e()I

    move-result v10

    move v9, v8

    :goto_0
    if-lt v9, v10, :cond_0

    monitor-exit p0

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/dualboot/c/g;->d()Lcom/dualboot/c/j;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Processing Msg "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/dualboot/c/j;->name()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    invoke-static {}, Lcom/dualboot/c/g;->h()[I

    move-result-object v1

    invoke-virtual {v0}, Lcom/dualboot/c/j;->ordinal()I

    move-result v0

    aget v0, v1, v0

    packed-switch v0, :pswitch_data_0

    :cond_1
    :goto_1
    add-int/lit8 v0, v9, 0x1

    move v9, v0

    goto :goto_0

    :pswitch_0
    iget-boolean v0, p0, Lcom/dualboot/c/g;->L:Z

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/dualboot/c/g;->O:Z

    if-eqz v0, :cond_6

    iget v0, p0, Lcom/dualboot/c/g;->d:I

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/c/g;->i:Ljavax/microedition/khronos/egl/EGLSurface;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/c/g;->j:Ljavax/microedition/khronos/egl/EGLContext;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v1, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    iget-object v2, p0, Lcom/dualboot/c/g;->i:Ljavax/microedition/khronos/egl/EGLSurface;

    iget-object v3, p0, Lcom/dualboot/c/g;->i:Ljavax/microedition/khronos/egl/EGLSurface;

    iget-object v4, p0, Lcom/dualboot/c/g;->j:Ljavax/microedition/khronos/egl/EGLContext;

    invoke-interface {v0, v1, v2, v3, v4}, Ljavax/microedition/khronos/egl/EGL10;->eglMakeCurrent(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLSurface;Ljavax/microedition/khronos/egl/EGLSurface;Ljavax/microedition/khronos/egl/EGLContext;)Z

    move-result v0

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/dualboot/c/g;->d:I

    invoke-static {v0}, Lcom/dualboot/engine/EngineInterface;->Destroy(I)I

    move-result v0

    iput v0, p0, Lcom/dualboot/c/g;->d:I

    iget v0, p0, Lcom/dualboot/c/g;->d:I

    if-eqz v0, :cond_4

    const/4 v0, 0x1

    :goto_2
    iput-boolean v0, p0, Lcom/dualboot/c/g;->O:Z

    :cond_2
    :goto_3
    iget v0, p0, Lcom/dualboot/c/g;->d:I

    if-nez v0, :cond_3

    iget-boolean v0, p0, Lcom/dualboot/c/g;->O:Z

    if-eqz v0, :cond_6

    :cond_3
    sget-object v0, Lcom/dualboot/c/j;->f:Lcom/dualboot/c/j;

    invoke-direct {p0, v0}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/j;)V

    sget-object v0, Lcom/dualboot/c/j;->a:Lcom/dualboot/c/j;

    invoke-direct {p0, v0}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/j;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0

    :cond_4
    move v0, v8

    goto :goto_2

    :cond_5
    :try_start_1
    invoke-direct {p0}, Lcom/dualboot/c/g;->c()Z

    goto :goto_3

    :cond_6
    iget-object v0, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v1, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    sget-object v2, Ljavax/microedition/khronos/egl/EGL10;->EGL_NO_SURFACE:Ljavax/microedition/khronos/egl/EGLSurface;

    sget-object v3, Ljavax/microedition/khronos/egl/EGL10;->EGL_NO_SURFACE:Ljavax/microedition/khronos/egl/EGLSurface;

    sget-object v4, Ljavax/microedition/khronos/egl/EGL10;->EGL_NO_CONTEXT:Ljavax/microedition/khronos/egl/EGLContext;

    invoke-interface {v0, v1, v2, v3, v4}, Ljavax/microedition/khronos/egl/EGL10;->eglMakeCurrent(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLSurface;Ljavax/microedition/khronos/egl/EGLSurface;Ljavax/microedition/khronos/egl/EGLContext;)Z

    iget-object v0, p0, Lcom/dualboot/c/g;->j:Ljavax/microedition/khronos/egl/EGLContext;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v1, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    iget-object v2, p0, Lcom/dualboot/c/g;->j:Ljavax/microedition/khronos/egl/EGLContext;

    invoke-interface {v0, v1, v2}, Ljavax/microedition/khronos/egl/EGL10;->eglDestroyContext(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLContext;)Z

    :cond_7
    iget-object v0, p0, Lcom/dualboot/c/g;->i:Ljavax/microedition/khronos/egl/EGLSurface;

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v1, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    iget-object v2, p0, Lcom/dualboot/c/g;->i:Ljavax/microedition/khronos/egl/EGLSurface;

    invoke-interface {v0, v1, v2}, Ljavax/microedition/khronos/egl/EGL10;->eglDestroySurface(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLSurface;)Z

    :cond_8
    iget-object v0, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v1, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    invoke-interface {v0, v1}, Ljavax/microedition/khronos/egl/EGL10;->eglTerminate(Ljavax/microedition/khronos/egl/EGLDisplay;)Z

    :cond_9
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/c/g;->j:Ljavax/microedition/khronos/egl/EGLContext;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/c/g;->i:Ljavax/microedition/khronos/egl/EGLSurface;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/c/g;->f:Ljavax/microedition/khronos/opengles/GL11;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/dualboot/c/g;->L:Z

    goto/16 :goto_1

    :pswitch_1
    iget-boolean v0, p0, Lcom/dualboot/c/g;->L:Z

    if-nez v0, :cond_12

    invoke-direct {p0}, Lcom/dualboot/c/g;->g()Z

    move-result v0

    if-eqz v0, :cond_12

    invoke-static {}, Ljavax/microedition/khronos/egl/EGLContext;->getEGL()Ljavax/microedition/khronos/egl/EGL;

    move-result-object v0

    check-cast v0, Ljavax/microedition/khronos/egl/EGL10;

    iput-object v0, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v0, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    if-eqz v0, :cond_12

    iget-object v0, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    sget-object v1, Ljavax/microedition/khronos/egl/EGL10;->EGL_DEFAULT_DISPLAY:Ljava/lang/Object;

    invoke-interface {v0, v1}, Ljavax/microedition/khronos/egl/EGL10;->eglGetDisplay(Ljava/lang/Object;)Ljavax/microedition/khronos/egl/EGLDisplay;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    iget-object v0, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    if-eqz v0, :cond_12

    const/4 v0, 0x2

    new-array v0, v0, [I

    iget-object v1, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v2, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    invoke-interface {v1, v2, v0}, Ljavax/microedition/khronos/egl/EGL10;->eglInitialize(Ljavax/microedition/khronos/egl/EGLDisplay;[I)Z

    move-result v0

    if-eqz v0, :cond_12

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    iget-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    if-nez v0, :cond_a

    new-instance v0, Lcom/dualboot/c/a;

    const/4 v1, 0x5

    const/4 v2, 0x6

    const/4 v3, 0x5

    const/4 v4, 0x0

    const/16 v5, 0x10

    sget-object v6, Lcom/dualboot/c/b;->b:Lcom/dualboot/c/b;

    invoke-direct/range {v0 .. v6}, Lcom/dualboot/c/a;-><init>(IIIIILcom/dualboot/c/b;)V

    iput-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iget-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iget-object v1, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v2, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    invoke-virtual {v0, v1, v2}, Lcom/dualboot/c/a;->a(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;)Ljavax/microedition/khronos/egl/EGLConfig;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    :cond_a
    iget-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    if-nez v0, :cond_b

    new-instance v0, Lcom/dualboot/c/a;

    const/4 v1, 0x4

    const/4 v2, 0x4

    const/4 v3, 0x4

    const/4 v4, 0x0

    const/16 v5, 0x10

    sget-object v6, Lcom/dualboot/c/b;->b:Lcom/dualboot/c/b;

    invoke-direct/range {v0 .. v6}, Lcom/dualboot/c/a;-><init>(IIIIILcom/dualboot/c/b;)V

    iput-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iget-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iget-object v1, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v2, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    invoke-virtual {v0, v1, v2}, Lcom/dualboot/c/a;->a(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;)Ljavax/microedition/khronos/egl/EGLConfig;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    :cond_b
    iget-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    if-nez v0, :cond_c

    new-instance v0, Lcom/dualboot/c/a;

    const/4 v1, 0x5

    const/4 v2, 0x6

    const/4 v3, 0x5

    const/4 v4, 0x0

    const/16 v5, 0x18

    sget-object v6, Lcom/dualboot/c/b;->b:Lcom/dualboot/c/b;

    invoke-direct/range {v0 .. v6}, Lcom/dualboot/c/a;-><init>(IIIIILcom/dualboot/c/b;)V

    iput-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iget-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iget-object v1, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v2, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    invoke-virtual {v0, v1, v2}, Lcom/dualboot/c/a;->a(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;)Ljavax/microedition/khronos/egl/EGLConfig;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    :cond_c
    iget-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    if-nez v0, :cond_d

    new-instance v0, Lcom/dualboot/c/a;

    const/4 v1, 0x4

    const/4 v2, 0x4

    const/4 v3, 0x4

    const/4 v4, 0x0

    const/16 v5, 0x18

    sget-object v6, Lcom/dualboot/c/b;->b:Lcom/dualboot/c/b;

    invoke-direct/range {v0 .. v6}, Lcom/dualboot/c/a;-><init>(IIIIILcom/dualboot/c/b;)V

    iput-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iget-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iget-object v1, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v2, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    invoke-virtual {v0, v1, v2}, Lcom/dualboot/c/a;->a(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;)Ljavax/microedition/khronos/egl/EGLConfig;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    :cond_d
    iget-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    if-nez v0, :cond_e

    new-instance v0, Lcom/dualboot/c/a;

    const/16 v1, 0x8

    const/16 v2, 0x8

    const/16 v3, 0x8

    const/4 v4, 0x0

    const/16 v5, 0x10

    sget-object v6, Lcom/dualboot/c/b;->b:Lcom/dualboot/c/b;

    invoke-direct/range {v0 .. v6}, Lcom/dualboot/c/a;-><init>(IIIIILcom/dualboot/c/b;)V

    iput-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iget-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iget-object v1, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v2, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    invoke-virtual {v0, v1, v2}, Lcom/dualboot/c/a;->a(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;)Ljavax/microedition/khronos/egl/EGLConfig;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    :cond_e
    iget-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    if-nez v0, :cond_f

    new-instance v0, Lcom/dualboot/c/a;

    const/16 v1, 0x8

    const/16 v2, 0x8

    const/16 v3, 0x8

    const/4 v4, 0x0

    const/16 v5, 0x18

    sget-object v6, Lcom/dualboot/c/b;->b:Lcom/dualboot/c/b;

    invoke-direct/range {v0 .. v6}, Lcom/dualboot/c/a;-><init>(IIIIILcom/dualboot/c/b;)V

    iput-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iget-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iget-object v1, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v2, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    invoke-virtual {v0, v1, v2}, Lcom/dualboot/c/a;->a(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;)Ljavax/microedition/khronos/egl/EGLConfig;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    :cond_f
    iget-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    if-nez v0, :cond_10

    new-instance v0, Lcom/dualboot/c/a;

    const/16 v1, 0x8

    const/16 v2, 0x8

    const/16 v3, 0x8

    const/16 v4, 0x8

    const/16 v5, 0x10

    sget-object v6, Lcom/dualboot/c/b;->b:Lcom/dualboot/c/b;

    invoke-direct/range {v0 .. v6}, Lcom/dualboot/c/a;-><init>(IIIIILcom/dualboot/c/b;)V

    iput-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iget-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iget-object v1, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v2, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    invoke-virtual {v0, v1, v2}, Lcom/dualboot/c/a;->a(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;)Ljavax/microedition/khronos/egl/EGLConfig;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    :cond_10
    iget-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    if-nez v0, :cond_11

    new-instance v0, Lcom/dualboot/c/a;

    const/16 v1, 0x8

    const/16 v2, 0x8

    const/16 v3, 0x8

    const/16 v4, 0x8

    const/16 v5, 0x18

    sget-object v6, Lcom/dualboot/c/b;->b:Lcom/dualboot/c/b;

    invoke-direct/range {v0 .. v6}, Lcom/dualboot/c/a;-><init>(IIIIILcom/dualboot/c/b;)V

    iput-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iget-object v0, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    iget-object v1, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v2, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    invoke-virtual {v0, v1, v2}, Lcom/dualboot/c/a;->a(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;)Ljavax/microedition/khronos/egl/EGLConfig;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    :cond_11
    iget-object v0, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    if-eqz v0, :cond_12

    iget-object v1, p0, Lcom/dualboot/c/g;->l:Lcom/dualboot/c/a;

    sget-object v0, Lcom/dualboot/c/b;->a:Lcom/dualboot/c/b;

    iget v1, v1, Lcom/dualboot/c/a;->a:I

    packed-switch v1, :pswitch_data_1

    :goto_4
    :pswitch_2
    sget-object v1, Lcom/dualboot/c/b;->c:Lcom/dualboot/c/b;

    if-ne v0, v1, :cond_13

    const/4 v0, 0x3

    new-array v0, v0, [I

    fill-array-data v0, :array_0

    :goto_5
    iget-object v1, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v2, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    iget-object v3, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    sget-object v4, Ljavax/microedition/khronos/egl/EGL10;->EGL_NO_CONTEXT:Ljavax/microedition/khronos/egl/EGLContext;

    invoke-interface {v1, v2, v3, v4, v0}, Ljavax/microedition/khronos/egl/EGL10;->eglCreateContext(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;Ljavax/microedition/khronos/egl/EGLContext;[I)Ljavax/microedition/khronos/egl/EGLContext;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/c/g;->j:Ljavax/microedition/khronos/egl/EGLContext;

    iget-object v0, p0, Lcom/dualboot/c/g;->j:Ljavax/microedition/khronos/egl/EGLContext;

    if-eqz v0, :cond_12

    iget-object v0, p0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    iget-object v1, p0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    iget-object v2, p0, Lcom/dualboot/c/g;->k:Ljavax/microedition/khronos/egl/EGLConfig;

    iget-object v3, p0, Lcom/dualboot/c/g;->m:Ljava/lang/Object;

    const/4 v4, 0x0

    invoke-interface {v0, v1, v2, v3, v4}, Ljavax/microedition/khronos/egl/EGL10;->eglCreateWindowSurface(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;Ljava/lang/Object;[I)Ljavax/microedition/khronos/egl/EGLSurface;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/c/g;->i:Ljavax/microedition/khronos/egl/EGLSurface;

    iget-object v0, p0, Lcom/dualboot/c/g;->i:Ljavax/microedition/khronos/egl/EGLSurface;

    if-eqz v0, :cond_12

    iget-object v0, p0, Lcom/dualboot/c/g;->j:Ljavax/microedition/khronos/egl/EGLContext;

    invoke-virtual {v0}, Ljavax/microedition/khronos/egl/EGLContext;->getGL()Ljavax/microedition/khronos/opengles/GL;

    move-result-object v0

    check-cast v0, Ljavax/microedition/khronos/opengles/GL11;

    iput-object v0, p0, Lcom/dualboot/c/g;->f:Ljavax/microedition/khronos/opengles/GL11;

    iget-object v0, p0, Lcom/dualboot/c/g;->f:Ljavax/microedition/khronos/opengles/GL11;

    if-eqz v0, :cond_12

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/dualboot/c/g;->L:Z

    :cond_12
    iget-boolean v0, p0, Lcom/dualboot/c/g;->L:Z

    if-nez v0, :cond_1

    sget-object v0, Lcom/dualboot/c/j;->g:Lcom/dualboot/c/j;

    invoke-direct {p0, v0}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/j;)V

    sget-object v0, Lcom/dualboot/c/j;->a:Lcom/dualboot/c/j;

    invoke-direct {p0, v0}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/j;)V

    sget-object v0, Lcom/dualboot/c/j;->b:Lcom/dualboot/c/j;

    invoke-direct {p0, v0}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/j;)V

    goto/16 :goto_1

    :pswitch_3
    sget-object v0, Lcom/dualboot/c/b;->b:Lcom/dualboot/c/b;

    goto :goto_4

    :pswitch_4
    sget-object v0, Lcom/dualboot/c/b;->c:Lcom/dualboot/c/b;

    goto :goto_4

    :pswitch_5
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/dualboot/c/g;->N:Z

    goto/16 :goto_1

    :pswitch_6
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/dualboot/c/g;->N:Z

    goto/16 :goto_1

    :pswitch_7
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/dualboot/c/g;->M:Z

    goto/16 :goto_1

    :pswitch_8
    const-wide/16 v0, 0x64

    invoke-static {v0, v1}, Lcom/dualboot/c/g;->a(J)V

    goto/16 :goto_1

    :pswitch_9
    const-wide/16 v0, 0x3e8

    invoke-static {v0, v1}, Lcom/dualboot/c/g;->a(J)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto/16 :goto_1

    :cond_13
    move-object v0, v7

    goto :goto_5

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_0
        :pswitch_1
        :pswitch_6
        :pswitch_5
        :pswitch_7
        :pswitch_8
        :pswitch_9
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x1
        :pswitch_3
        :pswitch_2
        :pswitch_2
        :pswitch_4
    .end packed-switch

    :array_0
    .array-data 4
        0x3098
        0x2
        0x3038
    .end array-data
.end method

.method private g()Z
    .locals 1

    iget-object v0, p0, Lcom/dualboot/c/g;->m:Ljava/lang/Object;

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/dualboot/c/g;->n:I

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/dualboot/c/g;->o:I

    if-lez v0, :cond_0

    iget v0, p0, Lcom/dualboot/c/g;->p:I

    if-lez v0, :cond_0

    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method

.method private static synthetic h()[I
    .locals 3

    sget-object v0, Lcom/dualboot/c/g;->P:[I

    if-eqz v0, :cond_0

    :goto_0
    return-object v0

    :cond_0
    invoke-static {}, Lcom/dualboot/c/j;->values()[Lcom/dualboot/c/j;

    move-result-object v0

    array-length v0, v0

    new-array v0, v0, [I

    :try_start_0
    sget-object v1, Lcom/dualboot/c/j;->d:Lcom/dualboot/c/j;

    invoke-virtual {v1}, Lcom/dualboot/c/j;->ordinal()I

    move-result v1

    const/4 v2, 0x4

    aput v2, v0, v1
    :try_end_0
    .catch Ljava/lang/NoSuchFieldError; {:try_start_0 .. :try_end_0} :catch_6

    :goto_1
    :try_start_1
    sget-object v1, Lcom/dualboot/c/j;->c:Lcom/dualboot/c/j;

    invoke-virtual {v1}, Lcom/dualboot/c/j;->ordinal()I

    move-result v1

    const/4 v2, 0x3

    aput v2, v0, v1
    :try_end_1
    .catch Ljava/lang/NoSuchFieldError; {:try_start_1 .. :try_end_1} :catch_5

    :goto_2
    :try_start_2
    sget-object v1, Lcom/dualboot/c/j;->e:Lcom/dualboot/c/j;

    invoke-virtual {v1}, Lcom/dualboot/c/j;->ordinal()I

    move-result v1

    const/4 v2, 0x5

    aput v2, v0, v1
    :try_end_2
    .catch Ljava/lang/NoSuchFieldError; {:try_start_2 .. :try_end_2} :catch_4

    :goto_3
    :try_start_3
    sget-object v1, Lcom/dualboot/c/j;->f:Lcom/dualboot/c/j;

    invoke-virtual {v1}, Lcom/dualboot/c/j;->ordinal()I

    move-result v1

    const/4 v2, 0x6

    aput v2, v0, v1
    :try_end_3
    .catch Ljava/lang/NoSuchFieldError; {:try_start_3 .. :try_end_3} :catch_3

    :goto_4
    :try_start_4
    sget-object v1, Lcom/dualboot/c/j;->g:Lcom/dualboot/c/j;

    invoke-virtual {v1}, Lcom/dualboot/c/j;->ordinal()I

    move-result v1

    const/4 v2, 0x7

    aput v2, v0, v1
    :try_end_4
    .catch Ljava/lang/NoSuchFieldError; {:try_start_4 .. :try_end_4} :catch_2

    :goto_5
    :try_start_5
    sget-object v1, Lcom/dualboot/c/j;->b:Lcom/dualboot/c/j;

    invoke-virtual {v1}, Lcom/dualboot/c/j;->ordinal()I

    move-result v1

    const/4 v2, 0x2

    aput v2, v0, v1
    :try_end_5
    .catch Ljava/lang/NoSuchFieldError; {:try_start_5 .. :try_end_5} :catch_1

    :goto_6
    :try_start_6
    sget-object v1, Lcom/dualboot/c/j;->a:Lcom/dualboot/c/j;

    invoke-virtual {v1}, Lcom/dualboot/c/j;->ordinal()I

    move-result v1

    const/4 v2, 0x1

    aput v2, v0, v1
    :try_end_6
    .catch Ljava/lang/NoSuchFieldError; {:try_start_6 .. :try_end_6} :catch_0

    :goto_7
    sput-object v0, Lcom/dualboot/c/g;->P:[I

    goto :goto_0

    :catch_0
    move-exception v1

    goto :goto_7

    :catch_1
    move-exception v1

    goto :goto_6

    :catch_2
    move-exception v1

    goto :goto_5

    :catch_3
    move-exception v1

    goto :goto_4

    :catch_4
    move-exception v1

    goto :goto_3

    :catch_5
    move-exception v1

    goto :goto_2

    :catch_6
    move-exception v1

    goto :goto_1
.end method

.method private static synthetic i()[I
    .locals 3

    sget-object v0, Lcom/dualboot/c/g;->Q:[I

    if-eqz v0, :cond_0

    :goto_0
    return-object v0

    :cond_0
    invoke-static {}, Lcom/dualboot/c/h;->values()[Lcom/dualboot/c/h;

    move-result-object v0

    array-length v0, v0

    new-array v0, v0, [I

    :try_start_0
    sget-object v1, Lcom/dualboot/c/h;->c:Lcom/dualboot/c/h;

    invoke-virtual {v1}, Lcom/dualboot/c/h;->ordinal()I

    move-result v1

    const/4 v2, 0x3

    aput v2, v0, v1
    :try_end_0
    .catch Ljava/lang/NoSuchFieldError; {:try_start_0 .. :try_end_0} :catch_2

    :goto_1
    :try_start_1
    sget-object v1, Lcom/dualboot/c/h;->b:Lcom/dualboot/c/h;

    invoke-virtual {v1}, Lcom/dualboot/c/h;->ordinal()I

    move-result v1

    const/4 v2, 0x2

    aput v2, v0, v1
    :try_end_1
    .catch Ljava/lang/NoSuchFieldError; {:try_start_1 .. :try_end_1} :catch_1

    :goto_2
    :try_start_2
    sget-object v1, Lcom/dualboot/c/h;->a:Lcom/dualboot/c/h;

    invoke-virtual {v1}, Lcom/dualboot/c/h;->ordinal()I

    move-result v1

    const/4 v2, 0x1

    aput v2, v0, v1
    :try_end_2
    .catch Ljava/lang/NoSuchFieldError; {:try_start_2 .. :try_end_2} :catch_0

    :goto_3
    sput-object v0, Lcom/dualboot/c/g;->Q:[I

    goto :goto_0

    :catch_0
    move-exception v1

    goto :goto_3

    :catch_1
    move-exception v1

    goto :goto_2

    :catch_2
    move-exception v1

    goto :goto_1
.end method

.method private static synthetic j()[I
    .locals 3

    sget-object v0, Lcom/dualboot/c/g;->R:[I

    if-eqz v0, :cond_0

    :goto_0
    return-object v0

    :cond_0
    invoke-static {}, Lcom/dualboot/c/k;->values()[Lcom/dualboot/c/k;

    move-result-object v0

    array-length v0, v0

    new-array v0, v0, [I

    :try_start_0
    sget-object v1, Lcom/dualboot/c/k;->b:Lcom/dualboot/c/k;

    invoke-virtual {v1}, Lcom/dualboot/c/k;->ordinal()I

    move-result v1

    const/4 v2, 0x2

    aput v2, v0, v1
    :try_end_0
    .catch Ljava/lang/NoSuchFieldError; {:try_start_0 .. :try_end_0} :catch_2

    :goto_1
    :try_start_1
    sget-object v1, Lcom/dualboot/c/k;->c:Lcom/dualboot/c/k;

    invoke-virtual {v1}, Lcom/dualboot/c/k;->ordinal()I

    move-result v1

    const/4 v2, 0x3

    aput v2, v0, v1
    :try_end_1
    .catch Ljava/lang/NoSuchFieldError; {:try_start_1 .. :try_end_1} :catch_1

    :goto_2
    :try_start_2
    sget-object v1, Lcom/dualboot/c/k;->a:Lcom/dualboot/c/k;

    invoke-virtual {v1}, Lcom/dualboot/c/k;->ordinal()I

    move-result v1

    const/4 v2, 0x1

    aput v2, v0, v1
    :try_end_2
    .catch Ljava/lang/NoSuchFieldError; {:try_start_2 .. :try_end_2} :catch_0

    :goto_3
    sput-object v0, Lcom/dualboot/c/g;->R:[I

    goto :goto_0

    :catch_0
    move-exception v1

    goto :goto_3

    :catch_1
    move-exception v1

    goto :goto_2

    :catch_2
    move-exception v1

    goto :goto_1
.end method


# virtual methods
.method public final a()V
    .locals 1

    monitor-enter p0

    const/4 v0, 0x1

    :try_start_0
    iput-boolean v0, p0, Lcom/dualboot/c/g;->F:Z

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final a(F)V
    .locals 2

    monitor-enter p0

    float-to-double v0, p1

    :try_start_0
    iput-wide v0, p0, Lcom/dualboot/c/g;->q:D

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final a(FF)V
    .locals 1

    monitor-enter p0

    :try_start_0
    iput p1, p0, Lcom/dualboot/c/g;->J:F

    iput p2, p0, Lcom/dualboot/c/g;->K:F

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final a(FFJ)V
    .locals 1

    monitor-enter p0

    :try_start_0
    iput p1, p0, Lcom/dualboot/c/g;->C:F

    iput p2, p0, Lcom/dualboot/c/g;->D:F

    iput-wide p3, p0, Lcom/dualboot/c/g;->B:J

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final a(Lcom/dualboot/c/h;J)V
    .locals 3

    monitor-enter p0

    :try_start_0
    iput-object p1, p0, Lcom/dualboot/c/g;->u:Lcom/dualboot/c/h;

    invoke-static {}, Lcom/dualboot/c/g;->i()[I

    move-result-object v0

    iget-object v1, p0, Lcom/dualboot/c/g;->u:Lcom/dualboot/c/h;

    invoke-virtual {v1}, Lcom/dualboot/c/h;->ordinal()I

    move-result v1

    aget v0, v0, v1

    packed-switch v0, :pswitch_data_0

    :pswitch_0
    const-wide/32 v0, 0xafc8

    iput-wide v0, p0, Lcom/dualboot/c/g;->v:J

    :goto_0
    iget-wide v0, p0, Lcom/dualboot/c/g;->v:J

    mul-long/2addr v0, p2

    iput-wide v0, p0, Lcom/dualboot/c/g;->v:J

    const/high16 v0, 0x3f800000    # 1.0f

    iget-wide v1, p0, Lcom/dualboot/c/g;->v:J

    long-to-float v1, v1

    div-float/2addr v0, v1

    float-to-double v0, v0

    iput-wide v0, p0, Lcom/dualboot/c/g;->w:D

    monitor-exit p0

    return-void

    :pswitch_1
    const-wide/32 v0, 0x15f90

    iput-wide v0, p0, Lcom/dualboot/c/g;->v:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0

    :pswitch_2
    const-wide/16 v0, 0x57e4

    :try_start_1
    iput-wide v0, p0, Lcom/dualboot/c/g;->v:J
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_1
        :pswitch_0
        :pswitch_2
    .end packed-switch
.end method

.method public final a(Lcom/dualboot/c/i;)V
    .locals 1

    monitor-enter p0

    :try_start_0
    iput-object p1, p0, Lcom/dualboot/c/g;->t:Lcom/dualboot/c/i;

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final a(Lcom/dualboot/c/k;)V
    .locals 2

    monitor-enter p0

    :try_start_0
    iput-object p1, p0, Lcom/dualboot/c/g;->x:Lcom/dualboot/c/k;

    invoke-static {}, Lcom/dualboot/c/g;->j()[I

    move-result-object v0

    iget-object v1, p0, Lcom/dualboot/c/g;->x:Lcom/dualboot/c/k;

    invoke-virtual {v1}, Lcom/dualboot/c/k;->ordinal()I

    move-result v1

    aget v0, v0, v1

    packed-switch v0, :pswitch_data_0

    :pswitch_0
    const-wide/16 v0, 0xa

    iput-wide v0, p0, Lcom/dualboot/c/g;->y:J

    :goto_0
    monitor-exit p0

    return-void

    :pswitch_1
    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/dualboot/c/g;->y:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0

    :pswitch_2
    const-wide/16 v0, 0x14

    :try_start_1
    iput-wide v0, p0, Lcom/dualboot/c/g;->y:J
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_1
        :pswitch_0
        :pswitch_2
    .end packed-switch
.end method

.method public final a(Ljava/lang/Object;III)V
    .locals 5

    const/4 v1, 0x1

    const/4 v2, 0x0

    monitor-enter p0

    :try_start_0
    iget-boolean v3, p0, Lcom/dualboot/c/g;->L:Z

    iget-object v0, p0, Lcom/dualboot/c/g;->m:Ljava/lang/Object;

    if-nez v0, :cond_4

    if-nez p1, :cond_3

    move v0, v1

    :goto_0
    iget v4, p0, Lcom/dualboot/c/g;->n:I

    if-ne v4, p2, :cond_5

    :goto_1
    iput-object p1, p0, Lcom/dualboot/c/g;->m:Ljava/lang/Object;

    iput p2, p0, Lcom/dualboot/c/g;->n:I

    iput p3, p0, Lcom/dualboot/c/g;->o:I

    iput p4, p0, Lcom/dualboot/c/g;->p:I

    if-eqz v0, :cond_0

    if-nez v1, :cond_2

    :cond_0
    if-eqz v3, :cond_1

    sget-object v0, Lcom/dualboot/c/j;->a:Lcom/dualboot/c/j;

    invoke-direct {p0, v0}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/j;)V

    sget-object v0, Lcom/dualboot/c/j;->f:Lcom/dualboot/c/j;

    invoke-direct {p0, v0}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/j;)V

    :cond_1
    invoke-direct {p0}, Lcom/dualboot/c/g;->g()Z

    move-result v0

    if-eqz v0, :cond_2

    sget-object v0, Lcom/dualboot/c/j;->b:Lcom/dualboot/c/j;

    invoke-direct {p0, v0}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/j;)V

    :cond_2
    monitor-exit p0

    return-void

    :cond_3
    move v0, v2

    goto :goto_0

    :cond_4
    iget-object v0, p0, Lcom/dualboot/c/g;->m:Ljava/lang/Object;

    invoke-virtual {v0, p1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-result v0

    goto :goto_0

    :cond_5
    move v1, v2

    goto :goto_1

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final a(Z)V
    .locals 1

    monitor-enter p0

    if-eqz p1, :cond_0

    :try_start_0
    sget-object v0, Lcom/dualboot/c/j;->c:Lcom/dualboot/c/j;

    invoke-direct {p0, v0}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/j;)V

    :goto_0
    monitor-exit p0

    return-void

    :cond_0
    sget-object v0, Lcom/dualboot/c/j;->d:Lcom/dualboot/c/j;

    invoke-direct {p0, v0}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/j;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final b()V
    .locals 1

    monitor-enter p0

    :try_start_0
    sget-object v0, Lcom/dualboot/c/j;->a:Lcom/dualboot/c/j;

    invoke-direct {p0, v0}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/j;)V

    sget-object v0, Lcom/dualboot/c/j;->e:Lcom/dualboot/c/j;

    invoke-direct {p0, v0}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/j;)V

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    invoke-virtual {p0}, Lcom/dualboot/c/g;->join()V
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_0

    :goto_0
    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0

    :catch_0
    move-exception v0

    goto :goto_0
.end method

.method public final b(F)V
    .locals 2

    monitor-enter p0

    float-to-double v0, p1

    :try_start_0
    iput-wide v0, p0, Lcom/dualboot/c/g;->r:D

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final b(Z)V
    .locals 2

    monitor-enter p0

    :try_start_0
    iput-boolean p1, p0, Lcom/dualboot/c/g;->z:Z

    iget-boolean v0, p0, Lcom/dualboot/c/g;->z:Z

    if-eqz v0, :cond_0

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/dualboot/c/g;->A:J

    :goto_0
    monitor-exit p0

    return-void

    :cond_0
    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/dualboot/c/g;->A:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final c(Z)V
    .locals 1

    monitor-enter p0

    :try_start_0
    iput-boolean p1, p0, Lcom/dualboot/c/g;->E:Z

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final run()V
    .locals 22

    const/4 v2, 0x0

    move-object/from16 v0, p0

    iput-boolean v2, v0, Lcom/dualboot/c/g;->L:Z

    const/4 v2, 0x0

    move-object/from16 v0, p0

    iput-boolean v2, v0, Lcom/dualboot/c/g;->N:Z

    const/4 v2, 0x0

    move-object/from16 v0, p0

    iput-boolean v2, v0, Lcom/dualboot/c/g;->F:Z

    const/4 v2, 0x0

    move-object/from16 v0, p0

    iput-boolean v2, v0, Lcom/dualboot/c/g;->G:Z

    const/4 v2, 0x1

    move-object/from16 v0, p0

    iput-boolean v2, v0, Lcom/dualboot/c/g;->M:Z

    const-wide/16 v2, 0x0

    :goto_0
    move-object/from16 v0, p0

    iget-boolean v4, v0, Lcom/dualboot/c/g;->M:Z

    if-nez v4, :cond_0

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "...has resources=("

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    move-object/from16 v0, p0

    iget-boolean v3, v0, Lcom/dualboot/c/g;->O:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    move-result-object v2

    const-string v3, "), has surface=("

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    move-object/from16 v0, p0

    iget-boolean v3, v0, Lcom/dualboot/c/g;->L:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    move-result-object v2

    const-string v3, ")"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    return-void

    :cond_0
    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v13

    sub-long v19, v13, v2

    monitor-enter p0

    :try_start_0
    move-object/from16 v0, p0

    iget-boolean v0, v0, Lcom/dualboot/c/g;->N:Z

    move/from16 v21, v0

    move-object/from16 v0, p0

    iget-boolean v12, v0, Lcom/dualboot/c/g;->E:Z

    move-object/from16 v0, p0

    iget v6, v0, Lcom/dualboot/c/g;->J:F

    move-object/from16 v0, p0

    iget v7, v0, Lcom/dualboot/c/g;->K:F

    move-object/from16 v0, p0

    iget-wide v15, v0, Lcom/dualboot/c/g;->q:D

    move-object/from16 v0, p0

    iget-wide v0, v0, Lcom/dualboot/c/g;->r:D

    move-wide/from16 v17, v0

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-static {}, Lcom/dualboot/engine/EngineInterface;->a()Z

    move-result v2

    if-eqz v2, :cond_8

    if-eqz v21, :cond_8

    move-object/from16 v0, p0

    iget-boolean v2, v0, Lcom/dualboot/c/g;->L:Z

    if-eqz v2, :cond_8

    move-object/from16 v0, p0

    iget-object v2, v0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    move-object/from16 v0, p0

    iget-object v4, v0, Lcom/dualboot/c/g;->i:Ljavax/microedition/khronos/egl/EGLSurface;

    move-object/from16 v0, p0

    iget-object v5, v0, Lcom/dualboot/c/g;->i:Ljavax/microedition/khronos/egl/EGLSurface;

    move-object/from16 v0, p0

    iget-object v8, v0, Lcom/dualboot/c/g;->j:Ljavax/microedition/khronos/egl/EGLContext;

    invoke-interface {v2, v3, v4, v5, v8}, Ljavax/microedition/khronos/egl/EGL10;->eglMakeCurrent(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLSurface;Ljavax/microedition/khronos/egl/EGLSurface;Ljavax/microedition/khronos/egl/EGLContext;)Z

    move-result v2

    if-eqz v2, :cond_8

    const/4 v5, 0x0

    const/4 v4, 0x0

    move-object/from16 v0, p0

    iget-boolean v2, v0, Lcom/dualboot/c/g;->F:Z

    if-eqz v2, :cond_9

    move-object/from16 v0, p0

    iget-boolean v2, v0, Lcom/dualboot/c/g;->G:Z

    if-nez v2, :cond_9

    const/4 v2, 0x1

    :goto_1
    move-object/from16 v0, p0

    iget-boolean v3, v0, Lcom/dualboot/c/g;->F:Z

    move-object/from16 v0, p0

    iput-boolean v3, v0, Lcom/dualboot/c/g;->G:Z

    move-object/from16 v0, p0

    iget-boolean v3, v0, Lcom/dualboot/c/g;->O:Z

    if-eqz v3, :cond_1

    move-object/from16 v0, p0

    iget-boolean v3, v0, Lcom/dualboot/c/g;->F:Z

    if-eqz v3, :cond_12

    :cond_1
    const/4 v3, 0x1

    move-object/from16 v0, p0

    iget-boolean v8, v0, Lcom/dualboot/c/g;->F:Z

    if-eqz v8, :cond_11

    if-eqz v2, :cond_2

    move-object/from16 v0, p0

    iput-wide v13, v0, Lcom/dualboot/c/g;->H:J

    :cond_2
    move-object/from16 v0, p0

    iget-wide v8, v0, Lcom/dualboot/c/g;->H:J

    sub-long v8, v13, v8

    const-wide/16 v10, 0x2ee

    cmp-long v2, v8, v10

    if-gtz v2, :cond_11

    const-wide/16 v2, 0xfa

    sub-long v2, v8, v2

    long-to-float v2, v2

    const/high16 v3, 0x43fa0000    # 500.0f

    div-float v4, v2, v3

    const/4 v2, 0x0

    const/4 v3, 0x1

    move v8, v3

    move v9, v4

    :goto_2
    move-object/from16 v0, p0

    iget-boolean v3, v0, Lcom/dualboot/c/g;->O:Z

    if-eqz v3, :cond_3

    if-eqz v2, :cond_4

    :cond_3
    move-object/from16 v0, p0

    iget v2, v0, Lcom/dualboot/c/g;->d:I

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/c/g;->a:Landroid/content/Context;

    move-object/from16 v0, p0

    iget-object v4, v0, Lcom/dualboot/c/g;->b:Ljava/lang/String;

    move-object/from16 v0, p0

    iget-object v5, v0, Lcom/dualboot/c/g;->c:Ljava/lang/String;

    invoke-static/range {v2 .. v7}, Lcom/dualboot/engine/EngineInterface;->a(ILandroid/content/Context;Ljava/lang/String;Ljava/lang/String;FF)I

    move-result v2

    move-object/from16 v0, p0

    iput v2, v0, Lcom/dualboot/c/g;->d:I

    move-object/from16 v0, p0

    iget v2, v0, Lcom/dualboot/c/g;->d:I

    if-eqz v2, :cond_a

    const/4 v2, 0x1

    :goto_3
    move-object/from16 v0, p0

    iput-boolean v2, v0, Lcom/dualboot/c/g;->O:Z

    move-object/from16 v0, p0

    iput-wide v13, v0, Lcom/dualboot/c/g;->I:J

    const/4 v2, 0x0

    move-object/from16 v0, p0

    iput-boolean v2, v0, Lcom/dualboot/c/g;->F:Z

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Load scene ("

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/c/g;->b:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    const-string v3, "), settings ("

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/c/g;->c:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    const-string v3, ") = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    move-object/from16 v0, p0

    iget v3, v0, Lcom/dualboot/c/g;->d:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "   GL_VENDOR   = "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/c/g;->f:Ljavax/microedition/khronos/opengles/GL11;

    const/16 v4, 0x1f00

    invoke-interface {v3, v4}, Ljavax/microedition/khronos/opengles/GL11;->glGetString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "   GL_RENDERER = "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/c/g;->f:Ljavax/microedition/khronos/opengles/GL11;

    const/16 v4, 0x1f01

    invoke-interface {v3, v4}, Ljavax/microedition/khronos/opengles/GL11;->glGetString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "   GL_VERSION  = "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/c/g;->f:Ljavax/microedition/khronos/opengles/GL11;

    const/16 v4, 0x1f02

    invoke-interface {v3, v4}, Ljavax/microedition/khronos/opengles/GL11;->glGetString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    :cond_4
    :goto_4
    move-object/from16 v0, p0

    iget-wide v2, v0, Lcom/dualboot/c/g;->I:J

    sub-long v2, v13, v2

    const-wide/16 v4, 0x3e8

    cmp-long v4, v2, v4

    if-gtz v4, :cond_5

    const/high16 v4, 0x3f800000    # 1.0f

    long-to-float v2, v2

    const/high16 v3, 0x447a0000    # 1000.0f

    div-float/2addr v2, v3

    sub-float v9, v4, v2

    :cond_5
    const/high16 v2, 0x3f800000    # 1.0f

    sub-float/2addr v2, v9

    mul-float/2addr v2, v2

    const/high16 v3, 0x3f800000    # 1.0f

    sub-float v11, v3, v2

    const-wide/high16 v2, 0x3fe0000000000000L    # 0.5

    monitor-enter p0

    :try_start_1
    move-object/from16 v0, p0

    iget-object v4, v0, Lcom/dualboot/c/g;->t:Lcom/dualboot/c/i;

    move-object/from16 v0, p0

    iget-boolean v5, v0, Lcom/dualboot/c/g;->z:Z

    move-object/from16 v0, p0

    iget-wide v9, v0, Lcom/dualboot/c/g;->A:J

    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v5, :cond_d

    if-eqz v8, :cond_b

    move-object/from16 v0, p0

    iget-wide v2, v0, Lcom/dualboot/c/g;->s:D

    :cond_6
    :goto_5
    const-wide/high16 v4, 0x3ff0000000000000L    # 1.0

    const-wide v8, 0x3f789374bc6a7efaL    # 0.006

    move-wide/from16 v0, v19

    long-to-double v15, v0

    mul-double/2addr v8, v15

    invoke-static {v4, v5, v8, v9}, Ljava/lang/Math;->min(DD)D

    move-result-wide v4

    move-object/from16 v0, p0

    iget-wide v8, v0, Lcom/dualboot/c/g;->s:D

    sub-double/2addr v2, v8

    move-object/from16 v0, p0

    iget-wide v8, v0, Lcom/dualboot/c/g;->s:D

    mul-double/2addr v2, v4

    add-double/2addr v2, v8

    move-object/from16 v0, p0

    iput-wide v2, v0, Lcom/dualboot/c/g;->s:D

    move-object/from16 v0, p0

    iget v2, v0, Lcom/dualboot/c/g;->d:I

    invoke-static {v2, v6, v7}, Lcom/dualboot/engine/EngineInterface;->SetStateLocation(IFF)Z

    move-object/from16 v0, p0

    iget v2, v0, Lcom/dualboot/c/g;->d:I

    move-object/from16 v0, p0

    iget v3, v0, Lcom/dualboot/c/g;->o:I

    move-object/from16 v0, p0

    iget v4, v0, Lcom/dualboot/c/g;->p:I

    move-object/from16 v0, p0

    iget v5, v0, Lcom/dualboot/c/g;->C:F

    move-object/from16 v0, p0

    iget v6, v0, Lcom/dualboot/c/g;->D:F

    move-object/from16 v0, p0

    iget-wide v7, v0, Lcom/dualboot/c/g;->B:J

    move-object/from16 v0, p0

    iget-wide v9, v0, Lcom/dualboot/c/g;->s:D

    invoke-static/range {v2 .. v12}, Lcom/dualboot/engine/EngineInterface;->Update(IIIFFJDFZ)I

    move-result v2

    move-object/from16 v0, p0

    iput v2, v0, Lcom/dualboot/c/g;->d:I

    move-object/from16 v0, p0

    iget v2, v0, Lcom/dualboot/c/g;->d:I

    invoke-static {v2}, Lcom/dualboot/engine/EngineInterface;->GetNeedsReload(I)Z

    move-result v2

    if-eqz v2, :cond_7

    monitor-enter p0

    const/4 v2, 0x1

    :try_start_2
    move-object/from16 v0, p0

    iput-boolean v2, v0, Lcom/dualboot/c/g;->F:Z

    monitor-exit p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    :cond_7
    invoke-direct/range {p0 .. p0}, Lcom/dualboot/c/g;->c()Z

    move-object/from16 v0, p0

    iget-object v2, v0, Lcom/dualboot/c/g;->g:Ljavax/microedition/khronos/egl/EGL10;

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/c/g;->h:Ljavax/microedition/khronos/egl/EGLDisplay;

    move-object/from16 v0, p0

    iget-object v4, v0, Lcom/dualboot/c/g;->i:Ljavax/microedition/khronos/egl/EGLSurface;

    invoke-interface {v2, v3, v4}, Ljavax/microedition/khronos/egl/EGL10;->eglSwapBuffers(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLSurface;)Z

    move-result v2

    if-nez v2, :cond_8

    invoke-direct/range {p0 .. p0}, Lcom/dualboot/c/g;->c()Z

    :cond_8
    if-eqz v21, :cond_10

    move-object/from16 v0, p0

    iget-wide v2, v0, Lcom/dualboot/c/g;->y:J

    invoke-static {v2, v3}, Lcom/dualboot/engine/EngineInterface;->Sleep(J)Z

    :goto_6
    invoke-direct/range {p0 .. p0}, Lcom/dualboot/c/g;->f()V

    move-wide v2, v13

    goto/16 :goto_0

    :catchall_0
    move-exception v2

    monitor-exit p0

    throw v2

    :cond_9
    const/4 v2, 0x0

    goto/16 :goto_1

    :cond_a
    const/4 v2, 0x0

    goto/16 :goto_3

    :catchall_1
    move-exception v2

    monitor-exit p0

    throw v2

    :cond_b
    sub-long v4, v13, v9

    const-wide/16 v8, 0xfa

    sub-long/2addr v4, v8

    const-wide/16 v8, 0x3a98

    cmp-long v8, v4, v8

    if-gtz v8, :cond_6

    const-wide/16 v2, 0x0

    cmp-long v2, v4, v2

    if-ltz v2, :cond_c

    const-wide/16 v2, 0x3a98

    rem-long v2, v4, v2

    long-to-double v2, v2

    const-wide v4, 0x3f1179ec9cbd821eL    # 6.666666666666667E-5

    mul-double/2addr v2, v4

    const-wide/high16 v4, 0x4000000000000000L    # 2.0

    mul-double/2addr v2, v4

    const-wide v4, 0x400921fb54442d18L    # Math.PI

    mul-double/2addr v2, v4

    invoke-static {v2, v3}, Ljava/lang/Math;->sin(D)D

    move-result-wide v2

    const-wide/high16 v4, 0x3fe0000000000000L    # 0.5

    mul-double/2addr v2, v4

    const-wide/high16 v4, 0x3fe0000000000000L    # 0.5

    add-double/2addr v2, v4

    goto/16 :goto_5

    :cond_c
    const-wide/high16 v2, 0x3fe0000000000000L    # 0.5

    const-wide/high16 v4, 0x3fe0000000000000L    # 0.5

    move-object/from16 v0, p0

    iput-wide v4, v0, Lcom/dualboot/c/g;->s:D

    goto/16 :goto_5

    :cond_d
    sget-object v5, Lcom/dualboot/c/i;->b:Lcom/dualboot/c/i;

    if-ne v4, v5, :cond_e

    move-object/from16 v0, p0

    iget-wide v2, v0, Lcom/dualboot/c/g;->v:J

    rem-long v2, v13, v2

    long-to-double v2, v2

    move-object/from16 v0, p0

    iget-wide v4, v0, Lcom/dualboot/c/g;->w:D

    mul-double/2addr v2, v4

    const-wide/high16 v4, 0x4000000000000000L    # 2.0

    mul-double/2addr v2, v4

    const-wide v4, 0x400921fb54442d18L    # Math.PI

    mul-double/2addr v2, v4

    invoke-static {v2, v3}, Ljava/lang/Math;->cos(D)D

    move-result-wide v2

    const-wide/high16 v4, 0x3fe0000000000000L    # 0.5

    mul-double/2addr v2, v4

    const-wide/high16 v4, 0x3fe0000000000000L    # 0.5

    add-double/2addr v2, v4

    move-object/from16 v0, p0

    iput-wide v2, v0, Lcom/dualboot/c/g;->s:D

    goto/16 :goto_5

    :cond_e
    sget-object v5, Lcom/dualboot/c/i;->a:Lcom/dualboot/c/i;

    if-ne v4, v5, :cond_f

    move-wide v2, v15

    goto/16 :goto_5

    :cond_f
    sget-object v5, Lcom/dualboot/c/i;->c:Lcom/dualboot/c/i;

    if-ne v4, v5, :cond_6

    move-wide/from16 v2, v17

    goto/16 :goto_5

    :catchall_2
    move-exception v2

    monitor-exit p0

    throw v2

    :cond_10
    const-wide/16 v2, 0x22

    invoke-static {v2, v3}, Lcom/dualboot/engine/EngineInterface;->Sleep(J)Z

    goto/16 :goto_6

    :cond_11
    move v2, v3

    move v8, v4

    move v9, v5

    goto/16 :goto_2

    :cond_12
    move v8, v4

    move v9, v5

    goto/16 :goto_4
.end method
