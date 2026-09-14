.class public final enum Lcom/dualboot/util/q;
.super Ljava/lang/Enum;


# static fields
.field public static final enum a:Lcom/dualboot/util/q;

.field public static final enum b:Lcom/dualboot/util/q;

.field public static final enum c:Lcom/dualboot/util/q;

.field public static final enum d:Lcom/dualboot/util/q;

.field private static final synthetic e:[Lcom/dualboot/util/q;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    const/4 v5, 0x3

    const/4 v4, 0x2

    const/4 v3, 0x1

    const/4 v2, 0x0

    new-instance v0, Lcom/dualboot/util/q;

    const-string v1, "UNKNOWN"

    invoke-direct {v0, v1, v2}, Lcom/dualboot/util/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/util/q;->a:Lcom/dualboot/util/q;

    new-instance v0, Lcom/dualboot/util/q;

    const-string v1, "NOT_CONNECTED"

    invoke-direct {v0, v1, v3}, Lcom/dualboot/util/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/util/q;->b:Lcom/dualboot/util/q;

    new-instance v0, Lcom/dualboot/util/q;

    const-string v1, "CONNECTING"

    invoke-direct {v0, v1, v4}, Lcom/dualboot/util/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/util/q;->c:Lcom/dualboot/util/q;

    new-instance v0, Lcom/dualboot/util/q;

    const-string v1, "CONNECTED"

    invoke-direct {v0, v1, v5}, Lcom/dualboot/util/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/util/q;->d:Lcom/dualboot/util/q;

    const/4 v0, 0x4

    new-array v0, v0, [Lcom/dualboot/util/q;

    sget-object v1, Lcom/dualboot/util/q;->a:Lcom/dualboot/util/q;

    aput-object v1, v0, v2

    sget-object v1, Lcom/dualboot/util/q;->b:Lcom/dualboot/util/q;

    aput-object v1, v0, v3

    sget-object v1, Lcom/dualboot/util/q;->c:Lcom/dualboot/util/q;

    aput-object v1, v0, v4

    sget-object v1, Lcom/dualboot/util/q;->d:Lcom/dualboot/util/q;

    aput-object v1, v0, v5

    sput-object v0, Lcom/dualboot/util/q;->e:[Lcom/dualboot/util/q;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/dualboot/util/q;
    .locals 1

    const-class v0, Lcom/dualboot/util/q;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/dualboot/util/q;

    return-object v0
.end method

.method public static values()[Lcom/dualboot/util/q;
    .locals 4

    const/4 v3, 0x0

    sget-object v0, Lcom/dualboot/util/q;->e:[Lcom/dualboot/util/q;

    array-length v1, v0

    new-array v2, v1, [Lcom/dualboot/util/q;

    invoke-static {v0, v3, v2, v3, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-object v2
.end method
