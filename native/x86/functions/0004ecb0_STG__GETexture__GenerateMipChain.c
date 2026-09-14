/* 0004ecb0 | STG::GETexture::GenerateMipChain */

/* STG::GETexture::GenerateMipChain(STG::GEPixelFormat::EFormat const&, unsigned long, unsigned
   long, unsigned long, unsigned char*, unsigned long) */

void STG::GETexture::GenerateMipChain
               (EFormat *param_1,ulong param_2,ulong param_3,ulong param_4,uchar *param_5,
               ulong param_6)

{
  byte bVar1;
  uchar uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uchar uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uchar uVar14;
  uint uVar15;
  uchar *puVar16;
  uint uVar17;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uchar *local_8c;
  uint local_78;
  uint local_74;
  uchar *local_70;
  uchar *local_64;
  uint local_54;
  uint local_50;
  uint local_4c;
  uchar *local_44;
  uint local_40;
  byte local_20;
  byte local_1f;
  byte local_1e;
  byte local_1d [9];
  undefined4 uStack_14;
  
  uStack_14 = 0x4ecb9;
  FUN_0002e044();
  uVar3 = GERendererAPI::GL_GetTextureBitPerPixel(*(undefined4 *)param_1);
  uVar3 = uVar3 >> 3;
  if (param_3 != 0 || param_2 != 0) {
    local_4c = 0;
    uVar4 = param_3;
    uVar9 = param_2;
    do {
      uVar17 = uVar9;
      if (uVar9 == 0) {
        uVar17 = 0;
      }
      uVar10 = uVar4;
      if (uVar4 == 0) {
        uVar10 = 0;
      }
      local_4c = local_4c + 1;
      uVar4 = uVar10 >> 1;
      uVar9 = uVar17 >> 1;
    } while ((uVar10 | uVar17) >> 1 != 0);
    if (1 < local_4c) {
      local_54 = 1;
      local_64 = param_5;
      do {
        bVar1 = (byte)local_54;
        local_50 = 0;
        uVar17 = param_2 >> (bVar1 - 1 & 0x1f);
        local_40 = 0;
        if (uVar17 == 0) {
          uVar17 = 1;
        }
        uVar10 = param_3 >> (bVar1 - 1 & 0x1f);
        if (uVar10 == 0) {
          uVar10 = 1;
        }
        uVar11 = param_2 >> (bVar1 & 0x1f);
        if (uVar11 == 0) {
          uVar11 = 1;
        }
        uVar12 = param_3 >> (bVar1 & 0x1f);
        uVar5 = 1;
        if (uVar12 != 0) {
          uVar5 = uVar12;
        }
        local_44 = local_64 + uVar10 * uVar17 * uVar3;
        do {
          uVar12 = param_6;
          if (param_6 <= local_50) {
            uVar12 = local_50;
          }
          uVar12 = uVar12 - param_6;
          uVar8 = uVar10 / uVar5 + param_6 + local_50;
          local_40 = local_40 + 1;
          local_70 = local_44;
          local_78 = 0;
          local_74 = 0;
          do {
            uVar6 = param_6;
            if (param_6 <= local_78) {
              uVar6 = local_78;
            }
            local_74 = local_74 + 1;
            uVar13 = uVar17 / uVar11 + param_6 + local_78;
            if (uVar12 < uVar8) {
              local_8c = local_64 + (uVar6 - param_6) * uVar3 + uVar12 * uVar17 * uVar3;
              local_a0 = 0;
              local_90 = 0;
              local_94 = 0;
              local_98 = 0;
              local_9c = 0;
              local_a4 = uVar12;
              do {
                uVar15 = uVar6 - param_6;
                puVar16 = local_8c;
                if (local_a4 < uVar10) {
                  for (; uVar15 < uVar13; uVar15 = uVar15 + 1) {
                    while (uVar17 <= uVar15) {
                      uVar15 = uVar15 + 1;
                      puVar16 = puVar16 + uVar3;
                      if (uVar13 <= uVar15) goto LAB_0004efe0;
                    }
                    GetPixel(param_1,puVar16,&local_20,&local_1f,&local_1e,local_1d);
                    local_a0 = local_a0 + 1;
                    local_9c = local_9c + local_20;
                    local_98 = local_98 + local_1f;
                    local_94 = local_94 + local_1e;
                    local_90 = local_90 + local_1d[0];
                    puVar16 = puVar16 + uVar3;
                  }
                }
LAB_0004efe0:
                local_a4 = local_a4 + 1;
                local_8c = local_8c + uVar17 * uVar3;
              } while (local_a4 < uVar8);
              if (local_a0 == 0) {
                local_a4._0_1_ = (uchar)local_90;
                uVar14 = (uchar)local_94;
                uVar7 = (uchar)local_98;
                uVar2 = (uchar)local_9c;
              }
              else {
                local_a4._0_1_ = (uchar)(local_90 / local_a0);
                uVar14 = (uchar)(local_94 / local_a0);
                uVar7 = (uchar)(local_98 / local_a0);
                uVar2 = (uchar)(local_9c / local_a0);
              }
            }
            else {
              uVar2 = '\0';
              uVar7 = '\0';
              uVar14 = '\0';
              local_a4._0_1_ = '\0';
            }
            SetPixel(param_1,local_70,uVar2,uVar7,uVar14,(uchar)local_a4);
            local_70 = local_70 + uVar3;
            local_78 = local_78 + uVar17 / uVar11;
          } while (local_74 < uVar11);
          local_44 = local_44 + uVar11 * uVar3;
          local_50 = local_50 + uVar10 / uVar5;
        } while (local_40 < uVar5);
        local_54 = local_54 + 1;
        local_64 = local_64 + uVar10 * uVar17 * uVar3;
      } while (local_54 != local_4c);
    }
  }
  return;
}

