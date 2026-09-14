.class final Lcom/dualboot/e/a/n;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# instance fields
.field final synthetic a:Lcom/dualboot/e/a/m;


# direct methods
.method constructor <init>(Lcom/dualboot/e/a/m;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/a/n;->a:Lcom/dualboot/e/a/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/content/DialogInterface;I)V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/e/a/n;->a:Lcom/dualboot/e/a/m;

    invoke-static {v0, p2}, Lcom/dualboot/e/a/m;->a(Lcom/dualboot/e/a/m;I)V

    iget-object v0, p0, Lcom/dualboot/e/a/n;->a:Lcom/dualboot/e/a/m;

    const/4 v1, -0x1

    invoke-virtual {v0, p1, v1}, Lcom/dualboot/e/a/m;->onClick(Landroid/content/DialogInterface;I)V

    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    return-void
.end method
