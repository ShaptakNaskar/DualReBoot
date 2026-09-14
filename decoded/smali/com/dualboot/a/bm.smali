.class public Lcom/dualboot/a/bm;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/dualboot/a/ae;


# instance fields
.field protected final a:Landroid/content/Context;

.field protected final b:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/dualboot/e/j;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/a/bm;->a:Landroid/content/Context;

    invoke-virtual {p2}, Lcom/dualboot/e/j;->c()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/dualboot/a/bm;->b:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public a()Ljava/util/Collection;
    .locals 2

    new-instance v0, Ljava/util/ArrayList;

    const/4 v1, 0x2

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    return-object v0
.end method
