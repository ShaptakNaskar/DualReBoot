/* 00049240 | STG::GETexture::GetPixel */

/* STG::GETexture::GetPixel(STG::GEPixelFormat::EFormat const&, unsigned char const*, unsigned
   char&, unsigned char&, unsigned char&, unsigned char&) */

void STG::GETexture::GetPixel
               (EFormat *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5,
               uchar *param_6)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  byte bVar6;
  
  switch(*(undefined4 *)param_1) {
  case 0:
    uVar5 = *(undefined4 *)param_2;
    bVar4 = (byte)((uint)uVar5 >> 0x10);
    bVar2 = (byte)((uint)uVar5 >> 8);
    bVar6 = (byte)((uint)uVar5 >> 0x18);
    bVar3 = (byte)uVar5;
    goto LAB_000492a0;
  case 1:
    bVar6 = *param_2;
    bVar4 = param_2[1];
    bVar2 = param_2[2];
    bVar3 = 0xff;
    goto LAB_000492a0;
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
    uVar1 = *(ushort *)param_2;
    bVar6 = (byte)(uVar1 >> 8) & 0xf0;
    bVar4 = (byte)((uVar1 & 0xf00) >> 4);
    bVar2 = (byte)uVar1 & 0xf0;
    bVar3 = (byte)((uVar1 & 0xf) << 4);
    goto LAB_000492a0;
  case 10:
    uVar1 = *(ushort *)param_2;
    bVar3 = 0xff;
    bVar6 = (byte)(uVar1 >> 8) & 0xf8;
    bVar4 = (byte)((uVar1 & 0x7e0) >> 3);
    bVar2 = (byte)((uVar1 & 0x1f) << 3);
    goto LAB_000492a0;
  }
  bVar4 = 0xff;
  bVar6 = 0xff;
  bVar2 = bVar4;
  bVar3 = bVar4;
LAB_000492a0:
  *param_3 = bVar6;
  *param_4 = bVar4;
  *param_5 = bVar2;
  *param_6 = bVar3;
  return;
}

