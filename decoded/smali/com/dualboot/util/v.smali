.class public final Lcom/dualboot/util/v;
.super Ljava/lang/Object;


# instance fields
.field public a:Ljava/lang/String;

.field public b:Ljava/lang/String;

.field public c:Lcom/dualboot/util/t;


# direct methods
.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    iput-object v0, p0, Lcom/dualboot/util/v;->b:Ljava/lang/String;

    sget-object v0, Lcom/dualboot/util/t;->a:Lcom/dualboot/util/t;

    iput-object v0, p0, Lcom/dualboot/util/v;->c:Lcom/dualboot/util/t;

    return-void
.end method


# virtual methods
.method public final a()Z
    .locals 1

    iget-object v0, p0, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    :goto_0
    return v0

    :cond_0
    const/4 v0, 0x1

    goto :goto_0
.end method

.method public final b()Z
    .locals 1

    iget-object v0, p0, Lcom/dualboot/util/v;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    :goto_0
    return v0

    :cond_0
    const/4 v0, 0x1

    goto :goto_0
.end method

.method public final equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v1, 0x1

    const/4 v0, 0x0

    if-nez p1, :cond_1

    :cond_0
    :goto_0
    return v0

    :cond_1
    if-ne p1, p0, :cond_2

    move v0, v1

    goto :goto_0

    :cond_2
    instance-of v2, p1, Lcom/dualboot/util/v;

    if-eqz v2, :cond_0

    check-cast p1, Lcom/dualboot/util/v;

    iget-object v2, p0, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    iget-object v3, p1, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    invoke-static {v2, v3}, Lcom/dualboot/util/y;->a(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/dualboot/util/v;->b:Ljava/lang/String;

    iget-object v3, p1, Lcom/dualboot/util/v;->b:Ljava/lang/String;

    invoke-static {v2, v3}, Lcom/dualboot/util/y;->a(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/dualboot/util/v;->c:Lcom/dualboot/util/t;

    iget-object v3, p1, Lcom/dualboot/util/v;->c:Lcom/dualboot/util/t;

    invoke-virtual {v2, v3}, Lcom/dualboot/util/t;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    move v0, v1

    goto :goto_0
.end method

.method public final hashCode()I
    .locals 3

    const/4 v1, 0x0

    iget-object v0, p0, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    if-nez v0, :cond_0

    move v0, v1

    :goto_0
    add-int/lit8 v0, v0, 0x0

    mul-int/lit8 v2, v0, 0xd

    iget-object v0, p0, Lcom/dualboot/util/v;->b:Ljava/lang/String;

    if-nez v0, :cond_1

    move v0, v1

    :goto_1
    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0xd

    iget-object v2, p0, Lcom/dualboot/util/v;->c:Lcom/dualboot/util/t;

    if-nez v2, :cond_2

    :goto_2
    add-int/2addr v0, v1

    return v0

    :cond_0
    iget-object v0, p0, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/dualboot/util/v;->b:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    goto :goto_1

    :cond_2
    iget-object v1, p0, Lcom/dualboot/util/v;->c:Lcom/dualboot/util/t;

    invoke-virtual {v1}, Lcom/dualboot/util/t;->hashCode()I

    move-result v1

    goto :goto_2
.end method
