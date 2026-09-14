.class public final Lcom/dualboot/e/a/j;
.super Lcom/dualboot/e/a/u;


# instance fields
.field final synthetic a:Lcom/dualboot/e/a/i;


# direct methods
.method constructor <init>(Lcom/dualboot/e/a/i;Landroid/preference/Preference;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/e/a/j;->a:Lcom/dualboot/e/a/i;

    invoke-direct {p0, p2}, Lcom/dualboot/e/a/u;-><init>(Landroid/preference/Preference;)V

    return-void
.end method


# virtual methods
.method public final a()I
    .locals 1

    const/4 v0, 0x2

    return v0
.end method

.method public final a(I)Ljava/lang/String;
    .locals 1

    if-nez p1, :cond_0

    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_0
    return-object v0

    :cond_0
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0
.end method
