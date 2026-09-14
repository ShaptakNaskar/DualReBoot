.class public final Lcom/dualboot/c/f;
.super Landroid/view/TextureView;

# interfaces
.implements Landroid/view/TextureView$SurfaceTextureListener;


# annotations
.annotation build Landroid/annotation/TargetApi;
    value = 0xe
.end annotation


# instance fields
.field protected a:Lcom/dualboot/c/c;

.field private final b:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    const/4 v2, 0x0

    const/4 v0, 0x1

    invoke-direct {p0, p1}, Landroid/view/TextureView;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lcom/dualboot/c/f;->a:Lcom/dualboot/c/c;

    iget-boolean v1, p0, Lcom/dualboot/c/f;->b:Z

    if-eqz v1, :cond_0

    :goto_0
    iput-boolean v0, p0, Lcom/dualboot/c/f;->b:Z

    return-void

    :cond_0
    if-eqz p1, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    :cond_1
    iput-object v2, p0, Lcom/dualboot/c/f;->a:Lcom/dualboot/c/c;

    const/4 v0, 0x0

    goto :goto_0

    :cond_2
    new-instance v1, Lcom/dualboot/c/c;

    invoke-direct {v1, p1, p2, p3}, Lcom/dualboot/c/c;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/dualboot/c/f;->a:Lcom/dualboot/c/c;

    invoke-virtual {p0, p0}, Lcom/dualboot/c/f;->setSurfaceTextureListener(Landroid/view/TextureView$SurfaceTextureListener;)V

    goto :goto_0
.end method


# virtual methods
.method public final a(Lcom/dualboot/c/d;)V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/c/f;->a:Lcom/dualboot/c/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/c/f;->a:Lcom/dualboot/c/c;

    if-eqz p1, :cond_0

    new-instance v1, Lcom/dualboot/c/d;

    invoke-direct {v1, p1}, Lcom/dualboot/c/d;-><init>(Lcom/dualboot/c/d;)V

    iput-object v1, v0, Lcom/dualboot/c/c;->k:Lcom/dualboot/c/d;

    invoke-virtual {v0}, Lcom/dualboot/c/c;->a()V

    :cond_0
    return-void
.end method

.method public final onSurfaceTextureAvailable(Landroid/graphics/SurfaceTexture;II)V
    .locals 4

    iget-object v0, p0, Lcom/dualboot/c/f;->a:Lcom/dualboot/c/c;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/c/f;->a:Lcom/dualboot/c/c;

    iget-object v1, v0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    if-nez v1, :cond_0

    iget-object v1, v0, Lcom/dualboot/c/c;->a:Landroid/content/Context;

    iget-object v2, v0, Lcom/dualboot/c/c;->e:Ljava/lang/String;

    iget-object v3, v0, Lcom/dualboot/c/c;->f:Ljava/lang/String;

    invoke-static {v1, v2, v3}, Lcom/dualboot/c/g;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Lcom/dualboot/c/g;

    move-result-object v1

    iput-object v1, v0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    :cond_0
    invoke-virtual {p0, p1, p2, p3}, Lcom/dualboot/c/f;->onSurfaceTextureSizeChanged(Landroid/graphics/SurfaceTexture;II)V

    :cond_1
    return-void
.end method

.method public final onSurfaceTextureDestroyed(Landroid/graphics/SurfaceTexture;)Z
    .locals 2

    iget-object v0, p0, Lcom/dualboot/c/f;->a:Lcom/dualboot/c/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/c/f;->a:Lcom/dualboot/c/c;

    iget-object v1, v0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    if-eqz v1, :cond_0

    iget-object v1, v0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    invoke-virtual {v1}, Lcom/dualboot/c/g;->b()V

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public final onSurfaceTextureSizeChanged(Landroid/graphics/SurfaceTexture;II)V
    .locals 5

    iget-object v0, p0, Lcom/dualboot/c/f;->a:Lcom/dualboot/c/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/c/f;->a:Lcom/dualboot/c/c;

    iget-object v1, v0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    if-eqz v1, :cond_0

    const/4 v1, -0x1

    iput v1, v0, Lcom/dualboot/c/c;->b:I

    iput p2, v0, Lcom/dualboot/c/c;->c:I

    iput p3, v0, Lcom/dualboot/c/c;->d:I

    iget-object v1, v0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    iget v2, v0, Lcom/dualboot/c/c;->b:I

    iget v3, v0, Lcom/dualboot/c/c;->c:I

    iget v4, v0, Lcom/dualboot/c/c;->d:I

    invoke-virtual {v1, p1, v2, v3, v4}, Lcom/dualboot/c/g;->a(Ljava/lang/Object;III)V

    invoke-virtual {v0}, Lcom/dualboot/c/c;->a()V

    :cond_0
    return-void
.end method

.method public final onSurfaceTextureUpdated(Landroid/graphics/SurfaceTexture;)V
    .locals 0

    return-void
.end method

.method public final onTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 3

    const/4 v0, 0x1

    iget-object v1, p0, Lcom/dualboot/c/f;->a:Lcom/dualboot/c/c;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/dualboot/c/f;->a:Lcom/dualboot/c/c;

    iget-object v2, v1, Lcom/dualboot/c/c;->k:Lcom/dualboot/c/d;

    iget-boolean v2, v2, Lcom/dualboot/c/d;->d:Z

    if-eqz v2, :cond_0

    iget-object v1, v1, Lcom/dualboot/c/c;->g:Landroid/view/GestureDetector;

    invoke-virtual {v1, p1}, Landroid/view/GestureDetector;->onTouchEvent(Landroid/view/MotionEvent;)Z

    move-result v1

    if-eqz v1, :cond_0

    move v1, v0

    :goto_0
    if-eqz v1, :cond_1

    :goto_1
    return v0

    :cond_0
    const/4 v1, 0x0

    goto :goto_0

    :cond_1
    invoke-super {p0, p1}, Landroid/view/TextureView;->onTouchEvent(Landroid/view/MotionEvent;)Z

    move-result v0

    goto :goto_1
.end method

.method public final onWindowFocusChanged(Z)V
    .locals 2

    invoke-super {p0, p1}, Landroid/view/TextureView;->onWindowFocusChanged(Z)V

    iget-object v0, p0, Lcom/dualboot/c/f;->a:Lcom/dualboot/c/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/c/f;->a:Lcom/dualboot/c/c;

    iput-boolean p1, v0, Lcom/dualboot/c/c;->j:Z

    iget-object v1, v0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    if-eqz v1, :cond_0

    iget-object v1, v0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    iget-boolean v0, v0, Lcom/dualboot/c/c;->j:Z

    invoke-virtual {v1, v0}, Lcom/dualboot/c/g;->a(Z)V

    :cond_0
    return-void
.end method
