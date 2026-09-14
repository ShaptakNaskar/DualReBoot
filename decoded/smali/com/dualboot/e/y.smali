.class final Lcom/dualboot/e/y;
.super Ljava/lang/Object;


# instance fields
.field final a:Landroid/preference/PreferenceGroup;

.field final b:Landroid/preference/PreferenceGroup;

.field final c:Landroid/preference/Preference;

.field d:Z

.field e:Ljava/lang/String;

.field final synthetic f:Lcom/dualboot/e/r;


# direct methods
.method public constructor <init>(Lcom/dualboot/e/r;Landroid/preference/PreferenceGroup;Landroid/preference/PreferenceGroup;Landroid/preference/Preference;)V
    .locals 1

    iput-object p1, p0, Lcom/dualboot/e/y;->f:Lcom/dualboot/e/r;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p2, p0, Lcom/dualboot/e/y;->a:Landroid/preference/PreferenceGroup;

    iput-object p3, p0, Lcom/dualboot/e/y;->b:Landroid/preference/PreferenceGroup;

    iput-object p4, p0, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/e/y;->e:Ljava/lang/String;

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/dualboot/e/y;->d:Z

    return-void
.end method
