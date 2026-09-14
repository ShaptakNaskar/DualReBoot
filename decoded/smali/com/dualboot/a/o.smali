.class final Lcom/dualboot/a/o;
.super Lcom/dualboot/a/bq;


# instance fields
.field final synthetic a:Lcom/dualboot/a/a;

.field private final c:Lcom/dualboot/a/p;


# direct methods
.method public constructor <init>(Lcom/dualboot/a/a;Lcom/dualboot/a/p;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/o;->a:Lcom/dualboot/a/a;

    invoke-direct {p0}, Lcom/dualboot/a/bq;-><init>()V

    iput-object p2, p0, Lcom/dualboot/a/o;->c:Lcom/dualboot/a/p;

    return-void
.end method


# virtual methods
.method public final bridge synthetic a(Ljava/lang/Object;)V
    .locals 1

    check-cast p1, Lcom/dualboot/a/ai;

    iget-object v0, p0, Lcom/dualboot/a/o;->c:Lcom/dualboot/a/p;

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/dualboot/a/o;->c:Lcom/dualboot/a/p;

    invoke-virtual {v0, p1}, Lcom/dualboot/a/p;->a(Lcom/dualboot/a/ai;)Z

    :cond_0
    return-void
.end method
