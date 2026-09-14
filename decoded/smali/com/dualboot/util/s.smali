.class public final Lcom/dualboot/util/s;
.super Ljava/lang/Object;


# static fields
.field private static synthetic d:[I


# instance fields
.field public final a:Ljava/util/Collection;

.field public final b:Ljava/util/Collection;

.field public final c:Landroid/content/SharedPreferences;


# direct methods
.method public constructor <init>(Landroid/content/SharedPreferences;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/dualboot/util/s;->a:Ljava/util/Collection;

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/dualboot/util/s;->b:Ljava/util/Collection;

    iput-object p1, p0, Lcom/dualboot/util/s;->c:Landroid/content/SharedPreferences;

    return-void
.end method

.method private a(Lcom/dualboot/util/u;)Z
    .locals 6

    const/4 v1, 0x1

    const/4 v2, 0x0

    iget-object v0, p0, Lcom/dualboot/util/s;->c:Landroid/content/SharedPreferences;

    if-nez v0, :cond_1

    :cond_0
    :goto_0
    return v2

    :cond_1
    if-eqz p1, :cond_0

    iget-object v0, p1, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    invoke-virtual {v0}, Lcom/dualboot/util/v;->a()Z

    move-result v0

    iget-object v3, p1, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    invoke-virtual {v3}, Lcom/dualboot/util/v;->a()Z

    move-result v3

    iget-object v4, p1, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    invoke-virtual {v4}, Lcom/dualboot/util/v;->b()Z

    move-result v4

    iget-object v5, p1, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    invoke-virtual {v5}, Lcom/dualboot/util/v;->b()Z

    move-result v5

    if-eqz v0, :cond_2

    if-nez v3, :cond_4

    :cond_2
    move v0, v2

    :goto_1
    if-eqz v0, :cond_0

    iget-object v0, p1, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    iget-object v0, v0, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    iget-object v3, p0, Lcom/dualboot/util/s;->c:Landroid/content/SharedPreferences;

    invoke-interface {v3, v0}, Landroid/content/SharedPreferences;->contains(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    iget-object v3, p0, Lcom/dualboot/util/s;->a:Ljava/util/Collection;

    invoke-interface {v3, p1}, Ljava/util/Collection;->add(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    iget-boolean v2, p1, Lcom/dualboot/util/u;->c:Z

    if-nez v2, :cond_3

    iget-object v2, p0, Lcom/dualboot/util/s;->b:Ljava/util/Collection;

    invoke-interface {v2, v0}, Ljava/util/Collection;->add(Ljava/lang/Object;)Z

    :cond_3
    move v2, v1

    goto :goto_0

    :cond_4
    if-eqz v4, :cond_5

    if-eqz v5, :cond_6

    :cond_5
    if-nez v4, :cond_7

    if-eqz v5, :cond_7

    :cond_6
    move v0, v2

    goto :goto_1

    :cond_7
    if-eqz v4, :cond_8

    if-eqz v5, :cond_8

    move v0, v1

    :goto_2
    iput-boolean v0, p1, Lcom/dualboot/util/u;->e:Z

    iget-object v0, p1, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    iget-object v0, v0, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    iget-object v3, p1, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    iget-object v3, v3, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    iput-boolean v0, p1, Lcom/dualboot/util/u;->c:Z

    iget-boolean v0, p1, Lcom/dualboot/util/u;->e:Z

    if-eqz v0, :cond_9

    iget-object v0, p1, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    iget-object v0, v0, Lcom/dualboot/util/v;->b:Ljava/lang/String;

    iget-object v3, p1, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    iget-object v3, v3, Lcom/dualboot/util/v;->b:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    :goto_3
    iput-boolean v0, p1, Lcom/dualboot/util/u;->d:Z

    iget-boolean v0, p1, Lcom/dualboot/util/u;->c:Z

    if-eqz v0, :cond_a

    iget-boolean v0, p1, Lcom/dualboot/util/u;->d:Z

    if-eqz v0, :cond_a

    move v0, v2

    goto :goto_1

    :cond_8
    move v0, v2

    goto :goto_2

    :cond_9
    move v0, v1

    goto :goto_3

    :cond_a
    move v0, v1

    goto :goto_1
.end method

.method private static synthetic a()[I
    .locals 3

    sget-object v0, Lcom/dualboot/util/s;->d:[I

    if-eqz v0, :cond_0

    :goto_0
    return-object v0

    :cond_0
    invoke-static {}, Lcom/dualboot/util/t;->values()[Lcom/dualboot/util/t;

    move-result-object v0

    array-length v0, v0

    new-array v0, v0, [I

    :try_start_0
    sget-object v1, Lcom/dualboot/util/t;->b:Lcom/dualboot/util/t;

    invoke-virtual {v1}, Lcom/dualboot/util/t;->ordinal()I

    move-result v1

    const/4 v2, 0x2

    aput v2, v0, v1
    :try_end_0
    .catch Ljava/lang/NoSuchFieldError; {:try_start_0 .. :try_end_0} :catch_1

    :goto_1
    :try_start_1
    sget-object v1, Lcom/dualboot/util/t;->a:Lcom/dualboot/util/t;

    invoke-virtual {v1}, Lcom/dualboot/util/t;->ordinal()I

    move-result v1

    const/4 v2, 0x1

    aput v2, v0, v1
    :try_end_1
    .catch Ljava/lang/NoSuchFieldError; {:try_start_1 .. :try_end_1} :catch_0

    :goto_2
    sput-object v0, Lcom/dualboot/util/s;->d:[I

    goto :goto_0

    :catch_0
    move-exception v1

    goto :goto_2

    :catch_1
    move-exception v1

    goto :goto_1
.end method


# virtual methods
.method public final a(Lcom/dualboot/util/v;)Ljava/lang/String;
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/dualboot/util/s;->c:Landroid/content/SharedPreferences;

    iget-object v2, p1, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    invoke-interface {v1, v2}, Landroid/content/SharedPreferences;->contains(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/dualboot/util/s;->a()[I

    move-result-object v1

    iget-object v2, p1, Lcom/dualboot/util/v;->c:Lcom/dualboot/util/t;

    invoke-virtual {v2}, Lcom/dualboot/util/t;->ordinal()I

    move-result v2

    aget v1, v1, v2

    packed-switch v1, :pswitch_data_0

    :cond_0
    :goto_0
    return-object v0

    :pswitch_0
    iget-object v1, p0, Lcom/dualboot/util/s;->c:Landroid/content/SharedPreferences;

    iget-object v2, p1, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    const-string v3, ""

    invoke-interface {v1, v2, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :pswitch_1
    iget-object v1, p0, Lcom/dualboot/util/s;->c:Landroid/content/SharedPreferences;

    iget-object v2, p1, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-interface {v1, v2, v3}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->toString(Z)Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-result-object v0

    goto :goto_0

    :catch_0
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    goto :goto_0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_0
        :pswitch_1
    .end packed-switch
.end method

.method public final a(Lcom/dualboot/util/v;Ljava/lang/String;)V
    .locals 4

    :try_start_0
    iget-object v0, p0, Lcom/dualboot/util/s;->c:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    if-nez v0, :cond_0

    :goto_0
    return-void

    :cond_0
    iget-object v1, p1, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Upgrading to value ("

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v3, p1, Lcom/dualboot/util/v;->c:Lcom/dualboot/util/t;

    invoke-virtual {v3}, Lcom/dualboot/util/t;->name()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    const-string v3, ") : "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    const-string v3, " = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    invoke-static {}, Lcom/dualboot/util/s;->a()[I

    move-result-object v2

    iget-object v3, p1, Lcom/dualboot/util/v;->c:Lcom/dualboot/util/t;

    invoke-virtual {v3}, Lcom/dualboot/util/t;->ordinal()I

    move-result v3

    aget v2, v2, v3

    packed-switch v2, :pswitch_data_0

    :goto_1
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    goto :goto_0

    :pswitch_0
    :try_start_1
    invoke-interface {v0, v1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    goto :goto_1

    :pswitch_1
    invoke-static {p2}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result v2

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_0
        :pswitch_1
    .end packed-switch
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Lcom/dualboot/util/t;Ljava/lang/String;Ljava/lang/String;Lcom/dualboot/util/t;)Z
    .locals 2

    new-instance v0, Lcom/dualboot/util/u;

    invoke-direct {v0}, Lcom/dualboot/util/u;-><init>()V

    iget-object v1, v0, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    iput-object p1, v1, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    iget-object v1, v0, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    iput-object p2, v1, Lcom/dualboot/util/v;->b:Ljava/lang/String;

    iget-object v1, v0, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    iput-object p3, v1, Lcom/dualboot/util/v;->c:Lcom/dualboot/util/t;

    iget-object v1, v0, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    iput-object p4, v1, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    iget-object v1, v0, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    iput-object p5, v1, Lcom/dualboot/util/v;->b:Ljava/lang/String;

    iget-object v1, v0, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    iput-object p6, v1, Lcom/dualboot/util/v;->c:Lcom/dualboot/util/t;

    invoke-direct {p0, v0}, Lcom/dualboot/util/s;->a(Lcom/dualboot/util/u;)Z

    move-result v0

    return v0
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2

    new-instance v0, Lcom/dualboot/util/u;

    invoke-direct {v0}, Lcom/dualboot/util/u;-><init>()V

    iget-object v1, v0, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    iput-object p1, v1, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    iget-object v1, v0, Lcom/dualboot/util/u;->a:Lcom/dualboot/util/v;

    iput-object p2, v1, Lcom/dualboot/util/v;->b:Ljava/lang/String;

    iget-object v1, v0, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    iput-object p3, v1, Lcom/dualboot/util/v;->a:Ljava/lang/String;

    iget-object v1, v0, Lcom/dualboot/util/u;->b:Lcom/dualboot/util/v;

    iput-object p4, v1, Lcom/dualboot/util/v;->b:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/dualboot/util/s;->a(Lcom/dualboot/util/u;)Z

    move-result v0

    return v0
.end method
