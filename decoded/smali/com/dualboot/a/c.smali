.class final Lcom/dualboot/a/c;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/a/a;

.field private final synthetic b:Lcom/dualboot/a/bc;

.field private final synthetic c:Lcom/dualboot/a/bp;


# direct methods
.method constructor <init>(Lcom/dualboot/a/a;Lcom/dualboot/a/bc;)V
    .locals 1

    iput-object p1, p0, Lcom/dualboot/a/c;->a:Lcom/dualboot/a/a;

    iput-object p2, p0, Lcom/dualboot/a/c;->b:Lcom/dualboot/a/bc;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/a/c;->c:Lcom/dualboot/a/bp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/c;->b:Lcom/dualboot/a/bc;

    iget-object v1, p0, Lcom/dualboot/a/c;->c:Lcom/dualboot/a/bp;

    invoke-virtual {v0, v1}, Lcom/dualboot/a/bc;->c(Lcom/dualboot/a/bp;)V

    return-void
.end method
