.class final Lcom/dualboot/a/d;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/a/a;

.field private final synthetic b:Lcom/dualboot/a/bc;

.field private final synthetic c:Lcom/dualboot/a/bp;


# direct methods
.method constructor <init>(Lcom/dualboot/a/a;Lcom/dualboot/a/bc;Lcom/dualboot/a/bp;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/d;->a:Lcom/dualboot/a/a;

    iput-object p2, p0, Lcom/dualboot/a/d;->b:Lcom/dualboot/a/bc;

    iput-object p3, p0, Lcom/dualboot/a/d;->c:Lcom/dualboot/a/bp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/d;->b:Lcom/dualboot/a/bc;

    iget-object v1, p0, Lcom/dualboot/a/d;->c:Lcom/dualboot/a/bp;

    invoke-virtual {v0, v1}, Lcom/dualboot/a/bc;->a(Lcom/dualboot/a/bp;)V

    return-void
.end method
