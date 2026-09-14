.class final Lcom/dualboot/e/u;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/DialogInterface$OnCancelListener;


# instance fields
.field final synthetic a:Lcom/dualboot/e/t;


# direct methods
.method constructor <init>(Lcom/dualboot/e/t;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/u;->a:Lcom/dualboot/e/t;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onCancel(Landroid/content/DialogInterface;)V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/e/u;->a:Lcom/dualboot/e/t;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/dualboot/e/t;->cancel(Z)Z

    return-void
.end method
