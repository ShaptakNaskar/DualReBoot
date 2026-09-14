.class public abstract Lcom/dualboot/e/r;
.super Landroid/preference/PreferenceActivity;

# interfaces
.implements Landroid/content/SharedPreferences$OnSharedPreferenceChangeListener;
.implements Landroid/preference/Preference$OnPreferenceChangeListener;
.implements Landroid/preference/Preference$OnPreferenceClickListener;
.implements Lcom/dualboot/e/a/f;
.implements Lcom/dualboot/e/b/d;


# static fields
.field protected static a:Z


# instance fields
.field protected final b:Ljava/util/List;

.field protected final c:Ljava/util/List;

.field protected final d:Ljava/util/List;

.field protected final e:Ljava/util/Map;

.field protected final f:Ljava/util/List;

.field protected g:Landroid/preference/CheckBoxPreference;

.field protected h:Ljava/lang/String;

.field protected i:Lcom/dualboot/e/a/t;

.field protected j:Lcom/dualboot/engine/c;

.field protected k:Lcom/dualboot/e/x;

.field private l:Z

.field private m:Z

.field private n:Lcom/dualboot/e/b/a;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/4 v0, 0x0

    sput-boolean v0, Lcom/dualboot/e/r;->a:Z

    return-void
.end method

.method public constructor <init>()V
    .locals 3

    const/4 v2, 0x0

    const/4 v1, 0x0

    invoke-direct {p0}, Landroid/preference/PreferenceActivity;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/e/r;->b:Ljava/util/List;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/e/r;->c:Ljava/util/List;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/e/r;->d:Ljava/util/List;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/dualboot/e/r;->e:Ljava/util/Map;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/dualboot/e/r;->f:Ljava/util/List;

    iput-object v1, p0, Lcom/dualboot/e/r;->g:Landroid/preference/CheckBoxPreference;

    iput-object v1, p0, Lcom/dualboot/e/r;->h:Ljava/lang/String;

    iput-object v1, p0, Lcom/dualboot/e/r;->i:Lcom/dualboot/e/a/t;

    iput-object v1, p0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    iput-boolean v2, p0, Lcom/dualboot/e/r;->l:Z

    iput-boolean v2, p0, Lcom/dualboot/e/r;->m:Z

    iput-object v1, p0, Lcom/dualboot/e/r;->n:Lcom/dualboot/e/b/a;

    new-instance v0, Lcom/dualboot/e/x;

    invoke-direct {v0}, Lcom/dualboot/e/x;-><init>()V

    iput-object v0, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    return-void
.end method

.method private a(Landroid/preference/PreferenceGroup;Ljava/lang/String;)Landroid/preference/PreferenceCategory;
    .locals 4

    if-eqz p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return-object v0

    :cond_1
    invoke-virtual {p1}, Landroid/preference/PreferenceGroup;->getPreferenceCount()I

    move-result v2

    const/4 v0, 0x0

    move v1, v0

    :goto_1
    if-lt v1, v2, :cond_2

    new-instance v0, Landroid/preference/PreferenceCategory;

    invoke-direct {v0, p0}, Landroid/preference/PreferenceCategory;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0, p2}, Landroid/preference/PreferenceCategory;->setTitle(Ljava/lang/CharSequence;)V

    invoke-virtual {p1, v0}, Landroid/preference/PreferenceGroup;->addPreference(Landroid/preference/Preference;)Z

    goto :goto_0

    :cond_2
    invoke-virtual {p1, v1}, Landroid/preference/PreferenceGroup;->getPreference(I)Landroid/preference/Preference;

    move-result-object v0

    instance-of v3, v0, Landroid/preference/PreferenceCategory;

    if-eqz v3, :cond_3

    invoke-virtual {v0}, Landroid/preference/Preference;->getTitle()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-static {p2, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_3

    check-cast v0, Landroid/preference/PreferenceCategory;

    goto :goto_0

    :cond_3
    add-int/lit8 v0, v1, 0x1

    move v1, v0

    goto :goto_1
.end method

.method private a(Lcom/dualboot/engine/c;Lcom/dualboot/engine/d;Landroid/preference/PreferenceGroup;)Landroid/preference/PreferenceGroup;
    .locals 14

    if-nez p1, :cond_0

    const/4 v1, 0x0

    :goto_0
    return-object v1

    :cond_0
    invoke-virtual {p0}, Lcom/dualboot/e/r;->getPreferenceManager()Landroid/preference/PreferenceManager;

    move-result-object v5

    invoke-static/range {p2 .. p2}, Lcom/dualboot/engine/c;->b(Lcom/dualboot/engine/d;)Ljava/lang/String;

    move-result-object v7

    invoke-static {}, Lcom/dualboot/engine/c;->w()[I

    move-result-object v1

    invoke-virtual/range {p2 .. p2}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v2

    aget v1, v1, v2

    sparse-switch v1, :sswitch_data_0

    invoke-static/range {p2 .. p2}, Lcom/dualboot/engine/c;->b(Lcom/dualboot/engine/d;)Ljava/lang/String;

    move-result-object v1

    :goto_1
    invoke-static {}, Lcom/dualboot/engine/c;->w()[I

    move-result-object v2

    invoke-virtual/range {p2 .. p2}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v3

    aget v2, v2, v3

    packed-switch v2, :pswitch_data_0

    :pswitch_0
    const-string v2, ""

    :goto_2
    invoke-static {}, Lcom/dualboot/engine/c;->w()[I

    move-result-object v3

    invoke-virtual/range {p2 .. p2}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v4

    aget v3, v3, v4

    sparse-switch v3, :sswitch_data_1

    const/4 v3, -0x1

    :goto_3
    invoke-static {}, Lcom/dualboot/engine/c;->w()[I

    move-result-object v4

    invoke-virtual/range {p2 .. p2}, Lcom/dualboot/engine/d;->ordinal()I

    move-result v6

    aget v4, v4, v6

    packed-switch v4, :pswitch_data_1

    :pswitch_1
    const/4 v4, 0x1

    :goto_4
    new-instance v6, Landroid/preference/PreferenceCategory;

    invoke-direct {v6, p0}, Landroid/preference/PreferenceCategory;-><init>(Landroid/content/Context;)V

    invoke-virtual {v6, v7}, Landroid/preference/PreferenceCategory;->setTitle(Ljava/lang/CharSequence;)V

    move-object/from16 v0, p3

    invoke-virtual {v0, v6}, Landroid/preference/PreferenceGroup;->addPreference(Landroid/preference/Preference;)Z

    invoke-virtual/range {p1 .. p2}, Lcom/dualboot/engine/c;->a(Lcom/dualboot/engine/d;)Ljava/util/ArrayList;

    move-result-object v8

    if-eqz v8, :cond_2

    invoke-virtual {v8}, Ljava/util/ArrayList;->size()I

    move-result v9

    if-lez v9, :cond_2

    new-instance v10, Ljava/util/Vector;

    invoke-direct {v10}, Ljava/util/Vector;-><init>()V

    move-object/from16 v0, p3

    invoke-virtual {v10, v0}, Ljava/util/Vector;->add(Ljava/lang/Object;)Z

    invoke-virtual {v10, v6}, Ljava/util/Vector;->add(Ljava/lang/Object;)Z

    if-ltz v3, :cond_1

    if-ge v3, v9, :cond_1

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v3

    if-lez v3, :cond_1

    invoke-virtual {v5, p0}, Landroid/preference/PreferenceManager;->createPreferenceScreen(Landroid/content/Context;)Landroid/preference/PreferenceScreen;

    move-result-object v3

    invoke-virtual {v3, v1}, Landroid/preference/PreferenceScreen;->setTitle(Ljava/lang/CharSequence;)V

    invoke-virtual {v3, v2}, Landroid/preference/PreferenceScreen;->setSummary(Ljava/lang/CharSequence;)V

    invoke-virtual {v6, v3}, Landroid/preference/PreferenceCategory;->addPreference(Landroid/preference/Preference;)Z

    invoke-virtual {v10, v3}, Ljava/util/Vector;->add(Ljava/lang/Object;)Z

    sget-object v1, Lcom/dualboot/engine/d;->m:Lcom/dualboot/engine/d;

    move-object/from16 v0, p2

    if-ne v0, v1, :cond_1

    sget v1, Lcom/dualboot/e;->pref_iab_scene:I

    invoke-virtual {v3, v1}, Landroid/preference/PreferenceScreen;->setWidgetLayoutResource(I)V

    const-string v1, "key_iab_offers"

    invoke-virtual {v3, v1}, Landroid/preference/PreferenceScreen;->setKey(Ljava/lang/String;)V

    invoke-virtual {v3, p0}, Landroid/preference/PreferenceScreen;->setOnPreferenceClickListener(Landroid/preference/Preference$OnPreferenceClickListener;)V

    new-instance v1, Landroid/preference/CheckBoxPreference;

    invoke-direct {v1, p0}, Landroid/preference/CheckBoxPreference;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/dualboot/e/r;->g:Landroid/preference/CheckBoxPreference;

    iget-object v1, p0, Lcom/dualboot/e/r;->g:Landroid/preference/CheckBoxPreference;

    const-string v2, "key_show_locked_items"

    invoke-virtual {v1, v2}, Landroid/preference/CheckBoxPreference;->setKey(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/dualboot/e/r;->g:Landroid/preference/CheckBoxPreference;

    const-string v2, "Show Optional Add-Ons"

    invoke-virtual {v1, v2}, Landroid/preference/CheckBoxPreference;->setTitle(Ljava/lang/CharSequence;)V

    iget-object v1, p0, Lcom/dualboot/e/r;->g:Landroid/preference/CheckBoxPreference;

    const-string v2, "Show or hide the optional settings unlocked by the add-ons"

    invoke-virtual {v1, v2}, Landroid/preference/CheckBoxPreference;->setSummary(Ljava/lang/CharSequence;)V

    iget-object v1, p0, Lcom/dualboot/e/r;->g:Landroid/preference/CheckBoxPreference;

    const/4 v2, 0x1

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/preference/CheckBoxPreference;->setDefaultValue(Ljava/lang/Object;)V

    iget-object v1, p0, Lcom/dualboot/e/r;->g:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v1, p0}, Landroid/preference/CheckBoxPreference;->setOnPreferenceClickListener(Landroid/preference/Preference$OnPreferenceClickListener;)V

    iget-object v1, p0, Lcom/dualboot/e/r;->g:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v6, v1}, Landroid/preference/PreferenceCategory;->addPreference(Landroid/preference/Preference;)Z

    :cond_1
    const/4 v1, 0x0

    move v7, v1

    :goto_5
    if-lt v7, v9, :cond_3

    :cond_2
    move-object v1, v6

    goto/16 :goto_0

    :sswitch_0
    const-string v1, "Camera and Screen Panning"

    goto/16 :goto_1

    :sswitch_1
    const-string v1, "Advanced Settings"

    goto/16 :goto_1

    :sswitch_2
    const-string v1, "Get Optional Add-Ons"

    goto/16 :goto_1

    :pswitch_2
    const-string v2, "Choose a theme to apply to the scene"

    goto/16 :goto_2

    :pswitch_3
    const-string v2, "Adjust camera, panning, scrolling, and gesture settings"

    goto/16 :goto_2

    :pswitch_4
    const-string v2, "Change the environment, time of day, and location settings"

    goto/16 :goto_2

    :pswitch_5
    const-string v2, "Enter your own custom messages"

    goto/16 :goto_2

    :pswitch_6
    const-string v2, "Choose your own pictures to use"

    goto/16 :goto_2

    :pswitch_7
    const-string v2, "Customize the look of the scene"

    goto/16 :goto_2

    :pswitch_8
    const-string v2, "Turn parts of the scene on or off"

    goto/16 :goto_2

    :pswitch_9
    const-string v2, "Adjust interaction settings"

    goto/16 :goto_2

    :pswitch_a
    const-string v2, "More information"

    goto/16 :goto_2

    :pswitch_b
    const-string v2, "Social network and sharing options"

    goto/16 :goto_2

    :pswitch_c
    const-string v2, "Advanced power saving options"

    goto/16 :goto_2

    :pswitch_d
    const-string v2, "View the optional add-ons available for purchase"

    goto/16 :goto_2

    :sswitch_3
    const/4 v3, 0x3

    goto/16 :goto_3

    :sswitch_4
    const/4 v3, 0x1

    goto/16 :goto_3

    :sswitch_5
    const/4 v3, 0x0

    goto/16 :goto_3

    :pswitch_e
    const/4 v4, 0x0

    goto/16 :goto_4

    :pswitch_f
    const/4 v4, 0x0

    goto/16 :goto_4

    :cond_3
    invoke-virtual {v10}, Ljava/util/Vector;->size()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    sget-object v2, Lcom/dualboot/engine/d;->b:Lcom/dualboot/engine/d;

    move-object/from16 v0, p2

    if-ne v0, v2, :cond_b

    invoke-virtual {p1}, Lcom/dualboot/engine/c;->p()I

    move-result v2

    if-ge v7, v2, :cond_b

    const/4 v2, 0x1

    if-le v1, v2, :cond_b

    add-int/lit8 v1, v1, -0x1

    move v2, v1

    :goto_6
    invoke-virtual {v10, v2}, Ljava/util/Vector;->elementAt(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/preference/PreferenceGroup;

    add-int/lit8 v2, v2, -0x1

    invoke-virtual {v10, v2}, Ljava/util/Vector;->elementAt(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/preference/PreferenceGroup;

    invoke-virtual {v1, v4}, Landroid/preference/PreferenceGroup;->setOrderingAsAdded(Z)V

    invoke-virtual {v8, v7}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/dualboot/engine/f;

    if-eqz v3, :cond_6

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->j()Ljava/lang/String;

    move-result-object v5

    invoke-direct {p0, v1, v5}, Lcom/dualboot/e/r;->a(Landroid/preference/PreferenceGroup;Ljava/lang/String;)Landroid/preference/PreferenceCategory;

    move-result-object v5

    if-eqz v5, :cond_4

    move-object v2, v1

    move-object v1, v5

    :cond_4
    move-object/from16 v0, p2

    invoke-virtual {v3, p0, v1, v0}, Lcom/dualboot/engine/f;->a(Landroid/content/Context;Landroid/preference/PreferenceGroup;Lcom/dualboot/engine/d;)Landroid/preference/Preference;

    move-result-object v5

    if-eqz v5, :cond_6

    iget-object v11, p0, Lcom/dualboot/e/r;->e:Ljava/util/Map;

    invoke-virtual {v5}, Landroid/preference/Preference;->getKey()Ljava/lang/String;

    move-result-object v12

    invoke-interface {v11, v12, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {v5, p0}, Landroid/preference/Preference;->setOnPreferenceChangeListener(Landroid/preference/Preference$OnPreferenceChangeListener;)V

    instance-of v11, v5, Lcom/dualboot/e/a/r;

    if-eqz v11, :cond_5

    new-instance v11, Lcom/dualboot/e/y;

    invoke-direct {v11, p0, v2, v1, v5}, Lcom/dualboot/e/y;-><init>(Lcom/dualboot/e/r;Landroid/preference/PreferenceGroup;Landroid/preference/PreferenceGroup;Landroid/preference/Preference;)V

    iget-object v1, p0, Lcom/dualboot/e/r;->d:Ljava/util/List;

    invoke-interface {v1, v11}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_5
    sget-object v1, Lcom/dualboot/engine/d;->m:Lcom/dualboot/engine/d;

    move-object/from16 v0, p2

    if-ne v0, v1, :cond_7

    invoke-virtual {v5, p0}, Landroid/preference/Preference;->setOnPreferenceClickListener(Landroid/preference/Preference$OnPreferenceClickListener;)V

    :cond_6
    :goto_7
    add-int/lit8 v1, v7, 0x1

    move v7, v1

    goto/16 :goto_5

    :cond_7
    sget-object v1, Lcom/dualboot/engine/d;->d:Lcom/dualboot/engine/d;

    move-object/from16 v0, p2

    if-ne v0, v1, :cond_8

    invoke-virtual {v5, p0}, Landroid/preference/Preference;->setOnPreferenceClickListener(Landroid/preference/Preference$OnPreferenceClickListener;)V

    goto :goto_7

    :cond_8
    sget-object v1, Lcom/dualboot/engine/d;->e:Lcom/dualboot/engine/d;

    move-object/from16 v0, p2

    if-ne v0, v1, :cond_9

    invoke-virtual {v5, p0}, Landroid/preference/Preference;->setOnPreferenceClickListener(Landroid/preference/Preference$OnPreferenceClickListener;)V

    iget-object v1, p0, Lcom/dualboot/e/r;->b:Ljava/util/List;

    invoke-virtual {v5}, Landroid/preference/Preference;->getKey()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_7

    :cond_9
    sget-object v1, Lcom/dualboot/engine/d;->a:Lcom/dualboot/engine/d;

    move-object/from16 v0, p2

    if-ne v0, v1, :cond_6

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->g()I

    move-result v2

    if-lez v2, :cond_6

    new-instance v11, Lcom/dualboot/e/z;

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->d()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3}, Lcom/dualboot/engine/f;->c()Ljava/lang/String;

    move-result-object v12

    invoke-direct {v11, p0, v1, v12}, Lcom/dualboot/e/z;-><init>(Lcom/dualboot/e/r;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/dualboot/e/r;->c:Ljava/util/List;

    invoke-interface {v1, v11}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-virtual {v5, p0}, Landroid/preference/Preference;->setOnPreferenceClickListener(Landroid/preference/Preference$OnPreferenceClickListener;)V

    const/4 v1, 0x0

    :goto_8
    if-ge v1, v2, :cond_6

    invoke-virtual {v3, v1}, Lcom/dualboot/engine/f;->a(I)Ljava/lang/String;

    move-result-object v5

    const/16 v12, 0x3d

    invoke-virtual {v5, v12}, Ljava/lang/String;->indexOf(I)I

    move-result v12

    if-lez v12, :cond_a

    const/4 v13, 0x0

    invoke-virtual {v5, v13, v12}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v13

    add-int/lit8 v12, v12, 0x1

    invoke-virtual {v5, v12}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v13}, Ljava/lang/String;->length()I

    move-result v12

    if-lez v12, :cond_a

    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v12

    if-lez v12, :cond_a

    iget-object v12, v11, Lcom/dualboot/e/z;->a:Ljava/util/ArrayList;

    invoke-virtual {v12, v13}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v12, v11, Lcom/dualboot/e/z;->b:Ljava/util/ArrayList;

    invoke-virtual {v12, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_a
    add-int/lit8 v1, v1, 0x1

    goto :goto_8

    :cond_b
    move v2, v1

    goto/16 :goto_6

    :sswitch_data_0
    .sparse-switch
        0x2 -> :sswitch_0
        0xb -> :sswitch_1
        0xd -> :sswitch_2
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_2
        :pswitch_3
        :pswitch_4
        :pswitch_5
        :pswitch_6
        :pswitch_7
        :pswitch_8
        :pswitch_9
        :pswitch_a
        :pswitch_b
        :pswitch_c
        :pswitch_0
        :pswitch_d
    .end packed-switch

    :sswitch_data_1
    .sparse-switch
        0x2 -> :sswitch_3
        0xb -> :sswitch_4
        0xd -> :sswitch_5
    .end sparse-switch

    :pswitch_data_1
    .packed-switch 0x4
        :pswitch_e
        :pswitch_1
        :pswitch_f
    .end packed-switch
.end method

.method private a(I)V
    .locals 2

    iget-object v0, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    iget v0, v0, Lcom/dualboot/e/x;->a:I

    if-eq v0, p1, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Updated launch source = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, " (was "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    iget-object v1, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    iget v1, v1, Lcom/dualboot/e/x;->a:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    iget-object v0, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    iput p1, v0, Lcom/dualboot/e/x;->a:I

    :cond_0
    return-void
.end method

.method private a(Landroid/content/Intent;)V
    .locals 4

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v2

    if-eqz v2, :cond_1

    const-string v3, "android.service.wallpaper.PREVIEW_MODE"

    invoke-virtual {v2, v3, v1}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;Z)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-virtual {p1}, Landroid/content/Intent;->getFlags()I

    move-result v2

    const/high16 v3, 0x100000

    and-int/2addr v2, v3

    if-lez v2, :cond_0

    move v1, v0

    :cond_0
    if-nez v1, :cond_1

    const/4 v0, 0x2

    :cond_1
    :goto_0
    invoke-direct {p0, v0}, Lcom/dualboot/e/r;->a(I)V

    return-void

    :cond_2
    move v0, v1

    goto :goto_0
.end method

.method private static a(Landroid/preference/PreferenceGroup;)Z
    .locals 1

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Landroid/preference/PreferenceGroup;->getPreferenceCount()I

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    :goto_0
    return v0

    :cond_0
    const/4 v0, 0x1

    goto :goto_0
.end method

.method private static a(Landroid/preference/PreferenceScreen;Landroid/preference/PreferenceGroup;)Z
    .locals 1

    invoke-static {p1}, Lcom/dualboot/e/r;->a(Landroid/preference/PreferenceGroup;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/dualboot/e/r;->a(Landroid/preference/PreferenceGroup;)Z

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/preference/PreferenceGroup;->removeAll()V

    invoke-virtual {p0, p1}, Landroid/preference/PreferenceScreen;->removePreference(Landroid/preference/Preference;)Z

    :cond_0
    return v0
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 5

    const/4 v2, 0x0

    sget-object v3, Lcom/dualboot/e/a/v;->a:Lcom/dualboot/e/a/v;

    sget-object v4, Lcom/dualboot/e/a/v;->a:Lcom/dualboot/e/a/v;

    if-eqz p1, :cond_2

    if-eqz p2, :cond_2

    invoke-virtual {p0, p1, v2}, Lcom/dualboot/e/r;->a(Ljava/lang/CharSequence;Z)Landroid/preference/Preference;

    move-result-object v0

    invoke-virtual {p0, p2, v2}, Lcom/dualboot/e/r;->a(Ljava/lang/CharSequence;Z)Landroid/preference/Preference;

    move-result-object v1

    if-eqz v0, :cond_2

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Landroid/preference/Preference;->getKey()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/preference/Preference;->setDependency(Ljava/lang/String;)V

    instance-of v2, v0, Lcom/dualboot/e/a/r;

    if-eqz v2, :cond_1

    instance-of v2, v1, Lcom/dualboot/e/a/r;

    if-eqz v2, :cond_1

    check-cast v0, Lcom/dualboot/e/a/r;

    check-cast v1, Lcom/dualboot/e/a/r;

    invoke-interface {v0}, Lcom/dualboot/e/a/r;->a()Lcom/dualboot/e/a/u;

    move-result-object v2

    iput-object v1, v2, Lcom/dualboot/e/a/u;->c:Lcom/dualboot/e/a/r;

    invoke-interface {v1}, Lcom/dualboot/e/a/r;->a()Lcom/dualboot/e/a/u;

    move-result-object v2

    if-eqz v0, :cond_0

    iget-object v2, v2, Lcom/dualboot/e/a/u;->b:Ljava/util/ArrayList;

    invoke-virtual {v2, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_0
    invoke-interface {v0}, Lcom/dualboot/e/a/r;->a()Lcom/dualboot/e/a/u;

    move-result-object v0

    iput-object v3, v0, Lcom/dualboot/e/a/u;->d:Lcom/dualboot/e/a/v;

    invoke-interface {v1}, Lcom/dualboot/e/a/r;->a()Lcom/dualboot/e/a/u;

    move-result-object v0

    iput-object v4, v0, Lcom/dualboot/e/a/u;->d:Lcom/dualboot/e/a/v;

    :cond_1
    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_2
    move v0, v2

    goto :goto_0
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Z)Z
    .locals 6

    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v0

    if-eqz v0, :cond_2

    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    invoke-virtual {v0, p1, p2, v2}, Lcom/dualboot/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/util/Collection;)Z

    move-result v1

    if-nez v1, :cond_0

    if-eqz p3, :cond_0

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-direct {p0, v2}, Lcom/dualboot/e/r;->a(Ljava/util/ArrayList;)Z

    :cond_0
    move v0, v1

    :goto_1
    return v0

    :cond_1
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "Setting "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    const-string v5, " = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v4, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    const-string v5, " requires offer "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    goto :goto_0

    :cond_2
    const/4 v0, 0x0

    goto :goto_1
.end method

.method private a(Ljava/lang/String;Z)Z
    .locals 18

    invoke-static/range {p1 .. p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x0

    :goto_0
    return v1

    :cond_0
    if-eqz p2, :cond_11

    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v1

    if-eqz v1, :cond_11

    move-object/from16 v0, p0

    iget-object v2, v0, Lcom/dualboot/e/r;->h:Ljava/lang/String;

    move-object/from16 v0, p1

    invoke-virtual {v1, v0, v2}, Lcom/dualboot/a/a;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    move-object/from16 v0, p0

    invoke-direct {v0, v8}, Lcom/dualboot/e/r;->d(Ljava/lang/String;)Lcom/dualboot/e/z;

    move-result-object v1

    if-eqz v1, :cond_11

    invoke-direct/range {p0 .. p0}, Lcom/dualboot/e/r;->e()Lcom/dualboot/e/b/a;

    move-result-object v9

    iget-object v10, v1, Lcom/dualboot/e/z;->d:Ljava/lang/String;

    iget-object v1, v9, Lcom/dualboot/e/b/a;->a:Lcom/dualboot/e/j;

    if-eqz v1, :cond_1

    iget-object v1, v9, Lcom/dualboot/e/b/a;->b:Landroid/app/Activity;

    if-nez v1, :cond_2

    :cond_1
    const/4 v1, 0x0

    :goto_1
    invoke-virtual {v9, v1}, Lcom/dualboot/e/b/a;->a(Landroid/app/Dialog;)V

    if-eqz v1, :cond_10

    const/4 v1, 0x1

    goto :goto_0

    :cond_2
    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_4

    :cond_3
    const/4 v1, 0x0

    goto :goto_1

    :cond_4
    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v1

    if-eqz v1, :cond_f

    move-object/from16 v0, p1

    invoke-virtual {v1, v0}, Lcom/dualboot/a/a;->b(Ljava/lang/String;)Lcom/dualboot/a/p;

    move-result-object v11

    if-eqz v11, :cond_f

    iget-object v1, v9, Lcom/dualboot/e/b/a;->b:Landroid/app/Activity;

    invoke-static {v1}, Lcom/dualboot/e/aa;->b(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v12

    invoke-static {v12}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v1

    sget v2, Lcom/dualboot/e;->offer_theme:I

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v13

    if-eqz v11, :cond_c

    if-eqz v13, :cond_c

    sget v1, Lcom/dualboot/d;->tv_offer_name:I

    invoke-virtual {v13, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    sget v1, Lcom/dualboot/d;->tv_offer_price:I

    invoke-virtual {v13, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    sget v1, Lcom/dualboot/d;->tv_na:I

    invoke-virtual {v13, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    sget v1, Lcom/dualboot/d;->tv_offer_desc:I

    invoke-virtual {v13, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    sget v1, Lcom/dualboot/d;->tv_offer_theme:I

    invoke-virtual {v13, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    sget v1, Lcom/dualboot/d;->tv_offer_theme_thanks:I

    invoke-virtual {v13, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    instance-of v1, v2, Landroid/widget/TextView;

    if-eqz v1, :cond_5

    move-object v1, v2

    check-cast v1, Landroid/widget/TextView;

    invoke-virtual {v1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v14

    invoke-interface {v14}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v14

    const/4 v15, 0x1

    new-array v15, v15, [Ljava/lang/Object;

    const/16 v16, 0x0

    invoke-virtual {v11}, Lcom/dualboot/a/p;->b()Ljava/lang/String;

    move-result-object v17

    invoke-static/range {v17 .. v17}, Landroid/text/TextUtils;->htmlEncode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v17

    aput-object v17, v15, v16

    invoke-static {v14, v15}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v14

    invoke-static {v14}, Landroid/text/Html;->fromHtml(Ljava/lang/String;)Landroid/text/Spanned;

    move-result-object v14

    invoke-virtual {v1, v14}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_5
    instance-of v1, v3, Landroid/widget/TextView;

    if-eqz v1, :cond_6

    invoke-virtual {v11}, Lcom/dualboot/a/p;->d()Ljava/lang/String;

    move-result-object v14

    invoke-static {v14}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_d

    const/16 v1, 0x8

    invoke-virtual {v3, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_6
    :goto_2
    instance-of v1, v4, Landroid/widget/TextView;

    if-eqz v1, :cond_7

    move-object v1, v4

    check-cast v1, Landroid/widget/TextView;

    invoke-virtual {v1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/Object;

    const/4 v14, 0x0

    invoke-virtual {v11}, Lcom/dualboot/a/p;->b()Ljava/lang/String;

    move-result-object v15

    invoke-static {v15}, Landroid/text/TextUtils;->htmlEncode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v15

    aput-object v15, v4, v14

    invoke-static {v3, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/Html;->fromHtml(Ljava/lang/String;)Landroid/text/Spanned;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_7
    instance-of v1, v5, Landroid/widget/TextView;

    if-eqz v1, :cond_8

    move-object v1, v5

    check-cast v1, Landroid/widget/TextView;

    invoke-virtual {v1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/Object;

    const/4 v5, 0x0

    invoke-virtual {v11}, Lcom/dualboot/a/p;->b()Ljava/lang/String;

    move-result-object v14

    invoke-static {v14}, Landroid/text/TextUtils;->htmlEncode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    aput-object v14, v4, v5

    invoke-static {v3, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/Html;->fromHtml(Ljava/lang/String;)Landroid/text/Spanned;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_8
    instance-of v1, v6, Landroid/widget/TextView;

    if-eqz v1, :cond_9

    move-object v1, v6

    check-cast v1, Landroid/widget/TextView;

    invoke-virtual {v11}, Lcom/dualboot/a/p;->c()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_9
    instance-of v1, v7, Landroid/widget/TextView;

    if-eqz v1, :cond_a

    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_a

    move-object v1, v7

    check-cast v1, Landroid/widget/TextView;

    invoke-virtual {v1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/Object;

    const/4 v5, 0x0

    invoke-static {v10}, Landroid/text/TextUtils;->htmlEncode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    aput-object v6, v4, v5

    invoke-static {v3, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/Html;->fromHtml(Ljava/lang/String;)Landroid/text/Spanned;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_a
    instance-of v1, v2, Lcom/dualboot/widget/TextViewHeaderImg;

    if-eqz v1, :cond_c

    check-cast v2, Lcom/dualboot/widget/TextViewHeaderImg;

    iget-object v1, v9, Lcom/dualboot/e/b/a;->b:Landroid/app/Activity;

    const/4 v3, 0x0

    invoke-virtual {v11, v1, v3}, Lcom/dualboot/a/p;->a(Landroid/content/Context;Z)Landroid/graphics/drawable/BitmapDrawable;

    move-result-object v3

    if-nez v3, :cond_b

    iget-object v1, v9, Lcom/dualboot/e/b/a;->b:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v4, Lcom/dualboot/c;->icon_offer_default:I

    invoke-virtual {v1, v4}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v1

    instance-of v4, v1, Landroid/graphics/drawable/BitmapDrawable;

    if-eqz v4, :cond_b

    check-cast v1, Landroid/graphics/drawable/BitmapDrawable;

    move-object v3, v1

    :cond_b
    if-eqz v3, :cond_c

    new-instance v1, Lcom/dualboot/util/z;

    iget-object v4, v9, Lcom/dualboot/e/b/a;->b:Landroid/app/Activity;

    invoke-direct {v1, v4}, Lcom/dualboot/util/z;-><init>(Landroid/content/Context;)V

    const/16 v4, 0x80

    const/16 v5, 0x80

    invoke-virtual {v1, v3, v4, v5}, Lcom/dualboot/util/z;->a(Landroid/graphics/drawable/BitmapDrawable;II)Landroid/graphics/drawable/BitmapDrawable;

    move-result-object v1

    if-eqz v1, :cond_e

    :goto_3
    invoke-virtual {v2, v1}, Lcom/dualboot/widget/TextViewHeaderImg;->a(Landroid/graphics/drawable/Drawable;)Z

    :cond_c
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, v12}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    sget v2, Lcom/dualboot/f;->app_name:I

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    invoke-virtual {v1, v13}, Landroid/app/AlertDialog$Builder;->setView(Landroid/view/View;)Landroid/app/AlertDialog$Builder;

    const v2, 0x1040013

    new-instance v3, Lcom/dualboot/e/b/c;

    invoke-direct {v3, v9, v8}, Lcom/dualboot/e/b/c;-><init>(Lcom/dualboot/e/b/a;Ljava/lang/String;)V

    invoke-virtual {v1, v2, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    const v2, 0x1040009

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Landroid/app/AlertDialog$Builder;->setNegativeButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    goto/16 :goto_1

    :cond_d
    move-object v1, v3

    check-cast v1, Landroid/widget/TextView;

    invoke-virtual {v1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v15, 0x1

    new-array v15, v15, [Ljava/lang/Object;

    const/16 v16, 0x0

    invoke-static {v14}, Landroid/text/TextUtils;->htmlEncode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    aput-object v14, v15, v16

    invoke-static {v3, v15}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/Html;->fromHtml(Ljava/lang/String;)Landroid/text/Spanned;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto/16 :goto_2

    :cond_e
    move-object v1, v3

    goto :goto_3

    :cond_f
    const/4 v1, 0x0

    goto/16 :goto_1

    :cond_10
    const/4 v1, 0x0

    goto/16 :goto_0

    :cond_11
    const/4 v1, 0x0

    goto/16 :goto_0
.end method

.method private a(Ljava/util/ArrayList;)Z
    .locals 4

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_1

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0

    :cond_1
    new-instance v1, Lcom/dualboot/activity/offer/b;

    invoke-direct {v1}, Lcom/dualboot/activity/offer/b;-><init>()V

    invoke-virtual {p1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_2

    const-class v0, Lcom/dualboot/activity/offer/OfferList;

    invoke-virtual {v1, p0, v0}, Lcom/dualboot/activity/offer/b;->a(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object v0

    const/16 v1, 0x403

    invoke-static {p0, v0, v1}, Lcom/dualboot/e/aa;->a(Landroid/app/Activity;Landroid/content/Intent;I)Z

    move-result v0

    goto :goto_0

    :cond_2
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    iget-object v3, v1, Lcom/dualboot/activity/offer/b;->a:Ljava/util/ArrayList;

    invoke-virtual {v3, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_1
.end method

.method private b(I)Z
    .locals 3

    const/4 v0, 0x0

    const/4 v2, 0x1

    invoke-virtual {p0}, Lcom/dualboot/e/r;->isFinishing()Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    iget-boolean v1, v1, Lcom/dualboot/e/x;->d:Z

    if-eqz v1, :cond_1

    :cond_0
    :goto_0
    invoke-static {p0, v0, p1}, Lcom/dualboot/e/aa;->a(Landroid/app/Activity;Landroid/content/Intent;I)Z

    move-result v0

    return v0

    :cond_1
    packed-switch p1, :pswitch_data_0

    goto :goto_0

    :pswitch_0
    iget-object v1, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    iget-boolean v1, v1, Lcom/dualboot/e/x;->b:Z

    if-nez v1, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    iput-boolean v2, v0, Lcom/dualboot/e/x;->b:Z

    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "com.dualboot.intent.action.LICENSE"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "android.intent.category.DEFAULT"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    invoke-static {p0, v0, v2}, Lcom/dualboot/e/aa;->a(Landroid/content/Context;Landroid/content/Intent;Z)Landroid/content/Intent;

    move-result-object v0

    goto :goto_0

    :pswitch_1
    iget-object v1, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    iget-boolean v1, v1, Lcom/dualboot/e/x;->c:Z

    if-nez v1, :cond_0

    iget-object v0, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    iput-boolean v2, v0, Lcom/dualboot/e/x;->c:Z

    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/dualboot/e/aa;->a(Landroid/content/Context;Z)Landroid/content/Intent;

    move-result-object v0

    goto :goto_0

    nop

    :pswitch_data_0
    .packed-switch 0x401
        :pswitch_0
        :pswitch_1
    .end packed-switch
.end method

.method private d(Ljava/lang/String;)Lcom/dualboot/e/z;
    .locals 4

    const/4 v2, 0x0

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    move-object v0, v2

    :cond_0
    :goto_0
    return-object v0

    :cond_1
    const/4 v0, 0x0

    move v1, v0

    :goto_1
    iget-object v0, p0, Lcom/dualboot/e/r;->c:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lt v1, v0, :cond_2

    move-object v0, v2

    goto :goto_0

    :cond_2
    iget-object v0, p0, Lcom/dualboot/e/r;->c:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/e/z;

    iget-object v3, v0, Lcom/dualboot/e/z;->e:Ljava/lang/String;

    invoke-virtual {v3, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_0

    add-int/lit8 v0, v1, 0x1

    move v1, v0

    goto :goto_1
.end method

.method static synthetic d()V
    .locals 0

    return-void
.end method

.method private e()Lcom/dualboot/e/b/a;
    .locals 2

    iget-object v0, p0, Lcom/dualboot/e/r;->n:Lcom/dualboot/e/b/a;

    if-nez v0, :cond_0

    new-instance v0, Lcom/dualboot/e/b/a;

    invoke-virtual {p0}, Lcom/dualboot/e/r;->a()Lcom/dualboot/e/j;

    move-result-object v1

    invoke-direct {v0, v1, p0, p0}, Lcom/dualboot/e/b/a;-><init>(Lcom/dualboot/e/j;Landroid/app/Activity;Lcom/dualboot/e/b/d;)V

    iput-object v0, p0, Lcom/dualboot/e/r;->n:Lcom/dualboot/e/b/a;

    :cond_0
    iget-object v0, p0, Lcom/dualboot/e/r;->n:Lcom/dualboot/e/b/a;

    return-object v0
.end method

.method private e(Ljava/lang/String;)Z
    .locals 9

    const/4 v3, 0x1

    const/4 v4, 0x0

    iput-boolean v4, p0, Lcom/dualboot/e/r;->m:Z

    invoke-direct {p0, p1}, Lcom/dualboot/e/r;->d(Ljava/lang/String;)Lcom/dualboot/e/z;

    move-result-object v6

    if-eqz v6, :cond_7

    iput-boolean v4, p0, Lcom/dualboot/e/r;->l:Z

    iget-object v0, v6, Lcom/dualboot/e/z;->c:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v7

    iget-object v0, v6, Lcom/dualboot/e/z;->b:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-ne v7, v0, :cond_0

    move v5, v4

    :goto_0
    if-lt v5, v7, :cond_3

    :cond_0
    iget-boolean v0, p0, Lcom/dualboot/e/r;->l:Z

    if-eqz v0, :cond_1

    iput-boolean v3, p0, Lcom/dualboot/e/r;->m:Z

    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Setting "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, v6, Lcom/dualboot/e/z;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, " theme..."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0, v4}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    if-eqz v0, :cond_2

    const/16 v1, 0x11

    invoke-virtual {v0, v1, v4, v4}, Landroid/widget/Toast;->setGravity(III)V

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    :cond_2
    move v0, v3

    :goto_1
    return v0

    :cond_3
    iget-object v0, v6, Lcom/dualboot/e/z;->a:Ljava/util/ArrayList;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    iget-object v1, v6, Lcom/dualboot/e/z;->b:Ljava/util/ArrayList;

    invoke-virtual {v1, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iget-object v2, v6, Lcom/dualboot/e/z;->c:Ljava/util/ArrayList;

    invoke-virtual {v2, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/preference/Preference;

    if-eqz v2, :cond_6

    instance-of v8, v2, Landroid/preference/CheckBoxPreference;

    if-eqz v8, :cond_5

    invoke-direct {p0, v0, v1, v4}, Lcom/dualboot/e/r;->a(Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v0

    check-cast v2, Landroid/preference/CheckBoxPreference;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    invoke-virtual {v2, v0}, Landroid/preference/CheckBoxPreference;->setChecked(Z)V

    :cond_4
    :goto_2
    add-int/lit8 v0, v5, 0x1

    move v5, v0

    goto :goto_0

    :cond_5
    instance-of v8, v2, Landroid/preference/ListPreference;

    if-eqz v8, :cond_4

    invoke-direct {p0, v0, v1, v4}, Lcom/dualboot/e/r;->a(Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_4

    check-cast v2, Landroid/preference/ListPreference;

    invoke-virtual {v2, v1}, Landroid/preference/ListPreference;->setValue(Ljava/lang/String;)V

    goto :goto_2

    :cond_6
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v8, "Unable to find preference \'"

    invoke-direct {v2, v8}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    const-string v2, "\' (\'"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, "\') for theme \'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    iget-object v1, v6, Lcom/dualboot/e/z;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, "\'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    goto :goto_2

    :cond_7
    move v0, v4

    goto :goto_1
.end method

.method private static f()V
    .locals 1

    sget-boolean v0, Lcom/dualboot/e/r;->a:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    sput-boolean v0, Lcom/dualboot/e/r;->a:Z

    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/dualboot/a/a;->c()Z

    :cond_0
    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/dualboot/a/a;->b()Z

    return-void
.end method

.method private declared-synchronized g()V
    .locals 2

    monitor-enter p0

    :try_start_0
    const-string v0, "key_iab_offers_refresh"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/dualboot/e/r;->a(Ljava/lang/CharSequence;Z)Landroid/preference/Preference;

    move-result-object v0

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/dualboot/e/a/c;

    if-eqz v1, :cond_0

    check-cast v0, Lcom/dualboot/e/a/c;

    invoke-virtual {v0}, Lcom/dualboot/e/a/c;->a()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private declared-synchronized h()V
    .locals 2

    monitor-enter p0

    :try_start_0
    const-string v0, "key_iab_offers_refresh"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/dualboot/e/r;->a(Ljava/lang/CharSequence;Z)Landroid/preference/Preference;

    move-result-object v0

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/dualboot/e/a/c;

    if-eqz v1, :cond_0

    check-cast v0, Lcom/dualboot/e/a/c;

    invoke-virtual {v0}, Lcom/dualboot/e/a/c;->d()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private i()V
    .locals 5

    iget-object v0, p0, Lcom/dualboot/e/r;->g:Landroid/preference/CheckBoxPreference;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/e/r;->d:Ljava/util/List;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/dualboot/e/r;->g:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v0}, Landroid/preference/CheckBoxPreference;->isChecked()Z

    move-result v2

    iget-object v0, p0, Lcom/dualboot/e/r;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_0
    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/dualboot/e/r;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_1
    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_8

    :cond_2
    return-void

    :cond_3
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/e/y;

    if-eqz v0, :cond_0

    iget-object v1, v0, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    instance-of v1, v1, Lcom/dualboot/e/a/r;

    if-eqz v1, :cond_0

    iget-object v1, v0, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    check-cast v1, Lcom/dualboot/e/a/r;

    invoke-interface {v1}, Lcom/dualboot/e/a/r;->a()Lcom/dualboot/e/a/u;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/dualboot/e/a/u;->b()Z

    move-result v1

    if-nez v1, :cond_4

    if-eqz v2, :cond_6

    :cond_4
    iget-object v1, v0, Lcom/dualboot/e/y;->b:Landroid/preference/PreferenceGroup;

    if-eqz v1, :cond_0

    iget-object v1, v0, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    if-eqz v1, :cond_0

    iget-object v1, v0, Lcom/dualboot/e/y;->b:Landroid/preference/PreferenceGroup;

    invoke-virtual {v1}, Landroid/preference/PreferenceGroup;->getPreferenceCount()I

    move-result v1

    if-nez v1, :cond_5

    iget-object v1, v0, Lcom/dualboot/e/y;->a:Landroid/preference/PreferenceGroup;

    iget-object v4, v0, Lcom/dualboot/e/y;->b:Landroid/preference/PreferenceGroup;

    invoke-virtual {v1, v4}, Landroid/preference/PreferenceGroup;->addPreference(Landroid/preference/Preference;)Z

    :cond_5
    iget-object v1, v0, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    invoke-virtual {v1}, Landroid/preference/Preference;->getDependency()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/dualboot/e/y;->e:Ljava/lang/String;

    iget-object v1, v0, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    const/4 v4, 0x0

    invoke-virtual {v1, v4}, Landroid/preference/Preference;->setDependency(Ljava/lang/String;)V

    iget-object v1, v0, Lcom/dualboot/e/y;->b:Landroid/preference/PreferenceGroup;

    iget-object v4, v0, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    invoke-virtual {v1, v4}, Landroid/preference/PreferenceGroup;->addPreference(Landroid/preference/Preference;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/dualboot/e/y;->d:Z

    iget-object v1, v0, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    if-eqz v1, :cond_0

    iget-object v1, v0, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    instance-of v1, v1, Lcom/dualboot/e/a/r;

    if-eqz v1, :cond_0

    iget-object v0, v0, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    check-cast v0, Lcom/dualboot/e/a/r;

    invoke-interface {v0}, Lcom/dualboot/e/a/r;->b()V

    goto :goto_0

    :cond_6
    iget-object v1, v0, Lcom/dualboot/e/y;->b:Landroid/preference/PreferenceGroup;

    if-eqz v1, :cond_0

    iget-object v1, v0, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    if-eqz v1, :cond_0

    iget-object v1, v0, Lcom/dualboot/e/y;->b:Landroid/preference/PreferenceGroup;

    iget-object v4, v0, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    invoke-virtual {v1, v4}, Landroid/preference/PreferenceGroup;->removePreference(Landroid/preference/Preference;)Z

    move-result v1

    if-eqz v1, :cond_7

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/dualboot/e/y;->d:Z

    :cond_7
    iget-object v1, v0, Lcom/dualboot/e/y;->b:Landroid/preference/PreferenceGroup;

    invoke-virtual {v1}, Landroid/preference/PreferenceGroup;->getPreferenceCount()I

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, v0, Lcom/dualboot/e/y;->a:Landroid/preference/PreferenceGroup;

    iget-object v0, v0, Lcom/dualboot/e/y;->b:Landroid/preference/PreferenceGroup;

    invoke-virtual {v1, v0}, Landroid/preference/PreferenceGroup;->removePreference(Landroid/preference/Preference;)Z

    goto/16 :goto_0

    :cond_8
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/e/y;

    if-eqz v0, :cond_1

    iget-object v2, v0, Lcom/dualboot/e/y;->b:Landroid/preference/PreferenceGroup;

    if-eqz v2, :cond_1

    iget-object v2, v0, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    if-eqz v2, :cond_1

    iget-boolean v2, v0, Lcom/dualboot/e/y;->d:Z

    if-eqz v2, :cond_1

    iget-object v2, v0, Lcom/dualboot/e/y;->e:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    iget-object v2, v0, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    iget-object v0, v0, Lcom/dualboot/e/y;->e:Ljava/lang/String;

    invoke-virtual {v2, v0}, Landroid/preference/Preference;->setDependency(Ljava/lang/String;)V

    goto/16 :goto_1
.end method

.method private j()V
    .locals 1

    iget-object v0, p0, Lcom/dualboot/e/r;->f:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    return-void
.end method

.method private k()V
    .locals 22

    invoke-virtual/range {p0 .. p0}, Lcom/dualboot/e/r;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v3

    if-nez v3, :cond_0

    invoke-virtual/range {p0 .. p0}, Lcom/dualboot/e/r;->getPreferenceManager()Landroid/preference/PreferenceManager;

    move-result-object v3

    move-object/from16 v0, p0

    invoke-virtual {v3, v0}, Landroid/preference/PreferenceManager;->createPreferenceScreen(Landroid/content/Context;)Landroid/preference/PreferenceScreen;

    move-result-object v3

    sget v4, Lcom/dualboot/f;->settings_name:I

    invoke-virtual {v3, v4}, Landroid/preference/PreferenceScreen;->setTitle(I)V

    sget v4, Lcom/dualboot/f;->settings_desc:I

    invoke-virtual {v3, v4}, Landroid/preference/PreferenceScreen;->setSummary(I)V

    :cond_0
    move-object v4, v3

    invoke-virtual {v4}, Landroid/preference/PreferenceScreen;->removeAll()V

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->b:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->clear()V

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->c:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->clear()V

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->d:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->clear()V

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->e:Ljava/util/Map;

    invoke-interface {v3}, Ljava/util/Map;->clear()V

    const/4 v3, 0x0

    move-object/from16 v0, p0

    iput-object v3, v0, Lcom/dualboot/e/r;->g:Landroid/preference/CheckBoxPreference;

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    if-eqz v3, :cond_3

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    sget-object v5, Lcom/dualboot/engine/d;->m:Lcom/dualboot/engine/d;

    move-object/from16 v0, p0

    invoke-direct {v0, v3, v5, v4}, Lcom/dualboot/e/r;->a(Lcom/dualboot/engine/c;Lcom/dualboot/engine/d;Landroid/preference/PreferenceGroup;)Landroid/preference/PreferenceGroup;

    move-result-object v3

    move-object/from16 v0, p0

    iget-object v5, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    sget-object v6, Lcom/dualboot/engine/d;->j:Lcom/dualboot/engine/d;

    move-object/from16 v0, p0

    invoke-direct {v0, v5, v6, v4}, Lcom/dualboot/e/r;->a(Lcom/dualboot/engine/c;Lcom/dualboot/engine/d;Landroid/preference/PreferenceGroup;)Landroid/preference/PreferenceGroup;

    move-result-object v5

    move-object/from16 v0, p0

    iget-object v6, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    sget-object v7, Lcom/dualboot/engine/d;->a:Lcom/dualboot/engine/d;

    move-object/from16 v0, p0

    invoke-direct {v0, v6, v7, v4}, Lcom/dualboot/e/r;->a(Lcom/dualboot/engine/c;Lcom/dualboot/engine/d;Landroid/preference/PreferenceGroup;)Landroid/preference/PreferenceGroup;

    move-result-object v6

    move-object/from16 v0, p0

    iget-object v7, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    sget-object v8, Lcom/dualboot/engine/d;->e:Lcom/dualboot/engine/d;

    move-object/from16 v0, p0

    invoke-direct {v0, v7, v8, v4}, Lcom/dualboot/e/r;->a(Lcom/dualboot/engine/c;Lcom/dualboot/engine/d;Landroid/preference/PreferenceGroup;)Landroid/preference/PreferenceGroup;

    move-result-object v7

    move-object/from16 v0, p0

    iget-object v8, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    sget-object v9, Lcom/dualboot/engine/d;->d:Lcom/dualboot/engine/d;

    move-object/from16 v0, p0

    invoke-direct {v0, v8, v9, v4}, Lcom/dualboot/e/r;->a(Lcom/dualboot/engine/c;Lcom/dualboot/engine/d;Landroid/preference/PreferenceGroup;)Landroid/preference/PreferenceGroup;

    move-result-object v8

    move-object/from16 v0, p0

    iget-object v9, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    sget-object v10, Lcom/dualboot/engine/d;->b:Lcom/dualboot/engine/d;

    move-object/from16 v0, p0

    invoke-direct {v0, v9, v10, v4}, Lcom/dualboot/e/r;->a(Lcom/dualboot/engine/c;Lcom/dualboot/engine/d;Landroid/preference/PreferenceGroup;)Landroid/preference/PreferenceGroup;

    move-result-object v9

    move-object/from16 v0, p0

    iget-object v10, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    sget-object v11, Lcom/dualboot/engine/d;->c:Lcom/dualboot/engine/d;

    move-object/from16 v0, p0

    invoke-direct {v0, v10, v11, v4}, Lcom/dualboot/e/r;->a(Lcom/dualboot/engine/c;Lcom/dualboot/engine/d;Landroid/preference/PreferenceGroup;)Landroid/preference/PreferenceGroup;

    move-result-object v10

    move-object/from16 v0, p0

    iget-object v11, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    sget-object v12, Lcom/dualboot/engine/d;->f:Lcom/dualboot/engine/d;

    move-object/from16 v0, p0

    invoke-direct {v0, v11, v12, v4}, Lcom/dualboot/e/r;->a(Lcom/dualboot/engine/c;Lcom/dualboot/engine/d;Landroid/preference/PreferenceGroup;)Landroid/preference/PreferenceGroup;

    move-result-object v11

    move-object/from16 v0, p0

    iget-object v12, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    sget-object v13, Lcom/dualboot/engine/d;->g:Lcom/dualboot/engine/d;

    move-object/from16 v0, p0

    invoke-direct {v0, v12, v13, v4}, Lcom/dualboot/e/r;->a(Lcom/dualboot/engine/c;Lcom/dualboot/engine/d;Landroid/preference/PreferenceGroup;)Landroid/preference/PreferenceGroup;

    move-result-object v12

    move-object/from16 v0, p0

    iget-object v13, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    sget-object v14, Lcom/dualboot/engine/d;->h:Lcom/dualboot/engine/d;

    move-object/from16 v0, p0

    invoke-direct {v0, v13, v14, v4}, Lcom/dualboot/e/r;->a(Lcom/dualboot/engine/c;Lcom/dualboot/engine/d;Landroid/preference/PreferenceGroup;)Landroid/preference/PreferenceGroup;

    move-result-object v13

    move-object/from16 v0, p0

    iget-object v14, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    sget-object v15, Lcom/dualboot/engine/d;->i:Lcom/dualboot/engine/d;

    move-object/from16 v0, p0

    invoke-direct {v0, v14, v15, v4}, Lcom/dualboot/e/r;->a(Lcom/dualboot/engine/c;Lcom/dualboot/engine/d;Landroid/preference/PreferenceGroup;)Landroid/preference/PreferenceGroup;

    move-result-object v14

    move-object/from16 v0, p0

    iget-object v15, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    sget-object v16, Lcom/dualboot/engine/d;->k:Lcom/dualboot/engine/d;

    move-object/from16 v0, p0

    move-object/from16 v1, v16

    invoke-direct {v0, v15, v1, v4}, Lcom/dualboot/e/r;->a(Lcom/dualboot/engine/c;Lcom/dualboot/engine/d;Landroid/preference/PreferenceGroup;)Landroid/preference/PreferenceGroup;

    move-result-object v15

    invoke-virtual/range {p0 .. p0}, Lcom/dualboot/e/r;->getPreferenceManager()Landroid/preference/PreferenceManager;

    move-result-object v16

    new-instance v17, Lcom/dualboot/util/y;

    move-object/from16 v0, v17

    move-object/from16 v1, p0

    invoke-direct {v0, v1}, Lcom/dualboot/util/y;-><init>(Landroid/content/Context;)V

    sget v18, Lcom/dualboot/f;->app_name:I

    const/16 v19, 0x0

    move/from16 v0, v19

    new-array v0, v0, [I

    move-object/from16 v19, v0

    invoke-virtual/range {v17 .. v19}, Lcom/dualboot/util/y;->a(I[I)Ljava/lang/String;

    move-result-object v18

    new-instance v19, Ljava/lang/StringBuilder;

    sget v20, Lcom/dualboot/f;->MarketURL_Google_HTTPS:I

    const/16 v21, 0x0

    move/from16 v0, v21

    new-array v0, v0, [I

    move-object/from16 v21, v0

    move-object/from16 v0, v17

    move/from16 v1, v20

    move-object/from16 v2, v21

    invoke-virtual {v0, v1, v2}, Lcom/dualboot/util/y;->a(I[I)Ljava/lang/String;

    move-result-object v17

    invoke-static/range {v17 .. v17}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v17

    move-object/from16 v0, v19

    move-object/from16 v1, v17

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual/range {p0 .. p0}, Lcom/dualboot/e/r;->getPackageName()Ljava/lang/String;

    move-result-object v17

    move-object/from16 v0, v19

    move-object/from16 v1, v17

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v17

    invoke-virtual/range {v17 .. v17}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v17

    new-instance v19, Landroid/content/Intent;

    invoke-direct/range {v19 .. v19}, Landroid/content/Intent;-><init>()V

    const-string v20, "android.intent.action.SEND"

    invoke-virtual/range {v19 .. v20}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v20, "text/plain"

    invoke-virtual/range {v19 .. v20}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    const-string v20, "android.intent.extra.SUBJECT"

    move-object/from16 v0, v19

    move-object/from16 v1, v20

    move-object/from16 v2, v18

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v20, "android.intent.extra.TEXT"

    move-object/from16 v0, v19

    move-object/from16 v1, v20

    move-object/from16 v2, v17

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-object/from16 v0, v16

    move-object/from16 v1, p0

    invoke-virtual {v0, v1}, Landroid/preference/PreferenceManager;->createPreferenceScreen(Landroid/content/Context;)Landroid/preference/PreferenceScreen;

    move-result-object v17

    const/16 v20, 0x0

    invoke-static/range {v19 .. v20}, Landroid/content/Intent;->createChooser(Landroid/content/Intent;Ljava/lang/CharSequence;)Landroid/content/Intent;

    move-result-object v19

    move-object/from16 v0, v17

    move-object/from16 v1, v19

    invoke-virtual {v0, v1}, Landroid/preference/PreferenceScreen;->setIntent(Landroid/content/Intent;)V

    const-string v19, "Share"

    move-object/from16 v0, v17

    move-object/from16 v1, v19

    invoke-virtual {v0, v1}, Landroid/preference/PreferenceScreen;->setTitle(Ljava/lang/CharSequence;)V

    new-instance v19, Ljava/lang/StringBuilder;

    const-string v20, "Tell family and friends about "

    invoke-direct/range {v19 .. v20}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    move-object/from16 v0, v19

    move-object/from16 v1, v18

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v18

    invoke-virtual/range {v18 .. v18}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v18

    invoke-virtual/range {v17 .. v18}, Landroid/preference/PreferenceScreen;->setSummary(Ljava/lang/CharSequence;)V

    move-object/from16 v0, v17

    invoke-virtual {v5, v0}, Landroid/preference/PreferenceGroup;->addPreference(Landroid/preference/Preference;)Z

    const-string v5, "key_pref_info"

    invoke-virtual {v14, v5}, Landroid/preference/PreferenceGroup;->setKey(Ljava/lang/String;)V

    new-instance v5, Lcom/dualboot/e/a/x;

    move-object/from16 v0, p0

    invoke-direct {v5, v0}, Lcom/dualboot/e/a/x;-><init>(Landroid/content/Context;)V

    invoke-virtual {v14, v5}, Landroid/preference/PreferenceGroup;->addPreference(Landroid/preference/Preference;)Z

    new-instance v5, Ljava/lang/StringBuilder;

    const-string v17, "pkg="

    move-object/from16 v0, v17

    invoke-direct {v5, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual/range {p0 .. p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v17

    move-object/from16 v0, v17

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    new-instance v17, Ljava/lang/StringBuilder;

    invoke-static {v5}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    move-object/from16 v0, v17

    invoke-direct {v0, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string v5, "&manuf="

    move-object/from16 v0, v17

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v5

    sget-object v17, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    move-object/from16 v0, v17

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    new-instance v17, Ljava/lang/StringBuilder;

    invoke-static {v5}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    move-object/from16 v0, v17

    invoke-direct {v0, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string v5, "&model="

    move-object/from16 v0, v17

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v5

    sget-object v17, Landroid/os/Build;->MODEL:Ljava/lang/String;

    move-object/from16 v0, v17

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    new-instance v17, Ljava/lang/StringBuilder;

    invoke-static {v5}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    move-object/from16 v0, v17

    invoke-direct {v0, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string v5, "&abi="

    move-object/from16 v0, v17

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v5

    sget-object v17, Landroid/os/Build;->CPU_ABI:Ljava/lang/String;

    move-object/from16 v0, v17

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    new-instance v17, Ljava/lang/StringBuilder;

    invoke-static {v5}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    move-object/from16 v0, v17

    invoke-direct {v0, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string v5, "&abi2="

    move-object/from16 v0, v17

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v5

    sget-object v17, Landroid/os/Build;->CPU_ABI2:Ljava/lang/String;

    move-object/from16 v0, v17

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    new-instance v17, Ljava/lang/StringBuilder;

    invoke-static {v5}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    move-object/from16 v0, v17

    invoke-direct {v0, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string v5, "&sdk="

    move-object/from16 v0, v17

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v5

    sget v17, Landroid/os/Build$VERSION;->SDK_INT:I

    move/from16 v0, v17

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    new-instance v17, Landroid/content/Intent;

    invoke-direct/range {v17 .. v17}, Landroid/content/Intent;-><init>()V

    const-string v18, "android.intent.action.VIEW"

    invoke-virtual/range {v17 .. v18}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    new-instance v18, Ljava/lang/StringBuilder;

    const-string v19, "http://www.dualbootgames.com/faq/index.php?"

    invoke-direct/range {v18 .. v19}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    move-object/from16 v0, v18

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v5

    move-object/from16 v0, v17

    invoke-virtual {v0, v5}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    const/high16 v5, 0x80000

    move-object/from16 v0, v17

    invoke-virtual {v0, v5}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    move-object/from16 v0, v16

    move-object/from16 v1, p0

    invoke-virtual {v0, v1}, Landroid/preference/PreferenceManager;->createPreferenceScreen(Landroid/content/Context;)Landroid/preference/PreferenceScreen;

    move-result-object v5

    move-object/from16 v0, v17

    invoke-virtual {v5, v0}, Landroid/preference/PreferenceScreen;->setIntent(Landroid/content/Intent;)V

    const-string v17, "Support and Help"

    move-object/from16 v0, v17

    invoke-virtual {v5, v0}, Landroid/preference/PreferenceScreen;->setTitle(Ljava/lang/CharSequence;)V

    const-string v17, "Need help? Check our frequently asked questions or contact us"

    move-object/from16 v0, v17

    invoke-virtual {v5, v0}, Landroid/preference/PreferenceScreen;->setSummary(Ljava/lang/CharSequence;)V

    sget v17, Lcom/dualboot/e;->pref_faq:I

    move/from16 v0, v17

    invoke-virtual {v5, v0}, Landroid/preference/PreferenceScreen;->setWidgetLayoutResource(I)V

    invoke-virtual {v14, v5}, Landroid/preference/PreferenceGroup;->addPreference(Landroid/preference/Preference;)Z

    invoke-static {}, Lcom/dualboot/e/aa;->a()Landroid/content/Intent;

    move-result-object v5

    if-eqz v5, :cond_1

    move-object/from16 v0, v16

    move-object/from16 v1, p0

    invoke-virtual {v0, v1}, Landroid/preference/PreferenceManager;->createPreferenceScreen(Landroid/content/Context;)Landroid/preference/PreferenceScreen;

    move-result-object v16

    move-object/from16 v0, v16

    invoke-virtual {v0, v5}, Landroid/preference/PreferenceScreen;->setIntent(Landroid/content/Intent;)V

    const-string v5, "More apps"

    move-object/from16 v0, v16

    invoke-virtual {v0, v5}, Landroid/preference/PreferenceScreen;->setTitle(Ljava/lang/CharSequence;)V

    const-string v5, "Find more great apps by DualBoot Games"

    move-object/from16 v0, v16

    invoke-virtual {v0, v5}, Landroid/preference/PreferenceScreen;->setSummary(Ljava/lang/CharSequence;)V

    sget v5, Lcom/dualboot/e;->pref_moreapps:I

    move-object/from16 v0, v16

    invoke-virtual {v0, v5}, Landroid/preference/PreferenceScreen;->setWidgetLayoutResource(I)V

    move-object/from16 v0, v16

    invoke-virtual {v14, v0}, Landroid/preference/PreferenceGroup;->addPreference(Landroid/preference/Preference;)Z

    :cond_1
    const/4 v5, 0x1

    move-object/from16 v0, p0

    invoke-static {v0, v5}, Lcom/dualboot/e/aa;->a(Landroid/content/Context;Z)Landroid/content/Intent;

    move-result-object v5

    if-eqz v5, :cond_2

    new-instance v16, Lcom/dualboot/e/a/s;

    move-object/from16 v0, v16

    move-object/from16 v1, p0

    invoke-direct {v0, v1}, Lcom/dualboot/e/a/s;-><init>(Landroid/content/Context;)V

    const-string v17, "key_pref_info_whatsnew"

    invoke-virtual/range {v16 .. v17}, Lcom/dualboot/e/a/s;->setKey(Ljava/lang/String;)V

    move-object/from16 v0, v16

    move-object/from16 v1, p0

    invoke-virtual {v0, v1, v5}, Lcom/dualboot/e/a/s;->a(Landroid/app/Activity;Landroid/content/Intent;)V

    sget v5, Lcom/dualboot/f;->pref_whatsnew_title:I

    move-object/from16 v0, v16

    invoke-virtual {v0, v5}, Lcom/dualboot/e/a/s;->setTitle(I)V

    sget v5, Lcom/dualboot/f;->pref_whatsnew_summary:I

    move-object/from16 v0, v16

    invoke-virtual {v0, v5}, Lcom/dualboot/e/a/s;->setSummary(I)V

    move-object/from16 v0, v16

    invoke-virtual {v14, v0}, Landroid/preference/PreferenceGroup;->addPreference(Landroid/preference/Preference;)Z

    :cond_2
    invoke-static {v4, v3}, Lcom/dualboot/e/r;->a(Landroid/preference/PreferenceScreen;Landroid/preference/PreferenceGroup;)Z

    invoke-static {v4, v6}, Lcom/dualboot/e/r;->a(Landroid/preference/PreferenceScreen;Landroid/preference/PreferenceGroup;)Z

    invoke-static {v4, v10}, Lcom/dualboot/e/r;->a(Landroid/preference/PreferenceScreen;Landroid/preference/PreferenceGroup;)Z

    invoke-static {v4, v7}, Lcom/dualboot/e/r;->a(Landroid/preference/PreferenceScreen;Landroid/preference/PreferenceGroup;)Z

    invoke-static {v4, v8}, Lcom/dualboot/e/r;->a(Landroid/preference/PreferenceScreen;Landroid/preference/PreferenceGroup;)Z

    invoke-static {v4, v11}, Lcom/dualboot/e/r;->a(Landroid/preference/PreferenceScreen;Landroid/preference/PreferenceGroup;)Z

    invoke-static {v4, v12}, Lcom/dualboot/e/r;->a(Landroid/preference/PreferenceScreen;Landroid/preference/PreferenceGroup;)Z

    invoke-static {v4, v9}, Lcom/dualboot/e/r;->a(Landroid/preference/PreferenceScreen;Landroid/preference/PreferenceGroup;)Z

    invoke-static {v4, v13}, Lcom/dualboot/e/r;->a(Landroid/preference/PreferenceScreen;Landroid/preference/PreferenceGroup;)Z

    invoke-static {v4, v14}, Lcom/dualboot/e/r;->a(Landroid/preference/PreferenceScreen;Landroid/preference/PreferenceGroup;)Z

    invoke-static {v4, v15}, Lcom/dualboot/e/r;->a(Landroid/preference/PreferenceScreen;Landroid/preference/PreferenceGroup;)Z

    const/4 v3, 0x0

    move v5, v3

    :goto_0
    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->c:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lt v5, v3, :cond_a

    :cond_3
    move-object/from16 v0, p0

    invoke-virtual {v0, v4}, Lcom/dualboot/e/r;->setPreferenceScreen(Landroid/preference/PreferenceScreen;)V

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    if-eqz v3, :cond_4

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    invoke-virtual {v3}, Lcom/dualboot/engine/c;->k()Ljava/lang/String;

    move-result-object v3

    move-object/from16 v0, p0

    iget-object v5, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    invoke-virtual {v5}, Lcom/dualboot/engine/c;->j()Ljava/lang/String;

    move-result-object v5

    move-object/from16 v0, p0

    invoke-direct {v0, v3, v5}, Lcom/dualboot/e/r;->a(Ljava/lang/String;Ljava/lang/String;)Z

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    invoke-virtual {v3}, Lcom/dualboot/engine/c;->l()Ljava/lang/String;

    move-result-object v3

    move-object/from16 v0, p0

    iget-object v5, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    invoke-virtual {v5}, Lcom/dualboot/engine/c;->i()Ljava/lang/String;

    move-result-object v5

    move-object/from16 v0, p0

    invoke-direct {v0, v3, v5}, Lcom/dualboot/e/r;->a(Ljava/lang/String;Ljava/lang/String;)Z

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    invoke-virtual {v3}, Lcom/dualboot/engine/c;->n()I

    move-result v5

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    invoke-virtual {v3}, Lcom/dualboot/engine/c;->o()I

    move-result v6

    const/4 v3, 0x0

    :goto_1
    if-lt v3, v5, :cond_b

    :cond_4
    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    if-eqz v3, :cond_5

    new-instance v3, Lcom/dualboot/e/a/t;

    invoke-direct {v3}, Lcom/dualboot/e/a/t;-><init>()V

    move-object/from16 v0, p0

    iput-object v3, v0, Lcom/dualboot/e/r;->i:Lcom/dualboot/e/a/t;

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->i:Lcom/dualboot/e/a/t;

    move-object/from16 v0, p0

    iget-object v5, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    invoke-virtual {v5}, Lcom/dualboot/engine/c;->h()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    move-object/from16 v0, p0

    invoke-virtual {v0, v5, v6}, Lcom/dualboot/e/r;->a(Ljava/lang/CharSequence;Z)Landroid/preference/Preference;

    move-result-object v5

    invoke-virtual {v3, v5}, Lcom/dualboot/e/a/t;->a(Landroid/preference/Preference;)V

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->i:Lcom/dualboot/e/a/t;

    move-object/from16 v0, p0

    iget-object v5, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    invoke-virtual {v5}, Lcom/dualboot/engine/c;->i()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    move-object/from16 v0, p0

    invoke-virtual {v0, v5, v6}, Lcom/dualboot/e/r;->a(Ljava/lang/CharSequence;Z)Landroid/preference/Preference;

    move-result-object v5

    invoke-virtual {v3, v5}, Lcom/dualboot/e/a/t;->a(Landroid/preference/Preference;)V

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->i:Lcom/dualboot/e/a/t;

    move-object/from16 v0, p0

    iget-object v5, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    invoke-virtual {v5}, Lcom/dualboot/engine/c;->j()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    move-object/from16 v0, p0

    invoke-virtual {v0, v5, v6}, Lcom/dualboot/e/r;->a(Ljava/lang/CharSequence;Z)Landroid/preference/Preference;

    move-result-object v5

    invoke-virtual {v3, v5}, Lcom/dualboot/e/a/t;->a(Landroid/preference/Preference;)V

    :cond_5
    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    if-eqz v3, :cond_6

    const-string v3, "key_iab_offers"

    const/4 v5, 0x0

    move-object/from16 v0, p0

    invoke-virtual {v0, v3, v5}, Lcom/dualboot/e/r;->a(Ljava/lang/CharSequence;Z)Landroid/preference/Preference;

    move-result-object v3

    if-eqz v3, :cond_6

    instance-of v5, v3, Landroid/preference/PreferenceGroup;

    if-eqz v5, :cond_6

    check-cast v3, Landroid/preference/PreferenceGroup;

    new-instance v5, Lcom/dualboot/e/a/c;

    move-object/from16 v0, p0

    invoke-direct {v5, v0}, Lcom/dualboot/e/a/c;-><init>(Landroid/content/Context;)V

    const-string v6, "key_iab_offers_refresh"

    invoke-virtual {v5, v6}, Lcom/dualboot/e/a/c;->setKey(Ljava/lang/String;)V

    invoke-virtual/range {p0 .. p0}, Lcom/dualboot/e/r;->a()Lcom/dualboot/e/j;

    move-result-object v6

    move-object/from16 v0, p0

    invoke-virtual {v5, v3, v6, v0}, Lcom/dualboot/e/a/c;->a(Landroid/preference/PreferenceGroup;Lcom/dualboot/e/j;Lcom/dualboot/e/a/f;)V

    :cond_6
    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->d:Ljava/util/List;

    if-eqz v3, :cond_8

    const/4 v3, 0x0

    move v5, v3

    :goto_2
    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->d:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lt v5, v3, :cond_d

    :cond_7
    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->d:Ljava/util/List;

    const/4 v4, 0x0

    invoke-interface {v3, v4}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_7

    :cond_8
    invoke-direct/range {p0 .. p0}, Lcom/dualboot/e/r;->i()V

    invoke-virtual/range {p0 .. p0}, Lcom/dualboot/e/r;->getListView()Landroid/widget/ListView;

    move-result-object v3

    if-eqz v3, :cond_9

    const/4 v4, 0x0

    invoke-virtual {v3, v4}, Landroid/widget/ListView;->setSmoothScrollbarEnabled(Z)V

    const/4 v4, 0x0

    invoke-virtual {v3, v4}, Landroid/widget/ListView;->setVerticalFadingEdgeEnabled(Z)V

    :cond_9
    return-void

    :cond_a
    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->c:Ljava/util/List;

    invoke-interface {v3, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/dualboot/e/z;

    invoke-virtual {v3}, Lcom/dualboot/e/z;->a()Z

    add-int/lit8 v3, v5, 0x1

    move v5, v3

    goto/16 :goto_0

    :cond_b
    if-ge v3, v6, :cond_c

    move-object/from16 v0, p0

    iget-object v7, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    invoke-virtual {v7, v3}, Lcom/dualboot/engine/c;->b(I)Lcom/dualboot/engine/f;

    move-result-object v7

    invoke-virtual {v7}, Lcom/dualboot/engine/f;->c()Ljava/lang/String;

    move-result-object v7

    move-object/from16 v0, p0

    iget-object v8, v0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    invoke-virtual {v8, v3}, Lcom/dualboot/engine/c;->c(I)Lcom/dualboot/engine/f;

    move-result-object v8

    invoke-virtual {v8}, Lcom/dualboot/engine/f;->c()Ljava/lang/String;

    move-result-object v8

    move-object/from16 v0, p0

    invoke-direct {v0, v7, v8}, Lcom/dualboot/e/r;->a(Ljava/lang/String;Ljava/lang/String;)Z

    :cond_c
    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_1

    :cond_d
    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->d:Ljava/util/List;

    invoke-interface {v3, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/dualboot/e/y;

    if-eqz v3, :cond_f

    if-eqz v4, :cond_e

    iget-object v6, v3, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    if-nez v6, :cond_10

    :cond_e
    const/4 v3, 0x0

    :goto_3
    if-nez v3, :cond_f

    move-object/from16 v0, p0

    iget-object v3, v0, Lcom/dualboot/e/r;->d:Ljava/util/List;

    const/4 v6, 0x0

    invoke-interface {v3, v5, v6}, Ljava/util/List;->set(ILjava/lang/Object;)Ljava/lang/Object;

    :cond_f
    add-int/lit8 v3, v5, 0x1

    move v5, v3

    goto :goto_2

    :cond_10
    iget-object v6, v3, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    invoke-virtual {v6}, Landroid/preference/Preference;->getKey()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Landroid/preference/PreferenceGroup;->findPreference(Ljava/lang/CharSequence;)Landroid/preference/Preference;

    move-result-object v6

    iget-object v3, v3, Lcom/dualboot/e/y;->c:Landroid/preference/Preference;

    if-eq v6, v3, :cond_11

    const/4 v3, 0x0

    goto :goto_3

    :cond_11
    const/4 v3, 0x1

    goto :goto_3
.end method


# virtual methods
.method protected final a(Ljava/lang/CharSequence;)Landroid/preference/Preference;
    .locals 1

    const/4 v0, 0x0

    invoke-virtual {p0, p1, v0}, Lcom/dualboot/e/r;->a(Ljava/lang/CharSequence;Z)Landroid/preference/Preference;

    move-result-object v0

    return-object v0
.end method

.method protected final a(Ljava/lang/CharSequence;Z)Landroid/preference/Preference;
    .locals 2

    iget-object v0, p0, Lcom/dualboot/e/r;->e:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    if-nez p2, :cond_1

    :cond_0
    invoke-virtual {p0, p1}, Lcom/dualboot/e/r;->findPreference(Ljava/lang/CharSequence;)Landroid/preference/Preference;

    move-result-object v0

    :goto_0
    return-object v0

    :cond_1
    iget-object v0, p0, Lcom/dualboot/e/r;->e:Ljava/util/Map;

    invoke-interface {p1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/preference/Preference;

    goto :goto_0
.end method

.method protected abstract a()Lcom/dualboot/e/j;
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/dualboot/e/r;->e(Ljava/lang/String;)Z

    return-void
.end method

.method protected final b()Landroid/preference/PreferenceScreen;
    .locals 1

    invoke-virtual {p0}, Lcom/dualboot/e/r;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    return-object v0
.end method

.method public final b(Ljava/lang/String;)Z
    .locals 2

    const-string v0, ""

    const/4 v1, 0x1

    invoke-direct {p0, p1, v0, v1}, Lcom/dualboot/e/r;->a(Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result v0

    return v0
.end method

.method public final c()V
    .locals 0

    invoke-direct {p0}, Lcom/dualboot/e/r;->i()V

    return-void
.end method

.method protected final c(Ljava/lang/String;)Z
    .locals 2

    invoke-direct {p0, p1}, Lcom/dualboot/e/r;->e(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    iget v0, v0, Lcom/dualboot/e/x;->a:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    iget-boolean v0, p0, Lcom/dualboot/e/r;->m:Z

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/dualboot/e/r;->finish()V

    :cond_0
    const/4 v0, 0x1

    :goto_0
    return v0

    :cond_1
    const/4 v0, 0x0

    goto :goto_0
.end method

.method protected onActivityResult(IILandroid/content/Intent;)V
    .locals 10

    const/16 v1, 0x402

    const/4 v2, 0x2

    const/high16 v6, 0x43000000    # 128.0f

    const/4 v9, 0x1

    const/4 v8, 0x0

    const/16 v0, 0x403

    if-ne p1, v0, :cond_4

    invoke-static {p3}, Lcom/dualboot/activity/offer/a;->a(Landroid/content/Intent;)Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    move v1, v8

    :cond_0
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_2

    :cond_1
    :goto_1
    return-void

    :cond_2
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/dualboot/activity/offer/d;

    iget-object v3, v0, Lcom/dualboot/activity/offer/d;->a:Ljava/lang/String;

    iget v0, v0, Lcom/dualboot/activity/offer/d;->b:I

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "Received offer result "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v4

    const-string v5, " for "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    invoke-direct {p0}, Lcom/dualboot/e/r;->h()V

    const/4 v4, 0x3

    if-ne v0, v4, :cond_0

    if-eqz v1, :cond_3

    move v0, v8

    :goto_2
    invoke-direct {p0, v3, v0}, Lcom/dualboot/e/r;->a(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_0

    move v1, v9

    goto :goto_0

    :cond_3
    move v0, v9

    goto :goto_2

    :cond_4
    const/16 v0, 0x401

    if-ne p1, v0, :cond_5

    invoke-direct {p0}, Lcom/dualboot/e/r;->i()V

    invoke-direct {p0, v1}, Lcom/dualboot/e/r;->b(I)Z

    goto :goto_1

    :cond_5
    if-ne p1, v1, :cond_8

    if-eq p2, v2, :cond_6

    const-string v0, "key_pref_info"

    invoke-virtual {p0, v0, v8}, Lcom/dualboot/e/r;->a(Ljava/lang/CharSequence;Z)Landroid/preference/Preference;

    move-result-object v0

    check-cast v0, Landroid/preference/PreferenceGroup;

    if-eqz v0, :cond_1

    const-string v1, "key_pref_info_whatsnew"

    invoke-virtual {v0, v1}, Landroid/preference/PreferenceGroup;->findPreference(Ljava/lang/CharSequence;)Landroid/preference/Preference;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-virtual {v0, v1}, Landroid/preference/PreferenceGroup;->removePreference(Landroid/preference/Preference;)Z

    goto :goto_1

    :cond_6
    if-eqz p3, :cond_1

    const-string v0, "key_result_offer_id"

    invoke-virtual {p3, v0}, Landroid/content/Intent;->getStringArrayListExtra(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/dualboot/e/r;->a(Ljava/util/ArrayList;)Z

    const-string v0, "key_result_theme_name"

    invoke-virtual {p3, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    invoke-direct {p0, v0}, Lcom/dualboot/e/r;->d(Ljava/lang/String;)Lcom/dualboot/e/z;

    move-result-object v1

    if-eqz v1, :cond_1

    new-instance v1, Lcom/dualboot/e/s;

    invoke-direct {v1, p0, v0}, Lcom/dualboot/e/s;-><init>(Lcom/dualboot/e/r;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    iget-boolean v0, v0, Lcom/dualboot/e/x;->e:Z

    if-eqz v0, :cond_7

    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto/16 :goto_1

    :cond_7
    iget-object v0, p0, Lcom/dualboot/e/r;->f:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_1

    :cond_8
    iget-object v0, p0, Lcom/dualboot/e/r;->b:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    add-int/lit16 v0, v0, 0x1a4

    const/16 v1, 0x1a4

    if-lt p1, v1, :cond_1

    if-ge p1, v0, :cond_1

    const/4 v0, -0x1

    if-ne p2, v0, :cond_1

    if-eqz p3, :cond_1

    add-int/lit16 v0, p1, -0x1a4

    iget-object v1, p0, Lcom/dualboot/e/r;->b:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-static {v4}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string v1, "-image"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v0, "-"

    invoke-virtual {v4, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    array-length v1, v0

    if-lez v1, :cond_9

    array-length v1, v0

    add-int/lit8 v1, v1, -0x1

    aget-object v0, v0, v1

    const-string v1, "x"

    invoke-virtual {v0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    array-length v1, v0

    if-ne v1, v2, :cond_9

    aget-object v1, v0, v8

    invoke-static {v1}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v6

    aget-object v0, v0, v9

    invoke-static {v0}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v7

    :goto_3
    new-instance v0, Lcom/dualboot/e/t;

    move-object v1, p0

    move-object v2, p0

    move-object v3, p3

    invoke-direct/range {v0 .. v7}, Lcom/dualboot/e/t;-><init>(Lcom/dualboot/e/r;Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;FF)V

    new-array v1, v9, [Ljava/lang/Void;

    const/4 v2, 0x0

    aput-object v2, v1, v8

    invoke-virtual {v0, v1}, Lcom/dualboot/e/t;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    goto/16 :goto_1

    :cond_9
    move v7, v6

    goto :goto_3
.end method

.method public onBackPressed()V
    .locals 0

    invoke-super {p0}, Landroid/preference/PreferenceActivity;->onBackPressed()V

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3

    invoke-super {p0, p1}, Landroid/preference/PreferenceActivity;->onCreate(Landroid/os/Bundle;)V

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v0, "onCreate() / "

    invoke-direct {v1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    if-nez p1, :cond_2

    const-string v0, "NEW"

    :goto_0
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    new-instance v0, Lcom/dualboot/e/x;

    invoke-direct {v0}, Lcom/dualboot/e/x;-><init>()V

    iput-object v0, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    if-nez p1, :cond_3

    sget-boolean v0, Lcom/dualboot/e/r;->a:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    sput-boolean v0, Lcom/dualboot/e/r;->a:Z

    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v0

    invoke-virtual {p0}, Lcom/dualboot/e/r;->a()Lcom/dualboot/e/j;

    move-result-object v1

    invoke-virtual {v0, p0, v1}, Lcom/dualboot/a/a;->a(Landroid/content/Context;Lcom/dualboot/e/j;)Z

    :cond_0
    invoke-static {}, Lcom/dualboot/a/a;->a()Lcom/dualboot/a/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/dualboot/a/a;->b()Z

    invoke-virtual {p0}, Lcom/dualboot/e/r;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/dualboot/e/r;->a(Landroid/content/Intent;)V

    :goto_1
    invoke-virtual {p0}, Lcom/dualboot/e/r;->a()Lcom/dualboot/e/j;

    move-result-object v0

    new-instance v1, Lcom/dualboot/engine/c;

    invoke-direct {v1}, Lcom/dualboot/engine/c;-><init>()V

    iput-object v1, p0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    iget-object v1, p0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    invoke-virtual {v0}, Lcom/dualboot/e/j;->b()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, p0, v0}, Lcom/dualboot/engine/c;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/e/r;->j:Lcom/dualboot/engine/c;

    :cond_1
    invoke-direct {p0}, Lcom/dualboot/e/r;->k()V

    return-void

    :cond_2
    const-string v0, "RECREATE"

    goto :goto_0

    :cond_3
    iget-object v0, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    iget v0, v0, Lcom/dualboot/e/x;->a:I

    iget-object v1, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    invoke-virtual {v1, p1}, Lcom/dualboot/e/x;->b(Landroid/os/Bundle;)Z

    iget-object v1, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    iget v1, v1, Lcom/dualboot/e/x;->a:I

    iget-object v2, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    iput v0, v2, Lcom/dualboot/e/x;->a:I

    invoke-direct {p0, v1}, Lcom/dualboot/e/r;->a(I)V

    goto :goto_1
.end method

.method protected onDestroy()V
    .locals 2

    invoke-super {p0}, Landroid/preference/PreferenceActivity;->onDestroy()V

    iget-object v0, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/dualboot/e/x;->d:Z

    invoke-virtual {p0}, Lcom/dualboot/e/r;->isFinishing()Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x401

    invoke-virtual {p0, v0}, Lcom/dualboot/e/r;->finishActivity(I)V

    const/16 v0, 0x402

    invoke-virtual {p0, v0}, Lcom/dualboot/e/r;->finishActivity(I)V

    const/16 v0, 0x403

    invoke-virtual {p0, v0}, Lcom/dualboot/e/r;->finishActivity(I)V

    invoke-static {}, Lcom/dualboot/e/r;->f()V

    :cond_0
    return-void
.end method

.method protected onNewIntent(Landroid/content/Intent;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/preference/PreferenceActivity;->onNewIntent(Landroid/content/Intent;)V

    invoke-direct {p0, p1}, Lcom/dualboot/e/r;->a(Landroid/content/Intent;)V

    return-void
.end method

.method protected onPause()V
    .locals 4

    invoke-super {p0}, Landroid/preference/PreferenceActivity;->onPause()V

    iget-object v0, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    iget-boolean v0, v0, Lcom/dualboot/e/x;->e:Z

    iget-object v0, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/dualboot/e/x;->e:Z

    invoke-static {p0}, Lcom/dualboot/b/a;->a(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v0

    invoke-interface {v0, p0}, Landroid/content/SharedPreferences;->unregisterOnSharedPreferenceChangeListener(Landroid/content/SharedPreferences$OnSharedPreferenceChangeListener;)V

    invoke-direct {p0}, Lcom/dualboot/e/r;->j()V

    iget-object v0, p0, Lcom/dualboot/e/r;->n:Lcom/dualboot/e/b/a;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/dualboot/e/r;->n:Lcom/dualboot/e/b/a;

    iget-object v0, v1, Lcom/dualboot/e/b/a;->d:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_0
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, v1, Lcom/dualboot/e/b/a;->d:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/dualboot/e/r;->n:Lcom/dualboot/e/b/a;

    :cond_1
    invoke-virtual {p0}, Lcom/dualboot/e/r;->isFinishing()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-static {}, Lcom/dualboot/e/r;->f()V

    :cond_2
    return-void

    :cond_3
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Dialog;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/Dialog;->isShowing()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v0}, Landroid/app/Dialog;->dismiss()V

    goto :goto_0
.end method

.method public onPreferenceChange(Landroid/preference/Preference;Ljava/lang/Object;)Z
    .locals 3

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/preference/Preference;->getKey()Ljava/lang/String;

    move-result-object v0

    move-object v1, v0

    :goto_0
    if-eqz p2, :cond_1

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_1
    const/4 v2, 0x1

    invoke-direct {p0, v1, v0, v2}, Lcom/dualboot/e/r;->a(Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result v0

    return v0

    :cond_0
    const-string v0, ""

    move-object v1, v0

    goto :goto_0

    :cond_1
    const-string v0, ""

    goto :goto_1
.end method

.method public onPreferenceClick(Landroid/preference/Preference;)Z
    .locals 9

    const/4 v2, 0x0

    const/4 v1, 0x0

    const/4 v3, 0x1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/preference/Preference;->getKey()Ljava/lang/String;

    move-result-object v4

    iget-object v0, p0, Lcom/dualboot/e/r;->g:Landroid/preference/CheckBoxPreference;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-direct {p0}, Lcom/dualboot/e/r;->i()V

    :cond_0
    :goto_0
    return v2

    :cond_1
    const-string v0, "key_iab_offers"

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-direct {p0}, Lcom/dualboot/e/r;->g()V

    invoke-direct {p0}, Lcom/dualboot/e/r;->e()Lcom/dualboot/e/b/a;

    move-result-object v4

    iget-object v0, v4, Lcom/dualboot/e/b/a;->a:Lcom/dualboot/e/j;

    if-eqz v0, :cond_2

    iget-object v0, v4, Lcom/dualboot/e/b/a;->b:Landroid/app/Activity;

    if-nez v0, :cond_3

    :cond_2
    :goto_1
    invoke-virtual {v4, v1}, Lcom/dualboot/e/b/a;->a(Landroid/app/Dialog;)V

    goto :goto_0

    :cond_3
    iget-object v0, v4, Lcom/dualboot/e/b/a;->a:Lcom/dualboot/e/j;

    sget-object v0, Lcom/dualboot/e/k;->a:Lcom/dualboot/e/k;

    sget-object v5, Lcom/dualboot/e/k;->a:Lcom/dualboot/e/k;

    if-ne v0, v5, :cond_2

    iget-object v0, v4, Lcom/dualboot/e/b/a;->b:Landroid/app/Activity;

    invoke-static {v0}, Lcom/dualboot/b/a;->a(Landroid/app/Activity;)Landroid/content/SharedPreferences;

    move-result-object v5

    if-eqz v5, :cond_2

    const-string v0, "key_show_about_offers"

    invoke-interface {v5, v0, v3}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, v4, Lcom/dualboot/e/b/a;->b:Landroid/app/Activity;

    invoke-static {v0}, Lcom/dualboot/e/aa;->b(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v6

    invoke-static {v6}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    sget v7, Lcom/dualboot/e;->offer_about:I

    invoke-virtual {v0, v7, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v7

    sget v0, Lcom/dualboot/d;->cb_show_next_time:I

    invoke-virtual {v7, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    instance-of v8, v0, Landroid/widget/CheckBox;

    if-eqz v8, :cond_4

    check-cast v0, Landroid/widget/CheckBox;

    :goto_2
    new-instance v8, Landroid/app/AlertDialog$Builder;

    invoke-direct {v8, v6}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    invoke-virtual {v8, v3}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    sget v3, Lcom/dualboot/c;->icon:I

    invoke-virtual {v8, v3}, Landroid/app/AlertDialog$Builder;->setIcon(I)Landroid/app/AlertDialog$Builder;

    sget v3, Lcom/dualboot/f;->OfferAbout_Title:I

    invoke-virtual {v8, v3}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    invoke-virtual {v8, v7}, Landroid/app/AlertDialog$Builder;->setView(Landroid/view/View;)Landroid/app/AlertDialog$Builder;

    const v3, 0x104000a

    invoke-virtual {v8, v3, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    invoke-virtual {v8, v1, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    invoke-virtual {v8}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    if-eqz v1, :cond_2

    new-instance v3, Lcom/dualboot/e/b/b;

    invoke-direct {v3, v4, v5, v0}, Lcom/dualboot/e/b/b;-><init>(Lcom/dualboot/e/b/a;Landroid/content/SharedPreferences;Landroid/widget/CheckBox;)V

    invoke-virtual {v1, v3}, Landroid/app/Dialog;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

    goto :goto_1

    :cond_4
    move-object v0, v1

    goto :goto_2

    :cond_5
    instance-of v0, p1, Lcom/dualboot/e/a/a;

    if-eqz v0, :cond_7

    check-cast p1, Lcom/dualboot/e/a/a;

    invoke-virtual {p1}, Lcom/dualboot/e/a/a;->a()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0}, Lcom/dualboot/e/r;->h()V

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_6

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1, v3}, Ljava/util/ArrayList;-><init>(I)V

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-direct {p0, v1}, Lcom/dualboot/e/r;->a(Ljava/util/ArrayList;)Z

    :cond_6
    move v2, v3

    goto/16 :goto_0

    :cond_7
    invoke-virtual {p0, v4}, Lcom/dualboot/e/r;->b(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_8

    iput-object v4, p0, Lcom/dualboot/e/r;->h:Ljava/lang/String;

    move v2, v3

    goto/16 :goto_0

    :cond_8
    move v0, v2

    :goto_3
    iget-object v1, p0, Lcom/dualboot/e/r;->b:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lt v0, v1, :cond_9

    invoke-virtual {p0, v4}, Lcom/dualboot/e/r;->c(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v2, v3

    goto/16 :goto_0

    :cond_9
    iget-object v1, p0, Lcom/dualboot/e/r;->b:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v4, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_a

    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    const-string v2, "android.intent.action.GET_CONTENT"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v2, "android.intent.category.OPENABLE"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    const-string v2, "image/*"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    const-string v2, "Select Image"

    invoke-static {v1, v2}, Landroid/content/Intent;->createChooser(Landroid/content/Intent;Ljava/lang/CharSequence;)Landroid/content/Intent;

    move-result-object v1

    add-int/lit16 v0, v0, 0x1a4

    invoke-static {p0, v1, v0}, Lcom/dualboot/e/aa;->a(Landroid/app/Activity;Landroid/content/Intent;I)Z

    move v2, v3

    goto/16 :goto_0

    :cond_a
    add-int/lit8 v0, v0, 0x1

    goto :goto_3
.end method

.method protected onRestart()V
    .locals 0

    invoke-super {p0}, Landroid/preference/PreferenceActivity;->onRestart()V

    return-void
.end method

.method protected onRestoreInstanceState(Landroid/os/Bundle;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/preference/PreferenceActivity;->onRestoreInstanceState(Landroid/os/Bundle;)V

    return-void
.end method

.method protected onResume()V
    .locals 3

    invoke-super {p0}, Landroid/preference/PreferenceActivity;->onResume()V

    iget-object v0, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    iget-boolean v0, v0, Lcom/dualboot/e/x;->e:Z

    iget-object v0, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/dualboot/e/x;->e:Z

    invoke-static {p0}, Lcom/dualboot/b/a;->a(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v0

    invoke-interface {v0, p0}, Landroid/content/SharedPreferences;->registerOnSharedPreferenceChangeListener(Landroid/content/SharedPreferences$OnSharedPreferenceChangeListener;)V

    iget-object v0, p0, Lcom/dualboot/e/r;->f:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    new-instance v1, Landroid/os/Handler;

    invoke-direct {v1}, Landroid/os/Handler;-><init>()V

    iget-object v0, p0, Lcom/dualboot/e/r;->f:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_0
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-nez v0, :cond_2

    :cond_1
    invoke-direct {p0}, Lcom/dualboot/e/r;->j()V

    const/16 v0, 0x401

    invoke-direct {p0, v0}, Lcom/dualboot/e/r;->b(I)Z

    return-void

    :cond_2
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    invoke-virtual {v1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0
.end method

.method protected onSaveInstanceState(Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/preference/PreferenceActivity;->onSaveInstanceState(Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/dualboot/e/r;->k:Lcom/dualboot/e/x;

    invoke-virtual {v0, p1}, Lcom/dualboot/e/x;->a(Landroid/os/Bundle;)Z

    return-void
.end method

.method public onSharedPreferenceChanged(Landroid/content/SharedPreferences;Ljava/lang/String;)V
    .locals 1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    :goto_0
    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/dualboot/e/r;->l:Z

    invoke-interface {p1}, Landroid/content/SharedPreferences;->getAll()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_1
    invoke-static {p0, p2, v0}, Lcom/dualboot/e/l;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const-string v0, ""

    goto :goto_1
.end method

.method protected onStart()V
    .locals 0

    invoke-super {p0}, Landroid/preference/PreferenceActivity;->onStart()V

    return-void
.end method

.method protected onStop()V
    .locals 1

    invoke-super {p0}, Landroid/preference/PreferenceActivity;->onStop()V

    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/dualboot/e/r;->a(I)V

    return-void
.end method

.method public onUserInteraction()V
    .locals 0

    invoke-super {p0}, Landroid/preference/PreferenceActivity;->onUserInteraction()V

    return-void
.end method

.method protected onUserLeaveHint()V
    .locals 0

    invoke-super {p0}, Landroid/preference/PreferenceActivity;->onUserLeaveHint()V

    return-void
.end method
