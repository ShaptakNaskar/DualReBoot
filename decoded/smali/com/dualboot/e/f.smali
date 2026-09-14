.class final Lcom/dualboot/e/f;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/e/e;


# direct methods
.method constructor <init>(Lcom/dualboot/e/e;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/f;->a:Lcom/dualboot/e/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/e/f;->a:Lcom/dualboot/e/e;

    iget-object v0, v0, Lcom/dualboot/e/e;->a:Lcom/dualboot/e/i;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/dualboot/e/i;->a:Z

    iget-object v0, p0, Lcom/dualboot/e/f;->a:Lcom/dualboot/e/e;

    invoke-static {v0}, Lcom/dualboot/e/e;->a(Lcom/dualboot/e/e;)V

    return-void
.end method
