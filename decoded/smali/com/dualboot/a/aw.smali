.class public final enum Lcom/dualboot/a/aw;
.super Ljava/lang/Enum;


# static fields
.field public static final enum a:Lcom/dualboot/a/aw;

.field public static final enum b:Lcom/dualboot/a/aw;

.field public static final enum c:Lcom/dualboot/a/aw;

.field public static final enum d:Lcom/dualboot/a/aw;

.field public static final enum e:Lcom/dualboot/a/aw;

.field private static final synthetic f:[Lcom/dualboot/a/aw;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    const/4 v6, 0x4

    const/4 v5, 0x3

    const/4 v4, 0x2

    const/4 v3, 0x1

    const/4 v2, 0x0

    new-instance v0, Lcom/dualboot/a/aw;

    const-string v1, "ERROR"

    invoke-direct {v0, v1, v2}, Lcom/dualboot/a/aw;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/a/aw;->a:Lcom/dualboot/a/aw;

    new-instance v0, Lcom/dualboot/a/aw;

    const-string v1, "SHUTDOWN"

    invoke-direct {v0, v1, v3}, Lcom/dualboot/a/aw;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/a/aw;->b:Lcom/dualboot/a/aw;

    new-instance v0, Lcom/dualboot/a/aw;

    const-string v1, "STARTING"

    invoke-direct {v0, v1, v4}, Lcom/dualboot/a/aw;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/a/aw;->c:Lcom/dualboot/a/aw;

    new-instance v0, Lcom/dualboot/a/aw;

    const-string v1, "RUNNING"

    invoke-direct {v0, v1, v5}, Lcom/dualboot/a/aw;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/a/aw;->d:Lcom/dualboot/a/aw;

    new-instance v0, Lcom/dualboot/a/aw;

    const-string v1, "STOPPING"

    invoke-direct {v0, v1, v6}, Lcom/dualboot/a/aw;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/a/aw;->e:Lcom/dualboot/a/aw;

    const/4 v0, 0x5

    new-array v0, v0, [Lcom/dualboot/a/aw;

    sget-object v1, Lcom/dualboot/a/aw;->a:Lcom/dualboot/a/aw;

    aput-object v1, v0, v2

    sget-object v1, Lcom/dualboot/a/aw;->b:Lcom/dualboot/a/aw;

    aput-object v1, v0, v3

    sget-object v1, Lcom/dualboot/a/aw;->c:Lcom/dualboot/a/aw;

    aput-object v1, v0, v4

    sget-object v1, Lcom/dualboot/a/aw;->d:Lcom/dualboot/a/aw;

    aput-object v1, v0, v5

    sget-object v1, Lcom/dualboot/a/aw;->e:Lcom/dualboot/a/aw;

    aput-object v1, v0, v6

    sput-object v0, Lcom/dualboot/a/aw;->f:[Lcom/dualboot/a/aw;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/dualboot/a/aw;
    .locals 1

    const-class v0, Lcom/dualboot/a/aw;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/dualboot/a/aw;

    return-object v0
.end method

.method public static values()[Lcom/dualboot/a/aw;
    .locals 4

    const/4 v3, 0x0

    sget-object v0, Lcom/dualboot/a/aw;->f:[Lcom/dualboot/a/aw;

    array-length v1, v0

    new-array v2, v1, [Lcom/dualboot/a/aw;

    invoke-static {v0, v3, v2, v3, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-object v2
.end method
