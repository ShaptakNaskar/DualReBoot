.class final Lcom/dualboot/e/s;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/e/r;

.field private final synthetic b:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/dualboot/e/r;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/s;->a:Lcom/dualboot/e/r;

    iput-object p2, p0, Lcom/dualboot/e/s;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/e/s;->a:Lcom/dualboot/e/r;

    iget-object v1, p0, Lcom/dualboot/e/s;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/dualboot/e/r;->b(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/s;->a:Lcom/dualboot/e/r;

    iget-object v1, p0, Lcom/dualboot/e/s;->b:Ljava/lang/String;

    iput-object v1, v0, Lcom/dualboot/e/r;->h:Ljava/lang/String;

    :goto_0
    return-void

    :cond_0
    iget-object v0, p0, Lcom/dualboot/e/s;->a:Lcom/dualboot/e/r;

    iget-object v1, p0, Lcom/dualboot/e/s;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/dualboot/e/r;->c(Ljava/lang/String;)Z

    goto :goto_0
.end method
