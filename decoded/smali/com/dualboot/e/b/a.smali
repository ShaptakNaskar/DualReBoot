.class public final Lcom/dualboot/e/b/a;
.super Ljava/lang/Object;


# instance fields
.field public final a:Lcom/dualboot/e/j;

.field public final b:Landroid/app/Activity;

.field final c:Lcom/dualboot/e/b/d;

.field public final d:Ljava/util/ArrayList;


# direct methods
.method public constructor <init>(Lcom/dualboot/e/j;Landroid/app/Activity;Lcom/dualboot/e/b/d;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/dualboot/e/b/a;->a:Lcom/dualboot/e/j;

    iput-object p2, p0, Lcom/dualboot/e/b/a;->b:Landroid/app/Activity;

    iput-object p3, p0, Lcom/dualboot/e/b/a;->c:Lcom/dualboot/e/b/d;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/e/b/a;->d:Ljava/util/ArrayList;

    return-void
.end method


# virtual methods
.method public final a(Landroid/app/Dialog;)V
    .locals 1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/b/a;->d:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-virtual {p1}, Landroid/app/Dialog;->isShowing()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p1}, Landroid/app/Dialog;->show()V

    :cond_0
    return-void
.end method
