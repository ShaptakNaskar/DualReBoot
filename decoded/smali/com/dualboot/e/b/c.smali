.class public final Lcom/dualboot/e/b/c;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# instance fields
.field final synthetic a:Lcom/dualboot/e/b/a;

.field private final synthetic b:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/dualboot/e/b/a;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/b/c;->a:Lcom/dualboot/e/b/a;

    iput-object p2, p0, Lcom/dualboot/e/b/c;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/content/DialogInterface;I)V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/e/b/c;->a:Lcom/dualboot/e/b/a;

    iget-object v0, v0, Lcom/dualboot/e/b/a;->c:Lcom/dualboot/e/b/d;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/b/c;->a:Lcom/dualboot/e/b/a;

    iget-object v0, v0, Lcom/dualboot/e/b/a;->c:Lcom/dualboot/e/b/d;

    iget-object v1, p0, Lcom/dualboot/e/b/c;->b:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/dualboot/e/b/d;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
