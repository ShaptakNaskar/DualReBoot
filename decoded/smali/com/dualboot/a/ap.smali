.class final Lcom/dualboot/a/ap;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/a/an;

.field private final synthetic b:Lcom/dualboot/a/ar;

.field private final synthetic c:Lcom/dualboot/a/ab;


# direct methods
.method constructor <init>(Lcom/dualboot/a/an;Lcom/dualboot/a/ar;Lcom/dualboot/a/ab;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/ap;->a:Lcom/dualboot/a/an;

    iput-object p2, p0, Lcom/dualboot/a/ap;->b:Lcom/dualboot/a/ar;

    iput-object p3, p0, Lcom/dualboot/a/ap;->c:Lcom/dualboot/a/ab;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/ap;->b:Lcom/dualboot/a/ar;

    iget-object v1, p0, Lcom/dualboot/a/ap;->c:Lcom/dualboot/a/ab;

    invoke-interface {v0}, Lcom/dualboot/a/ar;->a()V

    return-void
.end method
