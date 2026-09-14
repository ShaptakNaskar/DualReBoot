/* 00048fc8 | STG::GETexture::CreateDebugTexture */

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
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  byte *local_4c;
  uint local_38;
  byte *local_34;
  
  iVar15 = 0;
  if (param_1 == 0) {
    param_1 = 0x40;
  }
  if (param_2 == 0) {
    param_2 = 0x40;
  }
  *(undefined4 *)param_3 = 0;
  *param_4 = param_1;
  *param_5 = param_2;
  *param_6 = 0;
  uVar8 = *param_4;
  uVar10 = *param_5;
  *param_7 = (uchar *)0x0;
  uVar13 = uVar10;
  if (uVar10 < uVar8) {
    uVar13 = uVar8;
  }
  if (uVar13 == 0) {
    uVar13 = 0;
  }
  else {
    while( true ) {
      iVar9 = GERendererAPI::GL_GetTextureDataSize(uVar8,uVar10,0);
      uVar13 = uVar13 >> 1;
      iVar15 = iVar15 + iVar9;
      *param_6 = *param_6 + 1;
      if (uVar13 == 0) break;
      uVar8 = *param_4;
      uVar10 = *param_5;
    }
    uVar13 = iVar15 * 4;
  }
  local_34 = operator_new__(uVar13);
  uVar13 = *param_6;
  *param_7 = local_34;
  if (uVar13 != 0) {
    local_38 = 0;
    iVar15 = DAT_00049238 + 0x49098;
    do {
      uVar8 = *param_5 >> (local_38 & 0xff);
      uVar10 = *param_4 >> (local_38 & 0xff);
      if (uVar8 != 0) {
        uVar13 = 0;
        pbVar11 = (byte *)((local_38 +
                           (uint)((ulonglong)local_38 * (ulonglong)DAT_0004923c >> 0x22) * -6) * 0xc
                          + iVar15);
        local_4c = local_34;
        bVar7 = 0;
        do {
          if (uVar10 != 0) {
            bVar1 = *pbVar11;
            bVar2 = pbVar11[4];
            bVar3 = pbVar11[8];
            bVar4 = bVar1 >> 1;
            bVar5 = bVar2 >> 1;
            bVar6 = bVar3 >> 1;
            uVar12 = 0;
            pbVar14 = local_4c;
            if (uVar8 - 1 == uVar13) {
              do {
                uVar12 = uVar12 + 1;
                *pbVar14 = bVar4;
                pbVar14[1] = bVar5;
                pbVar14[2] = bVar6;
                pbVar14[3] = 0xff;
                bVar7 = bVar7 ^ 1;
                pbVar14 = pbVar14 + 4;
              } while (uVar12 != uVar10);
            }
            else {
              do {
                *pbVar14 = bVar1;
                pbVar14[1] = bVar2;
                pbVar14[2] = bVar3;
                pbVar14[3] = bVar7;
                bVar7 = bVar7 ^ 1;
                if ((uVar12 == 0) || (uVar13 == 0 || uVar10 - 1 == uVar12)) {
                  pbVar14[1] = bVar5;
                  pbVar14[2] = bVar6;
                  *pbVar14 = bVar4;
                  pbVar14[3] = 0xff;
                }
                uVar12 = uVar12 + 1;
                pbVar14 = pbVar14 + 4;
              } while (uVar12 != uVar10);
            }
          }
          uVar13 = uVar13 + 1;
          local_4c = local_4c + uVar10 * 4;
        } while (uVar13 != uVar8);
        uVar13 = *param_6;
      }
      local_38 = local_38 + 1;
      local_34 = local_34 + uVar8 * uVar10 * 4;
    } while (local_38 < uVar13);
  }
  *param_6 = uVar13 - 1;
  return;
}

