.class public final Lcom/dualboot/e/t;
.super Landroid/os/AsyncTask;


# instance fields
.field final synthetic a:Lcom/dualboot/e/r;

.field private final b:Landroid/content/Context;

.field private final c:Landroid/content/Intent;

.field private final d:Ljava/lang/String;

.field private final e:Ljava/lang/String;

.field private final f:F

.field private final g:F

.field private h:Lcom/dualboot/util/g;

.field private i:Z

.field private j:Landroid/app/ProgressDialog;


# direct methods
.method public constructor <init>(Lcom/dualboot/e/r;Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;FF)V
    .locals 4

    const/4 v1, 0x0

    const/4 v0, 0x0

    iput-object p1, p0, Lcom/dualboot/e/t;->a:Lcom/dualboot/e/r;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    iput-object v1, p0, Lcom/dualboot/e/t;->h:Lcom/dualboot/util/g;

    iput-boolean v0, p0, Lcom/dualboot/e/t;->i:Z

    iput-object v1, p0, Lcom/dualboot/e/t;->j:Landroid/app/ProgressDialog;

    iput-object p2, p0, Lcom/dualboot/e/t;->b:Landroid/content/Context;

    iput-object p3, p0, Lcom/dualboot/e/t;->c:Landroid/content/Intent;

    iput-object p4, p0, Lcom/dualboot/e/t;->d:Ljava/lang/String;

    iput-object p5, p0, Lcom/dualboot/e/t;->e:Ljava/lang/String;

    iput p6, p0, Lcom/dualboot/e/t;->f:F

    iput p7, p0, Lcom/dualboot/e/t;->g:F

    iget-object v1, p0, Lcom/dualboot/e/t;->c:Landroid/content/Intent;

    invoke-virtual {v1}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    if-lez v2, :cond_0

    new-instance v2, Lcom/dualboot/util/g;

    iget-object v3, p0, Lcom/dualboot/e/t;->b:Landroid/content/Context;

    invoke-direct {v2, v3, v1}, Lcom/dualboot/util/g;-><init>(Landroid/content/Context;Landroid/net/Uri;)V

    iput-object v2, p0, Lcom/dualboot/e/t;->h:Lcom/dualboot/util/g;

    invoke-virtual {v1}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object v1

    sget-object v2, Landroid/provider/MediaStore$Images$Media;->EXTERNAL_CONTENT_URI:Landroid/net/Uri;

    invoke-virtual {v2}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object v2

    sget-object v3, Landroid/provider/MediaStore$Images$Media;->INTERNAL_CONTENT_URI:Landroid/net/Uri;

    invoke-virtual {v3}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-virtual {v1, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    :goto_0
    iput-boolean v0, p0, Lcom/dualboot/e/t;->i:Z

    :cond_0
    return-void

    :cond_1
    const/4 v0, 0x1

    goto :goto_0
.end method

.method static synthetic a(Lcom/dualboot/e/t;)Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/t;->b:Landroid/content/Context;

    return-object v0
.end method

.method private varargs a()Ljava/lang/String;
    .locals 5

    iget-object v0, p0, Lcom/dualboot/e/t;->h:Lcom/dualboot/util/g;

    if-nez v0, :cond_0

    const-string v0, "No image selected from the gallery"

    :goto_0
    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/dualboot/e/t;->h:Lcom/dualboot/util/g;

    const-string v1, "img-cache"

    iget-object v0, v0, Lcom/dualboot/util/g;->a:Landroid/content/Context;

    invoke-virtual {v0, v1}, Landroid/content/Context;->deleteFile(Ljava/lang/String;)Z

    iget-boolean v0, p0, Lcom/dualboot/e/t;->i:Z

    if-eqz v0, :cond_1

    const-string v0, "Copying image..."

    :goto_1
    invoke-direct {p0, v0}, Lcom/dualboot/e/t;->a(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/dualboot/e/t;->isCancelled()Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "Cancelled image download"

    goto :goto_0

    :cond_1
    const-string v0, "Downloading image..."

    goto :goto_1

    :cond_2
    iget-object v0, p0, Lcom/dualboot/e/t;->h:Lcom/dualboot/util/g;

    const-string v1, "img-cache"

    invoke-virtual {v0, v1}, Lcom/dualboot/util/g;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-boolean v0, p0, Lcom/dualboot/e/t;->i:Z

    if-eqz v0, :cond_3

    const-string v0, "Unable to copy the full image. Please check your storage device and try again."

    goto :goto_0

    :cond_3
    const-string v0, "Unable to download the full image. Please check your network connection and try again."

    goto :goto_0

    :cond_4
    const/4 v2, 0x0

    const-wide/16 v0, 0x0

    :goto_2
    if-nez v2, :cond_5

    const-wide/16 v3, 0xa

    cmp-long v3, v0, v3

    if-ltz v3, :cond_6

    :cond_5
    if-nez v2, :cond_9

    iget-boolean v0, p0, Lcom/dualboot/e/t;->i:Z

    if-eqz v0, :cond_8

    const-string v0, "Unable to read the image. This may be due to an incomplete copy. Please check your storage device and try again."

    goto :goto_0

    :cond_6
    const-string v2, "Reading image..."

    invoke-direct {p0, v2}, Lcom/dualboot/e/t;->a(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/dualboot/e/t;->isCancelled()Z

    move-result v2

    if-eqz v2, :cond_7

    const-string v0, "Cancelled image read"

    goto :goto_0

    :cond_7
    const-wide/16 v2, 0x3e8

    :try_start_0
    invoke-static {v2, v3}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :goto_3
    iget-object v2, p0, Lcom/dualboot/e/t;->h:Lcom/dualboot/util/g;

    const-string v3, "img-cache"

    invoke-virtual {v2, v3}, Lcom/dualboot/util/g;->b(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v2

    const-wide/16 v3, 0x1

    add-long/2addr v0, v3

    goto :goto_2

    :cond_8
    const-string v0, "Unable to read the image. This may be due to an incomplete download. Please check your network connection and try again."

    goto :goto_0

    :cond_9
    const-string v0, "Converting image..."

    invoke-direct {p0, v0}, Lcom/dualboot/e/t;->a(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/dualboot/e/t;->isCancelled()Z

    move-result v0

    if-eqz v0, :cond_a

    const-string v0, "Cancelled image conversion"

    goto :goto_0

    :cond_a
    iget-object v0, p0, Lcom/dualboot/e/t;->h:Lcom/dualboot/util/g;

    iget v1, p0, Lcom/dualboot/e/t;->f:F

    iget v3, p0, Lcom/dualboot/e/t;->g:F

    sget-object v4, Lcom/dualboot/util/h;->b:Lcom/dualboot/util/h;

    invoke-virtual {v0, v2, v1, v3, v4}, Lcom/dualboot/util/g;->a(Landroid/graphics/Bitmap;FFLcom/dualboot/util/h;)Landroid/graphics/Bitmap;

    move-result-object v0

    if-nez v0, :cond_b

    const-string v0, "Unable to convert the image. Please try a smaller image."

    goto/16 :goto_0

    :cond_b
    const-string v1, "Saving image..."

    invoke-direct {p0, v1}, Lcom/dualboot/e/t;->a(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/dualboot/e/t;->isCancelled()Z

    move-result v1

    if-eqz v1, :cond_c

    const-string v0, "Cancelled image saving"

    goto/16 :goto_0

    :cond_c
    iget-object v1, p0, Lcom/dualboot/e/t;->h:Lcom/dualboot/util/g;

    iget-object v2, p0, Lcom/dualboot/e/t;->e:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lcom/dualboot/util/g;->a(Landroid/graphics/Bitmap;Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_d

    const-string v0, "Unable to save the image. Please try another image."

    goto/16 :goto_0

    :cond_d
    const-string v0, ""

    goto/16 :goto_0

    :catch_0
    move-exception v2

    goto :goto_3
.end method

.method private a(Ljava/lang/String;)V
    .locals 2

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    invoke-virtual {p0, v0}, Lcom/dualboot/e/t;->publishProgress([Ljava/lang/Object;)V

    const-wide/16 v0, 0xfa

    :try_start_0
    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :goto_0
    return-void

    :catch_0
    move-exception v0

    goto :goto_0
.end method

.method static synthetic b(Lcom/dualboot/e/t;)Landroid/content/Intent;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/t;->c:Landroid/content/Intent;

    return-object v0
.end method

.method static synthetic c(Lcom/dualboot/e/t;)Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/t;->d:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic d(Lcom/dualboot/e/t;)Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/t;->e:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic e(Lcom/dualboot/e/t;)F
    .locals 1

    iget v0, p0, Lcom/dualboot/e/t;->f:F

    return v0
.end method

.method static synthetic f(Lcom/dualboot/e/t;)F
    .locals 1

    iget v0, p0, Lcom/dualboot/e/t;->g:F

    return v0
.end method

.method static synthetic g(Lcom/dualboot/e/t;)Lcom/dualboot/e/r;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/t;->a:Lcom/dualboot/e/r;

    return-object v0
.end method


# virtual methods
.method protected final varargs synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1

    invoke-direct {p0}, Lcom/dualboot/e/t;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected final synthetic onCancelled(Ljava/lang/Object;)V
    .locals 2

    check-cast p1, Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "ImageLoaderAsync / onCancelled / "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    invoke-static {}, Lcom/dualboot/e/r;->d()V

    iget-object v1, p0, Lcom/dualboot/e/t;->h:Lcom/dualboot/util/g;

    monitor-enter v1

    const/4 v0, 0x1

    :try_start_0
    iput-boolean v0, v1, Lcom/dualboot/util/g;->b:Z

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit v1

    throw v0
.end method

.method protected final synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 5

    const/4 v0, 0x0

    const/4 v4, 0x0

    check-cast p1, Ljava/lang/String;

    iget-object v1, p0, Lcom/dualboot/e/t;->j:Landroid/app/ProgressDialog;

    invoke-virtual {v1}, Landroid/app/ProgressDialog;->dismiss()V

    iput-object v0, p0, Lcom/dualboot/e/t;->j:Landroid/app/ProgressDialog;

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v1

    if-nez v1, :cond_3

    iget-object v1, p0, Lcom/dualboot/e/t;->b:Landroid/content/Context;

    invoke-static {v1}, Lcom/dualboot/b/a;->a(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v1

    invoke-interface {v1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v2, p0, Lcom/dualboot/e/t;->d:Ljava/lang/String;

    const-string v3, "<undefined>"

    invoke-interface {v1, v2, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    iget-object v2, p0, Lcom/dualboot/e/t;->d:Ljava/lang/String;

    iget-object v3, p0, Lcom/dualboot/e/t;->e:Ljava/lang/String;

    invoke-interface {v1, v2, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    :cond_0
    iget-object v1, p0, Lcom/dualboot/e/t;->a:Lcom/dualboot/e/r;

    invoke-virtual {v1}, Lcom/dualboot/e/r;->b()Landroid/preference/PreferenceScreen;

    move-result-object v1

    if-eqz v1, :cond_1

    iget-object v0, p0, Lcom/dualboot/e/t;->d:Ljava/lang/String;

    invoke-virtual {v1, v0}, Landroid/preference/PreferenceScreen;->findPreference(Ljava/lang/CharSequence;)Landroid/preference/Preference;

    move-result-object v0

    :cond_1
    if-eqz v0, :cond_2

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Image set for the "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Landroid/preference/Preference;->getTitle()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    sget-object v2, Ljava/util/Locale;->US:Ljava/util/Locale;

    invoke-virtual {v0, v2}, Ljava/lang/String;->toLowerCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, "!"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/dualboot/e/t;->b:Landroid/content/Context;

    invoke-static {v1, v0, v4}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    if-eqz v0, :cond_2

    const/16 v1, 0x11

    invoke-virtual {v0, v1, v4, v4}, Landroid/widget/Toast;->setGravity(III)V

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    :cond_2
    :goto_0
    return-void

    :cond_3
    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v2

    if-lez v2, :cond_2

    iget-object v2, p0, Lcom/dualboot/e/t;->b:Landroid/content/Context;

    invoke-static {v2}, Lcom/dualboot/e/aa;->b(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v2

    new-instance v3, Landroid/app/AlertDialog$Builder;

    invoke-direct {v3, v2}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const/4 v2, 0x1

    invoke-virtual {v3, v2}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    const-string v2, "Couldn\'t set image"

    invoke-virtual {v3, v2}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    invoke-virtual {v3, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    const/high16 v1, 0x1040000

    invoke-virtual {v3, v1, v0}, Landroid/app/AlertDialog$Builder;->setNegativeButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    const-string v0, "Try again"

    new-instance v1, Lcom/dualboot/e/v;

    invoke-direct {v1, p0}, Lcom/dualboot/e/v;-><init>(Lcom/dualboot/e/t;)V

    invoke-virtual {v3, v0, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    invoke-virtual {v3}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    goto :goto_0
.end method

.method protected final onPreExecute()V
    .locals 6

    const/4 v5, 0x0

    const/4 v0, 0x0

    const/4 v1, 0x1

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0xe

    if-lt v2, v3, :cond_2

    move v2, v1

    :goto_0
    if-eqz v2, :cond_0

    move v0, v1

    :cond_0
    new-instance v3, Landroid/app/ProgressDialog;

    iget-object v4, p0, Lcom/dualboot/e/t;->b:Landroid/content/Context;

    invoke-direct {v3, v4}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    iput-object v3, p0, Lcom/dualboot/e/t;->j:Landroid/app/ProgressDialog;

    iget-object v3, p0, Lcom/dualboot/e/t;->j:Landroid/app/ProgressDialog;

    invoke-virtual {v3, v0}, Landroid/app/ProgressDialog;->setProgressStyle(I)V

    iget-object v0, p0, Lcom/dualboot/e/t;->j:Landroid/app/ProgressDialog;

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    iget-object v0, p0, Lcom/dualboot/e/t;->j:Landroid/app/ProgressDialog;

    const-string v3, "Working..."

    invoke-virtual {v0, v3}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/dualboot/e/t;->j:Landroid/app/ProgressDialog;

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    iget-object v0, p0, Lcom/dualboot/e/t;->j:Landroid/app/ProgressDialog;

    new-instance v1, Lcom/dualboot/e/u;

    invoke-direct {v1, p0}, Lcom/dualboot/e/u;-><init>(Lcom/dualboot/e/t;)V

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setOnCancelListener(Landroid/content/DialogInterface$OnCancelListener;)V

    iget-object v0, p0, Lcom/dualboot/e/t;->j:Landroid/app/ProgressDialog;

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->show()V

    if-eqz v2, :cond_1

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xb

    if-lt v0, v1, :cond_1

    iget-object v0, p0, Lcom/dualboot/e/t;->j:Landroid/app/ProgressDialog;

    invoke-virtual {v0, v5}, Landroid/app/ProgressDialog;->setProgressNumberFormat(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/dualboot/e/t;->j:Landroid/app/ProgressDialog;

    invoke-virtual {v0, v5}, Landroid/app/ProgressDialog;->setProgressPercentFormat(Ljava/text/NumberFormat;)V

    :cond_1
    return-void

    :cond_2
    move v2, v0

    goto :goto_0
.end method

.method protected final varargs synthetic onProgressUpdate([Ljava/lang/Object;)V
    .locals 2

    check-cast p1, [Ljava/lang/String;

    const/4 v0, 0x0

    aget-object v0, p1, v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    if-lez v1, :cond_0

    iget-object v1, p0, Lcom/dualboot/e/t;->j:Landroid/app/ProgressDialog;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/dualboot/e/t;->j:Landroid/app/ProgressDialog;

    invoke-virtual {v1, v0}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method
