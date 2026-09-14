.class public final Lcom/dualboot/engine/c;
.super Ljava/lang/Object;


# static fields
.field private static synthetic v:[I


# instance fields
.field protected a:Ljava/util/ArrayList;

.field protected b:Ljava/util/ArrayList;

.field protected c:Ljava/util/ArrayList;

.field protected d:Ljava/util/ArrayList;

.field protected e:Ljava/util/ArrayList;

.field protected f:Ljava/util/ArrayList;

.field protected g:Ljava/util/ArrayList;

.field protected h:Ljava/util/ArrayList;

.field protected i:Ljava/util/ArrayList;

.field protected j:Ljava/util/ArrayList;

.field protected k:Ljava/util/ArrayList;

.field protected l:Ljava/util/ArrayList;

.field protected m:Ljava/util/ArrayList;

.field protected n:Ljava/util/ArrayList;

.field protected o:Ljava/util/ArrayList;

.field protected p:Ljava/util/ArrayList;

.field protected q:Ljava/util/ArrayList;

.field protected r:Ljava/util/ArrayList;

.field protected s:Ljava/util/ArrayList;

.field protected t:Ljava/util/Map;

.field protected u:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->a:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->b:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->c:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->d:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->e:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->f:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->g:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->h:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->i:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->j:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->k:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->l:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->m:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->n:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->o:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->p:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->q:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->r:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->s:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->t:Ljava/util/Map;

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/dualboot/engine/c;->u:Z

    invoke-direct {p0}, Lcom/dualboot/engine/c;->x()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 6

    const/4 v5, 0x1

    const/4 v4, 0x0

    const/4 v0, 0x0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->a:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->b:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->c:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->d:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->e:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->f:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->g:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->h:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->i:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->j:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->k:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->l:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->m:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->n:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->o:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->p:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->q:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->r:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->s:Ljava/util/ArrayList;

    iput-object v0, p0, Lcom/dualboot/engine/c;->t:Ljava/util/Map;

    iput-boolean v5, p0, Lcom/dualboot/engine/c;->u:Z

    invoke-direct {p0, p1, p2, v5}, Lcom/dualboot/engine/c;->a(Landroid/content/Context;Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {p1}, Lcom/dualboot/b/a;->a(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v2

    if-eqz v2, :cond_1

    iget-object v0, p0, Lcom/dualboot/engine/c;->l:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->b(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    iget-object v0, p0, Lcom/dualboot/engine/c;->a:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->a(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    iget-object v0, p0, Lcom/dualboot/engine/c;->b:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->a(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    iget-object v0, p0, Lcom/dualboot/engine/c;->c:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->b(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    iget-object v0, p0, Lcom/dualboot/engine/c;->d:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->a(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    iget-object v0, p0, Lcom/dualboot/engine/c;->e:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->a(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    iget-object v0, p0, Lcom/dualboot/engine/c;->f:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->a(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    iget-object v0, p0, Lcom/dualboot/engine/c;->g:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->b(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    iget-object v0, p0, Lcom/dualboot/engine/c;->h:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->a(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    iget-object v0, p0, Lcom/dualboot/engine/c;->i:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->a(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    iget-object v0, p0, Lcom/dualboot/engine/c;->m:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->b(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    iget-object v0, p0, Lcom/dualboot/engine/c;->n:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->b(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    iget-object v0, p0, Lcom/dualboot/engine/c;->o:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->b(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    iget-object v0, p0, Lcom/dualboot/engine/c;->p:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->a(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    iget-object v0, p0, Lcom/dualboot/engine/c;->q:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->a(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    iget-object v0, p0, Lcom/dualboot/engine/c;->r:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->a(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    iget-object v0, p0, Lcom/dualboot/engine/c;->s:Ljava/util/ArrayList;

    invoke-static {v2, v0}, Lcom/dualboot/engine/c;->a(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V

    if-eqz v2, :cond_1

    const-string v0, "postload_checked_panning"

    invoke-interface {v2, v0, v4}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/engine/c;->m:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/engine/c;->n:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/engine/c;->m:Ljava/util/ArrayList;

    invoke-virtual {v0, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/h;

    iget-object v1, p0, Lcom/dualboot/engine/c;->n:Ljava/util/ArrayList;

    invoke-virtual {v1, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/dualboot/engine/h;

    invoke-interface {v2}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v3

    if-eqz v3, :cond_1

    iget-boolean v2, p0, Lcom/dualboot/engine/c;->u:Z

    if-eqz v2, :cond_0

    invoke-virtual {v1}, Lcom/dualboot/engine/h;->a()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {v0, v4}, Lcom/dualboot/engine/h;->b(I)V

    invoke-virtual {v1, v4}, Lcom/dualboot/engine/h;->b(I)V

    invoke-virtual {v0, v3}, Lcom/dualboot/engine/h;->a(Landroid/content/SharedPreferences$Editor;)V

    invoke-virtual {v1, v3}, Lcom/dualboot/engine/h;->a(Landroid/content/SharedPreferences$Editor;)V

    :cond_0
    const-string v0, "postload_checked_panning"

    invoke-interface {v3, v0, v5}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v3}, Landroid/content/SharedPreferences$Editor;->commit()Z

    :cond_1
    return-void
.end method

.method private a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/h;Ljava/util/ArrayList;)Lcom/dualboot/engine/h;
    .locals 0

    invoke-virtual {p3, p2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-direct {p0, p1, p2}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/f;)V

    return-object p2
.end method

.method private a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/i;Ljava/util/ArrayList;)Lcom/dualboot/engine/i;
    .locals 0

    invoke-virtual {p3, p2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-direct {p0, p1, p2}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/f;)V

    return-object p2
.end method

.method private static a(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V
    .locals 2

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lt v1, v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p1, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/i;

    invoke-virtual {v0, p0}, Lcom/dualboot/engine/i;->a(Landroid/content/SharedPreferences;)Z

    add-int/lit8 v0, v1, 0x1

    move v1, v0

    goto :goto_0
.end method

.method private a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/f;)V
    .locals 2

    invoke-virtual {p2}, Lcom/dualboot/engine/f;->c()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    if-lez v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/engine/c;->t:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    if-nez v0, :cond_0

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object v1, p0, Lcom/dualboot/engine/c;->t:Ljava/util/Map;

    invoke-interface {v1, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    invoke-virtual {v0, p2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_1
    return-void
.end method

.method private a(Lcom/dualboot/engine/d;Ljava/io/BufferedReader;Ljava/util/ArrayList;)V
    .locals 4

    invoke-virtual {p2}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    const/4 v0, 0x0

    :goto_0
    if-lt v0, v1, :cond_0

    return-void

    :cond_0
    new-instance v2, Lcom/dualboot/engine/i;

    invoke-direct {v2, p0}, Lcom/dualboot/engine/i;-><init>(Lcom/dualboot/engine/c;)V

    invoke-virtual {v2, p2}, Lcom/dualboot/engine/i;->a(Ljava/io/BufferedReader;)Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-direct {p0, p1, v2, p3}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/i;Ljava/util/ArrayList;)Lcom/dualboot/engine/i;

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0
.end method

.method private a(Lcom/dualboot/engine/d;Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/ArrayList;)V
    .locals 5

    invoke-virtual {p2, p3}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v2

    const/4 v0, 0x0

    :goto_0
    if-lt v0, v2, :cond_1

    :cond_0
    return-void

    :cond_1
    invoke-virtual {v1, v0}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v3

    if-eqz v3, :cond_2

    new-instance v4, Lcom/dualboot/engine/i;

    invoke-direct {v4, p0}, Lcom/dualboot/engine/i;-><init>(Lcom/dualboot/engine/c;)V

    invoke-virtual {v4, v3}, Lcom/dualboot/engine/i;->a(Lorg/json/JSONObject;)Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-direct {p0, p1, v4, p4}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/i;Ljava/util/ArrayList;)Lcom/dualboot/engine/i;

    :cond_2
    add-int/lit8 v0, v0, 0x1

    goto :goto_0
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;Z)Z
    .locals 14

    invoke-direct {p0}, Lcom/dualboot/engine/c;->x()V

    invoke-direct/range {p0 .. p2}, Lcom/dualboot/engine/c;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-direct/range {p0 .. p2}, Lcom/dualboot/engine/c;->b(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    :goto_0
    return v0

    :cond_0
    iget-object v0, p0, Lcom/dualboot/engine/c;->k:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v13

    if-lez v13, :cond_1

    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v0

    if-eqz v0, :cond_1

    const/4 v1, 0x0

    move v12, v1

    :goto_1
    if-lt v12, v13, :cond_4

    invoke-virtual {v0}, Lcom/dualboot/a/a;->d()V

    if-eqz p3, :cond_1

    invoke-virtual {v0, p1}, Lcom/dualboot/a/a;->a(Landroid/content/Context;)V

    :cond_1
    sget-object v0, Lcom/dualboot/engine/d;->c:Lcom/dualboot/engine/d;

    iget-object v1, p0, Lcom/dualboot/engine/c;->t:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    if-eqz v0, :cond_2

    new-instance v1, Lcom/dualboot/engine/g;

    invoke-direct {v1, p0}, Lcom/dualboot/engine/g;-><init>(Lcom/dualboot/engine/c;)V

    invoke-static {v0, v1}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V

    :cond_2
    const/4 v1, 0x0

    const/4 v0, 0x0

    move v2, v1

    move v1, v0

    :goto_2
    iget-object v0, p0, Lcom/dualboot/engine/c;->b:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lt v1, v0, :cond_9

    const/4 v1, 0x0

    const/4 v0, 0x0

    move v2, v1

    move v1, v0

    :goto_3
    iget-object v0, p0, Lcom/dualboot/engine/c;->d:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lt v1, v0, :cond_a

    const/4 v0, 0x1

    if-le v2, v0, :cond_3

    new-instance v0, Lcom/dualboot/engine/i;

    invoke-direct {v0, p0}, Lcom/dualboot/engine/i;-><init>(Lcom/dualboot/engine/c;)V

    const/4 v1, 0x3

    new-array v1, v1, [Ljava/lang/String;

    const/4 v2, 0x0

    const-string v3, "None"

    aput-object v3, v1, v2

    const/4 v2, 0x1

    const-string v3, "Double Tap"

    aput-object v3, v1, v2

    const/4 v2, 0x2

    const-string v3, "Swipe Up"

    aput-object v3, v1, v2

    const-string v2, "cameraset_switch_gesture"

    const-string v3, "Camera Gesture"

    const-string v4, "Choose the gesture that will cycle between available scenes"

    invoke-virtual {v0, v2, v3, v4, v1}, Lcom/dualboot/engine/i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/dualboot/engine/i;->b(I)V

    const-string v1, "Gestures"

    invoke-virtual {v0, v1}, Lcom/dualboot/engine/i;->a(Ljava/lang/String;)V

    sget-object v1, Lcom/dualboot/engine/d;->b:Lcom/dualboot/engine/d;

    iget-object v2, p0, Lcom/dualboot/engine/c;->p:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v2}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/i;Ljava/util/ArrayList;)Lcom/dualboot/engine/i;

    :cond_3
    new-instance v0, Lcom/dualboot/engine/h;

    invoke-direct {v0, p0}, Lcom/dualboot/engine/h;-><init>(Lcom/dualboot/engine/c;)V

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Boolean;

    const/4 v2, 0x0

    iget-boolean v3, p0, Lcom/dualboot/engine/c;->u:Z

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    aput-object v3, v1, v2

    const-string v2, "cameraset_pan_homescreen"

    const-string v3, "Homescreen Panning"

    const-string v4, "Pan the camera as the homescreen changes. This may not be supported on all devices"

    invoke-virtual {v0, v2, v3, v4, v1}, Lcom/dualboot/engine/h;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V

    const-string v1, "Panning Modes"

    invoke-virtual {v0, v1}, Lcom/dualboot/engine/h;->a(Ljava/lang/String;)V

    sget-object v1, Lcom/dualboot/engine/d;->b:Lcom/dualboot/engine/d;

    iget-object v2, p0, Lcom/dualboot/engine/c;->m:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v2}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/h;Ljava/util/ArrayList;)Lcom/dualboot/engine/h;

    new-instance v1, Lcom/dualboot/engine/h;

    invoke-direct {v1, p0}, Lcom/dualboot/engine/h;-><init>(Lcom/dualboot/engine/c;)V

    const/4 v0, 0x1

    new-array v2, v0, [Ljava/lang/Boolean;

    const/4 v3, 0x0

    iget-boolean v0, p0, Lcom/dualboot/engine/c;->u:Z

    if-eqz v0, :cond_b

    const/4 v0, 0x0

    :goto_4
    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    aput-object v0, v2, v3

    const-string v0, "cameraset_pan_manual"

    const-string v3, "Manual Panning"

    const-string v4, "Manually pan the camera based on swiping the screen. Recommended when homescreen panning is not supported"

    invoke-virtual {v1, v0, v3, v4, v2}, Lcom/dualboot/engine/h;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {v1}, Lcom/dualboot/engine/h;->n()V

    const-string v0, "Panning Modes"

    invoke-virtual {v1, v0}, Lcom/dualboot/engine/h;->a(Ljava/lang/String;)V

    sget-object v0, Lcom/dualboot/engine/d;->b:Lcom/dualboot/engine/d;

    iget-object v2, p0, Lcom/dualboot/engine/c;->n:Ljava/util/ArrayList;

    invoke-direct {p0, v0, v1, v2}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/h;Ljava/util/ArrayList;)Lcom/dualboot/engine/h;

    new-instance v0, Lcom/dualboot/engine/h;

    invoke-direct {v0, p0}, Lcom/dualboot/engine/h;-><init>(Lcom/dualboot/engine/c;)V

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Boolean;

    const/4 v2, 0x0

    const/4 v3, 0x0

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    aput-object v3, v1, v2

    const-string v2, "cameraset_pan_auto"

    const-string v3, "Auto Panning"

    const-string v4, "Automatically pan the camera back and forth"

    invoke-virtual {v0, v2, v3, v4, v1}, Lcom/dualboot/engine/h;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {v0}, Lcom/dualboot/engine/h;->n()V

    const-string v1, "Panning Modes"

    invoke-virtual {v0, v1}, Lcom/dualboot/engine/h;->a(Ljava/lang/String;)V

    sget-object v1, Lcom/dualboot/engine/d;->b:Lcom/dualboot/engine/d;

    iget-object v2, p0, Lcom/dualboot/engine/c;->o:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v2}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/h;Ljava/util/ArrayList;)Lcom/dualboot/engine/h;

    new-instance v0, Lcom/dualboot/engine/i;

    invoke-direct {v0, p0}, Lcom/dualboot/engine/i;-><init>(Lcom/dualboot/engine/c;)V

    const/4 v1, 0x3

    new-array v1, v1, [Ljava/lang/String;

    const/4 v2, 0x0

    const-string v3, "Slow"

    aput-object v3, v1, v2

    const/4 v2, 0x1

    const-string v3, "Medium"

    aput-object v3, v1, v2

    const/4 v2, 0x2

    const-string v3, "Fast"

    aput-object v3, v1, v2

    const-string v2, "cameraset_pan_auto_speed"

    const-string v3, "Auto Pan Speed"

    const-string v4, "Choose how fast the camera will auto pan"

    invoke-virtual {v0, v2, v3, v4, v1}, Lcom/dualboot/engine/i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/dualboot/engine/i;->b(I)V

    const-string v1, "Panning Settings"

    invoke-virtual {v0, v1}, Lcom/dualboot/engine/i;->a(Ljava/lang/String;)V

    sget-object v1, Lcom/dualboot/engine/d;->b:Lcom/dualboot/engine/d;

    iget-object v2, p0, Lcom/dualboot/engine/c;->q:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v2}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/i;Ljava/util/ArrayList;)Lcom/dualboot/engine/i;

    new-instance v0, Lcom/dualboot/engine/i;

    invoke-direct {v0, p0}, Lcom/dualboot/engine/i;-><init>(Lcom/dualboot/engine/c;)V

    const/4 v1, 0x3

    new-array v1, v1, [Ljava/lang/String;

    const/4 v2, 0x0

    const-string v3, "3 Homescreens"

    aput-object v3, v1, v2

    const/4 v2, 0x1

    const-string v3, "5 Homescreens"

    aput-object v3, v1, v2

    const/4 v2, 0x2

    const-string v3, "7 Homescreens"

    aput-object v3, v1, v2

    const-string v2, "cameraset_pan_manual_homescreen_count"

    const-string v3, "Number of Homescreens"

    const-string v4, "Choose the number of virtual homescreens when using manual panning. Match the number of homescreens on your device for best results"

    invoke-virtual {v0, v2, v3, v4, v1}, Lcom/dualboot/engine/i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/dualboot/engine/i;->b(I)V

    const-string v1, "Panning Settings"

    invoke-virtual {v0, v1}, Lcom/dualboot/engine/i;->a(Ljava/lang/String;)V

    sget-object v1, Lcom/dualboot/engine/d;->b:Lcom/dualboot/engine/d;

    iget-object v2, p0, Lcom/dualboot/engine/c;->s:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v2}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/i;Ljava/util/ArrayList;)Lcom/dualboot/engine/i;

    new-instance v0, Lcom/dualboot/engine/i;

    invoke-direct {v0, p0}, Lcom/dualboot/engine/i;-><init>(Lcom/dualboot/engine/c;)V

    const/4 v1, 0x3

    new-array v1, v1, [Ljava/lang/String;

    const/4 v2, 0x0

    const-string v3, "High Performance"

    aput-object v3, v1, v2

    const/4 v2, 0x1

    const-string v3, "Balanced"

    aput-object v3, v1, v2

    const/4 v2, 0x2

    const-string v3, "Battery Saver"

    aput-object v3, v1, v2

    const-string v2, "advanced_power_management"

    const-string v3, "Power Management"

    const-string v4, "Maximize performance, or conserve battery life"

    invoke-virtual {v0, v2, v3, v4, v1}, Lcom/dualboot/engine/i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/dualboot/engine/i;->b(I)V

    sget-object v1, Lcom/dualboot/engine/d;->k:Lcom/dualboot/engine/d;

    iget-object v2, p0, Lcom/dualboot/engine/c;->r:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v2}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/i;Ljava/util/ArrayList;)Lcom/dualboot/engine/i;

    sget-object v0, Lcom/dualboot/engine/d;->c:Lcom/dualboot/engine/d;

    invoke-direct {p0, v0}, Lcom/dualboot/engine/c;->c(Lcom/dualboot/engine/d;)V

    sget-object v0, Lcom/dualboot/engine/d;->f:Lcom/dualboot/engine/d;

    invoke-direct {p0, v0}, Lcom/dualboot/engine/c;->c(Lcom/dualboot/engine/d;)V

    sget-object v0, Lcom/dualboot/engine/d;->g:Lcom/dualboot/engine/d;

    invoke-direct {p0, v0}, Lcom/dualboot/engine/c;->c(Lcom/dualboot/engine/d;)V

    const/4 v0, 0x1

    goto/16 :goto_0

    :cond_4
    iget-object v1, p0, Lcom/dualboot/engine/c;->k:Ljava/util/ArrayList;

    invoke-virtual {v1, v12}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    move-object v7, v1

    check-cast v7, Lcom/dualboot/engine/i;

    invoke-virtual {v7}, Lcom/dualboot/engine/i;->d()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v7}, Lcom/dualboot/engine/i;->f()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v7}, Lcom/dualboot/engine/i;->e()Ljava/lang/String;

    move-result-object v3

    const-string v4, "$0.99"

    const/16 v2, 0x3b

    invoke-virtual {v3, v2}, Ljava/lang/String;->indexOf(I)I

    move-result v6

    if-lez v6, :cond_c

    const/4 v2, 0x0

    invoke-virtual {v3, v2, v6}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v2

    add-int/lit8 v6, v6, 0x1

    invoke-virtual {v3, v6}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    const/16 v6, 0x3b

    invoke-virtual {v3, v6}, Ljava/lang/String;->indexOf(I)I

    move-result v6

    if-lez v6, :cond_5

    add-int/lit8 v4, v6, 0x1

    invoke-virtual {v3, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v4

    const/4 v8, 0x0

    invoke-virtual {v3, v8, v6}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v3

    :cond_5
    :goto_5
    move-object v6, p1

    invoke-virtual/range {v0 .. v6}, Lcom/dualboot/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)Z

    move-result v4

    if-eqz v4, :cond_6

    invoke-virtual {v7}, Lcom/dualboot/engine/i;->g()I

    move-result v6

    if-lez v6, :cond_6

    const/4 v4, 0x0

    :goto_6
    if-lt v4, v6, :cond_7

    new-instance v6, Lcom/dualboot/engine/h;

    invoke-direct {v6, p0}, Lcom/dualboot/engine/h;-><init>(Lcom/dualboot/engine/c;)V

    const/4 v4, 0x1

    new-array v11, v4, [Ljava/lang/Boolean;

    const/4 v4, 0x0

    const/4 v7, 0x0

    invoke-static {v7}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v7

    aput-object v7, v11, v4

    move-object v7, v1

    move-object v8, v2

    move-object v9, v3

    move-object v10, v5

    invoke-virtual/range {v6 .. v11}, Lcom/dualboot/engine/h;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V

    sget-object v1, Lcom/dualboot/engine/d;->m:Lcom/dualboot/engine/d;

    iget-object v2, p0, Lcom/dualboot/engine/c;->l:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v6, v2}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/h;Ljava/util/ArrayList;)Lcom/dualboot/engine/h;

    :cond_6
    add-int/lit8 v1, v12, 0x1

    move v12, v1

    goto/16 :goto_1

    :cond_7
    invoke-virtual {v7, v4}, Lcom/dualboot/engine/i;->a(I)Ljava/lang/String;

    move-result-object v8

    const/16 v9, 0x3d

    invoke-virtual {v8, v9}, Ljava/lang/String;->indexOf(I)I

    move-result v9

    if-lez v9, :cond_8

    const/4 v10, 0x0

    invoke-virtual {v8, v10, v9}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v10

    add-int/lit8 v9, v9, 0x1

    invoke-virtual {v8, v9}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v1, v10, v8}, Lcom/dualboot/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    :cond_8
    add-int/lit8 v4, v4, 0x1

    goto :goto_6

    :cond_9
    iget-object v0, p0, Lcom/dualboot/engine/c;->b:Ljava/util/ArrayList;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/i;

    const-string v3, "noon"

    invoke-virtual {v0, v3}, Lcom/dualboot/engine/i;->c(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/dualboot/engine/i;->g()I

    move-result v0

    invoke-static {v2, v0}, Ljava/lang/Math;->max(II)I

    move-result v2

    add-int/lit8 v0, v1, 0x1

    move v1, v0

    goto/16 :goto_2

    :cond_a
    iget-object v0, p0, Lcom/dualboot/engine/c;->d:Ljava/util/ArrayList;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/i;

    invoke-virtual {v0}, Lcom/dualboot/engine/i;->g()I

    move-result v0

    invoke-static {v2, v0}, Ljava/lang/Math;->max(II)I

    move-result v2

    add-int/lit8 v0, v1, 0x1

    move v1, v0

    goto/16 :goto_3

    :cond_b
    const/4 v0, 0x1

    goto/16 :goto_4

    :cond_c
    move-object v2, v3

    goto/16 :goto_5
.end method

.method private static a(Ljava/util/ArrayList;Z)Z
    .locals 1

    invoke-virtual {p0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/h;

    invoke-virtual {v0}, Lcom/dualboot/engine/h;->a()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    :cond_0
    return p1
.end method

.method public static b(Lcom/dualboot/engine/d;)Ljava/lang/String;
    .locals 2

    invoke-static {}, Lcom/dualboot/engine/c;->w()[I

    move-result-object v0

    invoke-virtual {p0}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v1

    aget v0, v0, v1

    packed-switch v0, :pswitch_data_0

    :pswitch_0
    const-string v0, "Unknown"

    :goto_0
    return-object v0

    :pswitch_1
    const-string v0, "Themes"

    goto :goto_0

    :pswitch_2
    const-string v0, "Camera"

    goto :goto_0

    :pswitch_3
    const-string v0, "Environment & Time Of Day"

    goto :goto_0

    :pswitch_4
    const-string v0, "Messages"

    goto :goto_0

    :pswitch_5
    const-string v0, "Pictures"

    goto :goto_0

    :pswitch_6
    const-string v0, "Customization"

    goto :goto_0

    :pswitch_7
    const-string v0, "Toggles"

    goto :goto_0

    :pswitch_8
    const-string v0, "Interaction"

    goto :goto_0

    :pswitch_9
    const-string v0, "Information"

    goto :goto_0

    :pswitch_a
    const-string v0, "Social"

    goto :goto_0

    :pswitch_b
    const-string v0, "Advanced"

    goto :goto_0

    :pswitch_c
    const-string v0, "Upgrades"

    goto :goto_0

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_1
        :pswitch_2
        :pswitch_3
        :pswitch_4
        :pswitch_5
        :pswitch_6
        :pswitch_7
        :pswitch_8
        :pswitch_9
        :pswitch_a
        :pswitch_b
        :pswitch_0
        :pswitch_c
    .end packed-switch
.end method

.method private static b(Landroid/content/SharedPreferences;Ljava/util/ArrayList;)V
    .locals 2

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lt v1, v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p1, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/h;

    invoke-virtual {v0, p0}, Lcom/dualboot/engine/h;->a(Landroid/content/SharedPreferences;)Z

    add-int/lit8 v0, v1, 0x1

    move v1, v0

    goto :goto_0
.end method

.method private b(Lcom/dualboot/engine/d;Ljava/io/BufferedReader;Ljava/util/ArrayList;)V
    .locals 4

    invoke-virtual {p2}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    const/4 v0, 0x0

    :goto_0
    if-lt v0, v1, :cond_0

    return-void

    :cond_0
    new-instance v2, Lcom/dualboot/engine/h;

    invoke-direct {v2, p0}, Lcom/dualboot/engine/h;-><init>(Lcom/dualboot/engine/c;)V

    invoke-virtual {v2, p2}, Lcom/dualboot/engine/h;->a(Ljava/io/BufferedReader;)Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-direct {p0, p1, v2, p3}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/h;Ljava/util/ArrayList;)Lcom/dualboot/engine/h;

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0
.end method

.method private b(Lcom/dualboot/engine/d;Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/ArrayList;)V
    .locals 5

    invoke-virtual {p2, p3}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v2

    const/4 v0, 0x0

    :goto_0
    if-lt v0, v2, :cond_1

    :cond_0
    return-void

    :cond_1
    invoke-virtual {v1, v0}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v3

    if-eqz v3, :cond_2

    new-instance v4, Lcom/dualboot/engine/h;

    invoke-direct {v4, p0}, Lcom/dualboot/engine/h;-><init>(Lcom/dualboot/engine/c;)V

    invoke-virtual {v4, v3}, Lcom/dualboot/engine/h;->a(Lorg/json/JSONObject;)Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-direct {p0, p1, v4, p4}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lcom/dualboot/engine/h;Ljava/util/ArrayList;)Lcom/dualboot/engine/h;

    :cond_2
    add-int/lit8 v0, v0, 0x1

    goto :goto_0
.end method

.method private b(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 6

    const/4 v1, 0x0

    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v0

    invoke-virtual {v0, p2}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-result-object v2

    if-eqz v2, :cond_5

    :try_start_1
    new-instance v0, Ljava/io/BufferedReader;

    new-instance v3, Ljava/io/InputStreamReader;

    invoke-direct {v3, v2}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    const/16 v4, 0x100

    invoke-direct {v0, v3, v4}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_4
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    sget-object v1, Lcom/dualboot/engine/d;->c:Lcom/dualboot/engine/d;

    iget-object v3, p0, Lcom/dualboot/engine/c;->b:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v3}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Ljava/io/BufferedReader;Ljava/util/ArrayList;)V

    sget-object v1, Lcom/dualboot/engine/d;->c:Lcom/dualboot/engine/d;

    iget-object v3, p0, Lcom/dualboot/engine/c;->c:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v3}, Lcom/dualboot/engine/c;->b(Lcom/dualboot/engine/d;Ljava/io/BufferedReader;Ljava/util/ArrayList;)V

    sget-object v1, Lcom/dualboot/engine/d;->b:Lcom/dualboot/engine/d;

    iget-object v3, p0, Lcom/dualboot/engine/c;->d:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v3}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Ljava/io/BufferedReader;Ljava/util/ArrayList;)V

    sget-object v1, Lcom/dualboot/engine/d;->f:Lcom/dualboot/engine/d;

    iget-object v3, p0, Lcom/dualboot/engine/c;->e:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v3}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Ljava/io/BufferedReader;Ljava/util/ArrayList;)V

    sget-object v1, Lcom/dualboot/engine/d;->g:Lcom/dualboot/engine/d;

    iget-object v3, p0, Lcom/dualboot/engine/c;->g:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v3}, Lcom/dualboot/engine/c;->b(Lcom/dualboot/engine/d;Ljava/io/BufferedReader;Ljava/util/ArrayList;)V

    sget-object v1, Lcom/dualboot/engine/d;->d:Lcom/dualboot/engine/d;

    iget-object v3, p0, Lcom/dualboot/engine/c;->h:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v3}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Ljava/io/BufferedReader;Ljava/util/ArrayList;)V

    sget-object v1, Lcom/dualboot/engine/d;->e:Lcom/dualboot/engine/d;

    iget-object v3, p0, Lcom/dualboot/engine/c;->i:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v3}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Ljava/io/BufferedReader;Ljava/util/ArrayList;)V

    sget-object v1, Lcom/dualboot/engine/d;->a:Lcom/dualboot/engine/d;

    iget-object v3, p0, Lcom/dualboot/engine/c;->j:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v3}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Ljava/io/BufferedReader;Ljava/util/ArrayList;)V

    sget-object v1, Lcom/dualboot/engine/d;->f:Lcom/dualboot/engine/d;

    iget-object v3, p0, Lcom/dualboot/engine/c;->f:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v3}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Ljava/io/BufferedReader;Ljava/util/ArrayList;)V

    sget-object v1, Lcom/dualboot/engine/d;->l:Lcom/dualboot/engine/d;

    iget-object v3, p0, Lcom/dualboot/engine/c;->k:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v3}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Ljava/io/BufferedReader;Ljava/util/ArrayList;)V

    sget-object v1, Lcom/dualboot/engine/d;->c:Lcom/dualboot/engine/d;

    iget-object v3, p0, Lcom/dualboot/engine/c;->a:Ljava/util/ArrayList;

    invoke-direct {p0, v1, v0, v3}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Ljava/io/BufferedReader;Ljava/util/ArrayList;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_5
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    :try_start_3
    invoke-virtual {v0}, Ljava/io/BufferedReader;->close()V

    if-eqz v2, :cond_0

    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_6

    :cond_0
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0

    :catch_0
    move-exception v0

    move-object v0, v1

    :goto_2
    :try_start_4
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Unable to read file as text: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    if-eqz v0, :cond_1

    :try_start_5
    invoke-virtual {v0}, Ljava/io/BufferedReader;->close()V

    :cond_1
    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    :cond_2
    :goto_3
    const/4 v0, 0x0

    goto :goto_1

    :catchall_0
    move-exception v0

    move-object v2, v1

    :goto_4
    if-eqz v1, :cond_3

    :try_start_6
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V

    :cond_3
    if-eqz v2, :cond_4

    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_2

    :cond_4
    :goto_5
    throw v0

    :cond_5
    if-eqz v2, :cond_2

    :try_start_7
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_1

    goto :goto_3

    :catch_1
    move-exception v0

    goto :goto_3

    :catch_2
    move-exception v1

    goto :goto_5

    :catchall_1
    move-exception v0

    goto :goto_4

    :catchall_2
    move-exception v1

    move-object v5, v1

    move-object v1, v0

    move-object v0, v5

    goto :goto_4

    :catchall_3
    move-exception v2

    move-object v5, v2

    move-object v2, v1

    move-object v1, v0

    move-object v0, v5

    goto :goto_4

    :catch_3
    move-exception v0

    goto :goto_3

    :catch_4
    move-exception v0

    move-object v0, v1

    move-object v1, v2

    goto :goto_2

    :catch_5
    move-exception v1

    move-object v1, v2

    goto :goto_2

    :catch_6
    move-exception v0

    goto :goto_0
.end method

.method private c(Lcom/dualboot/engine/d;)V
    .locals 2

    invoke-virtual {p0, p1}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;)Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_2

    :cond_1
    return-void

    :cond_2
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/f;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/dualboot/engine/f;->m()V

    goto :goto_0
.end method

.method private c(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 7

    const/4 v1, 0x0

    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v0

    invoke-virtual {v0, p2}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-result-object v2

    if-eqz v2, :cond_6

    :try_start_1
    new-instance v0, Ljava/io/BufferedReader;

    new-instance v3, Ljava/io/InputStreamReader;

    invoke-direct {v3, v2}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    const/16 v4, 0x100

    invoke-direct {v0, v3, v4}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_4
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v1

    :goto_0
    if-nez v1, :cond_1

    new-instance v1, Lorg/json/JSONObject;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    sget-object v3, Lcom/dualboot/engine/d;->c:Lcom/dualboot/engine/d;

    const-string v4, "TimeOfDay"

    iget-object v5, p0, Lcom/dualboot/engine/c;->b:Ljava/util/ArrayList;

    invoke-direct {p0, v3, v1, v4, v5}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/ArrayList;)V

    sget-object v3, Lcom/dualboot/engine/d;->c:Lcom/dualboot/engine/d;

    const-string v4, "AutoTimeOfDay"

    iget-object v5, p0, Lcom/dualboot/engine/c;->c:Ljava/util/ArrayList;

    invoke-direct {p0, v3, v1, v4, v5}, Lcom/dualboot/engine/c;->b(Lcom/dualboot/engine/d;Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/ArrayList;)V

    sget-object v3, Lcom/dualboot/engine/d;->b:Lcom/dualboot/engine/d;

    const-string v4, "CameraSets"

    iget-object v5, p0, Lcom/dualboot/engine/c;->d:Ljava/util/ArrayList;

    invoke-direct {p0, v3, v1, v4, v5}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/ArrayList;)V

    sget-object v3, Lcom/dualboot/engine/d;->f:Lcom/dualboot/engine/d;

    const-string v4, "TextureGroups"

    iget-object v5, p0, Lcom/dualboot/engine/c;->e:Ljava/util/ArrayList;

    invoke-direct {p0, v3, v1, v4, v5}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/ArrayList;)V

    sget-object v3, Lcom/dualboot/engine/d;->g:Lcom/dualboot/engine/d;

    const-string v4, "ModelToggles"

    iget-object v5, p0, Lcom/dualboot/engine/c;->g:Ljava/util/ArrayList;

    invoke-direct {p0, v3, v1, v4, v5}, Lcom/dualboot/engine/c;->b(Lcom/dualboot/engine/d;Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/ArrayList;)V

    sget-object v3, Lcom/dualboot/engine/d;->d:Lcom/dualboot/engine/d;

    const-string v4, "TextureFonts"

    iget-object v5, p0, Lcom/dualboot/engine/c;->h:Ljava/util/ArrayList;

    invoke-direct {p0, v3, v1, v4, v5}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/ArrayList;)V

    sget-object v3, Lcom/dualboot/engine/d;->e:Lcom/dualboot/engine/d;

    const-string v4, "TextureFiles"

    iget-object v5, p0, Lcom/dualboot/engine/c;->i:Ljava/util/ArrayList;

    invoke-direct {p0, v3, v1, v4, v5}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/ArrayList;)V

    sget-object v3, Lcom/dualboot/engine/d;->a:Lcom/dualboot/engine/d;

    const-string v4, "Themes"

    iget-object v5, p0, Lcom/dualboot/engine/c;->j:Ljava/util/ArrayList;

    invoke-direct {p0, v3, v1, v4, v5}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/ArrayList;)V

    sget-object v3, Lcom/dualboot/engine/d;->f:Lcom/dualboot/engine/d;

    const-string v4, "ModelSwaps"

    iget-object v5, p0, Lcom/dualboot/engine/c;->f:Ljava/util/ArrayList;

    invoke-direct {p0, v3, v1, v4, v5}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/ArrayList;)V

    sget-object v3, Lcom/dualboot/engine/d;->l:Lcom/dualboot/engine/d;

    const-string v4, "IAB"

    iget-object v5, p0, Lcom/dualboot/engine/c;->k:Ljava/util/ArrayList;

    invoke-direct {p0, v3, v1, v4, v5}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/ArrayList;)V

    sget-object v3, Lcom/dualboot/engine/d;->c:Lcom/dualboot/engine/d;

    const-string v4, "Environments"

    iget-object v5, p0, Lcom/dualboot/engine/c;->a:Ljava/util/ArrayList;

    invoke-direct {p0, v3, v1, v4, v5}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/ArrayList;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_5
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    :try_start_3
    invoke-virtual {v0}, Ljava/io/BufferedReader;->close()V

    if-eqz v2, :cond_0

    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_6

    :cond_0
    :goto_1
    const/4 v0, 0x1

    :goto_2
    return v0

    :cond_1
    :try_start_4
    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_5
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    move-result-object v1

    goto :goto_0

    :catch_0
    move-exception v0

    move-object v0, v1

    :goto_3
    :try_start_5
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Unable to read file as JSON: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    if-eqz v0, :cond_2

    :try_start_6
    invoke-virtual {v0}, Ljava/io/BufferedReader;->close()V

    :cond_2
    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_3

    :cond_3
    :goto_4
    const/4 v0, 0x0

    goto :goto_2

    :catchall_0
    move-exception v0

    move-object v2, v1

    :goto_5
    if-eqz v1, :cond_4

    :try_start_7
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V

    :cond_4
    if-eqz v2, :cond_5

    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_2

    :cond_5
    :goto_6
    throw v0

    :cond_6
    if-eqz v2, :cond_3

    :try_start_8
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_1

    goto :goto_4

    :catch_1
    move-exception v0

    goto :goto_4

    :catch_2
    move-exception v1

    goto :goto_6

    :catchall_1
    move-exception v0

    goto :goto_5

    :catchall_2
    move-exception v1

    move-object v6, v1

    move-object v1, v0

    move-object v0, v6

    goto :goto_5

    :catchall_3
    move-exception v2

    move-object v6, v2

    move-object v2, v1

    move-object v1, v0

    move-object v0, v6

    goto :goto_5

    :catch_3
    move-exception v0

    goto :goto_4

    :catch_4
    move-exception v0

    move-object v0, v1

    move-object v1, v2

    goto :goto_3

    :catch_5
    move-exception v1

    move-object v1, v2

    goto :goto_3

    :catch_6
    move-exception v0

    goto :goto_1
.end method

.method public static synthetic w()[I
    .locals 3

    sget-object v0, Lcom/dualboot/engine/c;->v:[I

    if-eqz v0, :cond_0

    :goto_0
    return-object v0

    :cond_0
    invoke-static {}, Lcom/dualboot/engine/d;->values()[Lcom/dualboot/engine/d;

    move-result-object v0

    array-length v0, v0

    new-array v0, v0, [I

    :try_start_0
    sget-object v1, Lcom/dualboot/engine/d;->k:Lcom/dualboot/engine/d;

    invoke-virtual {v1}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v1

    const/16 v2, 0xb

    aput v2, v0, v1
    :try_end_0
    .catch Ljava/lang/NoSuchFieldError; {:try_start_0 .. :try_end_0} :catch_c

    :goto_1
    :try_start_1
    sget-object v1, Lcom/dualboot/engine/d;->b:Lcom/dualboot/engine/d;

    invoke-virtual {v1}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v1

    const/4 v2, 0x2

    aput v2, v0, v1
    :try_end_1
    .catch Ljava/lang/NoSuchFieldError; {:try_start_1 .. :try_end_1} :catch_b

    :goto_2
    :try_start_2
    sget-object v1, Lcom/dualboot/engine/d;->f:Lcom/dualboot/engine/d;

    invoke-virtual {v1}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v1

    const/4 v2, 0x6

    aput v2, v0, v1
    :try_end_2
    .catch Ljava/lang/NoSuchFieldError; {:try_start_2 .. :try_end_2} :catch_a

    :goto_3
    :try_start_3
    sget-object v1, Lcom/dualboot/engine/d;->l:Lcom/dualboot/engine/d;

    invoke-virtual {v1}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v1

    const/16 v2, 0xc

    aput v2, v0, v1
    :try_end_3
    .catch Ljava/lang/NoSuchFieldError; {:try_start_3 .. :try_end_3} :catch_9

    :goto_4
    :try_start_4
    sget-object v1, Lcom/dualboot/engine/d;->m:Lcom/dualboot/engine/d;

    invoke-virtual {v1}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v1

    const/16 v2, 0xd

    aput v2, v0, v1
    :try_end_4
    .catch Ljava/lang/NoSuchFieldError; {:try_start_4 .. :try_end_4} :catch_8

    :goto_5
    :try_start_5
    sget-object v1, Lcom/dualboot/engine/d;->e:Lcom/dualboot/engine/d;

    invoke-virtual {v1}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v1

    const/4 v2, 0x5

    aput v2, v0, v1
    :try_end_5
    .catch Ljava/lang/NoSuchFieldError; {:try_start_5 .. :try_end_5} :catch_7

    :goto_6
    :try_start_6
    sget-object v1, Lcom/dualboot/engine/d;->i:Lcom/dualboot/engine/d;

    invoke-virtual {v1}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v1

    const/16 v2, 0x9

    aput v2, v0, v1
    :try_end_6
    .catch Ljava/lang/NoSuchFieldError; {:try_start_6 .. :try_end_6} :catch_6

    :goto_7
    :try_start_7
    sget-object v1, Lcom/dualboot/engine/d;->h:Lcom/dualboot/engine/d;

    invoke-virtual {v1}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v1

    const/16 v2, 0x8

    aput v2, v0, v1
    :try_end_7
    .catch Ljava/lang/NoSuchFieldError; {:try_start_7 .. :try_end_7} :catch_5

    :goto_8
    :try_start_8
    sget-object v1, Lcom/dualboot/engine/d;->d:Lcom/dualboot/engine/d;

    invoke-virtual {v1}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v1

    const/4 v2, 0x4

    aput v2, v0, v1
    :try_end_8
    .catch Ljava/lang/NoSuchFieldError; {:try_start_8 .. :try_end_8} :catch_4

    :goto_9
    :try_start_9
    sget-object v1, Lcom/dualboot/engine/d;->j:Lcom/dualboot/engine/d;

    invoke-virtual {v1}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v1

    const/16 v2, 0xa

    aput v2, v0, v1
    :try_end_9
    .catch Ljava/lang/NoSuchFieldError; {:try_start_9 .. :try_end_9} :catch_3

    :goto_a
    :try_start_a
    sget-object v1, Lcom/dualboot/engine/d;->a:Lcom/dualboot/engine/d;

    invoke-virtual {v1}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v1

    const/4 v2, 0x1

    aput v2, v0, v1
    :try_end_a
    .catch Ljava/lang/NoSuchFieldError; {:try_start_a .. :try_end_a} :catch_2

    :goto_b
    :try_start_b
    sget-object v1, Lcom/dualboot/engine/d;->c:Lcom/dualboot/engine/d;

    invoke-virtual {v1}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v1

    const/4 v2, 0x3

    aput v2, v0, v1
    :try_end_b
    .catch Ljava/lang/NoSuchFieldError; {:try_start_b .. :try_end_b} :catch_1

    :goto_c
    :try_start_c
    sget-object v1, Lcom/dualboot/engine/d;->g:Lcom/dualboot/engine/d;

    invoke-virtual {v1}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v1

    const/4 v2, 0x7

    aput v2, v0, v1
    :try_end_c
    .catch Ljava/lang/NoSuchFieldError; {:try_start_c .. :try_end_c} :catch_0

    :goto_d
    sput-object v0, Lcom/dualboot/engine/c;->v:[I

    goto/16 :goto_0

    :catch_0
    move-exception v1

    goto :goto_d

    :catch_1
    move-exception v1

    goto :goto_c

    :catch_2
    move-exception v1

    goto :goto_b

    :catch_3
    move-exception v1

    goto :goto_a

    :catch_4
    move-exception v1

    goto :goto_9

    :catch_5
    move-exception v1

    goto :goto_8

    :catch_6
    move-exception v1

    goto :goto_7

    :catch_7
    move-exception v1

    goto :goto_6

    :catch_8
    move-exception v1

    goto :goto_5

    :catch_9
    move-exception v1

    goto :goto_4

    :catch_a
    move-exception v1

    goto :goto_3

    :catch_b
    move-exception v1

    goto/16 :goto_2

    :catch_c
    move-exception v1

    goto/16 :goto_1
.end method

.method private x()V
    .locals 1

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->a:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->b:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->c:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->d:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->e:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->f:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->g:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->h:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->i:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->j:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->k:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->l:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->m:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->n:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->o:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->p:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->q:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->r:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->s:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/TreeMap;

    invoke-direct {v0}, Ljava/util/TreeMap;-><init>()V

    iput-object v0, p0, Lcom/dualboot/engine/c;->t:Ljava/util/Map;

    new-instance v0, Lcom/dualboot/engine/b;

    invoke-direct {v0}, Lcom/dualboot/engine/b;-><init>()V

    iget-boolean v0, v0, Lcom/dualboot/engine/b;->a:Z

    iput-boolean v0, p0, Lcom/dualboot/engine/c;->u:Z

    return-void
.end method


# virtual methods
.method public final a(I)Lcom/dualboot/engine/f;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->a:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/f;

    return-object v0
.end method

.method public final a(Lcom/dualboot/engine/d;)Ljava/util/ArrayList;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->t:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    return-object v0
.end method

.method public final a()Z
    .locals 2

    iget-object v0, p0, Lcom/dualboot/engine/c;->m:Ljava/util/ArrayList;

    iget-boolean v1, p0, Lcom/dualboot/engine/c;->u:Z

    invoke-static {v0, v1}, Lcom/dualboot/engine/c;->a(Ljava/util/ArrayList;Z)Z

    move-result v0

    return v0
.end method

.method public final a(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/dualboot/engine/c;->a(Landroid/content/Context;Ljava/lang/String;Z)Z

    move-result v0

    return v0
.end method

.method public final b(I)Lcom/dualboot/engine/f;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->b:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/f;

    return-object v0
.end method

.method public final b()Z
    .locals 2

    iget-object v1, p0, Lcom/dualboot/engine/c;->n:Ljava/util/ArrayList;

    iget-boolean v0, p0, Lcom/dualboot/engine/c;->u:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    :goto_0
    invoke-static {v1, v0}, Lcom/dualboot/engine/c;->a(Ljava/util/ArrayList;Z)Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x1

    goto :goto_0
.end method

.method public final c(I)Lcom/dualboot/engine/f;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->c:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/f;

    return-object v0
.end method

.method public final c()Z
    .locals 2

    iget-object v0, p0, Lcom/dualboot/engine/c;->o:Ljava/util/ArrayList;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/dualboot/engine/c;->a(Ljava/util/ArrayList;Z)Z

    move-result v0

    return v0
.end method

.method public final d()I
    .locals 2

    iget-object v0, p0, Lcom/dualboot/engine/c;->p:Ljava/util/ArrayList;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/i;

    invoke-virtual {v0}, Lcom/dualboot/engine/i;->k()I

    move-result v0

    return v0
.end method

.method public final d(I)Lcom/dualboot/engine/f;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->d:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/f;

    return-object v0
.end method

.method public final e()I
    .locals 2

    iget-object v0, p0, Lcom/dualboot/engine/c;->q:Ljava/util/ArrayList;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/i;

    invoke-virtual {v0}, Lcom/dualboot/engine/i;->k()I

    move-result v0

    return v0
.end method

.method public final e(I)Lcom/dualboot/engine/f;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->e:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/f;

    return-object v0
.end method

.method public final f()I
    .locals 2

    iget-object v0, p0, Lcom/dualboot/engine/c;->r:Ljava/util/ArrayList;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/i;

    invoke-virtual {v0}, Lcom/dualboot/engine/i;->k()I

    move-result v0

    return v0
.end method

.method public final f(I)Lcom/dualboot/engine/f;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->f:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/f;

    return-object v0
.end method

.method public final g()I
    .locals 2

    iget-object v0, p0, Lcom/dualboot/engine/c;->s:Ljava/util/ArrayList;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/i;

    invoke-virtual {v0}, Lcom/dualboot/engine/i;->k()I

    move-result v0

    return v0
.end method

.method public final g(I)Lcom/dualboot/engine/f;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->g:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/f;

    return-object v0
.end method

.method public final h(I)Lcom/dualboot/engine/f;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->h:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/f;

    return-object v0
.end method

.method public final h()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/dualboot/engine/c;->m:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    :goto_0
    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/dualboot/engine/c;->m:Ljava/util/ArrayList;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/h;

    invoke-virtual {v0}, Lcom/dualboot/engine/h;->c()Ljava/lang/String;

    move-result-object v0

    goto :goto_0
.end method

.method public final i(I)Lcom/dualboot/engine/f;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->i:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/f;

    return-object v0
.end method

.method public final i()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/dualboot/engine/c;->n:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    :goto_0
    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/dualboot/engine/c;->n:Ljava/util/ArrayList;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/h;

    invoke-virtual {v0}, Lcom/dualboot/engine/h;->c()Ljava/lang/String;

    move-result-object v0

    goto :goto_0
.end method

.method public final j()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/dualboot/engine/c;->o:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    :goto_0
    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/dualboot/engine/c;->o:Ljava/util/ArrayList;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/h;

    invoke-virtual {v0}, Lcom/dualboot/engine/h;->c()Ljava/lang/String;

    move-result-object v0

    goto :goto_0
.end method

.method public final k()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/dualboot/engine/c;->q:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    :goto_0
    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/dualboot/engine/c;->q:Ljava/util/ArrayList;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/i;

    invoke-virtual {v0}, Lcom/dualboot/engine/i;->c()Ljava/lang/String;

    move-result-object v0

    goto :goto_0
.end method

.method public final l()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/dualboot/engine/c;->s:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    :goto_0
    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/dualboot/engine/c;->s:Ljava/util/ArrayList;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/engine/i;

    invoke-virtual {v0}, Lcom/dualboot/engine/i;->c()Ljava/lang/String;

    move-result-object v0

    goto :goto_0
.end method

.method public final m()I
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->a:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    return v0
.end method

.method public final n()I
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->b:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    return v0
.end method

.method public final o()I
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->c:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    return v0
.end method

.method public final p()I
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->d:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    return v0
.end method

.method public final q()I
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->e:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    return v0
.end method

.method public final r()I
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->f:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    return v0
.end method

.method public final s()I
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->g:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    return v0
.end method

.method public final t()I
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->h:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    return v0
.end method

.method public final u()I
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->i:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    return v0
.end method

.method public final v()Z
    .locals 1

    iget-object v0, p0, Lcom/dualboot/engine/c;->p:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    :goto_0
    return v0

    :cond_0
    const/4 v0, 0x1

    goto :goto_0
.end method
