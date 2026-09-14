.class public final Lcom/dualboot/a/ah;
.super Ljava/lang/Object;


# instance fields
.field public final a:Lcom/dualboot/a/ax;

.field public final b:Ljava/lang/String;

.field public final c:Ljava/lang/String;

.field public final d:I

.field public final e:I

.field public final f:I

.field public final g:I


# direct methods
.method protected constructor <init>(Lcom/dualboot/a/ax;Ljava/lang/String;Ljava/lang/String;III)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/dualboot/a/ah;->a:Lcom/dualboot/a/ax;

    iput-object p2, p0, Lcom/dualboot/a/ah;->b:Ljava/lang/String;

    iput-object p3, p0, Lcom/dualboot/a/ah;->c:Ljava/lang/String;

    iput p4, p0, Lcom/dualboot/a/ah;->d:I

    iput p5, p0, Lcom/dualboot/a/ah;->e:I

    iput p6, p0, Lcom/dualboot/a/ah;->f:I

    const/4 v0, 0x0

    iput v0, p0, Lcom/dualboot/a/ah;->g:I

    return-void
.end method
