.class public final Lcom/dualboot/h;
.super Ljava/lang/Object;


# static fields
.field public static final OpenGLTextureView:[I

.field public static final OpenGLTextureView_file_scene:I = 0x0

.field public static final OpenGLTextureView_file_settings:I = 0x1

.field public static final TextViewHeaderImg:[I

.field public static final TextViewHeaderImg_img_bitmap_crop:I = 0x2

.field public static final TextViewHeaderImg_img_bitmap_round_bottom:I = 0x3

.field public static final TextViewHeaderImg_img_bitmap_src:I = 0x0

.field public static final TextViewHeaderImg_img_bitmap_src_override:I = 0x1

.field public static final TextViewHeaderImg_img_corner_radius:I = 0x5

.field public static final TextViewHeaderImg_img_gradient_color:I = 0xa

.field public static final TextViewHeaderImg_img_gradient_color_end:I = 0xb

.field public static final TextViewHeaderImg_img_layout_height_scale:I = 0x4

.field public static final TextViewHeaderImg_img_scroll_to_view:I = 0xe

.field public static final TextViewHeaderImg_img_state_toggle_click:I = 0xd

.field public static final TextViewHeaderImg_img_state_toggle_default:I = 0xc

.field public static final TextViewHeaderImg_img_stroke_alpha:I = 0x9

.field public static final TextViewHeaderImg_img_stroke_color:I = 0x8

.field public static final TextViewHeaderImg_img_stroke_enabled:I = 0x6

.field public static final TextViewHeaderImg_img_stroke_width:I = 0x7

.field public static final TextViewLink:[I

.field public static final TextViewLink_use_link_color:I

.field public static final TextViewOfferLink:[I

.field public static final TextViewOfferLink_offer_id:I

.field public static final TextViewThemeLink:[I

.field public static final TextViewThemeLink_theme_name:I


# direct methods
.method static constructor <clinit>()V
    .locals 4

    const/4 v3, 0x1

    const/4 v2, 0x0

    const/4 v0, 0x2

    new-array v0, v0, [I

    fill-array-data v0, :array_0

    sput-object v0, Lcom/dualboot/h;->OpenGLTextureView:[I

    const/16 v0, 0xf

    new-array v0, v0, [I

    fill-array-data v0, :array_1

    sput-object v0, Lcom/dualboot/h;->TextViewHeaderImg:[I

    new-array v0, v3, [I

    const v1, 0x7f010010

    aput v1, v0, v2

    sput-object v0, Lcom/dualboot/h;->TextViewLink:[I

    new-array v0, v3, [I

    const v1, 0x7f010011

    aput v1, v0, v2

    sput-object v0, Lcom/dualboot/h;->TextViewOfferLink:[I

    new-array v0, v3, [I

    const v1, 0x7f010012

    aput v1, v0, v2

    sput-object v0, Lcom/dualboot/h;->TextViewThemeLink:[I

    return-void

    nop

    :array_0
    .array-data 4
        0x7f010013
        0x7f010014
    .end array-data

    :array_1
    .array-data 4
        0x7f010001
        0x7f010002
        0x7f010003
        0x7f010004
        0x7f010005
        0x7f010006
        0x7f010007
        0x7f010008
        0x7f010009
        0x7f01000a
        0x7f01000b
        0x7f01000c
        0x7f01000d
        0x7f01000e
        0x7f01000f
    .end array-data
.end method
