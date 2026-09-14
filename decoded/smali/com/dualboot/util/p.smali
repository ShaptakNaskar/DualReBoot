.class final Lcom/dualboot/util/p;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field private final synthetic a:Landroid/content/Context;

.field private final synthetic b:J

.field private final synthetic c:J


# direct methods
.method constructor <init>(Landroid/content/Context;)V
    .locals 2

    iput-object p1, p0, Lcom/dualboot/util/p;->a:Landroid/content/Context;

    const-wide/16 v0, 0xfa

    iput-wide v0, p0, Lcom/dualboot/util/p;->b:J

    const-wide/16 v0, 0x7d0

    iput-wide v0, p0, Lcom/dualboot/util/p;->c:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 18

    move-object/from16 v0, p0

    iget-object v1, v0, Lcom/dualboot/util/p;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/dualboot/util/o;->a(Landroid/content/Context;)Lcom/dualboot/util/q;

    move-result-object v5

    sget-object v1, Lcom/dualboot/util/q;->a:Lcom/dualboot/util/q;

    if-ne v5, v1, :cond_1

    :cond_0
    :goto_0
    return-void

    :cond_1
    sget-object v1, Lcom/dualboot/util/q;->d:Lcom/dualboot/util/q;

    if-eq v5, v1, :cond_0

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v7

    move-object/from16 v0, p0

    iget-wide v1, v0, Lcom/dualboot/util/p;->b:J

    const-wide/16 v3, 0x14

    invoke-static {v1, v2, v3, v4}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v1

    move-object/from16 v0, p0

    iget-wide v3, v0, Lcom/dualboot/util/p;->c:J

    invoke-static {v1, v2, v3, v4}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v14

    const-wide/16 v3, 0x0

    move-object/from16 v0, p0

    iget-wide v1, v0, Lcom/dualboot/util/p;->c:J

    const-wide/16 v9, 0x2

    div-long/2addr v1, v9

    move-object/from16 v0, p0

    iget-wide v10, v0, Lcom/dualboot/util/p;->c:J

    move-object v9, v5

    move-wide v5, v7

    :cond_2
    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v12

    sub-long v16, v12, v5

    cmp-long v16, v16, v14

    if-lez v16, :cond_4

    const-wide/16 v5, 0x1

    add-long/2addr v3, v5

    move-object/from16 v0, p0

    iget-object v5, v0, Lcom/dualboot/util/p;->a:Landroid/content/Context;

    invoke-static {v5}, Lcom/dualboot/util/o;->a(Landroid/content/Context;)Lcom/dualboot/util/q;

    move-result-object v9

    sget-object v5, Lcom/dualboot/util/q;->d:Lcom/dualboot/util/q;

    if-ne v9, v5, :cond_3

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "  Polls = "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "  Time  = "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sub-long v2, v12, v7

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    goto :goto_0

    :cond_3
    sget-object v5, Lcom/dualboot/util/q;->c:Lcom/dualboot/util/q;

    if-ne v9, v5, :cond_5

    cmp-long v5, v1, v10

    if-gez v5, :cond_5

    move-wide v1, v10

    move-wide v5, v12

    :cond_4
    :goto_1
    sub-long/2addr v12, v7

    cmp-long v12, v12, v1

    if-lez v12, :cond_2

    const-wide/16 v12, 0x0

    cmp-long v12, v3, v12

    if-lez v12, :cond_2

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "WaitForConnection() - Timeout expired with network status "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    goto/16 :goto_0

    :cond_5
    move-wide v5, v12

    goto :goto_1
.end method
