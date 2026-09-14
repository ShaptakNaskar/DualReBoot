.class final Lcom/dualboot/a/au;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/a/as;

.field private final synthetic b:Lcom/dualboot/a/av;

.field private final synthetic c:Lcom/dualboot/a/ab;


# direct methods
.method constructor <init>(Lcom/dualboot/a/as;Lcom/dualboot/a/av;Lcom/dualboot/a/ab;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/au;->a:Lcom/dualboot/a/as;

    iput-object p2, p0, Lcom/dualboot/a/au;->b:Lcom/dualboot/a/av;

    iput-object p3, p0, Lcom/dualboot/a/au;->c:Lcom/dualboot/a/ab;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/au;->b:Lcom/dualboot/a/av;

    iget-object v1, p0, Lcom/dualboot/a/au;->c:Lcom/dualboot/a/ab;

    invoke-interface {v0}, Lcom/dualboot/a/av;->a()V

    return-void
.end method
