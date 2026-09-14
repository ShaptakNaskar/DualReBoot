.class final Lcom/dualboot/a/e;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/a/a;

.field private final synthetic b:Lcom/dualboot/a/p;

.field private final synthetic c:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/dualboot/a/a;Lcom/dualboot/a/p;Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/e;->a:Lcom/dualboot/a/a;

    iput-object p2, p0, Lcom/dualboot/a/e;->b:Lcom/dualboot/a/p;

    iput-object p3, p0, Lcom/dualboot/a/e;->c:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/e;->b:Lcom/dualboot/a/p;

    iget-object v1, p0, Lcom/dualboot/a/e;->c:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/dualboot/a/p;->b(Landroid/content/Context;)Z

    return-void
.end method
