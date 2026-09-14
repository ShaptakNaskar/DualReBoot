.class final Lcom/dualboot/e/o;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/e/n;

.field private final synthetic b:Landroid/location/LocationManager;

.field private final synthetic c:Landroid/os/Handler;


# direct methods
.method constructor <init>(Lcom/dualboot/e/n;Landroid/location/LocationManager;Landroid/os/Handler;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/o;->a:Lcom/dualboot/e/n;

    iput-object p2, p0, Lcom/dualboot/e/o;->b:Landroid/location/LocationManager;

    iput-object p3, p0, Lcom/dualboot/e/o;->c:Landroid/os/Handler;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    :try_start_0
    iget-object v0, p0, Lcom/dualboot/e/o;->b:Landroid/location/LocationManager;

    const-string v1, "network"

    const-wide/32 v2, 0x36ee80

    const v4, 0x48127c00    # 150000.0f

    iget-object v5, p0, Lcom/dualboot/e/o;->a:Lcom/dualboot/e/n;

    invoke-virtual/range {v0 .. v5}, Landroid/location/LocationManager;->requestLocationUpdates(Ljava/lang/String;JFLandroid/location/LocationListener;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :goto_0
    return-void

    :catch_0
    move-exception v0

    iget-object v0, p0, Lcom/dualboot/e/o;->c:Landroid/os/Handler;

    const-wide/32 v1, 0x1d4c0

    invoke-virtual {v0, p0, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_0
.end method
