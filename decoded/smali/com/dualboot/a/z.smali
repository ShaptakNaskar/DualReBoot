.class final Lcom/dualboot/a/z;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/b/a/a/a/m;


# instance fields
.field final synthetic a:Lcom/dualboot/a/y;

.field private final synthetic b:Lcom/dualboot/a/an;


# direct methods
.method constructor <init>(Lcom/dualboot/a/y;Lcom/dualboot/a/an;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/a/z;->a:Lcom/dualboot/a/y;

    iput-object p2, p0, Lcom/dualboot/a/z;->b:Lcom/dualboot/a/an;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(I)V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/z;->a:Lcom/dualboot/a/y;

    const/4 v1, 0x0

    iput v1, v0, Lcom/dualboot/a/y;->a:I

    iget-object v0, p0, Lcom/dualboot/a/z;->a:Lcom/dualboot/a/y;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/dualboot/a/y;->b:Z

    iget-object v0, p0, Lcom/dualboot/a/z;->a:Lcom/dualboot/a/y;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Initialized! Response = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/dualboot/a/z;->a:Lcom/dualboot/a/y;

    iget v1, v1, Lcom/dualboot/a/y;->a:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, "; Reason = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    iget-object v0, p0, Lcom/dualboot/a/z;->b:Lcom/dualboot/a/an;

    invoke-virtual {v0}, Lcom/dualboot/a/an;->b()V

    return-void
.end method

.method public final b(I)V
    .locals 2

    const/4 v1, 0x1

    iget-object v0, p0, Lcom/dualboot/a/z;->a:Lcom/dualboot/a/y;

    iput v1, v0, Lcom/dualboot/a/y;->a:I

    iget-object v0, p0, Lcom/dualboot/a/z;->a:Lcom/dualboot/a/y;

    iput-boolean v1, v0, Lcom/dualboot/a/y;->b:Z

    iget-object v0, p0, Lcom/dualboot/a/z;->a:Lcom/dualboot/a/y;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Initialized! Response = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/dualboot/a/z;->a:Lcom/dualboot/a/y;

    iget v1, v1, Lcom/dualboot/a/y;->a:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, "; Reason = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    iget-object v0, p0, Lcom/dualboot/a/z;->b:Lcom/dualboot/a/an;

    invoke-virtual {v0}, Lcom/dualboot/a/an;->b()V

    return-void
.end method

.method public final c(I)V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/a/z;->a:Lcom/dualboot/a/y;

    const/4 v1, 0x2

    iput v1, v0, Lcom/dualboot/a/y;->a:I

    iget-object v0, p0, Lcom/dualboot/a/z;->a:Lcom/dualboot/a/y;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/dualboot/a/y;->b:Z

    iget-object v0, p0, Lcom/dualboot/a/z;->a:Lcom/dualboot/a/y;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Initialized! Response = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/dualboot/a/z;->a:Lcom/dualboot/a/y;

    iget v1, v1, Lcom/dualboot/a/y;->a:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, "; Reason = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    iget-object v0, p0, Lcom/dualboot/a/z;->b:Lcom/dualboot/a/an;

    invoke-virtual {v0}, Lcom/dualboot/a/an;->c()V

    return-void
.end method
