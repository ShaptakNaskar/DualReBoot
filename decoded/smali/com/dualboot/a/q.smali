.class public final enum Lcom/dualboot/a/q;
.super Ljava/lang/Enum;


# static fields
.field public static final enum a:Lcom/dualboot/a/q;

.field public static final enum b:Lcom/dualboot/a/q;

.field public static final enum c:Lcom/dualboot/a/q;

.field private static final synthetic d:[Lcom/dualboot/a/q;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    const/4 v4, 0x2

    const/4 v3, 0x1

    const/4 v2, 0x0

    new-instance v0, Lcom/dualboot/a/q;

    const-string v1, "RESET"

    invoke-direct {v0, v1, v2}, Lcom/dualboot/a/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/a/q;->a:Lcom/dualboot/a/q;

    new-instance v0, Lcom/dualboot/a/q;

    const-string v1, "SERVER_CACHED"

    invoke-direct {v0, v1, v3}, Lcom/dualboot/a/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/a/q;->b:Lcom/dualboot/a/q;

    new-instance v0, Lcom/dualboot/a/q;

    const-string v1, "SERVER"

    invoke-direct {v0, v1, v4}, Lcom/dualboot/a/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/a/q;->c:Lcom/dualboot/a/q;

    const/4 v0, 0x3

    new-array v0, v0, [Lcom/dualboot/a/q;

    sget-object v1, Lcom/dualboot/a/q;->a:Lcom/dualboot/a/q;

    aput-object v1, v0, v2

    sget-object v1, Lcom/dualboot/a/q;->b:Lcom/dualboot/a/q;

    aput-object v1, v0, v3

    sget-object v1, Lcom/dualboot/a/q;->c:Lcom/dualboot/a/q;

    aput-object v1, v0, v4

    sput-object v0, Lcom/dualboot/a/q;->d:[Lcom/dualboot/a/q;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/dualboot/a/q;
    .locals 1

    const-class v0, Lcom/dualboot/a/q;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/q;

    return-object v0
.end method

.method public static values()[Lcom/dualboot/a/q;
    .locals 4

    const/4 v3, 0x0

    sget-object v0, Lcom/dualboot/a/q;->d:[Lcom/dualboot/a/q;

    array-length v1, v0

    new-array v2, v1, [Lcom/dualboot/a/q;

    invoke-static {v0, v3, v2, v3, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-object v2
.end method
