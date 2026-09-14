.class final Lcom/dualboot/activity/misc/a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/dualboot/activity/misc/WhatsNew;


# direct methods
.method constructor <init>(Lcom/dualboot/activity/misc/WhatsNew;)V
    .locals 0

    iput-object p1, p0, Lcom/dualboot/activity/misc/a;->a:Lcom/dualboot/activity/misc/WhatsNew;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/dualboot/activity/misc/a;->a:Lcom/dualboot/activity/misc/WhatsNew;

    invoke-static {v0}, Lcom/dualboot/widget/TextViewLink;->a(Landroid/app/Activity;)V

    return-void
.end method
