.class final Lcom/dualboot/a/bo;
.super Lcom/dualboot/a/bq;


# instance fields
.field final synthetic a:Lcom/dualboot/a/bn;


# direct methods
.method constructor <init>(Lcom/dualboot/a/bn;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/bo;->a:Lcom/dualboot/a/bn;

    invoke-direct {p0}, Lcom/dualboot/a/bq;-><init>()V

    return-void
.end method


# virtual methods
.method protected final a(Ljava/lang/Object;)V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/bo;->a:Lcom/dualboot/a/bn;

    iget v1, v0, Lcom/dualboot/a/bn;->c:I

    add-int/lit8 v1, v1, 0x1

    iput v1, v0, Lcom/dualboot/a/bn;->c:I

    return-void
.end method
