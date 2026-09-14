.class public final Lcom/dualboot/c/c;
.super Ljava/lang/Object;


# instance fields
.field final a:Landroid/content/Context;

.field b:I

.field c:I

.field d:I

.field final e:Ljava/lang/String;

.field final f:Ljava/lang/String;

.field final g:Landroid/view/GestureDetector;

.field h:F

.field i:Lcom/dualboot/c/g;

.field j:Z

.field k:Lcom/dualboot/c/d;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    const/4 v1, 0x0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput v1, p0, Lcom/dualboot/c/c;->b:I

    iput v1, p0, Lcom/dualboot/c/c;->c:I

    iput v1, p0, Lcom/dualboot/c/c;->d:I

    const/high16 v0, 0x3f000000    # 0.5f

    iput v0, p0, Lcom/dualboot/c/c;->h:F

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    iput-boolean v1, p0, Lcom/dualboot/c/c;->j:Z

    new-instance v0, Lcom/dualboot/c/d;

    invoke-direct {v0}, Lcom/dualboot/c/d;-><init>()V

    iput-object v0, p0, Lcom/dualboot/c/c;->k:Lcom/dualboot/c/d;

    iput-object p1, p0, Lcom/dualboot/c/c;->a:Landroid/content/Context;

    iput-object p2, p0, Lcom/dualboot/c/c;->e:Ljava/lang/String;

    iput-object p3, p0, Lcom/dualboot/c/c;->f:Ljava/lang/String;

    new-instance v0, Landroid/view/GestureDetector;

    new-instance v1, Lcom/dualboot/c/e;

    invoke-direct {v1, p0}, Lcom/dualboot/c/e;-><init>(Lcom/dualboot/c/c;)V

    invoke-direct {v0, p1, v1}, Landroid/view/GestureDetector;-><init>(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;)V

    iput-object v0, p0, Lcom/dualboot/c/c;->g:Landroid/view/GestureDetector;

    return-void
.end method


# virtual methods
.method final a()V
    .locals 4

    iget-object v0, p0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    iget-object v1, p0, Lcom/dualboot/c/c;->k:Lcom/dualboot/c/d;

    iget-object v1, v1, Lcom/dualboot/c/d;->a:Lcom/dualboot/c/i;

    invoke-virtual {v0, v1}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/i;)V

    iget-object v0, p0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    iget-object v1, p0, Lcom/dualboot/c/c;->k:Lcom/dualboot/c/d;

    iget-object v1, v1, Lcom/dualboot/c/d;->b:Lcom/dualboot/c/h;

    const-wide/16 v2, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/h;J)V

    iget-object v0, p0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    iget-object v1, p0, Lcom/dualboot/c/c;->k:Lcom/dualboot/c/d;

    iget-object v1, v1, Lcom/dualboot/c/d;->c:Lcom/dualboot/c/k;

    invoke-virtual {v0, v1}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/k;)V

    iget-object v0, p0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    iget-object v1, p0, Lcom/dualboot/c/c;->k:Lcom/dualboot/c/d;

    iget-boolean v1, v1, Lcom/dualboot/c/d;->e:Z

    invoke-virtual {v0, v1}, Lcom/dualboot/c/g;->c(Z)V

    iget-object v0, p0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    iget v1, p0, Lcom/dualboot/c/c;->h:F

    invoke-virtual {v0, v1}, Lcom/dualboot/c/g;->b(F)V

    iget-object v0, p0, Lcom/dualboot/c/c;->i:Lcom/dualboot/c/g;

    iget-boolean v1, p0, Lcom/dualboot/c/c;->j:Z

    invoke-virtual {v0, v1}, Lcom/dualboot/c/g;->a(Z)V

    :cond_0
    return-void
.end method
