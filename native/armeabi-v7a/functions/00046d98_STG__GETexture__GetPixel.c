/* 00046d98 | STG::GETexture::GetPixel */

/* STG::GETexture::GetPixel(STG::GEPixelFormat::EFormat const&, unsigned char const*, unsigned
   char&, unsigned char&, unsigned char&, unsigned char&) */

void STG::GETexture::GetPixel
               (EFormat *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5,
               uchar *param_6)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  
  switch(*(undefined4 *)param_1) {
  case 0:
    uVar4 = *(undefined4 *)param_2;
    bVar3 = (byte)((uint)uVar4 >> 0x10);
    bVar5 = (byte)((uint)uVar4 >> 8);
    bVar6 = (byte)((uint)uVar4 >> 0x18);
    bVar2 = (byte)uVar4;
    goto LAB_00046df8;
  case 1:
    bVar6 = *param_2;
    bVar2 = 0xff;
    bVar3 = param_2[1];
    bVar5 = param_2[2];
    goto LAB_00046df8;
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
    bVar5 = (byte)uVar1 & 0xf0;
    bVar3 = (byte)(((uVar1 & 0xfff) >> 8) << 4);
    bVar2 = (byte)((uVar1 & 0xf) << 4);
    bVar6 = (byte)(uVar1 >> 8) & 0xf0;
    goto LAB_00046df8;
  case 10:
    uVar1 = *(ushort *)param_2;
    bVar2 = 0xff;
    bVar3 = (byte)(((uVar1 & 0x7ff) >> 5) << 2);
    bVar5 = (byte)((uVar1 & 0x1f) << 3);
    bVar6 = (byte)(uVar1 >> 8) & 0xf8;
    goto LAB_00046df8;
  }
  bVar3 = 0xff;
  bVar6 = 0xff;
  bVar5 = bVar3;
  bVar2 = bVar3;
LAB_00046df8:
  *param_3 = bVar6;
  *param_4 = bVar3;
  *param_5 = bVar5;
  *param_6 = bVar2;
  return;
}

