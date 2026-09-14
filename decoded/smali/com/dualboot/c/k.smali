.class public final enum Lcom/dualboot/c/k;
.super Ljava/lang/Enum;


# static fields
.field public static final enum a:Lcom/dualboot/c/k;

.field public static final enum b:Lcom/dualboot/c/k;

.field public static final enum c:Lcom/dualboot/c/k;

.field private static final synthetic d:[Lcom/dualboot/c/k;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    const/4 v4, 0x2

    const/4 v3, 0x1

    const/4 v2, 0x0

    new-instance v0, Lcom/dualboot/c/k;

    const-string v1, "POWERMANAGE_HIGH_PERFORMANCE"

    invoke-direct {v0, v1, v2}, Lcom/dualboot/c/k;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/c/k;->a:Lcom/dualboot/c/k;

    new-instance v0, Lcom/dualboot/c/k;

    const-string v1, "POWERMANAGE_BALANCED"

    invoke-direct {v0, v1, v3}, Lcom/dualboot/c/k;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/c/k;->b:Lcom/dualboot/c/k;

    new-instance v0, Lcom/dualboot/c/k;

    const-string v1, "POWERMANAGE_BATTERY_SAVER"

    invoke-direct {v0, v1, v4}, Lcom/dualboot/c/k;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/c/k;->c:Lcom/dualboot/c/k;

    const/4 v0, 0x3

    new-array v0, v0, [Lcom/dualboot/c/k;

    sget-object v1, Lcom/dualboot/c/k;->a:Lcom/dualboot/c/k;

    aput-object v1, v0, v2

    sget-object v1, Lcom/dualboot/c/k;->b:Lcom/dualboot/c/k;

    aput-object v1, v0, v3

    sget-object v1, Lcom/dualboot/c/k;->c:Lcom/dualboot/c/k;

    aput-object v1, v0, v4

    sput-object v0, Lcom/dualboot/c/k;->d:[Lcom/dualboot/c/k;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/dualboot/c/k;
    .locals 1

    const-class v0, Lcom/dualboot/c/k;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/dualboot/c/k;

    return-object v0
.end method

.method public static values()[Lcom/dualboot/c/k;
    .locals 4

    const/4 v3, 0x0

    sget-object v0, Lcom/dualboot/c/k;->d:[Lcom/dualboot/c/k;

    array-length v1, v0

    new-array v2, v1, [Lcom/dualboot/c/k;

    invoke-static {v0, v3, v2, v3, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-object v2
.end method
