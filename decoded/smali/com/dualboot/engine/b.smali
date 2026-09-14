.class public final Lcom/dualboot/engine/b;
.super Ljava/lang/Object;


# instance fields
.field a:Z

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:I


# direct methods
.method public constructor <init>()V
    .locals 4

    const/4 v0, 0x0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/b;->b:Ljava/lang/String;

    iput-object v0, p0, Lcom/dualboot/engine/b;->c:Ljava/lang/String;

    const/4 v0, 0x0

    iput v0, p0, Lcom/dualboot/engine/b;->d:I

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/dualboot/engine/b;->a:Z

    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    iput-object v0, p0, Lcom/dualboot/engine/b;->b:Ljava/lang/String;

    sget-object v0, Landroid/os/Build;->MODEL:Ljava/lang/String;

    iput-object v0, p0, Lcom/dualboot/engine/b;->c:Ljava/lang/String;

    iget-object v0, p0, Lcom/dualboot/engine/b;->b:Ljava/lang/String;

    sget-object v1, Ljava/util/Locale;->US:Ljava/util/Locale;

    invoke-virtual {v0, v1}, Ljava/lang/String;->toUpperCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/engine/b;->b:Ljava/lang/String;

    iget-object v0, p0, Lcom/dualboot/engine/b;->c:Ljava/lang/String;

    sget-object v1, Ljava/util/Locale;->US:Ljava/util/Locale;

    invoke-virtual {v0, v1}, Ljava/lang/String;->toUpperCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/engine/b;->c:Ljava/lang/String;

    iget-object v0, p0, Lcom/dualboot/engine/b;->c:Ljava/lang/String;

    iget-object v1, p0, Lcom/dualboot/engine/b;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_0

    iget-object v1, p0, Lcom/dualboot/engine/b;->b:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    iget-object v2, p0, Lcom/dualboot/engine/b;->c:Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    iget-object v3, p0, Lcom/dualboot/engine/b;->c:Ljava/lang/String;

    add-int/2addr v0, v1

    invoke-virtual {v3, v0, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/engine/b;->c:Ljava/lang/String;

    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    iput v0, p0, Lcom/dualboot/engine/b;->d:I

    invoke-direct {p0}, Lcom/dualboot/engine/b;->a()Z

    return-void
.end method

.method private a()Z
    .locals 6

    const/4 v2, 0x1

    const/4 v1, 0x0

    iget-object v0, p0, Lcom/dualboot/engine/b;->b:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/engine/b;->c:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    if-nez v0, :cond_1

    :cond_0
    :goto_0
    return v1

    :cond_1
    const/4 v0, 0x2

    new-array v3, v0, [Ljava/lang/String;

    const-string v0, "Samsung"

    aput-object v0, v3, v1

    const-string v0, "HTC"

    aput-object v0, v3, v2

    move v0, v1

    :goto_1
    array-length v4, v3

    if-lt v0, v4, :cond_2

    :goto_2
    move v1, v2

    goto :goto_0

    :cond_2
    iget-object v4, p0, Lcom/dualboot/engine/b;->b:Ljava/lang/String;

    aget-object v5, v3, v0

    invoke-virtual {v4, v5}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_3

    iput-boolean v1, p0, Lcom/dualboot/engine/b;->a:Z

    goto :goto_2

    :cond_3
    add-int/lit8 v0, v0, 0x1

    goto :goto_1
.end method
