.class public Lcom/dualboot/engine/EngineInterface;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/util/concurrent/atomic/AtomicBoolean;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/dualboot/engine/EngineInterface;->a:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-static {}, Lcom/dualboot/engine/EngineInterface;->a()Z

    return-void
.end method

.method public static native AddBitmapData(ILjava/lang/String;Ljava/nio/ByteBuffer;III)Z
.end method

.method public static native Destroy(I)I
.end method

.method public static native GetNeedsReload(I)Z
.end method

.method public static native LoadFile(ILandroid/content/res/AssetManager;Ljava/lang/String;)I
.end method

.method public static native LoadResources(ILandroid/content/res/AssetManager;)I
.end method

.method public static native Recreate(I)I
.end method

.method public static native SetPreferenceCameraSet(ILjava/lang/String;Ljava/lang/String;)Z
.end method

.method public static native SetPreferenceEnvironment(ILjava/lang/String;Ljava/lang/String;)Z
.end method

.method public static native SetPreferenceFontMessage(ILjava/lang/String;Ljava/lang/String;)Z
.end method

.method public static native SetPreferenceModelSwap(ILjava/lang/String;Ljava/lang/String;)Z
.end method

.method public static native SetPreferenceModelToggle(ILjava/lang/String;Ljava/lang/String;)Z
.end method

.method public static native SetPreferenceTextureGroup(ILjava/lang/String;Ljava/lang/String;)Z
.end method

.method public static native SetPreferenceTimeOfDay(ILjava/lang/String;Ljava/lang/String;)Z
.end method

.method public static native SetPreferenceTimeOfDayAuto(ILjava/lang/String;Ljava/lang/String;)Z
.end method

.method public static native SetPreferenceUserImage(ILjava/lang/String;Ljava/lang/String;)Z
.end method

.method public static native SetStateLocation(IFF)Z
.end method

.method public static native Sleep(J)Z
.end method

.method public static native Update(IIIFFJDFZ)I
.end method

.method public static a(ILandroid/content/Context;Ljava/lang/String;Ljava/lang/String;FF)I
    .locals 10

    const/4 v2, 0x0

    invoke-virtual {p1}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v7

    invoke-static {p0}, Lcom/dualboot/engine/EngineInterface;->Recreate(I)I

    move-result v0

    if-eqz v0, :cond_15

    invoke-static {v0, p4, p5}, Lcom/dualboot/engine/EngineInterface;->SetStateLocation(IFF)Z

    invoke-static {v0, v7, p2}, Lcom/dualboot/engine/EngineInterface;->LoadFile(ILandroid/content/res/AssetManager;Ljava/lang/String;)I

    move-result v0

    if-eqz v0, :cond_15

    if-nez v0, :cond_0

    :goto_0
    if-eqz v2, :cond_15

    invoke-static {v0, v7}, Lcom/dualboot/engine/EngineInterface;->LoadResources(ILandroid/content/res/AssetManager;)I

    move-result v0

    if-eqz v0, :cond_15

    :goto_1
    return v0

    :cond_0
    new-instance v8, Lcom/dualboot/engine/c;

    invoke-direct {v8, p1, p3}, Lcom/dualboot/engine/c;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    move v1, v2

    :goto_2
    invoke-virtual {v8}, Lcom/dualboot/engine/c;->n()I

    move-result v3

    if-lt v1, v3, :cond_1

    move v1, v2

    :goto_3
    invoke-virtual {v8}, Lcom/dualboot/engine/c;->o()I

    move-result v3

    if-lt v1, v3, :cond_3

    move v1, v2

    :goto_4
    invoke-virtual {v8}, Lcom/dualboot/engine/c;->m()I

    move-result v3

    if-lt v1, v3, :cond_5

    move v1, v2

    :goto_5
    invoke-virtual {v8}, Lcom/dualboot/engine/c;->p()I

    move-result v3

    if-lt v1, v3, :cond_7

    move v1, v2

    :goto_6
    invoke-virtual {v8}, Lcom/dualboot/engine/c;->q()I

    move-result v3

    if-lt v1, v3, :cond_9

    move v1, v2

    :goto_7
    invoke-virtual {v8}, Lcom/dualboot/engine/c;->r()I

    move-result v3

    if-lt v1, v3, :cond_b

    move v1, v2

    :goto_8
    invoke-virtual {v8}, Lcom/dualboot/engine/c;->s()I

    move-result v3

    if-lt v1, v3, :cond_d

    move v1, v2

    :goto_9
    invoke-virtual {v8}, Lcom/dualboot/engine/c;->t()I

    move-result v3

    if-lt v1, v3, :cond_f

    move v6, v2

    :goto_a
    invoke-virtual {v8}, Lcom/dualboot/engine/c;->u()I

    move-result v1

    if-lt v6, v1, :cond_11

    const/4 v2, 0x1

    goto :goto_0

    :cond_1
    invoke-virtual {v8, v1}, Lcom/dualboot/engine/c;->b(I)Lcom/dualboot/engine/f;

    move-result-object v3

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->c()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v4, v5}, Lcom/dualboot/engine/EngineInterface;->SetPreferenceTimeOfDay(ILjava/lang/String;Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_2

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "Unable to set preference \'"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->d()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    const-string v5, " = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    const-string v4, "\'"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    :cond_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    :cond_3
    invoke-virtual {v8, v1}, Lcom/dualboot/engine/c;->c(I)Lcom/dualboot/engine/f;

    move-result-object v3

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->c()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v4, v5}, Lcom/dualboot/engine/EngineInterface;->SetPreferenceTimeOfDayAuto(ILjava/lang/String;Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_4

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "Unable to set preference \'"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->d()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    const-string v5, " = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    const-string v4, "\'"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    :cond_4
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_3

    :cond_5
    invoke-virtual {v8, v1}, Lcom/dualboot/engine/c;->a(I)Lcom/dualboot/engine/f;

    move-result-object v3

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->c()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v4, v5}, Lcom/dualboot/engine/EngineInterface;->SetPreferenceEnvironment(ILjava/lang/String;Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_6

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "Unable to set preference \'"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->d()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    const-string v5, " = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    const-string v4, "\'"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    :cond_6
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_4

    :cond_7
    invoke-virtual {v8, v1}, Lcom/dualboot/engine/c;->d(I)Lcom/dualboot/engine/f;

    move-result-object v3

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->c()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v4, v5}, Lcom/dualboot/engine/EngineInterface;->SetPreferenceCameraSet(ILjava/lang/String;Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_8

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "Unable to set preference \'"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->d()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    const-string v5, " = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    const-string v4, "\'"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    :cond_8
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_5

    :cond_9
    invoke-virtual {v8, v1}, Lcom/dualboot/engine/c;->e(I)Lcom/dualboot/engine/f;

    move-result-object v3

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->c()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v4, v5}, Lcom/dualboot/engine/EngineInterface;->SetPreferenceTextureGroup(ILjava/lang/String;Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_a

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "Unable to set preference \'"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->d()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    const-string v5, " = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    const-string v4, "\'"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    :cond_a
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_6

    :cond_b
    invoke-virtual {v8, v1}, Lcom/dualboot/engine/c;->f(I)Lcom/dualboot/engine/f;

    move-result-object v3

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->c()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v4, v5}, Lcom/dualboot/engine/EngineInterface;->SetPreferenceModelSwap(ILjava/lang/String;Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_c

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "Unable to set preference \'"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->d()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    const-string v5, " = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    const-string v4, "\'"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    :cond_c
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_7

    :cond_d
    invoke-virtual {v8, v1}, Lcom/dualboot/engine/c;->g(I)Lcom/dualboot/engine/f;

    move-result-object v3

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->c()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v4, v5}, Lcom/dualboot/engine/EngineInterface;->SetPreferenceModelToggle(ILjava/lang/String;Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_e

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "Unable to set preference \'"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->d()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    const-string v5, " = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    const-string v4, "\'"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    :cond_e
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_8

    :cond_f
    invoke-virtual {v8, v1}, Lcom/dualboot/engine/c;->h(I)Lcom/dualboot/engine/f;

    move-result-object v3

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->c()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v4, v5}, Lcom/dualboot/engine/EngineInterface;->SetPreferenceFontMessage(ILjava/lang/String;Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_10

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "Unable to set preference \'"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->d()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    const-string v5, " = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    const-string v4, "\'"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    :cond_10
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_9

    :cond_11
    invoke-virtual {v8, v6}, Lcom/dualboot/engine/c;->i(I)Lcom/dualboot/engine/f;

    move-result-object v9

    invoke-virtual {v9}, Lcom/dualboot/engine/f;->c()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v9}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/dualboot/engine/EngineInterface;->SetPreferenceUserImage(ILjava/lang/String;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_14

    new-instance v5, Lcom/dualboot/engine/a;

    invoke-direct {v5}, Lcom/dualboot/engine/a;-><init>()V

    invoke-virtual {v9}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v5, p1, v1}, Lcom/dualboot/engine/a;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_13

    invoke-virtual {v9}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v1

    iget-object v2, v5, Lcom/dualboot/engine/a;->a:Ljava/nio/ByteBuffer;

    iget v3, v5, Lcom/dualboot/engine/a;->b:I

    iget v4, v5, Lcom/dualboot/engine/a;->c:I

    iget v5, v5, Lcom/dualboot/engine/a;->d:I

    invoke-static/range {v0 .. v5}, Lcom/dualboot/engine/EngineInterface;->AddBitmapData(ILjava/lang/String;Ljava/nio/ByteBuffer;III)Z

    move-result v1

    if-nez v1, :cond_12

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Unable to add bitmap "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v9}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    :cond_12
    :goto_b
    add-int/lit8 v2, v6, 0x1

    move v6, v2

    goto/16 :goto_a

    :cond_13
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Unable to load bitmap "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v9}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    goto :goto_b

    :cond_14
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Unable to set preference \'"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v9}, Lcom/dualboot/engine/f;->d()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    const-string v2, " = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v9}, Lcom/dualboot/engine/f;->h()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    const-string v2, "\'"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    goto :goto_b

    :cond_15
    invoke-static {v0}, Lcom/dualboot/engine/EngineInterface;->Destroy(I)I

    move-result v0

    goto/16 :goto_1
.end method

.method public static a()Z
    .locals 3

    const/4 v0, 0x1

    sget-object v1, Lcom/dualboot/engine/EngineInterface;->a:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v1

    if-eqz v1, :cond_0

    :goto_0
    return v0

    :cond_0
    :try_start_0
    const-string v1, "dbgengine"

    invoke-static {v1}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V

    sget-object v1, Lcom/dualboot/engine/EngineInterface;->a:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V
    :try_end_0
    .catch Ljava/lang/UnsatisfiedLinkError; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    const/4 v0, 0x0

    goto :goto_0
.end method
