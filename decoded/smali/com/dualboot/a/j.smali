.class final Lcom/dualboot/a/j;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/dualboot/a/am;


# instance fields
.field final synthetic a:Lcom/dualboot/a/a;

.field private final synthetic b:Lcom/dualboot/a/p;

.field private final synthetic c:Landroid/content/Context;

.field private final synthetic d:Lcom/dualboot/a/l;


# direct methods
.method constructor <init>(Lcom/dualboot/a/a;Lcom/dualboot/a/p;Landroid/content/Context;Lcom/dualboot/a/l;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/j;->a:Lcom/dualboot/a/a;

    iput-object p2, p0, Lcom/dualboot/a/j;->b:Lcom/dualboot/a/p;

    iput-object p3, p0, Lcom/dualboot/a/j;->c:Landroid/content/Context;

    iput-object p4, p0, Lcom/dualboot/a/j;->d:Lcom/dualboot/a/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/dualboot/a/ab;Ljava/lang/String;)V
    .locals 3

    invoke-virtual {p1, p2}, Lcom/dualboot/a/ab;->a(Ljava/lang/String;)Lcom/dualboot/a/ag;

    sget-object v0, Lcom/dualboot/a/ag;->c:Lcom/dualboot/a/ag;

    iget-object v0, p0, Lcom/dualboot/a/j;->b:Lcom/dualboot/a/p;

    const/4 v1, 0x1

    sget-object v2, Lcom/dualboot/a/q;->c:Lcom/dualboot/a/q;

    invoke-virtual {v0, v1, v2}, Lcom/dualboot/a/p;->a(ZLcom/dualboot/a/q;)Z

    iget-object v0, p0, Lcom/dualboot/a/j;->b:Lcom/dualboot/a/p;

    iget-object v1, p0, Lcom/dualboot/a/j;->c:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/dualboot/a/p;->a(Landroid/content/Context;)Z

    iget-object v0, p0, Lcom/dualboot/a/j;->d:Lcom/dualboot/a/l;

    invoke-interface {v0, p2}, Lcom/dualboot/a/l;->a(Ljava/lang/String;)V

    return-void
.end method

.method public final b(Lcom/dualboot/a/ab;Ljava/lang/String;)V
    .locals 1

    invoke-virtual {p1, p2}, Lcom/dualboot/a/ab;->a(Ljava/lang/String;)Lcom/dualboot/a/ag;

    sget-object v0, Lcom/dualboot/a/ag;->c:Lcom/dualboot/a/ag;

    iget-object v0, p0, Lcom/dualboot/a/j;->d:Lcom/dualboot/a/l;

    invoke-interface {v0, p2}, Lcom/dualboot/a/l;->b(Ljava/lang/String;)V

    return-void
.end method
