.class public final Lcom/dualboot/util/d;
.super Ljava/lang/Object;


# instance fields
.field final a:D

.field final b:D

.field final c:D

.field final d:D

.field final e:J

.field f:J

.field g:J

.field h:J

.field private final i:D


# direct methods
.method public constructor <init>(DJ)V
    .locals 4

    const-wide/high16 v2, 0x3ff0000000000000L    # 1.0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x1

    sub-long v0, p3, v0

    long-to-double v0, v0

    iput-wide v0, p0, Lcom/dualboot/util/d;->d:D

    iget-wide v0, p0, Lcom/dualboot/util/d;->d:D

    mul-double/2addr v0, p1

    iput-wide v0, p0, Lcom/dualboot/util/d;->i:D

    iget-wide v0, p0, Lcom/dualboot/util/d;->i:D

    div-double v0, v2, v0

    iput-wide v0, p0, Lcom/dualboot/util/d;->a:D

    iput-wide p1, p0, Lcom/dualboot/util/d;->c:D

    iget-wide v0, p0, Lcom/dualboot/util/d;->c:D

    div-double v0, v2, v0

    iput-wide v0, p0, Lcom/dualboot/util/d;->b:D

    iget-wide v0, p0, Lcom/dualboot/util/d;->i:D

    double-to-long v0, v0

    iput-wide v0, p0, Lcom/dualboot/util/d;->e:J

    invoke-virtual {p0}, Lcom/dualboot/util/d;->a()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 4

    iget-wide v0, p0, Lcom/dualboot/util/d;->e:J

    const-wide/16 v2, 0x2

    div-long/2addr v0, v2

    invoke-virtual {p0, v0, v1}, Lcom/dualboot/util/d;->a(J)V

    return-void
.end method

.method public final a(J)V
    .locals 2

    iput-wide p1, p0, Lcom/dualboot/util/d;->f:J

    iget-wide v0, p0, Lcom/dualboot/util/d;->f:J

    iput-wide v0, p0, Lcom/dualboot/util/d;->g:J

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/dualboot/util/d;->h:J

    return-void
.end method
