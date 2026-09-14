.class public final Lcom/dualboot/e/a/c;
.super Landroid/preference/Preference;

# interfaces
.implements Lcom/dualboot/e/a/q;


# static fields
.field protected static a:Ljava/lang/Boolean;


# instance fields
.field protected b:Landroid/preference/PreferenceGroup;

.field protected c:Lcom/dualboot/e/a/f;

.field protected d:Lcom/dualboot/e/j;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/dualboot/e/a/c;->a:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/dualboot/e/a/c;-><init>(Landroid/content/Context;B)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;B)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/dualboot/e/a/c;-><init>(Landroid/content/Context;C)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;C)V
    .locals 2

    const/4 v1, 0x0

    const v0, 0x101008b

    invoke-direct {p0, p1, v1, v0}, Landroid/preference/Preference;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    iput-object v1, p0, Lcom/dualboot/e/a/c;->b:Landroid/preference/PreferenceGroup;

    iput-object v1, p0, Lcom/dualboot/e/a/c;->c:Lcom/dualboot/e/a/f;

    iput-object v1, p0, Lcom/dualboot/e/a/c;->d:Lcom/dualboot/e/j;

    sget v0, Lcom/dualboot/f;->offer_refresh_title:I

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/c;->setTitle(I)V

    sget v0, Lcom/dualboot/f;->offer_refresh_summary:I

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/c;->setSummary(I)V

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xb

    if-lt v0, v1, :cond_0

    sget v0, Lcom/dualboot/c;->icon_offer_refresh:I

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/c;->setIcon(I)V

    :cond_0
    return-void
.end method

.method private static a(Landroid/preference/PreferenceGroup;Ljava/util/List;)V
    .locals 4

    const/4 v2, 0x0

    if-nez p0, :cond_1

    :cond_0
    return-void

    :cond_1
    move v1, v2

    :goto_0
    invoke-virtual {p0}, Landroid/preference/PreferenceGroup;->getPreferenceCount()I

    move-result v0

    if-lt v1, v0, :cond_3

    :goto_1
    invoke-virtual {p0}, Landroid/preference/PreferenceGroup;->getPreferenceCount()I

    move-result v0

    if-ge v2, v0, :cond_0

    invoke-virtual {p0, v2}, Landroid/preference/PreferenceGroup;->getPreference(I)Landroid/preference/Preference;

    move-result-object v0

    instance-of v1, v0, Landroid/preference/PreferenceGroup;

    if-eqz v1, :cond_2

    check-cast v0, Landroid/preference/PreferenceGroup;

    invoke-static {v0, p1}, Lcom/dualboot/e/a/c;->a(Landroid/preference/PreferenceGroup;Ljava/util/List;)V

    :cond_2
    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    :cond_3
    invoke-virtual {p0, v1}, Landroid/preference/PreferenceGroup;->getPreference(I)Landroid/preference/Preference;

    move-result-object v0

    instance-of v3, v0, Lcom/dualboot/e/a/q;

    if-eqz v3, :cond_4

    check-cast v0, Lcom/dualboot/e/a/q;

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_4
    add-int/lit8 v0, v1, 0x1

    move v1, v0

    goto :goto_0
.end method

.method static synthetic e()V
    .locals 0

    return-void
.end method

.method private f()Ljava/util/List;
    .locals 2

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object v1, p0, Lcom/dualboot/e/a/c;->b:Landroid/preference/PreferenceGroup;

    invoke-static {v1, v0}, Lcom/dualboot/e/a/c;->a(Landroid/preference/PreferenceGroup;Ljava/util/List;)V

    return-object v0
.end method


# virtual methods
.method public final a()V
    .locals 6

    const/4 v3, 0x1

    sget-object v1, Lcom/dualboot/e/a/c;->a:Ljava/lang/Boolean;

    monitor-enter v1

    :try_start_0
    sget-object v0, Lcom/dualboot/e/a/c;->a:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_0

    monitor-exit v1

    :goto_0
    return-void

    :cond_0
    iget-object v0, p0, Lcom/dualboot/e/a/c;->d:Lcom/dualboot/e/j;

    if-nez v0, :cond_1

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit v1

    throw v0

    :cond_1
    :try_start_1
    invoke-direct {p0}, Lcom/dualboot/e/a/c;->f()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-gt v2, v3, :cond_3

    :cond_2
    monitor-exit v1

    goto :goto_0

    :cond_3
    new-instance v2, Landroid/os/Handler;

    invoke-direct {v2}, Landroid/os/Handler;-><init>()V

    new-instance v3, Lcom/dualboot/e/a/d;

    invoke-direct {v3, p0, v2, v0}, Lcom/dualboot/e/a/d;-><init>(Lcom/dualboot/e/a/c;Landroid/os/Handler;Ljava/util/List;)V

    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v2

    invoke-virtual {p0}, Lcom/dualboot/e/a/c;->getContext()Landroid/content/Context;

    move-result-object v4

    iget-object v5, p0, Lcom/dualboot/e/a/c;->d:Lcom/dualboot/e/j;

    invoke-virtual {v2, v4, v5}, Lcom/dualboot/a/a;->b(Landroid/content/Context;Lcom/dualboot/e/j;)Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v2

    invoke-virtual {v2, v3}, Lcom/dualboot/a/a;->a(Lcom/dualboot/a/m;)Z

    move-result v2

    if-eqz v2, :cond_4

    const/4 v2, 0x1

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    sput-object v2, Lcom/dualboot/e/a/c;->a:Ljava/lang/Boolean;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_5

    :cond_4
    monitor-exit v1

    goto :goto_0

    :cond_5
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/e/a/q;

    invoke-interface {v0}, Lcom/dualboot/e/a/q;->b()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1
.end method

.method public final a(Landroid/preference/PreferenceGroup;Lcom/dualboot/e/j;Lcom/dualboot/e/a/f;)V
    .locals 2

    iput-object p1, p0, Lcom/dualboot/e/a/c;->b:Landroid/preference/PreferenceGroup;

    iput-object p3, p0, Lcom/dualboot/e/a/c;->c:Lcom/dualboot/e/a/f;

    iput-object p2, p0, Lcom/dualboot/e/a/c;->d:Lcom/dualboot/e/j;

    iget-object v0, p0, Lcom/dualboot/e/a/c;->b:Landroid/preference/PreferenceGroup;

    if-eqz v0, :cond_0

    new-instance v0, Landroid/preference/PreferenceCategory;

    invoke-virtual {p0}, Lcom/dualboot/e/a/c;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/preference/PreferenceCategory;-><init>(Landroid/content/Context;)V

    sget v1, Lcom/dualboot/f;->offer_refresh_group:I

    invoke-virtual {v0, v1}, Landroid/preference/PreferenceCategory;->setTitle(I)V

    iget-object v1, p0, Lcom/dualboot/e/a/c;->b:Landroid/preference/PreferenceGroup;

    invoke-virtual {v1, v0}, Landroid/preference/PreferenceGroup;->addPreference(Landroid/preference/Preference;)Z

    invoke-virtual {v0, p0}, Landroid/preference/PreferenceCategory;->addPreference(Landroid/preference/Preference;)Z

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 2

    const/4 v1, 0x0

    sget v0, Lcom/dualboot/f;->offer_refresh_title_refreshing:I

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/c;->setTitle(I)V

    invoke-virtual {p0, v1}, Lcom/dualboot/e/a/c;->setEnabled(Z)V

    invoke-virtual {p0, v1}, Lcom/dualboot/e/a/c;->setSelectable(Z)V

    return-void
.end method

.method public final c()V
    .locals 2

    const/4 v1, 0x1

    sget v0, Lcom/dualboot/f;->offer_refresh_title:I

    invoke-virtual {p0, v0}, Lcom/dualboot/e/a/c;->setTitle(I)V

    invoke-virtual {p0, v1}, Lcom/dualboot/e/a/c;->setEnabled(Z)V

    invoke-virtual {p0, v1}, Lcom/dualboot/e/a/c;->setSelectable(Z)V

    return-void
.end method

.method public final d()V
    .locals 3

    invoke-direct {p0}, Lcom/dualboot/e/a/c;->f()Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v0

    const/4 v2, 0x1

    if-gt v0, v2, :cond_1

    :cond_0
    return-void

    :cond_1
    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/dualboot/e/a/c;->c:Lcom/dualboot/e/a/f;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/e/a/c;->c:Lcom/dualboot/e/a/f;

    invoke-interface {v0}, Lcom/dualboot/e/a/f;->c()V

    :cond_2
    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/e/a/q;

    invoke-interface {v0}, Lcom/dualboot/e/a/q;->c()V

    goto :goto_1

    :cond_3
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/e/a/q;

    invoke-interface {v0}, Lcom/dualboot/e/a/q;->b()V

    goto :goto_0
.end method

.method protected final onClick()V
    .locals 0

    invoke-super {p0}, Landroid/preference/Preference;->onClick()V

    invoke-virtual {p0}, Lcom/dualboot/e/a/c;->a()V

    return-void
.end method

.method protected final onPrepareForRemoval()V
    .locals 1

    const/4 v0, 0x0

    invoke-super {p0}, Landroid/preference/Preference;->onPrepareForRemoval()V

    iput-object v0, p0, Lcom/dualboot/e/a/c;->b:Landroid/preference/PreferenceGroup;

    iput-object v0, p0, Lcom/dualboot/e/a/c;->c:Lcom/dualboot/e/a/f;

    iput-object v0, p0, Lcom/dualboot/e/a/c;->d:Lcom/dualboot/e/j;

    return-void
.end method
