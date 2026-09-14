.class final Lcom/b/a/a/a/l;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/b/a/a/a/j;

.field private final synthetic b:I

.field private final synthetic c:Ljava/lang/String;

.field private final synthetic d:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/b/a/a/a/j;ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/b/a/a/a/l;->a:Lcom/b/a/a/a/j;

    iput p2, p0, Lcom/b/a/a/a/l;->b:I

    iput-object p3, p0, Lcom/b/a/a/a/l;->c:Ljava/lang/String;

    iput-object p4, p0, Lcom/b/a/a/a/l;->d:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 11

    const/4 v9, 0x3

    const/16 v8, 0x123

    const/4 v7, 0x2

    const/4 v6, 0x1

    const-string v0, "LicenseChecker"

    const-string v1, "Received response."

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    iget-object v0, p0, Lcom/b/a/a/a/l;->a:Lcom/b/a/a/a/j;

    invoke-static {v0}, Lcom/b/a/a/a/j;->c(Lcom/b/a/a/a/j;)Lcom/b/a/a/a/i;

    move-result-object v0

    invoke-static {v0}, Lcom/b/a/a/a/i;->b(Lcom/b/a/a/a/i;)Ljava/util/Set;

    move-result-object v0

    iget-object v1, p0, Lcom/b/a/a/a/l;->a:Lcom/b/a/a/a/j;

    invoke-static {v1}, Lcom/b/a/a/a/j;->a(Lcom/b/a/a/a/j;)Lcom/b/a/a/a/n;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/b/a/a/a/l;->a:Lcom/b/a/a/a/j;

    invoke-static {v0}, Lcom/b/a/a/a/j;->b(Lcom/b/a/a/a/j;)V

    iget-object v0, p0, Lcom/b/a/a/a/l;->a:Lcom/b/a/a/a/j;

    invoke-static {v0}, Lcom/b/a/a/a/j;->a(Lcom/b/a/a/a/j;)Lcom/b/a/a/a/n;

    move-result-object v3

    iget-object v0, p0, Lcom/b/a/a/a/l;->a:Lcom/b/a/a/a/j;

    invoke-static {v0}, Lcom/b/a/a/a/j;->c(Lcom/b/a/a/a/j;)Lcom/b/a/a/a/i;

    move-result-object v0

    invoke-static {v0}, Lcom/b/a/a/a/i;->c(Lcom/b/a/a/a/i;)Ljava/security/PublicKey;

    move-result-object v2

    iget v4, p0, Lcom/b/a/a/a/l;->b:I

    iget-object v1, p0, Lcom/b/a/a/a/l;->c:Ljava/lang/String;

    iget-object v5, p0, Lcom/b/a/a/a/l;->d:Ljava/lang/String;

    const/4 v0, 0x0

    if-eqz v4, :cond_0

    if-eq v4, v6, :cond_0

    if-ne v4, v7, :cond_b

    :cond_0
    if-nez v1, :cond_2

    :try_start_0
    const-string v0, "LicenseValidator"

    const-string v1, "No signed data."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {v3}, Lcom/b/a/a/a/n;->a()V
    :try_end_0
    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/security/InvalidKeyException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/security/SignatureException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Lcom/b/a/a/a/a/b; {:try_start_0 .. :try_end_0} :catch_3

    :goto_0
    iget-object v0, p0, Lcom/b/a/a/a/l;->a:Lcom/b/a/a/a/j;

    invoke-static {v0}, Lcom/b/a/a/a/j;->c(Lcom/b/a/a/a/j;)Lcom/b/a/a/a/i;

    move-result-object v0

    iget-object v1, p0, Lcom/b/a/a/a/l;->a:Lcom/b/a/a/a/j;

    invoke-static {v1}, Lcom/b/a/a/a/j;->a(Lcom/b/a/a/a/j;)Lcom/b/a/a/a/n;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/b/a/a/a/i;->b(Lcom/b/a/a/a/i;Lcom/b/a/a/a/n;)V

    :cond_1
    return-void

    :cond_2
    :try_start_1
    const-string v0, "SHA1withRSA"

    invoke-static {v0}, Ljava/security/Signature;->getInstance(Ljava/lang/String;)Ljava/security/Signature;

    move-result-object v0

    invoke-virtual {v0, v2}, Ljava/security/Signature;->initVerify(Ljava/security/PublicKey;)V

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/security/Signature;->update([B)V

    invoke-static {v5}, Lcom/b/a/a/a/a/a;->a(Ljava/lang/String;)[B

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/security/Signature;->verify([B)Z

    move-result v0

    if-nez v0, :cond_3

    const-string v0, "LicenseValidator"

    const-string v1, "Signature verification failed."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {v3}, Lcom/b/a/a/a/n;->a()V
    :try_end_1
    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_1 .. :try_end_1} :catch_0
    .catch Ljava/security/InvalidKeyException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/security/SignatureException; {:try_start_1 .. :try_end_1} :catch_2
    .catch Lcom/b/a/a/a/a/b; {:try_start_1 .. :try_end_1} :catch_3

    goto :goto_0

    :catch_0
    move-exception v0

    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1

    :catch_1
    move-exception v0

    const/4 v0, 0x5

    invoke-virtual {v3, v0}, Lcom/b/a/a/a/n;->a(I)V

    goto :goto_0

    :catch_2
    move-exception v0

    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1

    :catch_3
    move-exception v0

    const-string v0, "LicenseValidator"

    const-string v1, "Could not Base64-decode signature."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {v3}, Lcom/b/a/a/a/n;->a()V

    goto :goto_0

    :cond_3
    const/16 v0, 0x3a

    :try_start_2
    invoke-virtual {v1, v0}, Ljava/lang/String;->indexOf(I)I

    move-result v0

    const/4 v2, -0x1

    if-ne v2, v0, :cond_4

    const-string v0, ""

    move-object v10, v0

    move-object v0, v1

    move-object v1, v10

    :goto_1
    const-string v2, "|"

    invoke-static {v2}, Ljava/util/regex/Pattern;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Landroid/text/TextUtils;->split(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    array-length v0, v2

    const/4 v5, 0x6

    if-ge v0, v5, :cond_6

    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "Wrong number of fields."

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
    :try_end_2
    .catch Ljava/lang/IllegalArgumentException; {:try_start_2 .. :try_end_2} :catch_4

    :catch_4
    move-exception v0

    const-string v0, "LicenseValidator"

    const-string v1, "Could not parse response."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {v3}, Lcom/b/a/a/a/n;->a()V

    goto/16 :goto_0

    :cond_4
    const/4 v2, 0x0

    :try_start_3
    invoke-virtual {v1, v2, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v5

    if-lt v0, v5, :cond_5

    const-string v0, ""

    move-object v1, v0

    move-object v0, v2

    goto :goto_1

    :cond_5
    add-int/lit8 v0, v0, 0x1

    invoke-virtual {v1, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    move-object v1, v0

    move-object v0, v2

    goto :goto_1

    :cond_6
    new-instance v0, Lcom/b/a/a/a/s;

    invoke-direct {v0}, Lcom/b/a/a/a/s;-><init>()V

    iput-object v1, v0, Lcom/b/a/a/a/s;->g:Ljava/lang/String;

    const/4 v1, 0x0

    aget-object v1, v2, v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    iput v1, v0, Lcom/b/a/a/a/s;->a:I

    const/4 v1, 0x1

    aget-object v1, v2, v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    iput v1, v0, Lcom/b/a/a/a/s;->b:I

    const/4 v1, 0x2

    aget-object v1, v2, v1

    iput-object v1, v0, Lcom/b/a/a/a/s;->c:Ljava/lang/String;

    const/4 v1, 0x3

    aget-object v1, v2, v1

    iput-object v1, v0, Lcom/b/a/a/a/s;->d:Ljava/lang/String;

    const/4 v1, 0x4

    aget-object v1, v2, v1

    iput-object v1, v0, Lcom/b/a/a/a/s;->e:Ljava/lang/String;

    const/4 v1, 0x5

    aget-object v1, v2, v1

    invoke-static {v1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v1

    iput-wide v1, v0, Lcom/b/a/a/a/s;->f:J
    :try_end_3
    .catch Ljava/lang/IllegalArgumentException; {:try_start_3 .. :try_end_3} :catch_4

    iget v1, v0, Lcom/b/a/a/a/s;->a:I

    if-eq v1, v4, :cond_7

    const-string v0, "LicenseValidator"

    const-string v1, "Response codes don\'t match."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {v3}, Lcom/b/a/a/a/n;->a()V

    goto/16 :goto_0

    :cond_7
    iget v1, v0, Lcom/b/a/a/a/s;->b:I

    iget v2, v3, Lcom/b/a/a/a/n;->b:I

    if-eq v1, v2, :cond_8

    const-string v0, "LicenseValidator"

    const-string v1, "Nonce doesn\'t match."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {v3}, Lcom/b/a/a/a/n;->a()V

    goto/16 :goto_0

    :cond_8
    iget-object v1, v0, Lcom/b/a/a/a/s;->c:Ljava/lang/String;

    iget-object v2, v3, Lcom/b/a/a/a/n;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_9

    const-string v0, "LicenseValidator"

    const-string v1, "Package name doesn\'t match."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {v3}, Lcom/b/a/a/a/n;->a()V

    goto/16 :goto_0

    :cond_9
    iget-object v1, v0, Lcom/b/a/a/a/s;->d:Ljava/lang/String;

    iget-object v2, v3, Lcom/b/a/a/a/n;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_a

    const-string v0, "LicenseValidator"

    const-string v1, "Version codes don\'t match."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {v3}, Lcom/b/a/a/a/n;->a()V

    goto/16 :goto_0

    :cond_a
    iget-object v1, v0, Lcom/b/a/a/a/s;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_b

    const-string v0, "LicenseValidator"

    const-string v1, "User identifier is empty."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {v3}, Lcom/b/a/a/a/n;->a()V

    goto/16 :goto_0

    :cond_b
    sparse-switch v4, :sswitch_data_0

    const-string v0, "LicenseValidator"

    const-string v1, "Unknown response code for license check."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {v3}, Lcom/b/a/a/a/n;->a()V

    goto/16 :goto_0

    :sswitch_0
    iget-object v1, v3, Lcom/b/a/a/a/n;->e:Lcom/b/a/a/a/b;

    const/16 v1, 0x100

    invoke-virtual {v3, v1, v0}, Lcom/b/a/a/a/n;->a(ILcom/b/a/a/a/s;)V

    goto/16 :goto_0

    :sswitch_1
    const/16 v1, 0x231

    invoke-virtual {v3, v1, v0}, Lcom/b/a/a/a/n;->a(ILcom/b/a/a/a/s;)V

    goto/16 :goto_0

    :sswitch_2
    const-string v1, "LicenseValidator"

    const-string v2, "Error contacting licensing server."

    invoke-static {v1, v2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {v3, v8, v0}, Lcom/b/a/a/a/n;->a(ILcom/b/a/a/a/s;)V

    goto/16 :goto_0

    :sswitch_3
    const-string v1, "LicenseValidator"

    const-string v2, "An error has occurred on the licensing server."

    invoke-static {v1, v2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {v3, v8, v0}, Lcom/b/a/a/a/n;->a(ILcom/b/a/a/a/s;)V

    goto/16 :goto_0

    :sswitch_4
    const-string v1, "LicenseValidator"

    const-string v2, "Licensing server is refusing to talk to this device, over quota."

    invoke-static {v1, v2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {v3, v8, v0}, Lcom/b/a/a/a/n;->a(ILcom/b/a/a/a/s;)V

    goto/16 :goto_0

    :sswitch_5
    invoke-virtual {v3, v6}, Lcom/b/a/a/a/n;->a(I)V

    goto/16 :goto_0

    :sswitch_6
    invoke-virtual {v3, v7}, Lcom/b/a/a/a/n;->a(I)V

    goto/16 :goto_0

    :sswitch_7
    invoke-virtual {v3, v9}, Lcom/b/a/a/a/n;->a(I)V

    goto/16 :goto_0

    :sswitch_data_0
    .sparse-switch
        0x0 -> :sswitch_0
        0x1 -> :sswitch_1
        0x2 -> :sswitch_0
        0x3 -> :sswitch_7
        0x4 -> :sswitch_3
        0x5 -> :sswitch_4
        0x101 -> :sswitch_2
        0x102 -> :sswitch_5
        0x103 -> :sswitch_6
    .end sparse-switch
.end method
