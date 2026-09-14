/* 0004e850 | STG::GETexture::CreateDebugTexture */

/* STG::GETexture::CreateDebugTexture(unsigned long, unsigned long, STG::GEPixelFormat::EFormat&,
   unsigned long&, unsigned long&, unsigned long&, unsigned char*&) */

void STG::GETexture::CreateDebugTexture
               (ulong param_1,ulong param_2,EFormat *param_3,ulong *param_4,ulong *param_5,
               ulong *param_6,uchar **param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  byte bVar9;
  byte bVar10;
  int unaff_EBX;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *local_38;
  uint local_24;
  byte *local_20;
  
  FUN_0002e044();
  *(undefined4 *)param_3 = 0;
  if (param_1 == 0) {
    param_1 = 0x40;
  }
  *param_4 = param_1;
  if (param_2 == 0) {
    param_2 = 0x40;
  }
  *param_5 = param_2;
  *param_6 = 0;
  *param_7 = (uchar *)0x0;
  uVar13 = *param_4;
  uVar11 = *param_5;
  uVar12 = uVar13;
  if (uVar13 <= uVar11) {
    uVar12 = uVar11;
  }
  uVar14 = 0;
  if (uVar12 != 0) {
    while( true ) {
      iVar7 = GERendererAPI::GL_GetTextureDataSize(uVar13,uVar11,0);
      uVar14 = uVar14 + iVar7;
      *param_6 = *param_6 + 1;
      uVar12 = uVar12 >> 1;
      if (uVar12 == 0) break;
      uVar11 = *param_5;
      uVar13 = *param_4;
    }
    uVar14 = uVar14 * 4;
  }
  local_20 = operator_new__(uVar14);
  *param_7 = local_20;
  uVar11 = *param_6;
  if (uVar11 != 0) {
    local_24 = 0;
    do {
      uVar13 = *param_5 >> ((byte)local_24 & 0x1f);
      uVar12 = *param_4 >> ((byte)local_24 & 0x1f);
      if (uVar13 != 0) {
        uVar11 = 0;
        bVar5 = false;
        local_38 = local_20;
        do {
          if (uVar12 != 0) {
            pbVar8 = (byte *)((local_24 % 6) * 0xc + unaff_EBX + 0x39ca7);
            bVar1 = *pbVar8;
            bVar2 = pbVar8[4];
            bVar3 = pbVar8[8];
            bVar6 = bVar3 >> 1;
            bVar10 = bVar1 >> 1;
            bVar9 = bVar2 >> 1;
            uVar14 = 0;
            pbVar8 = local_38;
            if (uVar13 - 1 == uVar11) {
              do {
                uVar14 = uVar14 + 1;
                *pbVar8 = bVar10;
                bVar5 = (bool)(bVar5 ^ 1);
                pbVar8[1] = bVar9;
                pbVar8[3] = 0xff;
                pbVar8[2] = bVar6;
                pbVar8 = pbVar8 + 4;
              } while (uVar14 != uVar12);
            }
            else {
              do {
                *pbVar8 = bVar1;
                pbVar8[1] = bVar2;
                pbVar8[2] = bVar3;
                bVar4 = !bVar5;
                bVar5 = (bool)(bVar5 ^ 1);
                pbVar8[3] = ~-bVar4;
                if (((uVar14 == 0) || (uVar12 - 1 == uVar14)) || (uVar11 == 0)) {
                  pbVar8[3] = 0xff;
                  *pbVar8 = bVar10;
                  pbVar8[1] = bVar9;
                  pbVar8[2] = bVar6;
                }
                uVar14 = uVar14 + 1;
                pbVar8 = pbVar8 + 4;
              } while (uVar14 != uVar12);
            }
          }
          uVar11 = uVar11 + 1;
          local_38 = local_38 + uVar12 * 4;
        } while (uVar11 != uVar13);
        uVar11 = *param_6;
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + uVar13 * uVar12 * 4;
    } while (local_24 < uVar11);
  }
  *param_6 = uVar11 - 1;
  return;
}

