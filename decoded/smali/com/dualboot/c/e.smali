.class final Lcom/dualboot/c/e;
.super Landroid/view/GestureDetector$SimpleOnGestureListener;


# instance fields
.field final synthetic a:Lcom/dualboot/c/c;


# direct methods
.method constructor <init>(Lcom/dualboot/c/c;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/c/e;->a:Lcom/dualboot/c/c;

    invoke-direct {p0}, Landroid/view/GestureDetector$SimpleOnGestureListener;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDown(Landroid/view/MotionEvent;)Z
    .locals 5

    iget-object v0, p0, Lcom/dualboot/c/e;->a:Lcom/dualboot/c/c;

    iget-object v0, v0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/c/e;->a:Lcom/dualboot/c/c;

    iget-object v0, v0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v1

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v2

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getEventTime()J

    move-result-wide v3

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/dualboot/c/g;->a(FFJ)V

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public final onScroll(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z
    .locals 4

    const/4 v3, 0x0

    iget-object v0, p0, Lcom/dualboot/c/e;->a:Lcom/dualboot/c/c;

    iget v0, v0, Lcom/dualboot/c/c;->c:I

    int-to-float v0, v0

    const/high16 v1, 0x40400000    # 3.0f

    mul-float/2addr v0, v1

    cmpl-float v1, v0, v3

    if-lez v1, :cond_0

    iget-object v1, p0, Lcom/dualboot/c/e;->a:Lcom/dualboot/c/c;

    iget v2, v1, Lcom/dualboot/c/c;->h:F

    div-float v0, p3, v0

    add-float/2addr v0, v2

    iput v0, v1, Lcom/dualboot/c/c;->h:F

    iget-object v0, p0, Lcom/dualboot/c/e;->a:Lcom/dualboot/c/c;

    iget-object v1, p0, Lcom/dualboot/c/e;->a:Lcom/dualboot/c/c;

    iget v1, v1, Lcom/dualboot/c/c;->h:F

    invoke-static {v1, v3}, Ljava/lang/Math;->max(FF)F

    move-result v1

    iput v1, v0, Lcom/dualboot/c/c;->h:F

    iget-object v0, p0, Lcom/dualboot/c/e;->a:Lcom/dualboot/c/c;

    iget-object v1, p0, Lcom/dualboot/c/e;->a:Lcom/dualboot/c/c;

    iget v1, v1, Lcom/dualboot/c/c;->h:F

    const/high16 v2, 0x3f800000    # 1.0f

    invoke-static {v1, v2}, Ljava/lang/Math;->min(FF)F

    move-result v1

    iput v1, v0, Lcom/dualboot/c/c;->h:F

    :cond_0
    iget-object v0, p0, Lcom/dualboot/c/e;->a:Lcom/dualboot/c/c;

    iget-object v0, v0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/c/e;->a:Lcom/dualboot/c/c;

    iget-object v0, v0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    iget-object v1, p0, Lcom/dualboot/c/e;->a:Lcom/dualboot/c/c;

    iget v1, v1, Lcom/dualboot/c/c;->h:F

    invoke-virtual {v0, v1}, Lcom/dualboot/c/g;->b(F)V

    :cond_1
    const/4 v0, 0x1

    return v0
.end method
