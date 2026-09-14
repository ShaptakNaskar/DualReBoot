.class final Lcom/dualboot/a/i;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/a/a;

.field private final synthetic b:Lcom/dualboot/a/bc;

.field private final synthetic c:Lcom/dualboot/a/p;

.field private final synthetic d:Lcom/dualboot/a/k;


# direct methods
.method constructor <init>(Lcom/dualboot/a/a;Lcom/dualboot/a/bc;Lcom/dualboot/a/p;Lcom/dualboot/a/k;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/i;->a:Lcom/dualboot/a/a;

    iput-object p2, p0, Lcom/dualboot/a/i;->b:Lcom/dualboot/a/bc;

    iput-object p3, p0, Lcom/dualboot/a/i;->c:Lcom/dualboot/a/p;

    iput-object p4, p0, Lcom/dualboot/a/i;->d:Lcom/dualboot/a/k;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/dualboot/a/i;->b:Lcom/dualboot/a/bc;

    iget-object v1, p0, Lcom/dualboot/a/i;->c:Lcom/dualboot/a/p;

    invoke-virtual {v1}, Lcom/dualboot/a/p;->a()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/dualboot/a/i;->d:Lcom/dualboot/a/k;

    invoke-virtual {v0, v1, v2}, Lcom/dualboot/a/bc;->a(Ljava/lang/String;Lcom/dualboot/a/bp;)V

    return-void
.end method
