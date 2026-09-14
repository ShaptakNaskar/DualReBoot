.class public final enum Lcom/dualboot/e/a/b;
.super Ljava/lang/Enum;


# static fields
.field public static final enum a:Lcom/dualboot/e/a/b;

.field public static final enum b:Lcom/dualboot/e/a/b;

.field public static final enum c:Lcom/dualboot/e/a/b;

.field public static final enum d:Lcom/dualboot/e/a/b;

.field private static final synthetic e:[Lcom/dualboot/e/a/b;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    const/4 v5, 0x3

    const/4 v4, 0x2

    const/4 v3, 0x1

    const/4 v2, 0x0

    new-instance v0, Lcom/dualboot/e/a/b;

    const-string v1, "ICON_NONE"

    invoke-direct {v0, v1, v2}, Lcom/dualboot/e/a/b;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/e/a/b;->a:Lcom/dualboot/e/a/b;

    new-instance v0, Lcom/dualboot/e/a/b;

    const-string v1, "ICON_OWNED"

    invoke-direct {v0, v1, v3}, Lcom/dualboot/e/a/b;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/e/a/b;->b:Lcom/dualboot/e/a/b;

    new-instance v0, Lcom/dualboot/e/a/b;

    const-string v1, "ICON_NOTOWNED"

    invoke-direct {v0, v1, v4}, Lcom/dualboot/e/a/b;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/e/a/b;->c:Lcom/dualboot/e/a/b;

    new-instance v0, Lcom/dualboot/e/a/b;

    const-string v1, "ICON_NOTOWNED_MISSINGREQ"

    invoke-direct {v0, v1, v5}, Lcom/dualboot/e/a/b;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/e/a/b;->d:Lcom/dualboot/e/a/b;

    const/4 v0, 0x4

    new-array v0, v0, [Lcom/dualboot/e/a/b;

    sget-object v1, Lcom/dualboot/e/a/b;->a:Lcom/dualboot/e/a/b;

    aput-object v1, v0, v2

    sget-object v1, Lcom/dualboot/e/a/b;->b:Lcom/dualboot/e/a/b;

    aput-object v1, v0, v3

    sget-object v1, Lcom/dualboot/e/a/b;->c:Lcom/dualboot/e/a/b;

    aput-object v1, v0, v4

    sget-object v1, Lcom/dualboot/e/a/b;->d:Lcom/dualboot/e/a/b;

    aput-object v1, v0, v5

    sput-object v0, Lcom/dualboot/e/a/b;->e:[Lcom/dualboot/e/a/b;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/dualboot/e/a/b;
    .locals 1

    const-class v0, Lcom/dualboot/e/a/b;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/dualboot/e/a/b;

    return-object v0
.end method

.method public static values()[Lcom/dualboot/e/a/b;
    .locals 4

    const/4 v3, 0x0

    sget-object v0, Lcom/dualboot/e/a/b;->e:[Lcom/dualboot/e/a/b;

    array-length v1, v0

    new-array v2, v1, [Lcom/dualboot/e/a/b;

    invoke-static {v0, v3, v2, v3, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-object v2
.end method
