.class final Lcom/dualboot/e/v;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# instance fields
.field final synthetic a:Lcom/dualboot/e/t;


# direct methods
.method constructor <init>(Lcom/dualboot/e/t;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/v;->a:Lcom/dualboot/e/t;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/dualboot/e/v;)Lcom/dualboot/e/t;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/v;->a:Lcom/dualboot/e/t;

    return-object v0
.end method


# virtual methods
.method public final onClick(Landroid/content/DialogInterface;I)V
    .locals 4

    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    new-instance v1, Lcom/dualboot/e/w;

    invoke-direct {v1, p0}, Lcom/dualboot/e/w;-><init>(Lcom/dualboot/e/v;)V

    const-wide/16 v2, 0xfa

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method
