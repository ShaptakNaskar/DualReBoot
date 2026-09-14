.class public final Lcom/dualboot/util/u;
.super Ljava/lang/Object;


# instance fields
.field public final a:Lcom/dualboot/util/v;

.field public final b:Lcom/dualboot/util/v;

.field c:Z

.field d:Z

.field public e:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    const/4 v1, 0x1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/dualboot/util/v;

    invoke-direct {v0}, Lcom/dualboot/util/v;-><init>()V

    iput-object v0, p0, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    new-instance v0, Lcom/dualboot/util/v;

    invoke-direct {v0}, Lcom/dualboot/util/v;-><init>()V

    iput-object v0, p0, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    iput-boolean v1, p0, Lcom/dualboot/util/u;->c:Z

    iput-boolean v1, p0, Lcom/dualboot/util/u;->d:Z

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/dualboot/util/u;->e:Z

    return-void
.end method


# virtual methods
.method public final equals(Ljava/lang/Object;)Z
    .locals 5

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez p1, :cond_1

    :cond_0
    :goto_0
    return v2

    :cond_1
    if-ne p1, p0, :cond_2

    move v2, v1

    goto :goto_0

    :cond_2
    instance-of v0, p1, Lcom/dualboot/util/u;

    if-eqz v0, :cond_0

    check-cast p1, Lcom/dualboot/util/u;

    iget-object v0, p0, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    if-nez v0, :cond_4

    iget-object v0, p1, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    if-nez v0, :cond_3

    move v0, v1

    :goto_1
    iget-object v3, p0, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    if-nez v3, :cond_6

    iget-object v3, p1, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    if-nez v3, :cond_5

    move v3, v1

    :goto_2
    if-eqz v0, :cond_0

    if-eqz v3, :cond_0

    move v2, v1

    goto :goto_0

    :cond_3
    move v0, v2

    goto :goto_1

    :cond_4
    iget-object v0, p0, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    iget-object v3, p1, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    invoke-virtual {v0, v3}, Lcom/dualboot/util/v;->equals(Ljava/lang/Object;)Z

    move-result v0

    goto :goto_1

    :cond_5
    move v3, v2

    goto :goto_2

    :cond_6
    iget-object v3, p0, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    iget-object v4, p1, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    invoke-virtual {v3, v4}, Lcom/dualboot/util/v;->equals(Ljava/lang/Object;)Z

    move-result v3

    goto :goto_2
.end method

.method public final hashCode()I
    .locals 3

    const/4 v1, 0x0

    iget-object v0, p0, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    if-nez v0, :cond_0

    move v0, v1

    :goto_0
    add-int/lit8 v0, v0, 0x0

    mul-int/lit8 v0, v0, 0x1f

    iget-object v2, p0, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    if-nez v2, :cond_1

    :goto_1
    add-int/2addr v0, v1

    return v0

    :cond_0
    iget-object v0, p0, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    invoke-virtual {v0}, Lcom/dualboot/util/v;->hashCode()I

    move-result v0

    goto :goto_0

    :cond_1
    iget-object v1, p0, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    invoke-virtual {v1}, Lcom/dualboot/util/v;->hashCode()I

    move-result v1

    goto :goto_1
.end method
