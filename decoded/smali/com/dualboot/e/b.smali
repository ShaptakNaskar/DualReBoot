.class public abstract Lcom/dualboot/e/b;
.super Landroid/service/dreams/DreamService;


# annotations
.annotation build Landroid/annotation/TargetApi;
    value = 0x11
.end annotation


# static fields
.field private static synthetic i:[I

.field private static synthetic j:[I


# instance fields
.field protected a:Lcom/dualboot/c/f;

.field protected b:Landroid/view/View;

.field protected c:Landroid/view/View;

.field protected d:Lcom/dualboot/e/c;

.field protected e:Lcom/dualboot/e/d;

.field protected f:Z

.field protected g:Z

.field protected h:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-direct {p0}, Landroid/service/dreams/DreamService;-><init>()V

    iput-object v0, p0, Lcom/dualboot/e/b;->a:Lcom/dualboot/c/f;

    iput-object v0, p0, Lcom/dualboot/e/b;->b:Landroid/view/View;

    iput-object v0, p0, Lcom/dualboot/e/b;->c:Landroid/view/View;

    sget-object v0, Lcom/dualboot/e/c;->c:Lcom/dualboot/e/c;

    iput-object v0, p0, Lcom/dualboot/e/b;->d:Lcom/dualboot/e/c;

    sget-object v0, Lcom/dualboot/e/d;->b:Lcom/dualboot/e/d;

    iput-object v0, p0, Lcom/dualboot/e/b;->e:Lcom/dualboot/e/d;

    iput-boolean v1, p0, Lcom/dualboot/e/b;->f:Z

    iput-boolean v1, p0, Lcom/dualboot/e/b;->g:Z

    iput-boolean v1, p0, Lcom/dualboot/e/b;->h:Z

    return-void
.end method

.method private static synthetic b()[I
    .locals 3

    sget-object v0, Lcom/dualboot/e/b;->i:[I

    if-eqz v0, :cond_0

    :goto_0
    return-object v0

    :cond_0
    invoke-static {}, Lcom/dualboot/e/d;->values()[Lcom/dualboot/e/d;

    move-result-object v0

    array-length v0, v0

    new-array v0, v0, [I

    :try_start_0
    sget-object v1, Lcom/dualboot/e/d;->c:Lcom/dualboot/e/d;

    invoke-virtual {v1}, Lcom/dualboot/e/d;->ordinal()I

    move-result v1

    const/4 v2, 0x3

    aput v2, v0, v1
    :try_end_0
    .catch Ljava/lang/NoSuchFieldError; {:try_start_0 .. :try_end_0} :catch_2

    :goto_1
    :try_start_1
    sget-object v1, Lcom/dualboot/e/d;->b:Lcom/dualboot/e/d;

    invoke-virtual {v1}, Lcom/dualboot/e/d;->ordinal()I

    move-result v1

    const/4 v2, 0x2

    aput v2, v0, v1
    :try_end_1
    .catch Ljava/lang/NoSuchFieldError; {:try_start_1 .. :try_end_1} :catch_1

    :goto_2
    :try_start_2
    sget-object v1, Lcom/dualboot/e/d;->a:Lcom/dualboot/e/d;

    invoke-virtual {v1}, Lcom/dualboot/e/d;->ordinal()I

    move-result v1

    const/4 v2, 0x1

    aput v2, v0, v1
    :try_end_2
    .catch Ljava/lang/NoSuchFieldError; {:try_start_2 .. :try_end_2} :catch_0

    :goto_3
    sput-object v0, Lcom/dualboot/e/b;->i:[I

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

.method private static synthetic c()[I
    .locals 3

    sget-object v0, Lcom/dualboot/e/b;->j:[I

    if-eqz v0, :cond_0

    :goto_0
    return-object v0

    :cond_0
    invoke-static {}, Lcom/dualboot/e/c;->values()[Lcom/dualboot/e/c;

    move-result-object v0

    array-length v0, v0

    new-array v0, v0, [I

    :try_start_0
    sget-object v1, Lcom/dualboot/e/c;->c:Lcom/dualboot/e/c;

    invoke-virtual {v1}, Lcom/dualboot/e/c;->ordinal()I

    move-result v1

    const/4 v2, 0x3

    aput v2, v0, v1
    :try_end_0
    .catch Ljava/lang/NoSuchFieldError; {:try_start_0 .. :try_end_0} :catch_2

    :goto_1
    :try_start_1
    sget-object v1, Lcom/dualboot/e/c;->b:Lcom/dualboot/e/c;

    invoke-virtual {v1}, Lcom/dualboot/e/c;->ordinal()I

    move-result v1

    const/4 v2, 0x2

    aput v2, v0, v1
    :try_end_1
    .catch Ljava/lang/NoSuchFieldError; {:try_start_1 .. :try_end_1} :catch_1

    :goto_2
    :try_start_2
    sget-object v1, Lcom/dualboot/e/c;->a:Lcom/dualboot/e/c;

    invoke-virtual {v1}, Lcom/dualboot/e/c;->ordinal()I

    move-result v1

    const/4 v2, 0x1

    aput v2, v0, v1
    :try_end_2
    .catch Ljava/lang/NoSuchFieldError; {:try_start_2 .. :try_end_2} :catch_0

    :goto_3
    sput-object v0, Lcom/dualboot/e/b;->j:[I

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
.method protected abstract a()Lcom/dualboot/e/j;
.end method

.method public onAttachedToWindow()V
    .locals 10

    const/16 v1, 0x100

    const/4 v9, 0x1

    const/16 v8, 0xe

    const/4 v7, 0x0

    const/4 v6, -0x1

    invoke-super {p0}, Landroid/service/dreams/DreamService;->onAttachedToWindow()V

    invoke-virtual {p0}, Lcom/dualboot/e/b;->a()Lcom/dualboot/e/j;

    move-result-object v2

    invoke-static {p0}, Lcom/dualboot/b/a;->a(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v3

    if-eqz v3, :cond_2

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v4, "top"

    sget-object v5, Lcom/dualboot/e/c;->a:Lcom/dualboot/e/c;

    invoke-interface {v0, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "center"

    sget-object v5, Lcom/dualboot/e/c;->b:Lcom/dualboot/e/c;

    invoke-interface {v0, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "bottom"

    sget-object v5, Lcom/dualboot/e/c;->c:Lcom/dualboot/e/c;

    invoke-interface {v0, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "pref_dream_overlay_position"

    const-string v5, ""

    invoke-interface {v3, v4, v5}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v0, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/e/c;

    if-eqz v0, :cond_0

    iput-object v0, p0, Lcom/dualboot/e/b;->d:Lcom/dualboot/e/c;

    :cond_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v4, "small"

    sget-object v5, Lcom/dualboot/e/d;->a:Lcom/dualboot/e/d;

    invoke-interface {v0, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "medium"

    sget-object v5, Lcom/dualboot/e/d;->b:Lcom/dualboot/e/d;

    invoke-interface {v0, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "large"

    sget-object v5, Lcom/dualboot/e/d;->c:Lcom/dualboot/e/d;

    invoke-interface {v0, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "pref_dream_overlay_size"

    const-string v5, ""

    invoke-interface {v3, v4, v5}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v0, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/e/d;

    if-eqz v0, :cond_1

    iput-object v0, p0, Lcom/dualboot/e/b;->e:Lcom/dualboot/e/d;

    :cond_1
    const-string v0, "pref_dream_interactive"

    invoke-interface {v3, v0, v7}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/dualboot/e/b;->g:Z

    const-string v0, "pref_dream_brightness"

    invoke-interface {v3, v0, v7}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/dualboot/e/b;->h:Z

    const-string v0, "pref_dream_overlay"

    invoke-interface {v3, v0, v7}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/dualboot/e/b;->f:Z

    :cond_2
    iget-boolean v0, p0, Lcom/dualboot/e/b;->g:Z

    invoke-virtual {p0, v0}, Lcom/dualboot/e/b;->setInteractive(Z)V

    iget-boolean v0, p0, Lcom/dualboot/e/b;->h:Z

    invoke-virtual {p0, v0}, Lcom/dualboot/e/b;->setScreenBright(Z)V

    invoke-virtual {p0, v9}, Lcom/dualboot/e/b;->setFullscreen(Z)V

    new-instance v0, Lcom/dualboot/c/f;

    invoke-virtual {v2}, Lcom/dualboot/e/j;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2}, Lcom/dualboot/e/j;->b()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, p0, v3, v2}, Lcom/dualboot/c/f;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/dualboot/e/b;->a:Lcom/dualboot/c/f;

    iget-object v0, p0, Lcom/dualboot/e/b;->a:Lcom/dualboot/c/f;

    invoke-virtual {p0, v0}, Lcom/dualboot/e/b;->setContentView(Landroid/view/View;)V

    const-string v0, "layout_inflater"

    invoke-virtual {p0, v0}, Lcom/dualboot/e/b;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/LayoutInflater;

    if-eqz v0, :cond_3

    sget v2, Lcom/dualboot/e;->dream_overlay:I

    const/4 v3, 0x0

    invoke-virtual {v0, v2, v3}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/e/b;->b:Landroid/view/View;

    iget-object v0, p0, Lcom/dualboot/e/b;->b:Landroid/view/View;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/dualboot/e/b;->b:Landroid/view/View;

    sget v2, Lcom/dualboot/d;->dream_overlay_clock:I

    invoke-virtual {v0, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/e/b;->c:Landroid/view/View;

    :cond_3
    iget-object v0, p0, Lcom/dualboot/e/b;->b:Landroid/view/View;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/dualboot/e/b;->c:Landroid/view/View;

    if-eqz v0, :cond_4

    invoke-virtual {p0}, Lcom/dualboot/e/b;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    sget v2, Lcom/dualboot/c;->clock_face:I

    invoke-static {v0, v2}, Landroid/graphics/BitmapFactory;->decodeResource(Landroid/content/res/Resources;I)Landroid/graphics/Bitmap;

    move-result-object v2

    if-eqz v2, :cond_8

    invoke-virtual {v2}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v1

    invoke-virtual {v2}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v0

    invoke-virtual {v2}, Landroid/graphics/Bitmap;->recycle()V

    :goto_0
    invoke-static {}, Lcom/dualboot/e/b;->b()[I

    move-result-object v2

    iget-object v3, p0, Lcom/dualboot/e/b;->e:Lcom/dualboot/e/d;

    invoke-virtual {v3}, Lcom/dualboot/e/d;->ordinal()I

    move-result v3

    aget v2, v2, v3

    packed-switch v2, :pswitch_data_0

    :pswitch_0
    const/high16 v2, 0x3f400000    # 0.75f

    :goto_1
    int-to-float v1, v1

    mul-float/2addr v1, v2

    float-to-int v1, v1

    int-to-float v0, v0

    mul-float/2addr v0, v2

    float-to-int v0, v0

    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v2, v1, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-static {}, Lcom/dualboot/e/b;->c()[I

    move-result-object v0

    iget-object v1, p0, Lcom/dualboot/e/b;->d:Lcom/dualboot/e/c;

    invoke-virtual {v1}, Lcom/dualboot/e/c;->ordinal()I

    move-result v1

    aget v0, v0, v1

    packed-switch v0, :pswitch_data_1

    :pswitch_1
    const/16 v0, 0xf

    invoke-virtual {v2, v0, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    invoke-virtual {v2, v8, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    :goto_2
    iget-object v0, p0, Lcom/dualboot/e/b;->c:Landroid/view/View;

    invoke-virtual {v0, v2}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    iget-boolean v0, p0, Lcom/dualboot/e/b;->f:Z

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/dualboot/e/b;->b:Landroid/view/View;

    invoke-virtual {v0, v7}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/dualboot/e/b;->b:Landroid/view/View;

    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v1, v6, v6}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, v1}, Lcom/dualboot/e/b;->addContentView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_4
    :goto_3
    iget-object v0, p0, Lcom/dualboot/e/b;->a:Lcom/dualboot/c/f;

    if-eqz v0, :cond_6

    new-instance v0, Lcom/dualboot/c/d;

    invoke-direct {v0}, Lcom/dualboot/c/d;-><init>()V

    iput-boolean v9, v0, Lcom/dualboot/c/d;->e:Z

    iget-boolean v1, p0, Lcom/dualboot/e/b;->g:Z

    if-nez v1, :cond_5

    iput-boolean v7, v0, Lcom/dualboot/c/d;->d:Z

    sget-object v1, Lcom/dualboot/c/h;->a:Lcom/dualboot/c/h;

    iput-object v1, v0, Lcom/dualboot/c/d;->b:Lcom/dualboot/c/h;

    sget-object v1, Lcom/dualboot/c/i;->b:Lcom/dualboot/c/i;

    iput-object v1, v0, Lcom/dualboot/c/d;->a:Lcom/dualboot/c/i;

    sget-object v1, Lcom/dualboot/c/k;->a:Lcom/dualboot/c/k;

    iput-object v1, v0, Lcom/dualboot/c/d;->c:Lcom/dualboot/c/k;

    :cond_5
    iget-object v1, p0, Lcom/dualboot/e/b;->a:Lcom/dualboot/c/f;

    invoke-virtual {v1, v0}, Lcom/dualboot/c/f;->a(Lcom/dualboot/c/d;)V

    :cond_6
    return-void

    :pswitch_2
    const/high16 v2, 0x3f000000    # 0.5f

    goto :goto_1

    :pswitch_3
    const/high16 v2, 0x3f800000    # 1.0f

    goto :goto_1

    :pswitch_4
    const/16 v0, 0xa

    invoke-virtual {v2, v0, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    invoke-virtual {v2, v8, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto :goto_2

    :pswitch_5
    const/16 v0, 0xc

    invoke-virtual {v2, v0, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    invoke-virtual {v2, v8, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto :goto_2

    :cond_7
    iget-object v0, p0, Lcom/dualboot/e/b;->b:Landroid/view/View;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    goto :goto_3

    :cond_8
    move v0, v1

    goto/16 :goto_0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_2
        :pswitch_0
        :pswitch_3
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x1
        :pswitch_4
        :pswitch_1
        :pswitch_5
    .end packed-switch
.end method
