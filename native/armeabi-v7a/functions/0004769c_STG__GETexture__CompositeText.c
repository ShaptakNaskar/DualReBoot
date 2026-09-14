/* 0004769c | STG::GETexture::CompositeText */

/* STG::GETexture::CompositeText(STG::GEFont const*, STG::UStringBase<unsigned short, unsigned
   short> const&, STG::GEPixelFormat::EFormat const&, unsigned long, unsigned long, unsigned char
   const*, unsigned char*&) */

void STG::GETexture::CompositeText
               (GEFont *param_1,UStringBase *param_2,EFormat *param_3,ulong param_4,ulong param_5,
               uchar *param_6,uchar **param_7)

{
  short sVar1;
  undefined2 uVar2;
  short sVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  void *__s;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  void *pvVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  uchar *puVar22;
  ulong uVar23;
  GEFontChar *this;
  GEFontChar *pGVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  byte bVar28;
  undefined4 uVar29;
  int iVar30;
  int iVar31;
  uint *local_47c;
  byte *local_478;
  uint *local_474;
  uint local_470;
  uint local_46c;
  ulong local_460;
  uint local_454;
  byte local_434;
  byte local_433;
  byte local_432;
  byte local_431;
  uchar *local_430;
  ulong local_42c;
  uint local_428 [128];
  uint local_228 [129];
  
  *param_7 = (uchar *)0x0;
  if (((param_1 != (GEFont *)0x0) &&
      ((uint)(*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x28)) >> 1 != 0)) &&
     ((iVar14 = *(int *)param_3, iVar14 == 10 || iVar14 == 1 || ((iVar14 == 9 || (iVar14 == 0))))))
  {
    local_430 = (uchar *)0x0;
    local_42c = 0;
    GEFont::GetBitmapData(param_1,&local_430,&local_42c);
    iVar14 = DAT_00047fa8;
    if ((local_42c != 0) && (local_430 != (uchar *)0x0)) {
      if (((*(uint *)(DAT_00047fa8 + 0x47748) & 1) == 0) &&
         (iVar15 = thunk_FUN_0007004c((uint *)(DAT_00047fa8 + 0x47748)), iVar15 != 0)) {
        this = (GEFontChar *)(iVar14 + 0x4774c);
        do {
          pGVar24 = this + 0x24;
          GEFontChar::GEFontChar(this);
          this = pGVar24;
        } while (pGVar24 != (GEFontChar *)(iVar14 + 0x4894c));
        thunk_FUN_000700b0(DAT_00047fc0 + 0x47f90);
      }
      memset(local_428,0,0x200);
      memset(local_228,0,0x200);
      iVar31 = (uint)(0.0 < *(float *)(param_1 + 0x50) + 0.5) *
               (int)(*(float *)(param_1 + 0x50) + 0.5);
      uVar4 = __udivsi3(param_5,iVar31);
      iVar14 = DAT_00047fac;
      iVar15 = *(int *)(param_2 + 0x28);
      local_46c = *(int *)(param_2 + 0x24) - iVar15 >> 1;
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      if (local_46c < 0x80) {
        if (local_46c == 0) {
          return;
        }
      }
      else {
        local_46c = 0x80;
      }
      uVar9 = param_4 >> 2;
      if (9 < uVar9) {
        uVar9 = 10;
      }
      local_454 = param_4 + uVar9 * -2;
      uVar25 = 0;
      uVar26 = 0x80;
      iVar10 = DAT_00047fb0 + 0x47808;
      local_460 = 0;
      uVar19 = 1;
      local_474 = local_428;
      do {
        uVar8 = *(ushort *)(iVar15 + local_460 * 2);
        if ((ushort)(uVar8 - 9) < 2) {
          uVar8 = 0x20;
          uVar26 = local_460;
        }
        else if (uVar8 == 0x20) {
          uVar26 = local_460;
        }
        uVar21 = local_460 + 1;
        puVar20 = (undefined4 *)(iVar10 + local_460 * 0x24);
        puVar5 = (undefined4 *)GEFont::GetCharacter(param_1,uVar8);
        uVar16 = puVar5[1];
        uVar29 = puVar5[3];
        uVar6 = puVar5[2];
        *puVar20 = *puVar5;
        puVar20[1] = uVar16;
        uVar17 = uVar19 - 1;
        puVar20[2] = uVar6;
        puVar20[3] = uVar29;
        sVar1 = *(short *)(puVar5 + 6);
        uVar2 = *(undefined2 *)(puVar5 + 8);
        uVar18 = (uint)sVar1;
        puVar20[7] = puVar5[7];
        uVar25 = uVar25 + uVar18;
        uVar6 = puVar5[4];
        uVar16 = puVar5[5];
        *(short *)(puVar20 + 6) = sVar1;
        puVar20[4] = uVar6;
        puVar20[5] = uVar16;
        local_228[uVar17] = uVar25;
        *(undefined2 *)(puVar20 + 8) = uVar2;
        *local_474 = uVar17;
        uVar11 = uVar19;
        if (local_454 < uVar25) {
          if (uVar4 <= uVar19) {
            if (uVar26 < local_460) {
              iVar14 = 0;
              while (uVar26 = uVar26 + 1, uVar26 <= local_460) {
                uVar21 = uVar21 - 1;
                iVar14 = iVar14 + *(short *)(DAT_00047fbc + uVar26 * 0x24 + 0x47f18);
              }
              local_228[uVar17] = uVar25 - iVar14;
              local_460 = uVar21;
            }
            else {
              local_228[uVar17] = uVar25 - uVar18;
            }
            if (local_460 == 0) {
              return;
            }
LAB_00047ad8:
            local_47c = &local_42c;
            iVar10 = 0;
            iVar14 = 0x7fffffff;
            iVar15 = -0x80000000;
            uVar4 = 0;
            puVar27 = local_47c;
            do {
              puVar27 = puVar27 + 1;
              uVar26 = uVar4 + 1;
              iVar30 = DAT_00047fb4 + 0x47af4 + uVar4 * 0x24;
              iVar12 = iVar31 * *puVar27 + (int)*(short *)(iVar30 + 0x12);
              iVar7 = iVar12;
              if (iVar10 <= iVar12) {
                iVar7 = iVar10;
              }
              iVar30 = iVar12 + *(short *)(iVar30 + 0x16);
              if (*puVar27 != 0) {
                iVar7 = iVar10;
              }
              iVar10 = iVar7;
              if (iVar12 <= iVar14) {
                iVar14 = iVar12;
              }
              if (iVar15 < iVar30) {
                iVar15 = iVar30;
              }
              uVar4 = uVar26;
            } while (uVar26 != local_460);
            uVar4 = GERendererAPI::GL_GetTextureBitPerPixel(*(undefined4 *)param_3);
            if (param_5 == 0 && param_4 == 0) {
              local_454 = 0;
            }
            uVar4 = uVar4 >> 3;
            if (param_5 != 0 || param_4 != 0) {
              local_454 = 0;
              uVar26 = param_4;
              uVar19 = param_5;
              do {
                if (uVar26 == 0) {
                  uVar26 = 1;
                }
                if (uVar19 == 0) {
                  uVar19 = 1;
                }
                iVar7 = uVar26 * uVar19;
                uVar26 = uVar26 >> 1;
                uVar19 = uVar19 >> 1;
                local_454 = uVar4 * iVar7 + local_454;
              } while (uVar19 != 0 || uVar26 != 0);
            }
            __s = operator_new__(param_4 * param_5);
            if (__s == (void *)0x0) {
              return;
            }
            memset(__s,0,param_4 * param_5);
            uVar19 = (param_4 >> 1) - (local_228[0] >> 1);
            uVar25 = 0;
            uVar26 = uVar9;
            if ((int)uVar9 < (int)uVar19) {
              uVar26 = uVar19;
            }
            local_478 = (byte *)((param_5 >> 1) + ((uint)(iVar15 - iVar14) >> 1) + iVar10);
            iVar14 = DAT_00047fb8 + 0x47c1c;
            local_470 = 0;
            do {
              iVar15 = iVar14 + uVar25 * 0x24;
              local_47c = local_47c + 1;
              uVar19 = *local_47c;
              sVar1 = *(short *)(iVar15 + 0x18);
              sVar3 = *(short *)(iVar15 + 0x14);
              if (local_470 < uVar19) {
                local_478 = (byte *)((int)local_478 - iVar31);
                uVar26 = (param_4 >> 1) - (local_228[uVar19] >> 1);
                local_470 = uVar19;
                if ((int)uVar26 < (int)uVar9) {
                  uVar26 = uVar9;
                }
              }
              iVar12 = uVar26 + (int)*(short *)(iVar15 + 0x10);
              iVar10 = (int)local_478 - (int)*(short *)(iVar15 + 0x12);
              iVar7 = sVar3 + iVar12;
              iVar30 = iVar10 - *(short *)(iVar15 + 0x16);
              if (iVar30 < iVar10) {
                puVar22 = local_430 + (*(int *)(iVar15 + 0x1c) - iVar12);
                pvVar13 = (void *)(param_4 * iVar10 + (int)__s);
                do {
                  if ((-1 < iVar10 && iVar10 < (int)param_5) && (iVar15 = iVar12, iVar12 < iVar7)) {
                    do {
                      if (-1 < iVar15 && iVar15 < (int)param_4) {
                        bVar28 = *(byte *)((int)pvVar13 + iVar15);
                        if (*(byte *)((int)pvVar13 + iVar15) <= puVar22[iVar15]) {
                          bVar28 = puVar22[iVar15];
                        }
                        *(byte *)((int)pvVar13 + iVar15) = bVar28;
                      }
                      iVar15 = iVar15 + 1;
                    } while (iVar15 != iVar7);
                  }
                  iVar10 = iVar10 + -1;
                  pvVar13 = (void *)((int)pvVar13 - param_4);
                  puVar22 = puVar22 + sVar3;
                } while (iVar10 != iVar30);
              }
              uVar25 = uVar25 + 1;
              uVar26 = uVar26 + (int)sVar1;
            } while (uVar25 != local_460);
            puVar22 = operator_new__(local_454);
            *param_7 = puVar22;
            if (param_6 == (uchar *)0x0) {
              memset(puVar22,0,local_454);
            }
            else {
              memcpy(puVar22,param_6,local_454);
            }
            iVar14 = *(int *)param_3;
            if (param_5 != 0) {
              local_470 = 0;
              local_460 = 0;
              local_47c = __s;
              do {
                if (param_4 != 0) {
                  if (iVar14 == 9 || iVar14 == 0) {
                    uVar23 = 0;
                    puVar22 = *param_7 + local_470;
                    do {
                      bVar28 = *(byte *)((int)local_47c + uVar23);
                      uVar23 = uVar23 + 1;
                      GetPixel(param_3,puVar22,&local_434,&local_433,&local_432,&local_431);
                      if (local_431 <= bVar28) {
                        local_431 = bVar28;
                      }
                      SetPixel(param_3,puVar22,local_434,local_433,local_432,local_431);
                      puVar22 = puVar22 + uVar4;
                    } while (uVar23 != param_4);
                  }
                  else {
                    uVar23 = 0;
                    puVar22 = *param_7 + local_470;
                    do {
                      local_478 = &local_433;
                      bVar28 = *(byte *)((int)local_47c + uVar23);
                      uVar9 = (uint)bVar28;
                      uVar23 = uVar23 + 1;
                      GetPixel(param_3,puVar22,&local_434,local_478,&local_432,&local_431);
                      bVar28 = ~bVar28;
                      local_434 = bVar28 + (char)((local_434 * uVar9) / 0xff);
                      local_433 = bVar28 + (char)((local_433 * uVar9) / 0xff);
                      local_432 = bVar28 + (char)((local_432 * uVar9) / 0xff);
                      SetPixel(param_3,puVar22,local_434,local_433,local_432,local_431);
                      puVar22 = puVar22 + uVar4;
                    } while (uVar23 != param_4);
                  }
                }
                local_460 = local_460 + 1;
                local_470 = local_470 + param_4 * uVar4;
                local_47c = (uint *)((int)local_47c + param_4);
              } while (local_460 != param_5);
            }
            operator_delete__(__s);
            GenerateMipChain(param_3,param_4,param_5,local_454,*param_7,0);
            return;
          }
          if (uVar26 < local_460) {
            if (local_460 < uVar26 + 1) {
              uVar18 = 0;
            }
            else {
              puVar27 = local_428 + uVar26;
              uVar18 = 0;
              uVar26 = uVar26 + 1;
              do {
                uVar11 = uVar26 + 1;
                puVar27 = puVar27 + 1;
                *puVar27 = uVar19;
                uVar18 = uVar18 + (int)*(short *)(iVar14 + uVar26 * 0x24 + 0x4780c);
                uVar26 = uVar11;
              } while (uVar11 <= local_460);
            }
          }
          else {
            *local_474 = uVar19;
          }
          uVar11 = uVar19 + 1;
          local_228[uVar17] = uVar25 - uVar18;
          local_228[uVar19] = uVar18;
          uVar25 = uVar18;
          uVar26 = local_46c;
        }
        local_460 = uVar21;
        if (local_46c <= uVar21) goto LAB_00047ad8;
        iVar15 = *(int *)(param_2 + 0x28);
        uVar19 = uVar11;
        local_474 = local_474 + 1;
        if ((uint)(*(int *)(param_2 + 0x24) - iVar15 >> 1) <= uVar21) {
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_out_of_range((char *)((int)&DAT_00047fa8 + DAT_00047fc4));
        }
      } while( true );
    }
  }
  return;
}

