.class public final Lcom/dualboot/c/a;
.super Ljava/lang/Object;


# static fields
.field private static synthetic p:[I


# instance fields
.field a:I

.field private b:I

.field private c:I

.field private d:I

.field private e:I

.field private f:I

.field private g:I

.field private h:Lcom/dualboot/c/b;

.field private i:I

.field private j:I

.field private k:I

.field private l:I

.field private m:I

.field private n:I

.field private final o:[I


# direct methods
.method public constructor <init>(IIIIILcom/dualboot/c/b;)V
    .locals 3

    const/4 v0, 0x4

    const/4 v2, 0x0

    const/4 v1, -0x1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput v0, p0, Lcom/dualboot/c/a;->b:I

    iput v0, p0, Lcom/dualboot/c/a;->c:I

    iput v0, p0, Lcom/dualboot/c/a;->d:I

    iput v2, p0, Lcom/dualboot/c/a;->e:I

    iput v2, p0, Lcom/dualboot/c/a;->f:I

    iput v2, p0, Lcom/dualboot/c/a;->g:I

    sget-object v0, Lcom/dualboot/c/b;->b:Lcom/dualboot/c/b;

    iput-object v0, p0, Lcom/dualboot/c/a;->h:Lcom/dualboot/c/b;

    iput v1, p0, Lcom/dualboot/c/a;->i:I

    iput v1, p0, Lcom/dualboot/c/a;->j:I

    iput v1, p0, Lcom/dualboot/c/a;->k:I

    iput v1, p0, Lcom/dualboot/c/a;->l:I

    iput v1, p0, Lcom/dualboot/c/a;->m:I

    iput v1, p0, Lcom/dualboot/c/a;->n:I

    iput v1, p0, Lcom/dualboot/c/a;->a:I

    iget v0, p0, Lcom/dualboot/c/a;->b:I

    invoke-static {p1, v0}, Ljava/lang/Math;->max(II)I

    move-result v0

    iput v0, p0, Lcom/dualboot/c/a;->b:I

    iget v0, p0, Lcom/dualboot/c/a;->c:I

    invoke-static {p2, v0}, Ljava/lang/Math;->max(II)I

    move-result v0

    iput v0, p0, Lcom/dualboot/c/a;->c:I

    iget v0, p0, Lcom/dualboot/c/a;->d:I

    invoke-static {p3, v0}, Ljava/lang/Math;->max(II)I

    move-result v0

    iput v0, p0, Lcom/dualboot/c/a;->d:I

    iget v0, p0, Lcom/dualboot/c/a;->e:I

    invoke-static {p4, v0}, Ljava/lang/Math;->max(II)I

    move-result v0

    iput v0, p0, Lcom/dualboot/c/a;->e:I

    iget v0, p0, Lcom/dualboot/c/a;->f:I

    invoke-static {p5, v0}, Ljava/lang/Math;->max(II)I

    move-result v0

    iput v0, p0, Lcom/dualboot/c/a;->f:I

    iget v0, p0, Lcom/dualboot/c/a;->g:I

    invoke-static {v2, v0}, Ljava/lang/Math;->max(II)I

    move-result v0

    iput v0, p0, Lcom/dualboot/c/a;->g:I

    iput-object p6, p0, Lcom/dualboot/c/a;->h:Lcom/dualboot/c/b;

    const/4 v0, 0x1

    new-array v0, v0, [I

    iput-object v0, p0, Lcom/dualboot/c/a;->o:[I

    return-void
.end method

.method private a(ILjavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;)I
    .locals 2

    const/4 v0, 0x0

    iget-object v1, p0, Lcom/dualboot/c/a;->o:[I

    invoke-interface {p2, p3, p4, p1, v1}, Ljavax/microedition/khronos/egl/EGL10;->eglGetConfigAttrib(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;I[I)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/dualboot/c/a;->o:[I

    aget v0, v1, v0

    :cond_0
    return v0
.end method

.method private static synthetic a()[I
    .locals 3

    sget-object v0, Lcom/dualboot/c/a;->p:[I

    if-eqz v0, :cond_0

    :goto_0
    return-object v0

    :cond_0
    invoke-static {}, Lcom/dualboot/c/b;->values()[Lcom/dualboot/c/b;

    move-result-object v0

    array-length v0, v0

    new-array v0, v0, [I

    :try_start_0
    sget-object v1, Lcom/dualboot/c/b;->b:Lcom/dualboot/c/b;

    invoke-virtual {v1}, Lcom/dualboot/c/b;->ordinal()I

    move-result v1

    const/4 v2, 0x2

    aput v2, v0, v1
    :try_end_0
    .catch Ljava/lang/NoSuchFieldError; {:try_start_0 .. :try_end_0} :catch_2

    :goto_1
    :try_start_1
    sget-object v1, Lcom/dualboot/c/b;->c:Lcom/dualboot/c/b;

    invoke-virtual {v1}, Lcom/dualboot/c/b;->ordinal()I

    move-result v1

    const/4 v2, 0x3

    aput v2, v0, v1
    :try_end_1
    .catch Ljava/lang/NoSuchFieldError; {:try_start_1 .. :try_end_1} :catch_1

    :goto_2
    :try_start_2
    sget-object v1, Lcom/dualboot/c/b;->a:Lcom/dualboot/c/b;

    invoke-virtual {v1}, Lcom/dualboot/c/b;->ordinal()I

    move-result v1

    const/4 v2, 0x1

    aput v2, v0, v1
    :try_end_2
    .catch Ljava/lang/NoSuchFieldError; {:try_start_2 .. :try_end_2} :catch_0

    :goto_3
    sput-object v0, Lcom/dualboot/c/a;->p:[I

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
.method public final a(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;)Ljavax/microedition/khronos/egl/EGLConfig;
    .locals 11

    const/4 v6, 0x0

    const/4 v0, 0x1

    invoke-static {}, Lcom/dualboot/c/a;->a()[I

    move-result-object v1

    iget-object v2, p0, Lcom/dualboot/c/a;->h:Lcom/dualboot/c/b;

    invoke-virtual {v2}, Lcom/dualboot/c/b;->ordinal()I

    move-result v2

    aget v1, v1, v2

    packed-switch v1, :pswitch_data_0

    :goto_0
    const/16 v1, 0xf

    new-array v2, v1, [I

    const/4 v1, 0x0

    const/16 v3, 0x3024

    aput v3, v2, v1

    const/4 v1, 0x1

    iget v3, p0, Lcom/dualboot/c/a;->b:I

    aput v3, v2, v1

    const/4 v1, 0x2

    const/16 v3, 0x3023

    aput v3, v2, v1

    const/4 v1, 0x3

    iget v3, p0, Lcom/dualboot/c/a;->c:I

    aput v3, v2, v1

    const/4 v1, 0x4

    const/16 v3, 0x3022

    aput v3, v2, v1

    const/4 v1, 0x5

    iget v3, p0, Lcom/dualboot/c/a;->d:I

    aput v3, v2, v1

    const/4 v1, 0x6

    const/16 v3, 0x3021

    aput v3, v2, v1

    const/4 v1, 0x7

    iget v3, p0, Lcom/dualboot/c/a;->e:I

    aput v3, v2, v1

    const/16 v1, 0x8

    const/16 v3, 0x3025

    aput v3, v2, v1

    const/16 v1, 0x9

    iget v3, p0, Lcom/dualboot/c/a;->f:I

    aput v3, v2, v1

    const/16 v1, 0xa

    const/16 v3, 0x3026

    aput v3, v2, v1

    const/16 v1, 0xb

    iget v3, p0, Lcom/dualboot/c/a;->g:I

    aput v3, v2, v1

    const/16 v1, 0xc

    const/16 v3, 0x3040

    aput v3, v2, v1

    const/16 v1, 0xd

    aput v0, v2, v1

    const/16 v0, 0xe

    const/16 v1, 0x3038

    aput v1, v2, v0

    const/4 v0, 0x1

    new-array v5, v0, [I

    const/4 v3, 0x0

    const/4 v4, 0x0

    move-object v0, p1

    move-object v1, p2

    invoke-interface/range {v0 .. v5}, Ljavax/microedition/khronos/egl/EGL10;->eglChooseConfig(Ljavax/microedition/khronos/egl/EGLDisplay;[I[Ljavax/microedition/khronos/egl/EGLConfig;I[I)Z

    const/4 v0, 0x0

    aget v4, v5, v0

    if-lez v4, :cond_2

    new-array v3, v4, [Ljavax/microedition/khronos/egl/EGLConfig;

    move-object v0, p1

    move-object v1, p2

    invoke-interface/range {v0 .. v5}, Ljavax/microedition/khronos/egl/EGL10;->eglChooseConfig(Ljavax/microedition/khronos/egl/EGLDisplay;[I[Ljavax/microedition/khronos/egl/EGLConfig;I[I)Z

    const/4 v4, 0x0

    const v1, 0x7fffffff

    array-length v6, v3

    const/4 v0, 0x0

    move v5, v0

    :goto_1
    if-lt v5, v6, :cond_0

    const/16 v0, 0x3024

    invoke-direct {p0, v0, p1, p2, v4}, Lcom/dualboot/c/a;->a(ILjavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;)I

    move-result v0

    iput v0, p0, Lcom/dualboot/c/a;->i:I

    const/16 v0, 0x3023

    invoke-direct {p0, v0, p1, p2, v4}, Lcom/dualboot/c/a;->a(ILjavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;)I

    move-result v0

    iput v0, p0, Lcom/dualboot/c/a;->j:I

    const/16 v0, 0x3022

    invoke-direct {p0, v0, p1, p2, v4}, Lcom/dualboot/c/a;->a(ILjavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;)I

    move-result v0

    iput v0, p0, Lcom/dualboot/c/a;->k:I

    const/16 v0, 0x3021

    invoke-direct {p0, v0, p1, p2, v4}, Lcom/dualboot/c/a;->a(ILjavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;)I

    move-result v0

    iput v0, p0, Lcom/dualboot/c/a;->l:I

    const/16 v0, 0x3025

    invoke-direct {p0, v0, p1, p2, v4}, Lcom/dualboot/c/a;->a(ILjavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;)I

    move-result v0

    iput v0, p0, Lcom/dualboot/c/a;->m:I

    const/16 v0, 0x3026

    invoke-direct {p0, v0, p1, p2, v4}, Lcom/dualboot/c/a;->a(ILjavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;)I

    move-result v0

    iput v0, p0, Lcom/dualboot/c/a;->n:I

    const/16 v0, 0x3040

    invoke-direct {p0, v0, p1, p2, v4}, Lcom/dualboot/c/a;->a(ILjavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;)I

    move-result v0

    iput v0, p0, Lcom/dualboot/c/a;->a:I

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "   Red     = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/dualboot/c/a;->i:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "   Green   = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/dualboot/c/a;->j:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "   Blue    = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/dualboot/c/a;->k:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "   Alpha   = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/dualboot/c/a;->l:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "   Depth   = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/dualboot/c/a;->m:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "   Stencil = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/dualboot/c/a;->n:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "   Version = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/dualboot/c/a;->a:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    :goto_2
    return-object v4

    :pswitch_0
    const/4 v0, 0x4

    goto/16 :goto_0

    :pswitch_1
    const/4 v0, 0x1

    goto/16 :goto_0

    :cond_0
    aget-object v2, v3, v5

    const/16 v0, 0x3025

    invoke-direct {p0, v0, p1, p2, v2}, Lcom/dualboot/c/a;->a(ILjavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;)I

    move-result v0

    const/16 v7, 0x3026

    invoke-direct {p0, v7, p1, p2, v2}, Lcom/dualboot/c/a;->a(ILjavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;)I

    move-result v7

    iget v8, p0, Lcom/dualboot/c/a;->f:I

    if-lt v0, v8, :cond_1

    iget v0, p0, Lcom/dualboot/c/a;->g:I

    if-lt v7, v0, :cond_1

    const/16 v0, 0x3024

    invoke-direct {p0, v0, p1, p2, v2}, Lcom/dualboot/c/a;->a(ILjavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;)I

    move-result v0

    const/16 v7, 0x3023

    invoke-direct {p0, v7, p1, p2, v2}, Lcom/dualboot/c/a;->a(ILjavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;)I

    move-result v7

    const/16 v8, 0x3022

    invoke-direct {p0, v8, p1, p2, v2}, Lcom/dualboot/c/a;->a(ILjavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;)I

    move-result v8

    const/16 v9, 0x3021

    invoke-direct {p0, v9, p1, p2, v2}, Lcom/dualboot/c/a;->a(ILjavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;)I

    move-result v9

    iget v10, p0, Lcom/dualboot/c/a;->b:I

    sub-int/2addr v0, v10

    invoke-static {v0}, Ljava/lang/Math;->abs(I)I

    move-result v0

    iget v10, p0, Lcom/dualboot/c/a;->c:I

    sub-int/2addr v7, v10

    invoke-static {v7}, Ljava/lang/Math;->abs(I)I

    move-result v7

    iget v10, p0, Lcom/dualboot/c/a;->d:I

    sub-int/2addr v8, v10

    invoke-static {v8}, Ljava/lang/Math;->abs(I)I

    move-result v8

    iget v10, p0, Lcom/dualboot/c/a;->e:I

    sub-int/2addr v9, v10

    invoke-static {v9}, Ljava/lang/Math;->abs(I)I

    move-result v9

    add-int/2addr v0, v7

    add-int/2addr v0, v8

    add-int/2addr v0, v9

    if-ge v0, v1, :cond_1

    move-object v1, v2

    :goto_3
    add-int/lit8 v2, v5, 0x1

    move v5, v2

    move-object v4, v1

    move v1, v0

    goto/16 :goto_1

    :cond_1
    move v0, v1

    move-object v1, v4

    goto :goto_3

    :cond_2
    move-object v4, v6

    goto :goto_2

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_1
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
