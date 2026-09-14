/* 0004f4f0 | STG::GETexture::CompositeText */

/* STG::GETexture::CompositeText(STG::GEFont const*, STG::UStringBase<unsigned short, unsigned
   short> const&, STG::GEPixelFormat::EFormat const&, unsigned long, unsigned long, unsigned char
   const*, unsigned char*&) */

void STG::GETexture::CompositeText
               (GEFont *param_1,UStringBase *param_2,EFormat *param_3,ulong param_4,ulong param_5,
               uchar *param_6,uchar **param_7)

{
  undefined4 *puVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined4 *puVar6;
  uint uVar7;
  void *__s;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  void *pvVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int unaff_EBX;
  int iVar18;
  GEFontChar *this;
  GEFontChar *pGVar19;
  uint *puVar20;
  uint uVar21;
  uchar *puVar22;
  byte bVar23;
  float fVar24;
  uint local_480;
  uint local_470;
  ulong local_460;
  int local_45c;
  uint local_458;
  uint local_454;
  uint local_450;
  void *local_448;
  uint local_444;
  uint local_440;
  int local_43c;
  uint local_438;
  byte local_424;
  byte local_423;
  byte local_422;
  byte local_421;
  uchar *local_420 [3];
  ulong local_414;
  uint local_410 [128];
  uint local_210 [127];
  undefined4 uStack_14;
  
  bVar23 = 0;
  uStack_14 = 0x4f4fb;
  FUN_0002e044();
  *param_7 = (uchar *)0x0;
  if (((param_1 != (GEFont *)0x0) &&
      ((uint)(*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x28)) >> 1 != 0)) &&
     ((iVar9 = *(int *)param_3, iVar9 == 1 || (((iVar9 == 10 || (iVar9 == 9)) || (iVar9 == 0)))))) {
    local_420[0] = (uchar *)0x0;
    local_414 = 0;
    GEFont::GetBitmapData(param_1,local_420,&local_414);
    if ((local_414 != 0) && (local_420[0] != (uchar *)0x0)) {
      if (*(char *)(unaff_EBX + 0x4cec5) == '\0') {
        iVar9 = FUN_00080eb0(unaff_EBX + 0x4cec5);
        if (iVar9 != 0) {
          this = (GEFontChar *)(GETimeOfDayAuto::SetLocation + unaff_EBX + 5);
          do {
            pGVar19 = this + 0x24;
            GEFontChar::GEFontChar(this);
            this = pGVar19;
          } while (pGVar19 != (GEFontChar *)(unaff_EBX + 0x4e0e5));
          FUN_00080f40(unaff_EBX + 0x4cec5);
        }
      }
      puVar20 = local_410;
      for (iVar9 = 0x80; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar20 = 0;
        puVar20 = puVar20 + (uint)bVar23 * -2 + 1;
      }
      puVar20 = local_210;
      for (iVar9 = 0x80; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar20 = 0;
        puVar20 = puVar20 + (uint)bVar23 * -2 + 1;
      }
      fVar24 = *(float *)(unaff_EBX + 0x381d5) + *(float *)(param_1 + 0x50);
      uVar15 = (uint)(*(float *)(unaff_EBX + 0x38355) <= fVar24);
      uVar15 = (int)(fVar24 - (float)((uint)*(float *)(unaff_EBX + 0x38355) & -uVar15)) ^
               uVar15 * -0x80000000;
      uVar7 = param_5 / uVar15;
      if (param_5 / uVar15 == 0) {
        uVar7 = 1;
      }
      local_440 = *(int *)(param_2 + 0x24) - (int)*(ushort **)(param_2 + 0x28) >> 1;
      if (local_440 < 0x80) {
        if (local_440 == 0) {
          return;
        }
      }
      else {
        local_440 = 0x80;
      }
      uVar16 = param_4 >> 2;
      if (10 < param_4 >> 2) {
        uVar16 = 10;
      }
      uVar21 = 0;
      local_438 = 0;
      iVar9 = unaff_EBX + 0x4cee5;
      uVar5 = **(ushort **)(param_2 + 0x28);
      local_448 = (void *)0x80;
      local_444 = 1;
      if ((ushort)(uVar5 - 9) < 2) goto LAB_0004f81d;
LAB_0004f6af:
      local_458 = uVar21;
      if (uVar5 == 0x20) goto LAB_0004f81d;
      do {
        puVar6 = (undefined4 *)GEFont::GetCharacter(param_1,uVar5);
        puVar1 = (undefined4 *)(iVar9 + local_458 * 0x24);
        *puVar1 = *puVar6;
        puVar1[1] = puVar6[1];
        puVar1[2] = puVar6[2];
        puVar1[3] = puVar6[3];
        uVar4 = puVar6[5];
        puVar1[4] = puVar6[4];
        puVar1[5] = uVar4;
        sVar2 = *(short *)(puVar6 + 6);
        uVar10 = (uint)sVar2;
        puVar1[7] = puVar6[7];
        local_438 = local_438 + uVar10;
        *(short *)(puVar1 + 6) = sVar2;
        uVar11 = local_444 - 1;
        *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(puVar6 + 8);
        local_410[local_458] = uVar11;
        local_210[uVar11] = local_438;
        uVar21 = local_458 + 1;
        if (param_4 + uVar16 * -2 < local_438) {
          if (uVar7 <= local_444) {
            if (local_448 < local_458) {
              iVar17 = 0;
              while (local_448 = (void *)((int)local_448 + 1), local_448 <= local_458) {
                uVar21 = uVar21 - 1;
                iVar17 = iVar17 + *(short *)(unaff_EBX + 0x4cefd + (int)local_448 * 0x24);
              }
              local_210[uVar11] = local_438 - iVar17;
              local_458 = uVar21;
            }
            else {
              local_210[uVar11] = local_438 - uVar10;
            }
            if (local_458 == 0) {
              return;
            }
LAB_0004f87e:
            local_438 = 0x7fffffff;
            local_43c = -0x80000000;
            iVar17 = 0;
            uVar7 = 0;
            do {
              iVar12 = iVar9 + uVar7 * 0x24;
              iVar18 = (int)*(short *)(iVar12 + 0x12) + local_410[uVar7] * uVar15;
              iVar12 = *(short *)(iVar12 + 0x16) + iVar18;
              if (iVar18 < (int)local_438) {
                local_438 = iVar18;
              }
              if (iVar12 <= local_43c) {
                iVar12 = local_43c;
              }
              puVar20 = local_410 + uVar7;
              if (iVar17 < iVar18) {
                iVar18 = iVar17;
              }
              uVar7 = uVar7 + 1;
              if (*puVar20 == 0) {
                iVar17 = iVar18;
              }
              local_43c = iVar12;
            } while (uVar7 != local_458);
            uVar10 = GERendererAPI::GL_GetTextureBitPerPixel(*(undefined4 *)param_3);
            uVar10 = uVar10 >> 3;
            local_480 = 0;
            uVar7 = param_4;
            uVar21 = param_5;
            if (param_5 != 0 || param_4 != 0) {
              do {
                if (uVar7 == 0) {
                  uVar7 = 1;
                }
                if (uVar21 == 0) {
                  uVar21 = 1;
                }
                local_480 = local_480 + uVar21 * uVar7 * uVar10;
                uVar11 = uVar21 | uVar7;
                uVar7 = uVar7 >> 1;
                uVar21 = uVar21 >> 1;
              } while (uVar11 >> 1 != 0);
            }
            __s = operator_new__(param_5 * param_4);
            if (__s == (void *)0x0) {
              return;
            }
            memset(__s,0,param_5 * param_4);
            local_454 = (param_4 >> 1) - (local_210[0] >> 1);
            if ((int)local_454 <= (int)uVar16) {
              local_454 = uVar16;
            }
            local_450 = 0;
            local_470 = 0;
            local_460 = (iVar12 - local_438 >> 1) + (param_5 >> 1) + iVar17;
            do {
              iVar17 = iVar9 + local_450 * 0x24;
              sVar2 = *(short *)(iVar17 + 0x18);
              sVar3 = *(short *)(iVar17 + 0x14);
              uVar7 = local_410[local_450];
              if (local_470 < uVar7) {
                local_460 = local_460 - uVar15;
                uVar21 = (param_4 >> 1) - (local_210[uVar7] >> 1);
                local_470 = uVar7;
                local_454 = uVar16;
                if ((int)uVar16 <= (int)uVar21) {
                  local_454 = uVar21;
                }
              }
              iVar12 = (int)*(short *)(iVar17 + 0x10) + local_454;
              local_440 = local_460 - (int)*(short *)(iVar17 + 0x12);
              iVar18 = sVar3 + iVar12;
              iVar13 = local_440 - (int)*(short *)(iVar17 + 0x16);
              if (iVar13 < (int)local_440) {
                puVar22 = local_420[0] + (*(int *)(iVar17 + 0x1c) - iVar12);
                pvVar14 = (void *)(local_440 * param_4 + (int)__s);
                do {
                  if ((((int)local_440 < (int)param_5) && (-1 < (int)local_440)) &&
                     (iVar17 = iVar12, iVar12 < iVar18)) {
                    do {
                      if ((iVar17 < (int)param_4) && (-1 < iVar17)) {
                        bVar23 = *(byte *)((int)pvVar14 + iVar17);
                        if (*(byte *)((int)pvVar14 + iVar17) <= puVar22[iVar17]) {
                          bVar23 = puVar22[iVar17];
                        }
                        *(byte *)((int)pvVar14 + iVar17) = bVar23;
                      }
                      iVar17 = iVar17 + 1;
                    } while (iVar17 != iVar18);
                  }
                  local_440 = local_440 + -1;
                  pvVar14 = (void *)((int)pvVar14 - param_4);
                  puVar22 = puVar22 + sVar3;
                } while (local_440 != iVar13);
              }
              local_450 = local_450 + 1;
              local_454 = local_454 + (int)sVar2;
            } while (local_450 != local_458);
            puVar22 = operator_new__(local_480);
            *param_7 = puVar22;
            if (param_6 == (uchar *)0x0) {
              memset(puVar22,0,local_480);
            }
            else {
              memcpy(puVar22,param_6,local_480);
            }
            iVar9 = *(int *)param_3;
            if (param_5 != 0) {
              local_45c = 0;
              local_460 = 0;
              local_448 = __s;
              do {
                puVar22 = *param_7 + local_45c;
                if (param_4 != 0) {
                  if (iVar9 == 0 || iVar9 == 9) {
                    uVar8 = 0;
                    do {
                      bVar23 = *(byte *)((int)local_448 + uVar8);
                      GetPixel(param_3,puVar22,&local_424,&local_423,&local_422,&local_421);
                      if (local_421 <= bVar23) {
                        local_421 = bVar23;
                      }
                      SetPixel(param_3,puVar22,local_424,local_423,local_422,local_421);
                      puVar22 = puVar22 + uVar10;
                      uVar8 = uVar8 + 1;
                    } while (uVar8 != param_4);
                  }
                  else {
                    local_438 = 0;
                    do {
                      bVar23 = *(byte *)((int)local_448 + local_438);
                      GetPixel(param_3,puVar22,&local_424,&local_423,&local_422,&local_421);
                      uVar15 = (uint)bVar23;
                      bVar23 = ~bVar23;
                      local_424 = bVar23 + (char)((local_424 * uVar15) / 0xff);
                      local_423 = bVar23 + (char)((local_423 * uVar15) / 0xff);
                      local_422 = (char)((local_422 * uVar15) / 0xff) + bVar23;
                      SetPixel(param_3,puVar22,local_424,local_423,local_422,local_421);
                      local_438 = local_438 + 1;
                      puVar22 = puVar22 + uVar10;
                    } while (local_438 != param_4);
                  }
                }
                local_460 = local_460 + 1;
                local_448 = (void *)((int)local_448 + param_4);
                local_45c = local_45c + uVar10 * param_4;
              } while (local_460 != param_5);
            }
            operator_delete__(__s);
            GenerateMipChain(param_3,param_4,param_5,local_480,*param_7,0);
            return;
          }
          if (local_448 < local_458) {
            uVar10 = 0;
            while (local_448 = (void *)((int)local_448 + 1), local_448 <= local_458) {
              local_410[(int)local_448] = local_444;
              uVar10 = uVar10 + (int)*(short *)(unaff_EBX + 0x4cefd + (int)local_448 * 0x24);
            }
          }
          else {
            local_410[local_458] = local_444;
          }
          local_210[uVar11] = local_438 - uVar10;
          local_210[local_444] = uVar10;
          local_444 = local_444 + 1;
          local_448 = (void *)local_440;
          local_438 = uVar10;
        }
        local_458 = uVar21;
        if (local_440 <= uVar21) goto LAB_0004f87e;
        if ((uint)(*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x28) >> 1) <= uVar21) {
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_out_of_range((char *)(unaff_EBX + 0x37e11));
        }
        uVar5 = *(ushort *)(*(int *)(param_2 + 0x28) + uVar21 * 2);
        if (1 < (ushort)(uVar5 - 9)) goto LAB_0004f6af;
LAB_0004f81d:
        uVar5 = 0x20;
        local_458 = uVar21;
        local_448 = (void *)uVar21;
      } while( true );
    }
  }
  return;
}

