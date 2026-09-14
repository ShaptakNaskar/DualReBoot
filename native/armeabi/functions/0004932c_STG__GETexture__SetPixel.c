/* 0004932c | STG::GETexture::SetPixel */

/* STG::GETexture::SetPixel(STG::GEPixelFormat::EFormat const&, unsigned char*, unsigned char,
   unsigned char, unsigned char, unsigned char) */

void STG::GETexture::SetPixel
               (EFormat *param_1,uchar *param_2,uchar param_3,uchar param_4,uchar param_5,
               uchar param_6)

{
  switch(*(undefined4 *)param_1) {
  case 0:
    *(uint *)param_2 =
         (uint)param_3 << 0x18 | (uint)param_4 << 0x10 | (uint)param_6 | (uint)param_5 << 8;
    break;
  case 1:
    *param_2 = param_3;
    param_2[1] = param_4;
    param_2[2] = param_5;
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    *(ushort *)param_2 =
         (ushort)(param_3 >> 4) << 0xc | (ushort)(param_4 >> 4) << 8 | (ushort)(param_6 >> 4) |
         param_5 & 0xf0;
    break;
  case 10:
    *(ushort *)param_2 =
         (ushort)(param_4 >> 2) << 5 | (ushort)(param_5 >> 3) | (ushort)(param_3 >> 3) << 0xb;
  }
  return;
}

