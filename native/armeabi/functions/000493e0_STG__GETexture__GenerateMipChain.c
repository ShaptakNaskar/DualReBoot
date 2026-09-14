/* 000493e0 | STG::GETexture::GenerateMipChain */

/* STG::GETexture::GenerateMipChain(STG::GEPixelFormat::EFormat const&, unsigned long, unsigned
   long, unsigned long, unsigned char*, unsigned long) */

void STG::GETexture::GenerateMipChain
               (EFormat *param_1,ulong param_2,ulong param_3,ulong param_4,uchar *param_5,
               ulong param_6)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uchar *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int local_a4;
  int local_a0;
  int local_9c;
  uchar *local_98;
  uint local_80;
  uchar *local_7c;
  uint local_78;
  uchar *local_6c;
  uint local_60;
  uint local_5c;
  uchar *local_4c;
  uint local_48;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29 [5];
  
  uVar5 = GERendererAPI::GL_GetTextureBitPerPixel(*(undefined4 *)param_1);
  uVar5 = uVar5 >> 3;
  if (param_3 != 0 || param_2 != 0) {
    uVar8 = 0;
    uVar16 = param_2;
    uVar11 = param_3;
    do {
      if (uVar16 == 0) {
        uVar16 = 0;
      }
      if (uVar11 == 0) {
        uVar11 = 0;
      }
      uVar16 = uVar16 >> 1;
      uVar11 = uVar11 >> 1;
      uVar8 = uVar8 + 1;
    } while (uVar11 != 0 || uVar16 != 0);
    if (1 < uVar8) {
      local_6c = param_5;
      local_60 = 1;
      do {
        uVar16 = param_2 >> (local_60 - 1 & 0xff);
        if (uVar16 == 0) {
          uVar16 = 1;
        }
        uVar11 = param_3 >> (local_60 - 1 & 0xff);
        if (uVar11 == 0) {
          uVar11 = 1;
        }
        uVar9 = param_2 >> (local_60 & 0xff);
        if (uVar9 == 0) {
          uVar9 = 1;
        }
        uVar10 = param_3 >> (local_60 & 0xff);
        if (uVar10 == 0) {
          uVar10 = 1;
        }
        iVar6 = __udivsi3(uVar16);
        iVar7 = __udivsi3(uVar11,uVar10);
        local_5c = 0;
        local_48 = 0;
        local_4c = local_6c + uVar5 * uVar11 * uVar16;
        do {
          local_80 = 0;
          if (local_5c < param_6) {
            uVar20 = 0;
          }
          else {
            uVar20 = local_5c - param_6;
          }
          local_48 = local_48 + 1;
          uVar21 = iVar7 + param_6 + local_5c;
          local_7c = local_4c;
          local_78 = 0;
          do {
            if (local_80 < param_6) {
              uVar22 = 0;
            }
            else {
              uVar22 = local_80 - param_6;
            }
            local_78 = local_78 + 1;
            uVar15 = iVar6 + param_6 + local_80;
            if (uVar20 < uVar21) {
              iVar17 = 0;
              local_9c = 0;
              local_a0 = 0;
              local_a4 = 0;
              iVar19 = 0;
              local_98 = local_6c + uVar5 * uVar22 + uVar5 * uVar16 * uVar20;
              uVar18 = uVar20;
              do {
                uVar12 = uVar22;
                puVar14 = local_98;
                if (uVar18 < uVar11) {
                  while (uVar12 < uVar15) {
                    while (uVar13 = uVar12 + 1, uVar12 < uVar16) {
                      GetPixel(param_1,puVar14,&local_2c,&local_2b,&local_2a,local_29);
                      local_a4 = local_a4 + (uint)local_2b;
                      local_a0 = local_a0 + (uint)local_2a;
                      iVar19 = iVar19 + (uint)local_2c;
                      iVar17 = iVar17 + 1;
                      local_9c = local_9c + (uint)local_29[0];
                      puVar14 = puVar14 + uVar5;
                      uVar12 = uVar13;
                      if (uVar15 <= uVar13) goto LAB_00049698;
                    }
                    uVar12 = uVar13;
                    puVar14 = puVar14 + uVar5;
                  }
                }
LAB_00049698:
                uVar18 = uVar18 + 1;
                local_98 = local_98 + uVar5 * uVar16;
              } while (uVar18 < uVar21);
              if (iVar17 == 0) {
                uVar1 = (uchar)iVar19;
                uVar2 = (uchar)local_a4;
                uVar3 = (uchar)local_a0;
                uVar4 = (uchar)local_9c;
              }
              else {
                uVar1 = __udivsi3(iVar19,iVar17);
                uVar2 = __udivsi3(local_a4,iVar17);
                uVar3 = __udivsi3(local_a0,iVar17);
                uVar4 = __udivsi3(local_9c,iVar17);
              }
            }
            else {
              uVar1 = '\0';
              uVar2 = uVar1;
              uVar3 = uVar1;
              uVar4 = uVar1;
            }
            SetPixel(param_1,local_7c,uVar1,uVar2,uVar3,uVar4);
            local_80 = local_80 + iVar6;
            local_7c = local_7c + uVar5;
          } while (local_78 < uVar9);
          local_5c = local_5c + iVar7;
          local_4c = local_4c + uVar5 * uVar9;
        } while (local_48 < uVar10);
        local_60 = local_60 + 1;
        local_6c = local_6c + uVar5 * uVar11 * uVar16;
      } while (local_60 != uVar8);
    }
  }
  return;
}

