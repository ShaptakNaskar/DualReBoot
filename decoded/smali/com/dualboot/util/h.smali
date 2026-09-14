.class public final enum Lcom/dualboot/util/h;
.super Ljava/lang/Enum;


# static fields
.field public static final enum a:Lcom/dualboot/util/h;

.field public static final enum b:Lcom/dualboot/util/h;

.field public static final enum c:Lcom/dualboot/util/h;

.field private static final synthetic d:[Lcom/dualboot/util/h;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    const/4 v4, 0x2

    const/4 v3, 0x1

    const/4 v2, 0x0

    new-instance v0, Lcom/dualboot/util/h;

    const-string v1, "RESIZE_FIT"

    invoke-direct {v0, v1, v2}, Lcom/dualboot/util/h;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/util/h;->a:Lcom/dualboot/util/h;

    new-instance v0, Lcom/dualboot/util/h;

    const-string v1, "RESIZE_FILL"

    invoke-direct {v0, v1, v3}, Lcom/dualboot/util/h;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/util/h;->b:Lcom/dualboot/util/h;

    new-instance v0, Lcom/dualboot/util/h;

    const-string v1, "RESIZE_STRETCH"

    invoke-direct {v0, v1, v4}, Lcom/dualboot/util/h;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/util/h;->c:Lcom/dualboot/util/h;

    const/4 v0, 0x3

    new-array v0, v0, [Lcom/dualboot/util/h;

    sget-object v1, Lcom/dualboot/util/h;->a:Lcom/dualboot/util/h;

    aput-object v1, v0, v2

    sget-object v1, Lcom/dualboot/util/h;->b:Lcom/dualboot/util/h;

    aput-object v1, v0, v3

    sget-object v1, Lcom/dualboot/util/h;->c:Lcom/dualboot/util/h;

    aput-object v1, v0, v4

    sput-object v0, Lcom/dualboot/util/h;->d:[Lcom/dualboot/util/h;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/dualboot/util/h;
    .locals 1

    const-class v0, Lcom/dualboot/util/h;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/dualboot/util/h;

    return-object v0
.end method

.method public static values()[Lcom/dualboot/util/h;
    .locals 4

    const/4 v3, 0x0

    sget-object v0, Lcom/dualboot/util/h;->d:[Lcom/dualboot/util/h;

    array-length v1, v0

    new-array v2, v1, [Lcom/dualboot/util/h;

    invoke-static {v0, v3, v2, v3, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-object v2
.end method
