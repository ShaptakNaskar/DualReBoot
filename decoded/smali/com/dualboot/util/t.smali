.class public final enum Lcom/dualboot/util/t;
.super Ljava/lang/Enum;


# static fields
.field public static final enum a:Lcom/dualboot/util/t;

.field public static final enum b:Lcom/dualboot/util/t;

.field private static final synthetic c:[Lcom/dualboot/util/t;


# direct methods
.method static constructor <clinit>()V
    .locals 4

    const/4 v3, 0x1

    const/4 v2, 0x0

    new-instance v0, Lcom/dualboot/util/t;

    const-string v1, "STRING"

    invoke-direct {v0, v1, v2}, Lcom/dualboot/util/t;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/util/t;->a:Lcom/dualboot/util/t;

    new-instance v0, Lcom/dualboot/util/t;

    const-string v1, "BOOLEAN"

    invoke-direct {v0, v1, v3}, Lcom/dualboot/util/t;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/util/t;->b:Lcom/dualboot/util/t;

    const/4 v0, 0x2

    new-array v0, v0, [Lcom/dualboot/util/t;

    sget-object v1, Lcom/dualboot/util/t;->a:Lcom/dualboot/util/t;

    aput-object v1, v0, v2

    sget-object v1, Lcom/dualboot/util/t;->b:Lcom/dualboot/util/t;

    aput-object v1, v0, v3

    sput-object v0, Lcom/dualboot/util/t;->c:[Lcom/dualboot/util/t;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/dualboot/util/t;
    .locals 1

    const-class v0, Lcom/dualboot/util/t;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/dualboot/util/t;

    return-object v0
.end method

.method public static values()[Lcom/dualboot/util/t;
    .locals 4

    const/4 v3, 0x0

    sget-object v0, Lcom/dualboot/util/t;->c:[Lcom/dualboot/util/t;

    array-length v1, v0

    new-array v2, v1, [Lcom/dualboot/util/t;

    invoke-static {v0, v3, v2, v3, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-object v2
.end method
