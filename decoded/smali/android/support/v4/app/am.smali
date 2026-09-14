.class final Landroid/support/v4/app/am;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/support/v4/app/ai;


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/support/v4/app/ag;)Landroid/app/Notification;
    .locals 18

    new-instance v1, Landroid/support/v4/app/ao;

    move-object/from16 v0, p1

    iget-object v2, v0, Landroid/support/v4/app/ag;->a:Landroid/content/Context;

    move-object/from16 v0, p1

    iget-object v3, v0, Landroid/support/v4/app/ag;->r:Landroid/app/Notification;

    move-object/from16 v0, p1

    iget-object v4, v0, Landroid/support/v4/app/ag;->b:Ljava/lang/CharSequence;

    move-object/from16 v0, p1

    iget-object v5, v0, Landroid/support/v4/app/ag;->c:Ljava/lang/CharSequence;

    move-object/from16 v0, p1

    iget-object v6, v0, Landroid/support/v4/app/ag;->h:Ljava/lang/CharSequence;

    move-object/from16 v0, p1

    iget-object v7, v0, Landroid/support/v4/app/ag;->f:Landroid/widget/RemoteViews;

    move-object/from16 v0, p1

    iget v8, v0, Landroid/support/v4/app/ag;->i:I

    move-object/from16 v0, p1

    iget-object v9, v0, Landroid/support/v4/app/ag;->d:Landroid/app/PendingIntent;

    move-object/from16 v0, p1

    iget-object v10, v0, Landroid/support/v4/app/ag;->e:Landroid/app/PendingIntent;

    move-object/from16 v0, p1

    iget-object v11, v0, Landroid/support/v4/app/ag;->g:Landroid/graphics/Bitmap;

    move-object/from16 v0, p1

    iget v12, v0, Landroid/support/v4/app/ag;->n:I

    move-object/from16 v0, p1

    iget v13, v0, Landroid/support/v4/app/ag;->o:I

    move-object/from16 v0, p1

    iget-boolean v14, v0, Landroid/support/v4/app/ag;->p:Z

    move-object/from16 v0, p1

    iget-boolean v15, v0, Landroid/support/v4/app/ag;->k:Z

    move-object/from16 v0, p1

    iget v0, v0, Landroid/support/v4/app/ag;->j:I

    move/from16 v16, v0

    move-object/from16 v0, p1

    iget-object v0, v0, Landroid/support/v4/app/ag;->m:Ljava/lang/CharSequence;

    move-object/from16 v17, v0

    invoke-direct/range {v1 .. v17}, Landroid/support/v4/app/ao;-><init>(Landroid/content/Context;Landroid/app/Notification;Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/widget/RemoteViews;ILandroid/app/PendingIntent;Landroid/app/PendingIntent;Landroid/graphics/Bitmap;IIZZILjava/lang/CharSequence;)V

    move-object/from16 v0, p1

    iget-object v2, v0, Landroid/support/v4/app/ag;->q:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/support/v4/app/ad;

    iget v4, v2, Landroid/support/v4/app/ad;->a:I

    iget-object v5, v2, Landroid/support/v4/app/ad;->b:Ljava/lang/CharSequence;

    iget-object v2, v2, Landroid/support/v4/app/ad;->c:Landroid/app/PendingIntent;

    iget-object v6, v1, Landroid/support/v4/app/ao;->a:Landroid/app/Notification$Builder;

    invoke-virtual {v6, v4, v5, v2}, Landroid/app/Notification$Builder;->addAction(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;

    goto :goto_0

    :cond_0
    move-object/from16 v0, p1

    iget-object v2, v0, Landroid/support/v4/app/ag;->l:Landroid/support/v4/app/an;

    if-eqz v2, :cond_1

    move-object/from16 v0, p1

    iget-object v2, v0, Landroid/support/v4/app/ag;->l:Landroid/support/v4/app/an;

    instance-of v2, v2, Landroid/support/v4/app/af;

    if-eqz v2, :cond_2

    move-object/from16 v0, p1

    iget-object v2, v0, Landroid/support/v4/app/ag;->l:Landroid/support/v4/app/an;

    check-cast v2, Landroid/support/v4/app/af;

    iget-object v3, v2, Landroid/support/v4/app/af;->b:Ljava/lang/CharSequence;

    iget-boolean v4, v2, Landroid/support/v4/app/af;->d:Z

    iget-object v5, v2, Landroid/support/v4/app/af;->c:Ljava/lang/CharSequence;

    iget-object v2, v2, Landroid/support/v4/app/af;->a:Ljava/lang/CharSequence;

    new-instance v6, Landroid/app/Notification$BigTextStyle;

    iget-object v7, v1, Landroid/support/v4/app/ao;->a:Landroid/app/Notification$Builder;

    invoke-direct {v6, v7}, Landroid/app/Notification$BigTextStyle;-><init>(Landroid/app/Notification$Builder;)V

    invoke-virtual {v6, v3}, Landroid/app/Notification$BigTextStyle;->setBigContentTitle(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;

    move-result-object v3

    invoke-virtual {v3, v2}, Landroid/app/Notification$BigTextStyle;->bigText(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;

    move-result-object v2

    if-eqz v4, :cond_1

    invoke-virtual {v2, v5}, Landroid/app/Notification$BigTextStyle;->setSummaryText(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;

    :cond_1
    :goto_1
    iget-object v1, v1, Landroid/support/v4/app/ao;->a:Landroid/app/Notification$Builder;

    invoke-virtual {v1}, Landroid/app/Notification$Builder;->build()Landroid/app/Notification;

    move-result-object v1

    return-object v1

    :cond_2
    move-object/from16 v0, p1

    iget-object v2, v0, Landroid/support/v4/app/ag;->l:Landroid/support/v4/app/an;

    instance-of v2, v2, Landroid/support/v4/app/ah;

    if-eqz v2, :cond_3

    move-object/from16 v0, p1

    iget-object v2, v0, Landroid/support/v4/app/ag;->l:Landroid/support/v4/app/an;

    check-cast v2, Landroid/support/v4/app/ah;

    iget-object v3, v2, Landroid/support/v4/app/ah;->b:Ljava/lang/CharSequence;

    iget-boolean v4, v2, Landroid/support/v4/app/ah;->d:Z

    iget-object v5, v2, Landroid/support/v4/app/ah;->c:Ljava/lang/CharSequence;

    iget-object v2, v2, Landroid/support/v4/app/ah;->a:Ljava/util/ArrayList;

    invoke-virtual {v1, v3, v4, v5, v2}, Landroid/support/v4/app/ao;->a(Ljava/lang/CharSequence;ZLjava/lang/CharSequence;Ljava/util/ArrayList;)V

    goto :goto_1

    :cond_3
    move-object/from16 v0, p1

    iget-object v2, v0, Landroid/support/v4/app/ag;->l:Landroid/support/v4/app/an;

    instance-of v2, v2, Landroid/support/v4/app/ae;

    if-eqz v2, :cond_1

    move-object/from16 v0, p1

    iget-object v2, v0, Landroid/support/v4/app/ag;->l:Landroid/support/v4/app/an;

    check-cast v2, Landroid/support/v4/app/ae;

    iget-object v3, v2, Landroid/support/v4/app/ae;->b:Ljava/lang/CharSequence;

    iget-boolean v4, v2, Landroid/support/v4/app/ae;->d:Z

    iget-object v5, v2, Landroid/support/v4/app/ae;->c:Ljava/lang/CharSequence;

    iget-object v2, v2, Landroid/support/v4/app/ae;->a:Landroid/graphics/Bitmap;

    new-instance v6, Landroid/app/Notification$BigPictureStyle;

    iget-object v7, v1, Landroid/support/v4/app/ao;->a:Landroid/app/Notification$Builder;

    invoke-direct {v6, v7}, Landroid/app/Notification$BigPictureStyle;-><init>(Landroid/app/Notification$Builder;)V

    invoke-virtual {v6, v3}, Landroid/app/Notification$BigPictureStyle;->setBigContentTitle(Ljava/lang/CharSequence;)Landroid/app/Notification$BigPictureStyle;

    move-result-object v3

    invoke-virtual {v3, v2}, Landroid/app/Notification$BigPictureStyle;->bigPicture(Landroid/graphics/Bitmap;)Landroid/app/Notification$BigPictureStyle;

    move-result-object v2

    if-eqz v4, :cond_1

    invoke-virtual {v2, v5}, Landroid/app/Notification$BigPictureStyle;->setSummaryText(Ljava/lang/CharSequence;)Landroid/app/Notification$BigPictureStyle;

    goto :goto_1
.end method
