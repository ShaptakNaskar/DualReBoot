.class final Lcom/dualboot/a/f;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/a/a;

.field private final synthetic b:Lcom/dualboot/a/bc;

.field private final synthetic c:Lcom/dualboot/a/p;


# direct methods
.method constructor <init>(Lcom/dualboot/a/a;Lcom/dualboot/a/bc;Lcom/dualboot/a/p;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/f;->a:Lcom/dualboot/a/a;

    iput-object p2, p0, Lcom/dualboot/a/f;->b:Lcom/dualboot/a/bc;

    iput-object p3, p0, Lcom/dualboot/a/f;->c:Lcom/dualboot/a/p;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    iget-object v0, p0, Lcom/dualboot/a/f;->b:Lcom/dualboot/a/bc;

    iget-object v1, p0, Lcom/dualboot/a/f;->c:Lcom/dualboot/a/p;

    invoke-virtual {v1}, Lcom/dualboot/a/p;->a()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/dualboot/a/f;->c:Lcom/dualboot/a/p;

    invoke-virtual {v2}, Lcom/dualboot/a/p;->b()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/dualboot/a/f;->c:Lcom/dualboot/a/p;

    invoke-virtual {v3}, Lcom/dualboot/a/p;->c()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/dualboot/a/f;->c:Lcom/dualboot/a/p;

    invoke-virtual {v4}, Lcom/dualboot/a/p;->d()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/dualboot/a/bc;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
