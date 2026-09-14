/* 00046af8 | STG::GETexture::CreateDebugTexture */

/* STG::GETexture::CreateDebugTexture(unsigned long, unsigned long, STG::GEPixelFormat::EFormat&,
   unsigned long&, unsigned long&, unsigned long&, unsigned char*&) */

void STG::GETexture::CreateDebugTexture
               (ulong param_1,ulong param_2,EFormat *param_3,ulong *param_4,ulong *param_5,
               ulong *param_6,uchar **param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  byte *local_50;
  uint local_3c;
  byte *local_38;
  
  iVar16 = 0;
  if (param_1 == 0) {
    param_1 = 0x40;
  }
  *(undefined4 *)param_3 = 0;
  if (param_2 == 0) {
    param_2 = 0x40;
  }
  *param_4 = param_1;
  *param_5 = param_2;
  *param_6 = 0;
  uVar9 = *param_4;
  uVar11 = *param_5;
  *param_7 = (uchar *)0x0;
  uVar13 = uVar11;
  if (uVar11 < uVar9) {
    uVar13 = uVar9;
  }
  if (uVar13 == 0) {
    uVar13 = 0;
  }
  else {
    while( true ) {
      iVar10 = GERendererAPI::GL_GetTextureDataSize(uVar9,uVar11,0);
      uVar13 = uVar13 >> 1;
      *param_6 = *param_6 + 1;
      iVar16 = iVar16 + iVar10;
      if (uVar13 == 0) break;
      uVar9 = *param_4;
      uVar11 = *param_5;
    }
    uVar13 = iVar16 * 4;
  }
  local_38 = operator_new__(uVar13);
  uVar13 = *param_6;
  *param_7 = local_38;
  if (uVar13 != 0) {
    iVar16 = DAT_00046d94 + 0x46bd0;
    local_3c = 0;
    do {
      uVar9 = *param_5 >> (local_3c & 0xff);
      uVar11 = *param_4 >> (local_3c & 0xff);
      if (uVar9 != 0) {
        uVar13 = 0;
        local_50 = local_38;
        bVar8 = 0;
        pbVar14 = (byte *)(iVar16 + (local_3c % 6) * 0xc);
LAB_00046c48:
        do {
          if (uVar11 != 0) {
            bVar1 = *pbVar14;
            bVar2 = pbVar14[4];
            bVar3 = pbVar14[8];
            bVar4 = bVar1 >> 1;
            bVar5 = bVar2 >> 1;
            bVar6 = bVar3 >> 1;
            if (uVar9 - 1 == uVar13) {
              uVar12 = 0;
              pbVar15 = local_50;
              do {
                uVar12 = uVar12 + 1;
                *pbVar15 = bVar4;
                pbVar15[1] = bVar5;
                pbVar15[2] = bVar6;
                bVar8 = bVar8 ^ 1;
                pbVar15[3] = 0xff;
                pbVar15 = pbVar15 + 4;
              } while (uVar12 != uVar11);
              uVar13 = uVar13 + 1;
              local_50 = local_50 + uVar11 * 4;
              if (uVar13 == uVar9) break;
              goto LAB_00046c48;
            }
            uVar12 = 0;
            pbVar15 = local_50;
            bVar7 = bVar8;
            do {
              *pbVar15 = bVar1;
              pbVar15[1] = bVar2;
              pbVar15[2] = bVar3;
              bVar8 = bVar7 ^ 1;
              pbVar15[3] = bVar7;
              if ((uVar12 == 0) || (uVar13 == 0 || uVar11 - 1 == uVar12)) {
                *pbVar15 = bVar4;
                pbVar15[1] = bVar5;
                pbVar15[2] = bVar6;
                pbVar15[3] = 0xff;
              }
              uVar12 = uVar12 + 1;
              pbVar15 = pbVar15 + 4;
              bVar7 = bVar8;
            } while (uVar12 != uVar11);
          }
          uVar13 = uVar13 + 1;
          local_50 = local_50 + uVar11 * 4;
        } while (uVar13 != uVar9);
        uVar13 = *param_6;
      }
      local_3c = local_3c + 1;
      local_38 = local_38 + uVar11 * uVar9 * 4;
    } while (local_3c < uVar13);
  }
  *param_6 = uVar13 - 1;
  return;
}

