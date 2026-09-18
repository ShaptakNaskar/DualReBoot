# Scene v26: native prefix reconstruction

All integers are little endian with explicit serialized widths; native pointer
sizes and Ghidra object offsets are not file layouts. This describes the supported
My Beach HD 2.2 subset, not all historical STG format versions. Decoding does not
run the engine or apply preferences. Unknown versions are rejected.
The extended milestone 3 reader continues from this prefix through geometry,
cameras and parent transforms; see [native geometry](NATIVE-GEOMETRY.md).

## Observed boundaries

Offsets below were recovered by following the serializers and independently
cross-checked with a temporary Python reader against the local scene. The C++
reader derives boundaries from lengths/counts, and tests verify the results.
Ranges use an exclusive end offset.

| Section | Start | End |
| --- | ---: | ---: |
| Scene version and metadata | 0 | 78 |
| Preferences v10 | 78 | 17076 |
| Environment v1 | 17076 | 17588 |
| Texture modifier v8 header | 17588 | 17596 |
| Texture swap container v2 | 17596 | 20516 |
| Font container v1 header | 20516 | 20528 |
| Two embedded fonts v5 | 20528 | 94455 |
| Five text textures v3 | 94455 | 95358 |
| 48 modifier records | 95358 | 100053 |
| Model/matrix/camera counts | 100053 | 100065 |
| Model records and remaining scene — not decoded | 100065 | 759892 |

## Preferences

Scene version 26 calls preference version 10 after metadata. Its eleven initial
allocation counts are followed by eleven counted lists in the order below.
Initial counts are preserved separately: the original loader can reallocate
from the later list counts. Each record starts with eight ASCII tag bytes, a u32
version, and three u32-length byte strings (key, name, description).

| Tag suffix after `PREF` | Version | Record payload after the strings | Count |
| --- | ---: | --- | ---: |
| TODP | 1 | Counted u32 phase list | 1 |
| CAMS | 1 | Counted string list | 1 |
| TSWP | 1 | Option count, swap index, option strings | 8 |
| MTOG | 1 | Model count, u8 enabled, model indices | 24 |
| TFNT | 1 | Texture-font index, u8 flag | 5 |
| TGRP | 1 | Option count, child count, child swap-preference indices, option strings | 7 |
| FCTX | 1 | Two u32 fields | 0 |
| THEM | 1 | Counted string pairs | 6 |
| MSWP | 1 | Model capacity, choice count; each choice has a name and counted model indices | 3 |
| INAP | 3 | Pair count, extra string, string pairs | 1 |
| ENVI | 2 | Counted string list | 1 |

After all lists, one trailing u32 per file chooser precedes the counted
multi-preference string pairs. The original loader's legacy time-of-day list is
absent in version 10. File chooser v1 is implemented from the reference and
covered by the synthetic fixture; there are no real records in this scene.
Some preferences normally created by the runtime, such as auto-time-of-day,
are not serialized records and are not synthesized by this reader.

Entry points:
[ARM scene preferences](../native/armeabi-v7a/functions/000591b4_STG__USerialize__Load.c),
[x86 scene preferences](../native/x86/functions/000632c0_STG__USerialize__Load.c).
Child serializers:
[time](../native/armeabi-v7a/functions/00056cd4_STG__USerialize__Load.c),
[camera](../native/armeabi-v7a/functions/00057c30_STG__USerialize__Load.c),
[texture swap](../native/armeabi-v7a/functions/00057278_STG__USerialize__Load.c),
[model toggle](../native/armeabi-v7a/functions/00057888_STG__USerialize__Load.c),
[texture font](../native/armeabi-v7a/functions/00057418_STG__USerialize__Load.c),
[texture group](../native/armeabi-v7a/functions/00057098_STG__USerialize__Load.c),
[file chooser](../native/armeabi-v7a/functions/00057580_STG__USerialize__Load.c),
[theme](../native/armeabi-v7a/functions/00056efc_STG__USerialize__Load.c),
[model swap](../native/armeabi-v7a/functions/00057a2c_STG__USerialize__Load.c),
[purchase metadata](../native/armeabi-v7a/functions/00058b7c_STG__USerialize__Load.c),
[environment](../native/armeabi-v7a/functions/000576e8_STG__USerialize__Load.c).

## Environment and texture resources

Environment/container/group/settings versions are all 1. A settings record is
three four-component float colours, a two-float range and two u8 flags after its
version word: 62 bytes total. The parser preserves the three colour slots and
does not assign rendering semantics prematurely. References:
[environment](../native/armeabi-v7a/functions/00050b44_STG__USerialize__Load.c),
[group](../native/armeabi-v7a/functions/00050aa8_STG__USerialize__Load.c),
[settings](../native/armeabi-v7a/functions/00050a34_STG__USerialize__Load.c).

Modifier version 8 starts with a modifier-record count, then a texture-swap
container (v2) and font container (v1), then the modifier records. Each swap (v4)
contains a name, choice count and two boolean bytes; each choice contains a name,
file reference, time-of-day record and u32 extra index. A file reference (v1)
contains a u32-length byte string and stored u32 hash. A time-of-day record (v1)
contains a u32 phase (0–7).

The font container has separate font and text-texture counts. Font v5 stores a
file reference, float size, **u16** glyph count, flag byte, u32 data length, raw
embedded data, then glyph records. Each 32-byte glyph has a u16 code, four floats,
five **signed i16** metrics and a u32 data offset. Text texture v3 stores a file
reference, message count, flag, font index, messages, countdown flag and two bytes.
Messages use **u32 code-unit counts followed by little-endian u16 units**;
the template's `unsigned short` type does not imply a two-byte length prefix.
Embedded data is retained without rasterization or decompression.

Each modifier record stores three boolean bytes; four u32 words; a time-of-day
record; a boolean byte; two file references; a u32 extra index; and a final
boolean byte. There is no serialized padding matching the C++ object's padding.
Sentinel `0xffffffff` values remain unsigned. Swap, choice and text-texture
indices are checked when their corresponding flags are enabled.

References:
[modifier](../native/armeabi-v7a/functions/0005b338_STG__USerialize__Load.c),
[swap container](../native/armeabi-v7a/functions/00058b04_STG__USerialize__Load.c),
[swap](../native/armeabi-v7a/functions/00058470_STG__USerialize__Load.c),
[file reference](../native/armeabi-v7a/functions/00057edc_STG__USerialize__Load.c),
[time record](../native/armeabi-v7a/functions/00052308_STG__USerialize__Load.c),
[font container](../native/armeabi-v7a/functions/0005b280_STG__USerialize__Load.c),
[font](../native/armeabi-v7a/functions/00057f1c_STG__USerialize__Load.c),
[glyph metrics](../native/armeabi-v7a/functions/000372e0_STG__GEFont__SetCharData.c),
[text texture](../native/armeabi-v7a/functions/0005aca4_STG__USerialize__Load.c),
[UTF-16 string](../native/armeabi-v7a/functions/0005579c_STG__USerialize__Load_unsigned_short_unsigned_short_.c).

## Bounds and limits

The public structure reader accepts at most 64 MiB input, 1 MiB per byte string,
16 MiB per embedded font blob, 65,536 entries per ordinary collection and a
200,000-entry aggregate collection/code-unit budget. Preference groups are
limited to 4,096 records; environments to eight settings per group. Float values
must be finite and booleans must be 0 or 1. Length/count reads check remaining
input before loops or allocation. Unsupported schema versions fail with a
section and byte-offset diagnostic; there is no fallback to scanning for markers.

Known references are checked against parsed collection sizes and declared model
counts. Stored file hashes are preserved, not recomputed. Unreconstructed index
fields, font data offsets and the trailing model body are not validated as engine
behavior. A complete prefix with no model body is intentionally accepted by this
partial-reader API; it is not evidence that a complete scene is valid.
