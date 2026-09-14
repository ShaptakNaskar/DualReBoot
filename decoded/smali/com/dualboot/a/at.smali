.class final Lcom/dualboot/a/at;
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

    iput-object p1, p0, Lcom/dualboot/a/at;->a:Lcom/dualboot/a/as;

    iput-object p2, p0, Lcom/dualboot/a/at;->b:Lcom/dualboot/a/av;

    iput-object p3, p0, Lcom/dualboot/a/at;->c:Lcom/dualboot/a/ab;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/dualboot/a/at;->b:Lcom/dualboot/a/av;

    iget-object v0, p0, Lcom/dualboot/a/at;->c:Lcom/dualboot/a/ab;

    return-void
.end method
