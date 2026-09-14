.class public final Lcom/dualboot/util/aa;
.super Ljava/lang/Object;


# instance fields
.field protected a:I

.field protected b:I

.field protected c:I

.field protected d:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 4

    const/4 v0, 0x0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput v0, p0, Lcom/dualboot/util/aa;->a:I

    iput v0, p0, Lcom/dualboot/util/aa;->b:I

    iput v0, p0, Lcom/dualboot/util/aa;->c:I

    iput-boolean v0, p0, Lcom/dualboot/util/aa;->d:Z

    if-eqz p1, :cond_0

    new-instance v0, Lcom/dualboot/util/x;

    sget v1, Lcom/dualboot/b;->whatsnew_title_array:I

    sget v2, Lcom/dualboot/f;->WhatsNew_Title_Default:I

    invoke-direct {v0, p1, v1, v2}, Lcom/dualboot/util/x;-><init>(Landroid/content/Context;II)V

    new-instance v1, Lcom/dualboot/util/x;

    sget v2, Lcom/dualboot/b;->whatsnew_content_array:I

    invoke-direct {v1, p1, v2}, Lcom/dualboot/util/x;-><init>(Landroid/content/Context;I)V

    invoke-virtual {v0}, Lcom/dualboot/util/x;->a()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {v1}, Lcom/dualboot/util/x;->a()Z

    move-result v2

    if-eqz v2, :cond_0

    iget v2, p0, Lcom/dualboot/util/aa;->a:I

    iget v3, v0, Lcom/dualboot/util/x;->b:I

    invoke-static {v2, v3}, Ljava/lang/Math;->max(II)I

    move-result v2

    iput v2, p0, Lcom/dualboot/util/aa;->a:I

    iget v2, p0, Lcom/dualboot/util/aa;->a:I

    iget v3, v1, Lcom/dualboot/util/x;->b:I

    invoke-static {v2, v3}, Ljava/lang/Math;->max(II)I

    move-result v2

    iput v2, p0, Lcom/dualboot/util/aa;->a:I

    iget v0, v0, Lcom/dualboot/util/x;->a:I

    iput v0, p0, Lcom/dualboot/util/aa;->b:I

    iget v0, v1, Lcom/dualboot/util/x;->a:I

    iput v0, p0, Lcom/dualboot/util/aa;->c:I

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/dualboot/util/aa;->d:Z

    :cond_0
    return-void
.end method


# virtual methods
.method public final a()Z
    .locals 1

    iget-boolean v0, p0, Lcom/dualboot/util/aa;->d:Z

    return v0
.end method

.method public final b()I
    .locals 1

    iget v0, p0, Lcom/dualboot/util/aa;->a:I

    return v0
.end method

.method public final c()I
    .locals 1

    iget v0, p0, Lcom/dualboot/util/aa;->b:I

    return v0
.end method

.method public final d()I
    .locals 1

    iget v0, p0, Lcom/dualboot/util/aa;->c:I

    return v0
.end method
