.class final Lcom/dualboot/e/h;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/e/g;

.field private final synthetic b:Z

.field private final synthetic c:Z


# direct methods
.method constructor <init>(Lcom/dualboot/e/g;ZZ)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/h;->a:Lcom/dualboot/e/g;

    iput-boolean p2, p0, Lcom/dualboot/e/h;->b:Z

    iput-boolean p3, p0, Lcom/dualboot/e/h;->c:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    const/4 v2, 0x1

    const/4 v1, 0x0

    iget-object v0, p0, Lcom/dualboot/e/h;->a:Lcom/dualboot/e/g;

    iget-object v3, v0, Lcom/dualboot/e/g;->d:Lcom/dualboot/e/e;

    iget-boolean v0, p0, Lcom/dualboot/e/h;->b:Z

    if-eqz v0, :cond_0

    move v0, v1

    :goto_0
    iget-boolean v4, p0, Lcom/dualboot/e/h;->c:Z

    if-eqz v4, :cond_1

    :goto_1
    invoke-static {v3, v0, v1}, Lcom/dualboot/e/e;->a(Lcom/dualboot/e/e;ZZ)V

    return-void

    :cond_0
    move v0, v2

    goto :goto_0

    :cond_1
    move v1, v2

    goto :goto_1
.end method
