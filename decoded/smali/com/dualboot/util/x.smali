.class public final Lcom/dualboot/util/x;
.super Ljava/lang/Object;


# instance fields
.field a:I

.field b:I


# direct methods
.method public constructor <init>(Landroid/content/Context;I)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-direct {p0, p1, p2}, Lcom/dualboot/util/x;->a(Landroid/content/Context;I)Z

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;II)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-direct {p0, p1, p2}, Lcom/dualboot/util/x;->a(Landroid/content/Context;I)Z

    move-result v0

    if-nez v0, :cond_0

    if-lez p3, :cond_0

    iput p3, p0, Lcom/dualboot/util/x;->a:I

    const/4 v0, 0x1

    iput v0, p0, Lcom/dualboot/util/x;->b:I

    :cond_0
    return-void
.end method

.method private a(Landroid/content/Context;I)Z
    .locals 3

    const/4 v1, -0x1

    const/4 v0, 0x0

    iput v1, p0, Lcom/dualboot/util/x;->a:I

    iput v1, p0, Lcom/dualboot/util/x;->b:I

    if-eqz p1, :cond_0

    if-gtz p2, :cond_1

    :cond_0
    :goto_0
    return v0

    :cond_1
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v0

    if-eqz v0, :cond_2

    iget v0, v0, Landroid/content/pm/PackageInfo;->versionCode:I

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, p2}, Landroid/content/res/Resources;->obtainTypedArray(I)Landroid/content/res/TypedArray;

    move-result-object v1

    if-eqz v1, :cond_2

    add-int/lit8 v0, v0, -0x1

    :goto_1
    if-gez v0, :cond_3

    :goto_2
    invoke-virtual {v1}, Landroid/content/res/TypedArray;->recycle()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    :goto_3
    invoke-virtual {p0}, Lcom/dualboot/util/x;->a()Z

    move-result v0

    goto :goto_0

    :cond_3
    :try_start_1
    invoke-virtual {v1}, Landroid/content/res/TypedArray;->length()I

    move-result v2

    if-ge v0, v2, :cond_4

    const/4 v2, 0x0

    invoke-virtual {v1, v0, v2}, Landroid/content/res/TypedArray;->getResourceId(II)I

    move-result v2

    if-lez v2, :cond_4

    iput v2, p0, Lcom/dualboot/util/x;->a:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/dualboot/util/x;->b:I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    goto :goto_3

    :cond_4
    add-int/lit8 v0, v0, -0x1

    goto :goto_1
.end method


# virtual methods
.method public final a()Z
    .locals 1

    iget v0, p0, Lcom/dualboot/util/x;->a:I

    if-lez v0, :cond_0

    iget v0, p0, Lcom/dualboot/util/x;->b:I

    if-lez v0, :cond_0

    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method
