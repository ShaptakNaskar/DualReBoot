.class final Lcom/dualboot/e/n;
.super Landroid/service/wallpaper/WallpaperService$Engine;

# interfaces
.implements Landroid/location/LocationListener;


# instance fields
.field a:Lcom/dualboot/util/b;

.field final synthetic b:Lcom/dualboot/e/l;

.field private c:Lcom/dualboot/c/g;

.field private final d:Landroid/content/Context;

.field private e:J

.field private f:Lcom/dualboot/e/m;

.field private g:F

.field private h:F

.field private i:Ljava/util/ArrayList;

.field private j:Ljava/lang/String;

.field private k:Z

.field private l:Z

.field private m:Lcom/dualboot/e/p;


# direct methods
.method constructor <init>(Lcom/dualboot/e/l;Landroid/content/Context;)V
    .locals 5

    const/4 v4, 0x0

    const/4 v3, 0x0

    const/4 v2, 0x0

    iput-object p1, p0, Lcom/dualboot/e/n;->b:Lcom/dualboot/e/l;

    invoke-direct {p0, p1}, Landroid/service/wallpaper/WallpaperService$Engine;-><init>(Landroid/service/wallpaper/WallpaperService;)V

    iput-object v2, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    const-wide/16 v0, 0x5

    iput-wide v0, p0, Lcom/dualboot/e/n;->e:J

    sget-object v0, Lcom/dualboot/e/m;->b:Lcom/dualboot/e/m;

    iput-object v0, p0, Lcom/dualboot/e/n;->f:Lcom/dualboot/e/m;

    iput v3, p0, Lcom/dualboot/e/n;->g:F

    iput v3, p0, Lcom/dualboot/e/n;->h:F

    iput-object v2, p0, Lcom/dualboot/e/n;->i:Ljava/util/ArrayList;

    iput-object v2, p0, Lcom/dualboot/e/n;->j:Ljava/lang/String;

    iput-boolean v4, p0, Lcom/dualboot/e/n;->k:Z

    iput-boolean v4, p0, Lcom/dualboot/e/n;->l:Z

    iput-object v2, p0, Lcom/dualboot/e/n;->a:Lcom/dualboot/util/b;

    iput-object v2, p0, Lcom/dualboot/e/n;->m:Lcom/dualboot/e/p;

    iput-object v2, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/e/n;->d:Landroid/content/Context;

    return-void
.end method

.method static synthetic a(Lcom/dualboot/e/n;)Lcom/dualboot/c/g;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    return-object v0
.end method

.method private a(Landroid/location/Location;)V
    .locals 4

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/location/Location;->getLatitude()D

    move-result-wide v0

    double-to-float v1, v0

    invoke-virtual {p1}, Landroid/location/Location;->getLongitude()D

    move-result-wide v2

    double-to-float v2, v2

    iget v0, p0, Lcom/dualboot/e/n;->g:F

    cmpl-float v0, v1, v0

    if-nez v0, :cond_1

    iget v0, p0, Lcom/dualboot/e/n;->h:F

    cmpl-float v0, v2, v0

    if-nez v0, :cond_1

    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_0

    iput v1, p0, Lcom/dualboot/e/n;->g:F

    iput v2, p0, Lcom/dualboot/e/n;->h:F

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Service/Engine/UpdateLocation = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/dualboot/e/n;->g:F

    invoke-static {v1}, Ljava/lang/Float;->toString(F)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, " x "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    iget v1, p0, Lcom/dualboot/e/n;->h:F

    invoke-static {v1}, Ljava/lang/Float;->toString(F)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    iget v1, p0, Lcom/dualboot/e/n;->g:F

    iget v2, p0, Lcom/dualboot/e/n;->h:F

    invoke-virtual {v0, v1, v2}, Lcom/dualboot/c/g;->a(FF)V

    :cond_0
    return-void

    :cond_1
    const/4 v0, 0x1

    goto :goto_0
.end method

.method static synthetic b(Lcom/dualboot/e/n;)Lcom/dualboot/e/m;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/n;->f:Lcom/dualboot/e/m;

    return-object v0
.end method

.method private b()V
    .locals 8

    const/4 v0, 0x0

    const/4 v7, 0x2

    const/4 v6, 0x1

    iget-object v1, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    if-eqz v1, :cond_7

    iget-object v1, p0, Lcom/dualboot/e/n;->b:Lcom/dualboot/e/l;

    invoke-virtual {v1}, Lcom/dualboot/e/l;->a()Lcom/dualboot/e/j;

    move-result-object v1

    new-instance v2, Lcom/dualboot/engine/c;

    iget-object v3, p0, Lcom/dualboot/e/n;->d:Landroid/content/Context;

    invoke-virtual {v1}, Lcom/dualboot/e/j;->b()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v2, v3, v1}, Lcom/dualboot/engine/c;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    invoke-virtual {v2}, Lcom/dualboot/engine/c;->p()I

    move-result v1

    if-lez v1, :cond_0

    invoke-virtual {v2, v0}, Lcom/dualboot/engine/c;->d(I)Lcom/dualboot/engine/f;

    move-result-object v1

    invoke-virtual {v1}, Lcom/dualboot/engine/f;->g()I

    move-result v3

    if-le v3, v6, :cond_0

    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4, v3}, Ljava/util/ArrayList;-><init>(I)V

    iput-object v4, p0, Lcom/dualboot/e/n;->i:Ljava/util/ArrayList;

    invoke-virtual {v1}, Lcom/dualboot/engine/f;->c()Ljava/lang/String;

    move-result-object v4

    iput-object v4, p0, Lcom/dualboot/e/n;->j:Ljava/lang/String;

    :goto_0
    if-lt v0, v3, :cond_8

    :cond_0
    invoke-virtual {v2}, Lcom/dualboot/engine/c;->v()Z

    move-result v0

    if-eqz v0, :cond_1

    sget-object v0, Lcom/dualboot/e/m;->b:Lcom/dualboot/e/m;

    iput-object v0, p0, Lcom/dualboot/e/n;->f:Lcom/dualboot/e/m;

    invoke-virtual {v2}, Lcom/dualboot/engine/c;->d()I

    move-result v0

    if-nez v0, :cond_a

    sget-object v0, Lcom/dualboot/e/m;->a:Lcom/dualboot/e/m;

    iput-object v0, p0, Lcom/dualboot/e/n;->f:Lcom/dualboot/e/m;

    :cond_1
    :goto_1
    sget-object v0, Lcom/dualboot/c/i;->a:Lcom/dualboot/c/i;

    invoke-virtual {v2}, Lcom/dualboot/engine/c;->a()Z

    move-result v1

    invoke-virtual {v2}, Lcom/dualboot/engine/c;->b()Z

    move-result v3

    invoke-virtual {v2}, Lcom/dualboot/engine/c;->c()Z

    move-result v4

    if-eqz v3, :cond_c

    sget-object v0, Lcom/dualboot/c/i;->c:Lcom/dualboot/c/i;

    :cond_2
    :goto_2
    iget-object v1, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    invoke-virtual {v1, v0}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/i;)V

    sget-object v0, Lcom/dualboot/c/h;->b:Lcom/dualboot/c/h;

    invoke-virtual {v2}, Lcom/dualboot/engine/c;->e()I

    move-result v1

    if-nez v1, :cond_e

    sget-object v0, Lcom/dualboot/c/h;->a:Lcom/dualboot/c/h;

    :cond_3
    :goto_3
    iget-object v1, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    iget-object v3, p0, Lcom/dualboot/e/n;->b:Lcom/dualboot/e/l;

    invoke-static {}, Lcom/dualboot/e/l;->c()J

    move-result-wide v3

    invoke-virtual {v1, v0, v3, v4}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/h;J)V

    invoke-virtual {v2}, Lcom/dualboot/engine/c;->g()I

    move-result v3

    iget-wide v0, p0, Lcom/dualboot/e/n;->e:J

    if-nez v3, :cond_10

    const-wide/16 v0, 0x3

    :cond_4
    :goto_4
    iget-wide v3, p0, Lcom/dualboot/e/n;->e:J

    cmp-long v3, v0, v3

    if-eqz v3, :cond_5

    iput-wide v0, p0, Lcom/dualboot/e/n;->e:J

    new-instance v0, Lcom/dualboot/e/q;

    iget-object v1, p0, Lcom/dualboot/e/n;->d:Landroid/content/Context;

    iget-wide v3, p0, Lcom/dualboot/e/n;->e:J

    invoke-direct {v0, p0, v1, v3, v4}, Lcom/dualboot/e/q;-><init>(Lcom/dualboot/e/n;Landroid/content/Context;J)V

    iput-object v0, p0, Lcom/dualboot/e/n;->a:Lcom/dualboot/util/b;

    :cond_5
    sget-object v0, Lcom/dualboot/c/k;->b:Lcom/dualboot/c/k;

    invoke-virtual {v2}, Lcom/dualboot/engine/c;->f()I

    move-result v1

    if-nez v1, :cond_12

    sget-object v0, Lcom/dualboot/c/k;->a:Lcom/dualboot/c/k;

    :cond_6
    :goto_5
    iget-object v1, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    invoke-virtual {v1, v0}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/k;)V

    :cond_7
    return-void

    :cond_8
    invoke-virtual {v1, v0}, Lcom/dualboot/engine/f;->a(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Lcom/dualboot/engine/f;->d(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_9

    iget-object v5, p0, Lcom/dualboot/e/n;->i:Ljava/util/ArrayList;

    invoke-virtual {v5, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_9
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_a
    if-ne v0, v6, :cond_b

    sget-object v0, Lcom/dualboot/e/m;->b:Lcom/dualboot/e/m;

    iput-object v0, p0, Lcom/dualboot/e/n;->f:Lcom/dualboot/e/m;

    goto :goto_1

    :cond_b
    if-ne v0, v7, :cond_1

    sget-object v0, Lcom/dualboot/e/m;->c:Lcom/dualboot/e/m;

    iput-object v0, p0, Lcom/dualboot/e/n;->f:Lcom/dualboot/e/m;

    goto :goto_1

    :cond_c
    if-eqz v4, :cond_d

    sget-object v0, Lcom/dualboot/c/i;->b:Lcom/dualboot/c/i;

    goto :goto_2

    :cond_d
    if-eqz v1, :cond_2

    sget-object v0, Lcom/dualboot/c/i;->a:Lcom/dualboot/c/i;

    goto :goto_2

    :cond_e
    if-ne v1, v6, :cond_f

    sget-object v0, Lcom/dualboot/c/h;->b:Lcom/dualboot/c/h;

    goto :goto_3

    :cond_f
    if-ne v1, v7, :cond_3

    sget-object v0, Lcom/dualboot/c/h;->c:Lcom/dualboot/c/h;

    goto :goto_3

    :cond_10
    if-ne v3, v6, :cond_11

    const-wide/16 v0, 0x5

    goto :goto_4

    :cond_11
    if-ne v3, v7, :cond_4

    const-wide/16 v0, 0x7

    goto :goto_4

    :cond_12
    if-ne v1, v6, :cond_13

    sget-object v0, Lcom/dualboot/c/k;->b:Lcom/dualboot/c/k;

    goto :goto_5

    :cond_13
    if-ne v1, v7, :cond_6

    sget-object v0, Lcom/dualboot/c/k;->c:Lcom/dualboot/c/k;

    goto :goto_5
.end method

.method static synthetic c(Lcom/dualboot/e/n;)Ljava/util/ArrayList;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/n;->i:Ljava/util/ArrayList;

    return-object v0
.end method

.method static synthetic d(Lcom/dualboot/e/n;)Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/n;->j:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic e(Lcom/dualboot/e/n;)Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/n;->d:Landroid/content/Context;

    return-object v0
.end method


# virtual methods
.method protected final a()V
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    if-nez v0, :cond_0

    :goto_0
    return-void

    :cond_0
    iget-boolean v0, p0, Lcom/dualboot/e/n;->k:Z

    if-nez v0, :cond_1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/dualboot/e/n;->l:Z

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/dualboot/e/n;->l:Z

    invoke-direct {p0}, Lcom/dualboot/e/n;->b()V

    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    invoke-virtual {v0}, Lcom/dualboot/c/g;->a()V

    goto :goto_0
.end method

.method public final onCreate(Landroid/view/SurfaceHolder;)V
    .locals 5

    invoke-super {p0, p1}, Landroid/service/wallpaper/WallpaperService$Engine;->onCreate(Landroid/view/SurfaceHolder;)V

    new-instance v0, Lcom/dualboot/util/r;

    iget-object v1, p0, Lcom/dualboot/e/n;->d:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/dualboot/util/r;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/dualboot/util/r;->b()Z

    new-instance v0, Lcom/dualboot/e/p;

    invoke-direct {v0, p0}, Lcom/dualboot/e/p;-><init>(Lcom/dualboot/e/n;)V

    iput-object v0, p0, Lcom/dualboot/e/n;->m:Lcom/dualboot/e/p;

    new-instance v0, Landroid/content/IntentFilter;

    const-string v1, "com.dualboot.apps.wallpaper.PREFERENCES_CHANGED"

    invoke-direct {v0, v1}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    new-instance v1, Landroid/os/Handler;

    invoke-direct {v1}, Landroid/os/Handler;-><init>()V

    iget-object v2, p0, Lcom/dualboot/e/n;->b:Lcom/dualboot/e/l;

    iget-object v3, p0, Lcom/dualboot/e/n;->m:Lcom/dualboot/e/p;

    const/4 v4, 0x0

    invoke-virtual {v2, v3, v0, v4, v1}, Lcom/dualboot/e/l;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;)Landroid/content/Intent;

    iget-object v0, p0, Lcom/dualboot/e/n;->b:Lcom/dualboot/e/l;

    invoke-virtual {v0}, Lcom/dualboot/e/l;->a()Lcom/dualboot/e/j;

    move-result-object v0

    new-instance v1, Lcom/dualboot/e/q;

    iget-object v2, p0, Lcom/dualboot/e/n;->d:Landroid/content/Context;

    iget-wide v3, p0, Lcom/dualboot/e/n;->e:J

    invoke-direct {v1, p0, v2, v3, v4}, Lcom/dualboot/e/q;-><init>(Lcom/dualboot/e/n;Landroid/content/Context;J)V

    iput-object v1, p0, Lcom/dualboot/e/n;->a:Lcom/dualboot/util/b;

    const/4 v1, 0x1

    invoke-virtual {p0, v1}, Lcom/dualboot/e/n;->setTouchEventsEnabled(Z)V

    iget-object v1, p0, Lcom/dualboot/e/n;->d:Landroid/content/Context;

    invoke-static {v1}, Lcom/dualboot/b/a;->a(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v2, p0, Lcom/dualboot/e/n;->b:Lcom/dualboot/e/l;

    invoke-virtual {v2, v1}, Lcom/dualboot/e/l;->a(Landroid/content/SharedPreferences;)V

    :cond_0
    iget-object v1, p0, Lcom/dualboot/e/n;->d:Landroid/content/Context;

    invoke-virtual {v0}, Lcom/dualboot/e/j;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/dualboot/e/j;->b()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v2, v0}, Lcom/dualboot/c/g;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Lcom/dualboot/c/g;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    iget-object v0, p0, Lcom/dualboot/e/n;->b:Lcom/dualboot/e/l;

    invoke-virtual {v0}, Lcom/dualboot/e/l;->b()Z

    iget-object v0, p0, Lcom/dualboot/e/n;->d:Landroid/content/Context;

    const-string v1, "location"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/location/LocationManager;

    if-eqz v0, :cond_1

    :try_start_0
    const-string v1, "network"

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->getLastKnownLocation(Ljava/lang/String;)Landroid/location/Location;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/dualboot/e/n;->a(Landroid/location/Location;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :goto_0
    new-instance v1, Landroid/os/Handler;

    invoke-direct {v1}, Landroid/os/Handler;-><init>()V

    new-instance v2, Lcom/dualboot/e/o;

    invoke-direct {v2, p0, v0, v1}, Lcom/dualboot/e/o;-><init>(Lcom/dualboot/e/n;Landroid/location/LocationManager;Landroid/os/Handler;)V

    const-wide/32 v3, 0xea60

    invoke-virtual {v1, v2, v3, v4}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_1
    invoke-direct {p0}, Lcom/dualboot/e/n;->b()V

    return-void

    :catch_0
    move-exception v1

    goto :goto_0
.end method

.method public final onDestroy()V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/e/n;->b:Lcom/dualboot/e/l;

    iget-object v1, p0, Lcom/dualboot/e/n;->m:Lcom/dualboot/e/p;

    invoke-virtual {v0, v1}, Lcom/dualboot/e/l;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    invoke-virtual {v0}, Lcom/dualboot/c/g;->b()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    :cond_0
    invoke-super {p0}, Landroid/service/wallpaper/WallpaperService$Engine;->onDestroy()V

    return-void
.end method

.method public final onLocationChanged(Landroid/location/Location;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/dualboot/e/n;->a(Landroid/location/Location;)V

    return-void
.end method

.method public final onOffsetsChanged(FFFFII)V
    .locals 1

    invoke-super/range {p0 .. p6}, Landroid/service/wallpaper/WallpaperService$Engine;->onOffsetsChanged(FFFFII)V

    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    invoke-virtual {v0, p1}, Lcom/dualboot/c/g;->a(F)V

    :cond_0
    return-void
.end method

.method public final onProviderDisabled(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onProviderEnabled(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onStatusChanged(Ljava/lang/String;ILandroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public final onSurfaceChanged(Landroid/view/SurfaceHolder;III)V
    .locals 1

    invoke-super {p0, p1, p2, p3, p4}, Landroid/service/wallpaper/WallpaperService$Engine;->onSurfaceChanged(Landroid/view/SurfaceHolder;III)V

    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/dualboot/c/g;->a(Ljava/lang/Object;III)V

    :cond_0
    return-void
.end method

.method public final onSurfaceCreated(Landroid/view/SurfaceHolder;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/service/wallpaper/WallpaperService$Engine;->onSurfaceCreated(Landroid/view/SurfaceHolder;)V

    return-void
.end method

.method public final onSurfaceDestroyed(Landroid/view/SurfaceHolder;)V
    .locals 3

    const/4 v2, 0x0

    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    const/4 v1, 0x0

    invoke-virtual {v0, v1, v2, v2, v2}, Lcom/dualboot/c/g;->a(Ljava/lang/Object;III)V

    :cond_0
    invoke-super {p0, p1}, Landroid/service/wallpaper/WallpaperService$Engine;->onSurfaceDestroyed(Landroid/view/SurfaceHolder;)V

    return-void
.end method

.method public final onTouchEvent(Landroid/view/MotionEvent;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/service/wallpaper/WallpaperService$Engine;->onTouchEvent(Landroid/view/MotionEvent;)V

    iget-object v0, p0, Lcom/dualboot/e/n;->a:Lcom/dualboot/util/b;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/n;->a:Lcom/dualboot/util/b;

    invoke-virtual {v0, p1}, Lcom/dualboot/util/b;->a(Landroid/view/MotionEvent;)V

    :cond_0
    return-void
.end method

.method public final onVisibilityChanged(Z)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Service/Engine/onVisibilityChanged = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    invoke-super {p0, p1}, Landroid/service/wallpaper/WallpaperService$Engine;->onVisibilityChanged(Z)V

    iput-boolean p1, p0, Lcom/dualboot/e/n;->k:Z

    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/dualboot/e/n;->k:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/dualboot/e/n;->l:Z

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/dualboot/e/n;->a()V

    :cond_0
    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    iget-boolean v1, p0, Lcom/dualboot/e/n;->k:Z

    invoke-virtual {v0, v1}, Lcom/dualboot/c/g;->a(Z)V

    iget-boolean v0, p0, Lcom/dualboot/e/n;->k:Z

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/dualboot/e/n;->isPreview()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/dualboot/c/g;->b(Z)V

    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    sget-object v1, Lcom/dualboot/c/k;->a:Lcom/dualboot/c/k;

    invoke-virtual {v0, v1}, Lcom/dualboot/c/g;->a(Lcom/dualboot/c/k;)V

    :cond_1
    :goto_0
    return-void

    :cond_2
    iget-object v0, p0, Lcom/dualboot/e/n;->c:Lcom/dualboot/c/g;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/dualboot/c/g;->b(Z)V

    goto :goto_0
.end method
