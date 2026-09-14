.class public abstract Lcom/dualboot/a/bq;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/dualboot/a/bp;


# instance fields
.field b:Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/a/bq;->b:Ljava/lang/Object;

    return-void
.end method


# virtual methods
.method protected abstract a(Ljava/lang/Object;)V
.end method

.method public final b(Ljava/lang/Object;)V
    .locals 1

    iput-object p1, p0, Lcom/dualboot/a/bq;->b:Ljava/lang/Object;

    iget-object v0, p0, Lcom/dualboot/a/bq;->b:Ljava/lang/Object;

    invoke-virtual {p0, v0}, Lcom/dualboot/a/bq;->a(Ljava/lang/Object;)V

    return-void
.end method
