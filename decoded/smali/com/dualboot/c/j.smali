.class public final enum Lcom/dualboot/c/j;
.super Ljava/lang/Enum;


# static fields
.field public static final enum a:Lcom/dualboot/c/j;

.field public static final enum b:Lcom/dualboot/c/j;

.field public static final enum c:Lcom/dualboot/c/j;

.field public static final enum d:Lcom/dualboot/c/j;

.field public static final enum e:Lcom/dualboot/c/j;

.field public static final enum f:Lcom/dualboot/c/j;

.field public static final enum g:Lcom/dualboot/c/j;

.field private static final synthetic h:[Lcom/dualboot/c/j;


# direct methods
.method static constructor <clinit>()V
    .locals 8

    const/4 v7, 0x4

    const/4 v6, 0x3

    const/4 v5, 0x2

    const/4 v4, 0x1

    const/4 v3, 0x0

    new-instance v0, Lcom/dualboot/c/j;

    const-string v1, "REQUEST_SURFACE_DESTROY"

    invoke-direct {v0, v1, v3}, Lcom/dualboot/c/j;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/c/j;->a:Lcom/dualboot/c/j;

    new-instance v0, Lcom/dualboot/c/j;

    const-string v1, "REQUEST_SURFACE_CREATE"

    invoke-direct {v0, v1, v4}, Lcom/dualboot/c/j;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/c/j;->b:Lcom/dualboot/c/j;

    new-instance v0, Lcom/dualboot/c/j;

    const-string v1, "REQUEST_MAKE_VISIBLE"

    invoke-direct {v0, v1, v5}, Lcom/dualboot/c/j;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/c/j;->c:Lcom/dualboot/c/j;

    new-instance v0, Lcom/dualboot/c/j;

    const-string v1, "REQUEST_MAKE_HIDDEN"

    invoke-direct {v0, v1, v6}, Lcom/dualboot/c/j;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/c/j;->d:Lcom/dualboot/c/j;

    new-instance v0, Lcom/dualboot/c/j;

    const-string v1, "REQUEST_SHUTDOWN"

    invoke-direct {v0, v1, v7}, Lcom/dualboot/c/j;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/c/j;->e:Lcom/dualboot/c/j;

    new-instance v0, Lcom/dualboot/c/j;

    const-string v1, "REQUEST_SLEEP"

    const/4 v2, 0x5

    invoke-direct {v0, v1, v2}, Lcom/dualboot/c/j;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/c/j;->f:Lcom/dualboot/c/j;

    new-instance v0, Lcom/dualboot/c/j;

    const-string v1, "REQUEST_SLEEP_LONG"

    const/4 v2, 0x6

    invoke-direct {v0, v1, v2}, Lcom/dualboot/c/j;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/dualboot/c/j;->g:Lcom/dualboot/c/j;

    const/4 v0, 0x7

    new-array v0, v0, [Lcom/dualboot/c/j;

    sget-object v1, Lcom/dualboot/c/j;->a:Lcom/dualboot/c/j;

    aput-object v1, v0, v3

    sget-object v1, Lcom/dualboot/c/j;->b:Lcom/dualboot/c/j;

    aput-object v1, v0, v4

    sget-object v1, Lcom/dualboot/c/j;->c:Lcom/dualboot/c/j;

    aput-object v1, v0, v5

    sget-object v1, Lcom/dualboot/c/j;->d:Lcom/dualboot/c/j;

    aput-object v1, v0, v6

    sget-object v1, Lcom/dualboot/c/j;->e:Lcom/dualboot/c/j;

    aput-object v1, v0, v7

    const/4 v1, 0x5

    sget-object v2, Lcom/dualboot/c/j;->f:Lcom/dualboot/c/j;

    aput-object v2, v0, v1

    const/4 v1, 0x6

    sget-object v2, Lcom/dualboot/c/j;->g:Lcom/dualboot/c/j;

    aput-object v2, v0, v1

    sput-object v0, Lcom/dualboot/c/j;->h:[Lcom/dualboot/c/j;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/dualboot/c/j;
    .locals 1

    const-class v0, Lcom/dualboot/c/j;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/dualboot/c/j;

    return-object v0
.end method

.method public static values()[Lcom/dualboot/c/j;
    .locals 4

    const/4 v3, 0x0

    sget-object v0, Lcom/dualboot/c/j;->h:[Lcom/dualboot/c/j;

    array-length v1, v0

    new-array v2, v1, [Lcom/dualboot/c/j;

    invoke-static {v0, v3, v2, v3, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-object v2
.end method
