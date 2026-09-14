.class public final Lcom/dualboot/e/a/i;
.super Landroid/preference/CheckBoxPreference;

# interfaces
.implements Lcom/dualboot/e/a/r;


# instance fields
.field private final a:Lcom/dualboot/e/a/u;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0, p1}, Landroid/preference/CheckBoxPreference;-><init>(Landroid/content/Context;)V

    new-instance v0, Lcom/dualboot/e/a/j;

    invoke-direct {v0, p0, p0}, Lcom/dualboot/e/a/j;-><init>(Lcom/dualboot/e/a/i;Landroid/preference/Preference;)V

    iput-object v0, p0, Lcom/dualboot/e/a/i;->a:Lcom/dualboot/e/a/u;

    return-void
.end method


# virtual methods
.method public final a()Lcom/dualboot/e/a/u;
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/a/i;->a:Lcom/dualboot/e/a/u;

    return-object v0
.end method

.method public final b()V
    .locals 0

    invoke-virtual {p0}, Lcom/dualboot/e/a/i;->notifyChanged()V

    return-void
.end method

.method protected final onBindView(Landroid/view/View;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/preference/CheckBoxPreference;->onBindView(Landroid/view/View;)V

    iget-object v0, p0, Lcom/dualboot/e/a/i;->a:Lcom/dualboot/e/a/u;

    invoke-virtual {v0, p1}, Lcom/dualboot/e/a/u;->a(Landroid/view/View;)V

    return-void
.end method
