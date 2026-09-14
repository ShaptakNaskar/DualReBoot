/* 0004ebd0 | STG::GETexture::SetPixel */

/* STG::GETexture::SetPixel(STG::GEPixelFormat::EFormat const&, unsigned char*, unsigned char,
   unsigned char, unsigned char, unsigned char) */

void STG::GETexture::SetPixel
               (EFormat *param_1,uchar *param_2,uchar param_3,uchar param_4,uchar param_5,
               uchar param_6)

{
  int iVar1;
  uchar uVar2;
  
  uVar2 = param_3;
  _param_3 = (uint)param_3;
  iVar1 = *(int *)param_1;
  if (iVar1 == 1) {
    param_2[1] = param_4;
    *param_2 = uVar2;
    param_2[2] = param_5;
  }
  else if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(uint *)param_2 =
           (uint)param_4 << 0x10 | _param_3 << 0x18 | (uint)param_6 | (uint)param_5 << 8;
    }
  }
  else if (iVar1 == 9) {
    *(ushort *)param_2 =
         (ushort)(param_4 >> 4) << 8 | (ushort)(uVar2 >> 4) << 0xc | (ushort)(param_6 >> 4) |
         param_5 & 0xf0;
  }
  else if (iVar1 == 10) {
    *(ushort *)param_2 =
         (ushort)(param_5 >> 3) | (ushort)(param_4 >> 2) << 5 | (ushort)(uVar2 >> 3) << 0xb;
  }
  return;
}

