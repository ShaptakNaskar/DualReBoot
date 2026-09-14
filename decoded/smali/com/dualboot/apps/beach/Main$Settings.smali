.class public Lcom/dualboot/apps/beach/Main$Settings;
.super Lcom/dualboot/e/r;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/dualboot/e/r;-><init>()V

    return-void
.end method


# virtual methods
.method protected final a()Lcom/dualboot/e/j;
    .locals 1

    new-instance v0, Lcom/dualboot/apps/beach/a;

    invoke-direct {v0}, Lcom/dualboot/apps/beach/a;-><init>()V

    return-object v0
.end method

.method public onSharedPreferenceChanged(Landroid/content/SharedPreferences;Ljava/lang/String;)V
    .locals 2

    invoke-super {p0, p1, p2}, Lcom/dualboot/e/r;->onSharedPreferenceChanged(Landroid/content/SharedPreferences;Ljava/lang/String;)V

    const-string v0, "texturefont_sign"

    invoke-virtual {p2, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, ""

    invoke-interface {p1, p2, v0}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    if-lez v0, :cond_1

    const-string v0, "texturegroup_sign_type"

    invoke-virtual {p0, v0}, Lcom/dualboot/apps/beach/Main$Settings;->a(Ljava/lang/CharSequence;)Landroid/preference/Preference;

    move-result-object v0

    if-eqz v0, :cond_0

    instance-of v1, v0, Landroid/preference/ListPreference;

    if-eqz v1, :cond_0

    check-cast v0, Landroid/preference/ListPreference;

    const-string v1, "Custom Sign"

    invoke-virtual {v0, v1}, Landroid/preference/ListPreference;->findIndexOfValue(Ljava/lang/String;)I

    move-result v1

    if-ltz v1, :cond_0

    invoke-virtual {v0, v1}, Landroid/preference/ListPreference;->setValueIndex(I)V

    :cond_0
    const-string v0, "modeltoggle_sign"

    invoke-virtual {p0, v0}, Lcom/dualboot/apps/beach/Main$Settings;->a(Ljava/lang/CharSequence;)Landroid/preference/Preference;

    move-result-object v0

    if-eqz v0, :cond_1

    instance-of v1, v0, Landroid/preference/CheckBoxPreference;

    if-eqz v1, :cond_1

    check-cast v0, Landroid/preference/CheckBoxPreference;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/preference/CheckBoxPreference;->setChecked(Z)V

    :cond_1
    return-void
.end method
