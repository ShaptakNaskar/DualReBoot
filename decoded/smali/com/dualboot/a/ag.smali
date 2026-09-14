.class public final enum Lcom/dualboot/a/ag;
.super Ljava/lang/Enum;


# static fields
.field public static final enum a:Lcom/dualboot/a/ag;

.field public static final enum b:Lcom/dualboot/a/ag;

.field public static final enum c:Lcom/dualboot/a/ag;

.field private static final synthetic d:[Lcom/dualboot/a/ag;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    const/4 v4, 0x2

    const/4 v3, 0x1

    const/4 v2, 0x0

    new-instance v0, Lcom/dualboot/a/ag;

    const-string v1, "UNKNOWN"

    invoke-direct {v0, v1, v2}, Lcom/dualboot/a/ag;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/a/ag;->a:Lcom/dualboot/a/ag;

    new-instance v0, Lcom/dualboot/a/ag;

    const-string v1, "NOT_OWNED"

    invoke-direct {v0, v1, v3}, Lcom/dualboot/a/ag;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/a/ag;->b:Lcom/dualboot/a/ag;

    new-instance v0, Lcom/dualboot/a/ag;

    const-string v1, "OWNED"

    invoke-direct {v0, v1, v4}, Lcom/dualboot/a/ag;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/a/ag;->c:Lcom/dualboot/a/ag;

    const/4 v0, 0x3

    new-array v0, v0, [Lcom/dualboot/a/ag;

    sget-object v1, Lcom/dualboot/a/ag;->a:Lcom/dualboot/a/ag;

    aput-object v1, v0, v2

    sget-object v1, Lcom/dualboot/a/ag;->b:Lcom/dualboot/a/ag;

    aput-object v1, v0, v3

    sget-object v1, Lcom/dualboot/a/ag;->c:Lcom/dualboot/a/ag;

    aput-object v1, v0, v4

    sput-object v0, Lcom/dualboot/a/ag;->d:[Lcom/dualboot/a/ag;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/dualboot/a/ag;
    .locals 1

    const-class v0, Lcom/dualboot/a/ag;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/ag;

    return-object v0
.end method

.method public static values()[Lcom/dualboot/a/ag;
    .locals 4

    const/4 v3, 0x0

    sget-object v0, Lcom/dualboot/a/ag;->d:[Lcom/dualboot/a/ag;

    array-length v1, v0

    new-array v2, v1, [Lcom/dualboot/a/ag;

    invoke-static {v0, v3, v2, v3, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-object v2
.end method
