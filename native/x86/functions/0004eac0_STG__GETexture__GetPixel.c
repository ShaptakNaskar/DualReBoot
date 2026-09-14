/* 0004eac0 | STG::GETexture::GetPixel */

/* STG::GETexture::GetPixel(STG::GEPixelFormat::EFormat const&, unsigned char const*, unsigned
   char&, unsigned char&, unsigned char&, unsigned char&) */

void STG::GETexture::GetPixel
               (EFormat *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5,
               uchar *param_6)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uchar uVar4;
  byte bVar5;
  
  iVar3 = *(int *)param_1;
  if (iVar3 == 1) {
    bVar5 = *param_2;
    uVar4 = param_2[1];
    bVar2 = param_2[2];
    iVar3 = -1;
    goto LAB_0004eb06;
  }
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      iVar3 = *(int *)param_2;
      uVar4 = (uchar)((uint)iVar3 >> 0x10);
      bVar5 = (byte)((uint)iVar3 >> 0x18);
      bVar2 = (byte)((uint)iVar3 >> 8);
      goto LAB_0004eb06;
    }
  }
  else {
    if (iVar3 == 9) {
      uVar1 = *(ushort *)param_2;
      bVar5 = (byte)(uVar1 >> 8) & 0xf0;
      bVar2 = (byte)uVar1 & 0xf0;
      uVar4 = (uchar)((uVar1 & 0xf00) >> 4);
      iVar3 = (uint)uVar1 << 4;
      goto LAB_0004eb06;
    }
    if (iVar3 == 10) {
      uVar1 = *(ushort *)param_2;
      iVar3 = -1;
      bVar5 = (byte)(uVar1 >> 8) & 0xf8;
      uVar4 = (uchar)((uVar1 & 0x7e0) >> 3);
      bVar2 = (char)uVar1 << 3;
      goto LAB_0004eb06;
    }
  }
  iVar3 = -1;
  bVar2 = 0xff;
  uVar4 = 0xff;
  bVar5 = 0xff;
LAB_0004eb06:
  *param_3 = bVar5;
  *param_4 = uVar4;
  *param_5 = bVar2;
  *param_6 = (uchar)iVar3;
  return;
}

