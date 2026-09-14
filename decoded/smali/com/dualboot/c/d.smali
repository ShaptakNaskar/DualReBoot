.class public final Lcom/dualboot/c/d;
.super Ljava/lang/Object;


# instance fields
.field public a:Lcom/dualboot/c/i;

.field public b:Lcom/dualboot/c/h;

.field public c:Lcom/dualboot/c/k;

.field public d:Z

.field public e:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    sget-object v0, Lcom/dualboot/c/i;->c:Lcom/dualboot/c/i;

    iput-object v0, p0, Lcom/dualboot/c/d;->a:Lcom/dualboot/c/i;

    sget-object v0, Lcom/dualboot/c/h;->b:Lcom/dualboot/c/h;

    iput-object v0, p0, Lcom/dualboot/c/d;->b:Lcom/dualboot/c/h;

    sget-object v0, Lcom/dualboot/c/k;->b:Lcom/dualboot/c/k;

    iput-object v0, p0, Lcom/dualboot/c/d;->c:Lcom/dualboot/c/k;

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/dualboot/c/d;->d:Z

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/dualboot/c/d;->e:Z

    return-void
.end method

.method public constructor <init>(Lcom/dualboot/c/d;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iget-object v0, p1, Lcom/dualboot/c/d;->a:Lcom/dualboot/c/i;

    iput-object v0, p0, Lcom/dualboot/c/d;->a:Lcom/dualboot/c/i;

    iget-object v0, p1, Lcom/dualboot/c/d;->b:Lcom/dualboot/c/h;

    iput-object v0, p0, Lcom/dualboot/c/d;->b:Lcom/dualboot/c/h;

    iget-object v0, p1, Lcom/dualboot/c/d;->c:Lcom/dualboot/c/k;

    iput-object v0, p0, Lcom/dualboot/c/d;->c:Lcom/dualboot/c/k;

    iget-boolean v0, p1, Lcom/dualboot/c/d;->d:Z

    iput-boolean v0, p0, Lcom/dualboot/c/d;->d:Z

    iget-boolean v0, p1, Lcom/dualboot/c/d;->e:Z

    iput-boolean v0, p0, Lcom/dualboot/c/d;->e:Z

    return-void
.end method
