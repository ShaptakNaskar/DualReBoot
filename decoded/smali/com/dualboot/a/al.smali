.class final Lcom/dualboot/a/al;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/a/aj;

.field private final synthetic b:Lcom/dualboot/a/am;

.field private final synthetic c:Lcom/dualboot/a/ab;

.field private final synthetic d:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/dualboot/a/aj;Lcom/dualboot/a/am;Lcom/dualboot/a/ab;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/al;->a:Lcom/dualboot/a/aj;

    iput-object p2, p0, Lcom/dualboot/a/al;->b:Lcom/dualboot/a/am;

    iput-object p3, p0, Lcom/dualboot/a/al;->c:Lcom/dualboot/a/ab;

    iput-object p4, p0, Lcom/dualboot/a/al;->d:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/dualboot/a/al;->b:Lcom/dualboot/a/am;

    iget-object v1, p0, Lcom/dualboot/a/al;->c:Lcom/dualboot/a/ab;

    iget-object v2, p0, Lcom/dualboot/a/al;->d:Ljava/lang/String;

    invoke-interface {v0, v1, v2}, Lcom/dualboot/a/am;->b(Lcom/dualboot/a/ab;Ljava/lang/String;)V

    return-void
.end method
