.class public abstract Lcom/dualboot/util/b;
.super Ljava/lang/Object;


# instance fields
.field private final a:F

.field private final b:F

.field private final c:F

.field private final d:F

.field private final e:F

.field private final f:F

.field private final g:F

.field private final h:F

.field private final i:F

.field private final j:J

.field private final k:J

.field private final l:Lcom/dualboot/util/d;

.field private m:J

.field private n:Lcom/dualboot/util/c;

.field private o:Lcom/dualboot/util/c;

.field private p:Lcom/dualboot/util/c;

.field private q:Lcom/dualboot/util/e;

.field private r:Z

.field private s:Z

.field private t:Z

.field private u:I

.field private v:Landroid/view/VelocityTracker;

.field private final w:Lcom/dualboot/util/f;

.field private final x:Lcom/dualboot/util/f;


# direct methods
.method public constructor <init>(Landroid/content/Context;J)V
    .locals 4

    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    iput-object v1, p0, Lcom/dualboot/util/b;->o:Lcom/dualboot/util/c;

    iput-object v1, p0, Lcom/dualboot/util/b;->p:Lcom/dualboot/util/c;

    iput-object v1, p0, Lcom/dualboot/util/b;->q:Lcom/dualboot/util/e;

    iput-boolean v0, p0, Lcom/dualboot/util/b;->r:Z

    iput-boolean v0, p0, Lcom/dualboot/util/b;->s:Z

    iput-boolean v0, p0, Lcom/dualboot/util/b;->t:Z

    const/4 v0, -0x1

    iput v0, p0, Lcom/dualboot/util/b;->u:I

    iput-object v1, p0, Lcom/dualboot/util/b;->v:Landroid/view/VelocityTracker;

    new-instance v0, Lcom/dualboot/util/f;

    invoke-direct {v0}, Lcom/dualboot/util/f;-><init>()V

    iput-object v0, p0, Lcom/dualboot/util/b;->w:Lcom/dualboot/util/f;

    new-instance v0, Lcom/dualboot/util/f;

    invoke-direct {v0}, Lcom/dualboot/util/f;-><init>()V

    iput-object v0, p0, Lcom/dualboot/util/b;->x:Lcom/dualboot/util/f;

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v1, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-float v1, v1

    iput v1, p0, Lcom/dualboot/util/b;->a:F

    invoke-static {p1}, Landroid/view/ViewConfiguration;->get(Landroid/content/Context;)Landroid/view/ViewConfiguration;

    move-result-object v1

    invoke-static {}, Landroid/view/ViewConfiguration;->getTapTimeout()I

    move-result v2

    int-to-long v2, v2

    iput-wide v2, p0, Lcom/dualboot/util/b;->j:J

    invoke-static {}, Landroid/view/ViewConfiguration;->getDoubleTapTimeout()I

    move-result v2

    int-to-long v2, v2

    iput-wide v2, p0, Lcom/dualboot/util/b;->k:J

    invoke-virtual {v1}, Landroid/view/ViewConfiguration;->getScaledTouchSlop()I

    move-result v2

    int-to-float v2, v2

    iput v2, p0, Lcom/dualboot/util/b;->b:F

    invoke-virtual {v1}, Landroid/view/ViewConfiguration;->getScaledPagingTouchSlop()I

    move-result v2

    int-to-float v2, v2

    iput v2, p0, Lcom/dualboot/util/b;->d:F

    invoke-virtual {v1}, Landroid/view/ViewConfiguration;->getScaledDoubleTapSlop()I

    move-result v2

    int-to-float v2, v2

    iput v2, p0, Lcom/dualboot/util/b;->e:F

    iget v2, p0, Lcom/dualboot/util/b;->b:F

    iget v3, p0, Lcom/dualboot/util/b;->b:F

    mul-float/2addr v2, v3

    iput v2, p0, Lcom/dualboot/util/b;->c:F

    iget v2, p0, Lcom/dualboot/util/b;->e:F

    iget v3, p0, Lcom/dualboot/util/b;->e:F

    mul-float/2addr v2, v3

    iput v2, p0, Lcom/dualboot/util/b;->f:F

    const/high16 v2, 0x41c80000    # 25.0f

    iput v2, p0, Lcom/dualboot/util/b;->g:F

    const/high16 v2, 0x43fa0000    # 500.0f

    iget v0, v0, Landroid/util/DisplayMetrics;->density:F

    mul-float/2addr v0, v2

    iput v0, p0, Lcom/dualboot/util/b;->h:F

    invoke-virtual {v1}, Landroid/view/ViewConfiguration;->getScaledMaximumFlingVelocity()I

    move-result v0

    int-to-float v0, v0

    iput v0, p0, Lcom/dualboot/util/b;->i:F

    new-instance v0, Lcom/dualboot/util/d;

    iget v1, p0, Lcom/dualboot/util/b;->a:F

    float-to-double v1, v1

    invoke-direct {v0, v1, v2, p2, p3}, Lcom/dualboot/util/d;-><init>(DJ)V

    iput-object v0, p0, Lcom/dualboot/util/b;->l:Lcom/dualboot/util/d;

    invoke-direct {p0}, Lcom/dualboot/util/b;->c()V

    return-void
.end method

.method private a(ILcom/dualboot/util/c;)V
    .locals 12

    const/16 v4, 0x8

    const/4 v3, 0x4

    const/4 v0, 0x1

    const/4 v11, 0x0

    const/4 v1, 0x0

    packed-switch p1, :pswitch_data_0

    :goto_0
    return-void

    :pswitch_0
    iget-object v0, p0, Lcom/dualboot/util/b;->w:Lcom/dualboot/util/f;

    invoke-virtual {v0}, Lcom/dualboot/util/f;->a()V

    iget-object v0, p0, Lcom/dualboot/util/b;->l:Lcom/dualboot/util/d;

    invoke-virtual {v0}, Lcom/dualboot/util/d;->a()V

    iput-object v11, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    iput-object v11, p0, Lcom/dualboot/util/b;->o:Lcom/dualboot/util/c;

    iput-object v11, p0, Lcom/dualboot/util/b;->p:Lcom/dualboot/util/c;

    iput-object v11, p0, Lcom/dualboot/util/b;->q:Lcom/dualboot/util/e;

    iput-boolean v1, p0, Lcom/dualboot/util/b;->r:Z

    iput-boolean v1, p0, Lcom/dualboot/util/b;->s:Z

    iput-boolean v1, p0, Lcom/dualboot/util/b;->t:Z

    invoke-direct {p0}, Lcom/dualboot/util/b;->d()V

    goto :goto_0

    :pswitch_1
    new-instance v2, Lcom/dualboot/util/c;

    invoke-direct {v2, p2}, Lcom/dualboot/util/c;-><init>(Lcom/dualboot/util/c;)V

    iput-object v2, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    iget-object v2, p0, Lcom/dualboot/util/b;->q:Lcom/dualboot/util/e;

    iget-object v3, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    if-nez v2, :cond_2

    move v0, v1

    :cond_0
    :goto_1
    iput-boolean v0, p0, Lcom/dualboot/util/b;->t:Z

    iget-boolean v0, p0, Lcom/dualboot/util/b;->t:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    iget-object v0, v0, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    iget v0, v0, Lcom/dualboot/util/f;->a:F

    iget-object v0, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    iget-object v0, v0, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    iget v0, v0, Lcom/dualboot/util/f;->b:F

    iget-object v0, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    iget-wide v2, v0, Lcom/dualboot/util/c;->b:J

    invoke-virtual {p0}, Lcom/dualboot/util/b;->a()V

    :cond_1
    iget-object v0, p0, Lcom/dualboot/util/b;->w:Lcom/dualboot/util/f;

    invoke-virtual {v0}, Lcom/dualboot/util/f;->a()V

    iget-object v0, p0, Lcom/dualboot/util/b;->l:Lcom/dualboot/util/d;

    invoke-virtual {v0}, Lcom/dualboot/util/d;->a()V

    iput-object v11, p0, Lcom/dualboot/util/b;->o:Lcom/dualboot/util/c;

    iput-object v11, p0, Lcom/dualboot/util/b;->p:Lcom/dualboot/util/c;

    iput-object v11, p0, Lcom/dualboot/util/b;->q:Lcom/dualboot/util/e;

    iput-boolean v1, p0, Lcom/dualboot/util/b;->r:Z

    iput-boolean v1, p0, Lcom/dualboot/util/b;->s:Z

    iget-object v0, p0, Lcom/dualboot/util/b;->l:Lcom/dualboot/util/d;

    iget-wide v1, p0, Lcom/dualboot/util/b;->m:J

    invoke-virtual {v0, v1, v2}, Lcom/dualboot/util/d;->a(J)V

    goto :goto_0

    :cond_2
    iget-wide v4, v3, Lcom/dualboot/util/c;->b:J

    iget-object v6, v2, Lcom/dualboot/util/e;->b:Lcom/dualboot/util/c;

    iget-wide v6, v6, Lcom/dualboot/util/c;->b:J

    sub-long/2addr v4, v6

    iget-wide v6, p0, Lcom/dualboot/util/b;->k:J

    cmp-long v4, v4, v6

    if-lez v4, :cond_3

    move v0, v1

    goto :goto_1

    :cond_3
    iget-object v2, v2, Lcom/dualboot/util/e;->a:Lcom/dualboot/util/c;

    iget-object v2, v2, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    iget-object v3, v3, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    invoke-static {v2, v3}, Lcom/dualboot/util/f;->a(Lcom/dualboot/util/f;Lcom/dualboot/util/f;)F

    move-result v2

    iget v3, p0, Lcom/dualboot/util/b;->f:F

    cmpl-float v2, v2, v3

    if-lez v2, :cond_0

    move v0, v1

    goto :goto_1

    :pswitch_2
    invoke-direct {p0, p2}, Lcom/dualboot/util/b;->a(Lcom/dualboot/util/c;)V

    goto/16 :goto_0

    :pswitch_3
    invoke-direct {p0}, Lcom/dualboot/util/b;->d()V

    iget-object v2, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    if-eqz v2, :cond_4

    new-instance v2, Lcom/dualboot/util/c;

    invoke-direct {v2, p2}, Lcom/dualboot/util/c;-><init>(Lcom/dualboot/util/c;)V

    iput-object v2, p0, Lcom/dualboot/util/b;->p:Lcom/dualboot/util/c;

    iget-object v2, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    iget-object v5, p0, Lcom/dualboot/util/b;->p:Lcom/dualboot/util/c;

    iget-wide v6, v5, Lcom/dualboot/util/c;->b:J

    iget-wide v8, v2, Lcom/dualboot/util/c;->b:J

    sub-long/2addr v6, v8

    iget-wide v8, p0, Lcom/dualboot/util/b;->j:J

    cmp-long v6, v6, v8

    if-lez v6, :cond_5

    move v2, v1

    :goto_2
    if-eqz v2, :cond_7

    iget-boolean v0, p0, Lcom/dualboot/util/b;->t:Z

    if-nez v0, :cond_4

    new-instance v0, Lcom/dualboot/util/e;

    iget-object v2, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    iget-object v3, p0, Lcom/dualboot/util/b;->p:Lcom/dualboot/util/c;

    invoke-direct {v0, v2, v3}, Lcom/dualboot/util/e;-><init>(Lcom/dualboot/util/c;Lcom/dualboot/util/c;)V

    iput-object v0, p0, Lcom/dualboot/util/b;->q:Lcom/dualboot/util/e;

    iget-object v0, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    iget-object v0, v0, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    iget v0, v0, Lcom/dualboot/util/f;->a:F

    iget-object v2, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    iget-object v2, v2, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    iget v2, v2, Lcom/dualboot/util/f;->b:F

    iget-object v3, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    iget-wide v3, v3, Lcom/dualboot/util/c;->b:J

    invoke-virtual {p0, v0, v2, v3, v4}, Lcom/dualboot/util/b;->a(FFJ)V

    :cond_4
    :goto_3
    iget-object v0, p0, Lcom/dualboot/util/b;->w:Lcom/dualboot/util/f;

    invoke-virtual {v0}, Lcom/dualboot/util/f;->a()V

    iget-object v0, p0, Lcom/dualboot/util/b;->l:Lcom/dualboot/util/d;

    invoke-virtual {v0}, Lcom/dualboot/util/d;->a()V

    iput-object v11, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    iput-object v11, p0, Lcom/dualboot/util/b;->o:Lcom/dualboot/util/c;

    iput-object v11, p0, Lcom/dualboot/util/b;->p:Lcom/dualboot/util/c;

    iput-boolean v1, p0, Lcom/dualboot/util/b;->r:Z

    iput-boolean v1, p0, Lcom/dualboot/util/b;->s:Z

    iput-boolean v1, p0, Lcom/dualboot/util/b;->t:Z

    goto/16 :goto_0

    :cond_5
    iget-object v5, v5, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    iget-object v2, v2, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    invoke-static {v5, v2}, Lcom/dualboot/util/f;->a(Lcom/dualboot/util/f;Lcom/dualboot/util/f;)F

    move-result v2

    iget v5, p0, Lcom/dualboot/util/b;->c:F

    cmpl-float v2, v2, v5

    if-lez v2, :cond_6

    move v2, v1

    goto :goto_2

    :cond_6
    move v2, v0

    goto :goto_2

    :cond_7
    invoke-direct {p0, p2}, Lcom/dualboot/util/b;->a(Lcom/dualboot/util/c;)V

    iget-object v2, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    iget-object v5, p0, Lcom/dualboot/util/b;->p:Lcom/dualboot/util/c;

    invoke-virtual {v5, v2}, Lcom/dualboot/util/c;->a(Lcom/dualboot/util/c;)Lcom/dualboot/util/f;

    move-result-object v2

    invoke-static {v2}, Lcom/dualboot/util/f;->a(Lcom/dualboot/util/f;)Lcom/dualboot/util/f;

    move-result-object v5

    iget-object v2, p0, Lcom/dualboot/util/b;->x:Lcom/dualboot/util/f;

    invoke-static {v2}, Lcom/dualboot/util/f;->a(Lcom/dualboot/util/f;)Lcom/dualboot/util/f;

    move-result-object v6

    iget-boolean v2, p0, Lcom/dualboot/util/b;->r:Z

    if-eqz v2, :cond_12

    iget-boolean v2, p0, Lcom/dualboot/util/b;->s:Z

    if-eqz v2, :cond_12

    iget v2, v6, Lcom/dualboot/util/f;->a:F

    iget v7, p0, Lcom/dualboot/util/b;->h:F

    cmpl-float v2, v2, v7

    if-lez v2, :cond_12

    iget-object v2, p0, Lcom/dualboot/util/b;->w:Lcom/dualboot/util/f;

    iget v2, v2, Lcom/dualboot/util/f;->a:F

    iget v7, p0, Lcom/dualboot/util/b;->g:F

    cmpl-float v2, v2, v7

    if-lez v2, :cond_12

    iget-object v2, p0, Lcom/dualboot/util/b;->x:Lcom/dualboot/util/f;

    iget v2, v2, Lcom/dualboot/util/f;->a:F

    const/4 v7, 0x0

    cmpl-float v2, v2, v7

    if-lez v2, :cond_a

    move v2, v3

    :goto_4
    iget v7, v6, Lcom/dualboot/util/f;->b:F

    iget v8, v6, Lcom/dualboot/util/f;->a:F

    const/high16 v9, 0x3fc00000    # 1.5f

    mul-float/2addr v8, v9

    cmpl-float v7, v7, v8

    if-lez v7, :cond_11

    iget v6, v6, Lcom/dualboot/util/f;->b:F

    iget v7, p0, Lcom/dualboot/util/b;->h:F

    cmpl-float v6, v6, v7

    if-lez v6, :cond_11

    iget-object v6, p0, Lcom/dualboot/util/b;->w:Lcom/dualboot/util/f;

    iget v6, v6, Lcom/dualboot/util/f;->b:F

    iget v7, p0, Lcom/dualboot/util/b;->g:F

    cmpl-float v6, v6, v7

    if-lez v6, :cond_11

    iget v5, v5, Lcom/dualboot/util/f;->b:F

    iget v6, p0, Lcom/dualboot/util/b;->d:F

    cmpl-float v5, v5, v6

    if-lez v5, :cond_11

    iget-object v5, p0, Lcom/dualboot/util/b;->x:Lcom/dualboot/util/f;

    iget v5, v5, Lcom/dualboot/util/f;->b:F

    const/4 v6, 0x0

    cmpl-float v5, v5, v6

    if-lez v5, :cond_b

    or-int/lit8 v2, v2, 0x2

    move v6, v2

    :goto_5
    and-int/lit8 v2, v6, 0xc

    if-lez v2, :cond_c

    move v5, v0

    :goto_6
    and-int/lit8 v2, v6, 0x3

    if-lez v2, :cond_d

    move v2, v0

    :goto_7
    if-eqz v5, :cond_8

    and-int/lit8 v7, v6, 0xc

    invoke-direct {p0, v7, v0}, Lcom/dualboot/util/b;->a(IZ)V

    :cond_8
    iget-boolean v0, p0, Lcom/dualboot/util/b;->r:Z

    if-eqz v0, :cond_9

    if-nez v5, :cond_9

    iget-object v0, p0, Lcom/dualboot/util/b;->l:Lcom/dualboot/util/d;

    iget-wide v7, v0, Lcom/dualboot/util/d;->h:J

    const-wide/16 v9, 0x0

    cmp-long v0, v7, v9

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/dualboot/util/b;->p:Lcom/dualboot/util/c;

    iget-object v5, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    invoke-virtual {v0, v5}, Lcom/dualboot/util/c;->a(Lcom/dualboot/util/c;)Lcom/dualboot/util/f;

    move-result-object v0

    invoke-static {v0}, Lcom/dualboot/util/f;->a(Lcom/dualboot/util/f;)Lcom/dualboot/util/f;

    move-result-object v0

    iget v0, v0, Lcom/dualboot/util/f;->a:F

    iget v5, p0, Lcom/dualboot/util/b;->a:F

    const/high16 v9, 0x40400000    # 3.0f

    mul-float/2addr v5, v9

    const/high16 v9, 0x41000000    # 8.0f

    div-float/2addr v5, v9

    cmpl-float v0, v0, v5

    if-ltz v0, :cond_f

    const-wide/16 v9, 0x0

    cmp-long v0, v7, v9

    if-gez v0, :cond_e

    invoke-direct {p0, v4, v1}, Lcom/dualboot/util/b;->a(IZ)V

    :cond_9
    :goto_8
    if-eqz v2, :cond_4

    and-int/lit8 v0, v6, 0x3

    invoke-direct {p0, v0, v1}, Lcom/dualboot/util/b;->a(IZ)V

    goto/16 :goto_3

    :cond_a
    move v2, v4

    goto :goto_4

    :cond_b
    or-int/lit8 v2, v2, 0x1

    move v6, v2

    goto :goto_5

    :cond_c
    move v5, v1

    goto :goto_6

    :cond_d
    move v2, v1

    goto :goto_7

    :cond_e
    invoke-direct {p0, v3, v1}, Lcom/dualboot/util/b;->a(IZ)V

    goto :goto_8

    :cond_f
    const-wide/16 v9, 0x0

    cmp-long v0, v7, v9

    if-lez v0, :cond_10

    invoke-direct {p0, v4, v1}, Lcom/dualboot/util/b;->a(IZ)V

    goto :goto_8

    :cond_10
    invoke-direct {p0, v3, v1}, Lcom/dualboot/util/b;->a(IZ)V

    goto :goto_8

    :cond_11
    move v6, v2

    goto :goto_5

    :cond_12
    move v2, v1

    goto/16 :goto_4

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_1
        :pswitch_2
        :pswitch_3
        :pswitch_0
    .end packed-switch
.end method

.method private a(IZ)V
    .locals 8

    and-int/lit8 v0, p1, 0xc

    if-lez v0, :cond_2

    and-int/lit8 v0, p1, 0x4

    if-lez v0, :cond_4

    const/4 v0, 0x1

    :goto_0
    iget-object v5, p0, Lcom/dualboot/util/b;->l:Lcom/dualboot/util/d;

    if-eqz p2, :cond_5

    iget-wide v1, v5, Lcom/dualboot/util/d;->f:J

    :goto_1
    long-to-double v1, v1

    iget-wide v3, v5, Lcom/dualboot/util/d;->b:D

    mul-double v6, v1, v3

    invoke-static {v6, v7}, Ljava/lang/Math;->floor(D)D

    move-result-wide v1

    invoke-static {v6, v7}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v3

    if-eqz v0, :cond_6

    cmpl-double v0, v6, v1

    if-nez v0, :cond_9

    const-wide/high16 v3, 0x3ff0000000000000L    # 1.0

    sub-double v0, v1, v3

    :goto_2
    const-wide/16 v2, 0x0

    cmpg-double v2, v0, v2

    if-gez v2, :cond_0

    const-wide/16 v0, 0x0

    :cond_0
    iget-wide v2, v5, Lcom/dualboot/util/d;->d:D

    cmpl-double v2, v0, v2

    if-lez v2, :cond_1

    iget-wide v0, v5, Lcom/dualboot/util/d;->d:D

    :cond_1
    iget-wide v2, v5, Lcom/dualboot/util/d;->c:D

    mul-double/2addr v0, v2

    double-to-long v0, v0

    iget-wide v2, v5, Lcom/dualboot/util/d;->g:J

    cmp-long v2, v0, v2

    if-eqz v2, :cond_7

    iput-wide v0, v5, Lcom/dualboot/util/d;->g:J

    const/4 v0, 0x1

    :goto_3
    if-eqz v0, :cond_2

    invoke-direct {p0}, Lcom/dualboot/util/b;->c()V

    :cond_2
    and-int/lit8 v0, p1, 0x1

    if-lez v0, :cond_3

    invoke-virtual {p0}, Lcom/dualboot/util/b;->b()V

    :cond_3
    return-void

    :cond_4
    const/4 v0, 0x0

    goto :goto_0

    :cond_5
    iget-wide v1, v5, Lcom/dualboot/util/d;->g:J

    goto :goto_1

    :cond_6
    cmpl-double v0, v6, v3

    if-nez v0, :cond_8

    const-wide/high16 v0, 0x3ff0000000000000L    # 1.0

    add-double/2addr v0, v3

    goto :goto_2

    :cond_7
    const/4 v0, 0x0

    goto :goto_3

    :cond_8
    move-wide v0, v3

    goto :goto_2

    :cond_9
    move-wide v0, v1

    goto :goto_2
.end method

.method private a(Lcom/dualboot/util/c;)V
    .locals 10

    const-wide/16 v8, 0x0

    const/4 v0, 0x1

    iget-object v1, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    invoke-virtual {p1, v1}, Lcom/dualboot/util/c;->a(Lcom/dualboot/util/c;)Lcom/dualboot/util/f;

    move-result-object v1

    invoke-static {v1}, Lcom/dualboot/util/f;->a(Lcom/dualboot/util/f;)Lcom/dualboot/util/f;

    move-result-object v1

    iget-boolean v2, p0, Lcom/dualboot/util/b;->r:Z

    if-nez v2, :cond_0

    iget v2, v1, Lcom/dualboot/util/f;->a:F

    iget v3, p0, Lcom/dualboot/util/b;->b:F

    cmpl-float v2, v2, v3

    if-lez v2, :cond_0

    iget-object v2, p0, Lcom/dualboot/util/b;->w:Lcom/dualboot/util/f;

    invoke-virtual {v2}, Lcom/dualboot/util/f;->a()V

    new-instance v2, Lcom/dualboot/util/c;

    iget-object v3, p0, Lcom/dualboot/util/b;->n:Lcom/dualboot/util/c;

    invoke-direct {v2, v3}, Lcom/dualboot/util/c;-><init>(Lcom/dualboot/util/c;)V

    iput-object v2, p0, Lcom/dualboot/util/b;->o:Lcom/dualboot/util/c;

    iput-boolean v0, p0, Lcom/dualboot/util/b;->r:Z

    :cond_0
    iget-boolean v2, p0, Lcom/dualboot/util/b;->r:Z

    if-eqz v2, :cond_3

    iget-object v2, p0, Lcom/dualboot/util/b;->o:Lcom/dualboot/util/c;

    invoke-virtual {p1, v2}, Lcom/dualboot/util/c;->a(Lcom/dualboot/util/c;)Lcom/dualboot/util/f;

    move-result-object v2

    invoke-static {v2}, Lcom/dualboot/util/f;->a(Lcom/dualboot/util/f;)Lcom/dualboot/util/f;

    move-result-object v3

    iget-object v4, p0, Lcom/dualboot/util/b;->w:Lcom/dualboot/util/f;

    iget v5, v4, Lcom/dualboot/util/f;->a:F

    iget v6, v3, Lcom/dualboot/util/f;->a:F

    add-float/2addr v5, v6

    iput v5, v4, Lcom/dualboot/util/f;->a:F

    iget-object v4, p0, Lcom/dualboot/util/b;->w:Lcom/dualboot/util/f;

    iget v5, v4, Lcom/dualboot/util/f;->b:F

    iget v3, v3, Lcom/dualboot/util/f;->b:F

    add-float/2addr v3, v5

    iput v3, v4, Lcom/dualboot/util/f;->b:F

    iget-boolean v3, p0, Lcom/dualboot/util/b;->s:Z

    if-nez v3, :cond_1

    iget v3, v1, Lcom/dualboot/util/f;->a:F

    iget v4, p0, Lcom/dualboot/util/b;->b:F

    add-float/2addr v3, v4

    iget v1, v1, Lcom/dualboot/util/f;->b:F

    cmpl-float v1, v3, v1

    if-lez v1, :cond_1

    iput-boolean v0, p0, Lcom/dualboot/util/b;->s:Z

    :cond_1
    iget-boolean v1, p0, Lcom/dualboot/util/b;->s:Z

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/dualboot/util/b;->l:Lcom/dualboot/util/d;

    iget v2, v2, Lcom/dualboot/util/f;->a:F

    float-to-long v2, v2

    iget-wide v4, v1, Lcom/dualboot/util/d;->g:J

    sub-long v2, v4, v2

    invoke-static {v2, v3, v8, v9}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v2

    iget-wide v6, v1, Lcom/dualboot/util/d;->e:J

    invoke-static {v2, v3, v6, v7}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v2

    sub-long v2, v4, v2

    iget-wide v4, v1, Lcom/dualboot/util/d;->g:J

    sub-long/2addr v4, v2

    iput-wide v4, v1, Lcom/dualboot/util/d;->g:J

    iget-wide v4, v1, Lcom/dualboot/util/d;->h:J

    add-long/2addr v4, v2

    iput-wide v4, v1, Lcom/dualboot/util/d;->h:J

    cmp-long v1, v2, v8

    if-eqz v1, :cond_4

    :goto_0
    if-eqz v0, :cond_2

    invoke-direct {p0}, Lcom/dualboot/util/b;->c()V

    :cond_2
    new-instance v0, Lcom/dualboot/util/c;

    invoke-direct {v0, p1}, Lcom/dualboot/util/c;-><init>(Lcom/dualboot/util/c;)V

    iput-object v0, p0, Lcom/dualboot/util/b;->o:Lcom/dualboot/util/c;

    :cond_3
    return-void

    :cond_4
    const/4 v0, 0x0

    goto :goto_0
.end method

.method private c()V
    .locals 7

    iget-object v0, p0, Lcom/dualboot/util/b;->l:Lcom/dualboot/util/d;

    iget-wide v0, v0, Lcom/dualboot/util/d;->g:J

    iget-object v2, p0, Lcom/dualboot/util/b;->l:Lcom/dualboot/util/d;

    iget-wide v3, v2, Lcom/dualboot/util/d;->g:J

    long-to-double v3, v3

    iget-wide v5, v2, Lcom/dualboot/util/d;->a:D

    mul-double v2, v3, v5

    iput-wide v0, p0, Lcom/dualboot/util/b;->m:J

    invoke-virtual {p0, v2, v3}, Lcom/dualboot/util/b;->a(D)V

    return-void
.end method

.method private d()V
    .locals 3

    iget-object v0, p0, Lcom/dualboot/util/b;->v:Landroid/view/VelocityTracker;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/util/b;->v:Landroid/view/VelocityTracker;

    const/16 v1, 0x3e8

    iget v2, p0, Lcom/dualboot/util/b;->i:F

    invoke-virtual {v0, v1, v2}, Landroid/view/VelocityTracker;->computeCurrentVelocity(IF)V

    iget-object v0, p0, Lcom/dualboot/util/b;->x:Lcom/dualboot/util/f;

    iget-object v1, p0, Lcom/dualboot/util/b;->v:Landroid/view/VelocityTracker;

    invoke-virtual {v1}, Landroid/view/VelocityTracker;->getXVelocity()F

    move-result v1

    iput v1, v0, Lcom/dualboot/util/f;->a:F

    iget-object v0, p0, Lcom/dualboot/util/b;->x:Lcom/dualboot/util/f;

    iget-object v1, p0, Lcom/dualboot/util/b;->v:Landroid/view/VelocityTracker;

    invoke-virtual {v1}, Landroid/view/VelocityTracker;->getYVelocity()F

    move-result v1

    iput v1, v0, Lcom/dualboot/util/f;->b:F

    iget-object v0, p0, Lcom/dualboot/util/b;->v:Landroid/view/VelocityTracker;

    invoke-virtual {v0}, Landroid/view/VelocityTracker;->recycle()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/util/b;->v:Landroid/view/VelocityTracker;

    :cond_0
    return-void
.end method


# virtual methods
.method protected abstract a()V
.end method

.method protected abstract a(D)V
.end method

.method protected abstract a(FFJ)V
.end method

.method public final a(Landroid/view/MotionEvent;)V
    .locals 8

    const/4 v0, 0x0

    const/4 v1, -0x1

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v2

    and-int/lit16 v2, v2, 0xff

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getActionIndex()I

    move-result v3

    invoke-virtual {p1, v3}, Landroid/view/MotionEvent;->getPointerId(I)I

    move-result v3

    packed-switch v2, :pswitch_data_0

    :cond_0
    :pswitch_0
    move v2, v0

    :goto_0
    if-nez v2, :cond_2

    :cond_1
    :goto_1
    return-void

    :pswitch_1
    iput v3, p0, Lcom/dualboot/util/b;->u:I

    iget v1, p0, Lcom/dualboot/util/b;->u:I

    invoke-virtual {p1, v1}, Landroid/view/MotionEvent;->findPointerIndex(I)I

    move-result v1

    const/4 v2, 0x1

    goto :goto_0

    :pswitch_2
    move v2, v0

    goto :goto_0

    :pswitch_3
    iget v2, p0, Lcom/dualboot/util/b;->u:I

    invoke-virtual {p1, v2}, Landroid/view/MotionEvent;->findPointerIndex(I)I

    move-result v2

    const/4 v3, 0x4

    iput v1, p0, Lcom/dualboot/util/b;->u:I

    move v1, v2

    move v2, v3

    goto :goto_0

    :pswitch_4
    iget v2, p0, Lcom/dualboot/util/b;->u:I

    if-ne v2, v3, :cond_0

    iget v2, p0, Lcom/dualboot/util/b;->u:I

    invoke-virtual {p1, v2}, Landroid/view/MotionEvent;->findPointerIndex(I)I

    move-result v2

    const/4 v3, 0x3

    iput v1, p0, Lcom/dualboot/util/b;->u:I

    move v1, v2

    move v2, v3

    goto :goto_0

    :pswitch_5
    iget v2, p0, Lcom/dualboot/util/b;->u:I

    invoke-virtual {p1, v2}, Landroid/view/MotionEvent;->findPointerIndex(I)I

    move-result v2

    if-eq v2, v1, :cond_0

    const/4 v1, 0x2

    move v7, v2

    move v2, v1

    move v1, v7

    goto :goto_0

    :cond_2
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getPointerCount()I

    move-result v3

    if-ltz v1, :cond_1

    if-ge v1, v3, :cond_1

    iget-object v3, p0, Lcom/dualboot/util/b;->v:Landroid/view/VelocityTracker;

    if-nez v3, :cond_3

    invoke-static {}, Landroid/view/VelocityTracker;->obtain()Landroid/view/VelocityTracker;

    move-result-object v3

    iput-object v3, p0, Lcom/dualboot/util/b;->v:Landroid/view/VelocityTracker;

    iget-object v3, p0, Lcom/dualboot/util/b;->x:Lcom/dualboot/util/f;

    invoke-virtual {v3}, Lcom/dualboot/util/f;->a()V

    :cond_3
    iget-object v3, p0, Lcom/dualboot/util/b;->v:Landroid/view/VelocityTracker;

    invoke-virtual {v3, p1}, Landroid/view/VelocityTracker;->addMovement(Landroid/view/MotionEvent;)V

    new-instance v3, Lcom/dualboot/util/c;

    invoke-direct {v3}, Lcom/dualboot/util/c;-><init>()V

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getHistorySize()I

    move-result v4

    :goto_2
    if-lt v0, v4, :cond_4

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getEventTime()J

    move-result-wide v4

    iput-wide v4, v3, Lcom/dualboot/util/c;->b:J

    iget-object v0, v3, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    invoke-virtual {p1, v1}, Landroid/view/MotionEvent;->getX(I)F

    move-result v4

    iput v4, v0, Lcom/dualboot/util/f;->a:F

    iget-object v0, v3, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    invoke-virtual {p1, v1}, Landroid/view/MotionEvent;->getY(I)F

    move-result v1

    iput v1, v0, Lcom/dualboot/util/f;->b:F

    invoke-direct {p0, v2, v3}, Lcom/dualboot/util/b;->a(ILcom/dualboot/util/c;)V

    goto :goto_1

    :cond_4
    invoke-virtual {p1, v0}, Landroid/view/MotionEvent;->getHistoricalEventTime(I)J

    move-result-wide v5

    iput-wide v5, v3, Lcom/dualboot/util/c;->b:J

    iget-object v5, v3, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    invoke-virtual {p1, v1, v0}, Landroid/view/MotionEvent;->getHistoricalX(II)F

    move-result v6

    iput v6, v5, Lcom/dualboot/util/f;->a:F

    iget-object v5, v3, Lcom/dualboot/util/c;->a:Lcom/dualboot/util/f;

    invoke-virtual {p1, v1, v0}, Landroid/view/MotionEvent;->getHistoricalY(II)F

    move-result v6

    iput v6, v5, Lcom/dualboot/util/f;->b:F

    invoke-direct {p0, v2, v3}, Lcom/dualboot/util/b;->a(ILcom/dualboot/util/c;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_2

    nop

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_1
        :pswitch_4
        :pswitch_5
        :pswitch_3
        :pswitch_0
        :pswitch_2
        :pswitch_4
    .end packed-switch
.end method

.method protected abstract b()V
.end method
