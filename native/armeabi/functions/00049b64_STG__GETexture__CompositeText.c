/* 00049b64 | STG::GETexture::CompositeText */

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
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  void *__s;
  ushort uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  void *pvVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  ulong uVar22;
  uchar *puVar23;
  GEFontChar *this;
  GEFontChar *pGVar24;
  int iVar25;
  uint uVar26;
  undefined4 uVar27;
  byte bVar28;
  undefined4 uVar29;
  int iVar30;
  uint *local_470;
  int local_46c;
  uint local_464;
  ulong local_460;
  uint local_444;
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
     ((iVar16 = *(int *)param_3, iVar16 == 10 || iVar16 == 1 || ((iVar16 == 9 || (iVar16 == 0))))))
  {
    local_430 = (uchar *)0x0;
    local_42c = 0;
    GEFont::GetBitmapData(param_1,&local_430,&local_42c);
    iVar16 = DAT_0004a468;
    if ((local_42c != 0) && (local_430 != (uchar *)0x0)) {
      if (((*(uint *)(DAT_0004a468 + 0x49c10) & 1) == 0) &&
         (iVar4 = thunk_FUN_00074338((uint *)(DAT_0004a468 + 0x49c10)), iVar4 != 0)) {
        this = (GEFontChar *)(iVar16 + 0x49c14);
        do {
          pGVar24 = this + 0x24;
          GEFontChar::GEFontChar(this);
          this = pGVar24;
        } while (pGVar24 != (GEFontChar *)(iVar16 + 0x4ae14));
        thunk_FUN_000743a0(DAT_0004a484 + 0x4a450);
      }
      memset(local_428,0,0x200);
      memset(local_228,0,0x200);
      __addsf3(*(undefined4 *)(param_1 + 0x50),0x3f000000);
      iVar4 = __fixunssfsi();
      uVar5 = __udivsi3(param_5,iVar4);
      iVar16 = DAT_0004a46c;
      if (uVar5 == 0) {
        uVar5 = 1;
      }
      iVar17 = *(int *)(param_2 + 0x28);
      local_464 = *(int *)(param_2 + 0x24) - iVar17 >> 1;
      if (local_464 < 0x80) {
        if (local_464 == 0) {
          return;
        }
      }
      else {
        local_464 = 0x80;
      }
      uVar11 = param_4 >> 2;
      if (9 < uVar11) {
        uVar11 = 10;
      }
      iVar12 = DAT_0004a470 + 0x49ccc;
      uVar26 = 0;
      uVar20 = 0x80;
      local_460 = 0;
      uVar19 = 1;
      local_470 = local_428;
      do {
        uVar8 = *(ushort *)(iVar17 + local_460 * 2);
        if ((ushort)(uVar8 - 9) < 2) {
          uVar8 = 0x20;
          uVar20 = local_460;
        }
        else if (uVar8 == 0x20) {
          uVar20 = local_460;
        }
        puVar6 = (undefined4 *)GEFont::GetCharacter(param_1,uVar8);
        uVar9 = puVar6[1];
        uVar29 = puVar6[2];
        uVar27 = puVar6[3];
        iVar17 = iVar12 + local_460 * 0x24;
        *(undefined4 *)(iVar12 + local_460 * 0x24) = *puVar6;
        *(undefined4 *)(iVar17 + 0xc) = uVar27;
        *(undefined4 *)(iVar17 + 4) = uVar9;
        *(undefined4 *)(iVar17 + 8) = uVar29;
        sVar1 = *(short *)(puVar6 + 6);
        uVar9 = puVar6[7];
        *(undefined4 *)(iVar17 + 0x10) = puVar6[4];
        uVar27 = puVar6[5];
        uVar2 = *(undefined2 *)(puVar6 + 8);
        uVar7 = uVar19 - 1;
        *(undefined4 *)(iVar17 + 0x1c) = uVar9;
        *(undefined4 *)(iVar17 + 0x14) = uVar27;
        *(short *)(iVar17 + 0x18) = sVar1;
        uVar18 = (uint)sVar1;
        uVar26 = uVar26 + uVar18;
        *local_470 = uVar7;
        *(undefined2 *)(iVar17 + 0x20) = uVar2;
        local_228[uVar7] = uVar26;
        uVar10 = local_460 + 1;
        uVar13 = uVar19;
        if (param_4 + uVar11 * -2 < uVar26) {
          if (uVar5 <= uVar19) {
            if (uVar20 < local_460) {
              iVar16 = 0;
              while (uVar20 = uVar20 + 1, uVar20 <= local_460) {
                iVar16 = iVar16 + *(short *)(uVar20 * 0x24 + DAT_0004a480 + 0x4a3dc);
                uVar10 = uVar10 - 1;
              }
              local_228[uVar7] = uVar26 - iVar16;
              local_460 = uVar10;
            }
            else {
              local_228[uVar7] = uVar26 - uVar18;
            }
            if (local_460 == 0) {
              return;
            }
LAB_00049e6c:
            local_470 = &local_42c;
            local_46c = 0;
            iVar16 = 0x7fffffff;
            iVar17 = -0x80000000;
            uVar5 = 0;
            puVar21 = local_470;
            do {
              iVar30 = uVar5 * 0x24 + DAT_0004a474 + 0x49e90;
              puVar21 = puVar21 + 1;
              uVar5 = uVar5 + 1;
              iVar14 = iVar4 * *puVar21 + (int)*(short *)(iVar30 + 0x12);
              iVar12 = iVar14;
              if (local_46c <= iVar14) {
                iVar12 = local_46c;
              }
              iVar30 = iVar14 + *(short *)(iVar30 + 0x16);
              if (*puVar21 == 0) {
                local_46c = iVar12;
              }
              if (iVar14 <= iVar16) {
                iVar16 = iVar14;
              }
              if (iVar17 < iVar30) {
                iVar17 = iVar30;
              }
            } while (uVar5 != local_460);
            uVar5 = GERendererAPI::GL_GetTextureBitPerPixel(*(undefined4 *)param_3);
            uVar5 = uVar5 >> 3;
            if (param_5 == 0 && param_4 == 0) {
              local_444 = 0;
            }
            else {
              local_444 = 0;
              uVar20 = param_4;
              uVar19 = param_5;
              do {
                if (uVar20 == 0) {
                  uVar20 = 1;
                }
                if (uVar19 == 0) {
                  uVar19 = 1;
                }
                iVar12 = uVar20 * uVar19;
                uVar20 = uVar20 >> 1;
                uVar19 = uVar19 >> 1;
                local_444 = uVar5 * iVar12 + local_444;
              } while (uVar19 != 0 || uVar20 != 0);
            }
            __s = operator_new__(param_4 * param_5);
            if (__s == (void *)0x0) {
              return;
            }
            memset(__s,0,param_4 * param_5);
            local_46c = (param_5 >> 1) + ((uint)(iVar17 - iVar16) >> 1) + local_46c;
            uVar20 = (param_4 >> 1) - (local_228[0] >> 1);
            uVar19 = 0;
            iVar16 = DAT_0004a478 + 0x49fbc;
            if ((int)uVar20 < (int)uVar11) {
              uVar20 = uVar11;
            }
            local_464 = 0;
            do {
              iVar17 = uVar19 * 0x24 + iVar16;
              local_470 = local_470 + 1;
              uVar26 = *local_470;
              sVar1 = *(short *)(iVar17 + 0x18);
              sVar3 = *(short *)(iVar17 + 0x14);
              if (local_464 < uVar26) {
                local_46c = local_46c - iVar4;
                uVar20 = (param_4 >> 1) - (local_228[uVar26] >> 1);
                local_464 = uVar26;
                if ((int)uVar20 < (int)uVar11) {
                  uVar20 = uVar11;
                }
              }
              iVar12 = local_46c - *(short *)(iVar17 + 0x12);
              iVar25 = iVar12 - *(short *)(iVar17 + 0x16);
              iVar30 = uVar20 + (int)*(short *)(iVar17 + 0x10);
              iVar14 = sVar3 + iVar30;
              if (iVar25 < iVar12) {
                puVar23 = local_430 + (*(int *)(iVar17 + 0x1c) - iVar30);
                pvVar15 = (void *)(param_4 * iVar12 + (int)__s);
                do {
                  if ((-1 < iVar12 && iVar12 < (int)param_5) && (iVar17 = iVar30, iVar30 < iVar14))
                  {
                    do {
                      if (-1 < iVar17 && iVar17 < (int)param_4) {
                        bVar28 = *(byte *)((int)pvVar15 + iVar17);
                        if (*(byte *)((int)pvVar15 + iVar17) <= puVar23[iVar17]) {
                          bVar28 = puVar23[iVar17];
                        }
                        *(byte *)((int)pvVar15 + iVar17) = bVar28;
                      }
                      iVar17 = iVar17 + 1;
                    } while (iVar17 != iVar14);
                  }
                  iVar12 = iVar12 + -1;
                  pvVar15 = (void *)((int)pvVar15 - param_4);
                  puVar23 = puVar23 + sVar3;
                } while (iVar12 != iVar25);
              }
              uVar19 = uVar19 + 1;
              uVar20 = uVar20 + (int)sVar1;
            } while (uVar19 != local_460);
            puVar23 = operator_new__(local_444);
            *param_7 = puVar23;
            if (param_6 == (uchar *)0x0) {
              memset(puVar23,0,local_444);
            }
            else {
              memcpy(puVar23,param_6,local_444);
            }
            uVar11 = DAT_0004a47c;
            iVar16 = *(int *)param_3;
            if (param_5 != 0) {
              local_464 = 0;
              local_460 = 0;
              local_470 = __s;
              do {
                puVar23 = *param_7 + local_464;
                if (param_4 != 0) {
                  if (iVar16 == 9 || iVar16 == 0) {
                    uVar22 = 0;
                    do {
                      bVar28 = *(byte *)((int)local_470 + uVar22);
                      GetPixel(param_3,puVar23,&local_434,&local_433,&local_432,&local_431);
                      if (bVar28 < local_431) {
                        bVar28 = local_431;
                      }
                      local_431 = bVar28;
                      SetPixel(param_3,puVar23,local_434,local_433,local_432,local_431);
                      uVar22 = uVar22 + 1;
                      puVar23 = puVar23 + uVar5;
                    } while (uVar22 != param_4);
                  }
                  else {
                    uVar22 = 0;
                    do {
                      bVar28 = *(byte *)((int)local_470 + uVar22);
                      uVar20 = (uint)bVar28;
                      GetPixel(param_3,puVar23,&local_434,&local_433,&local_432,&local_431);
                      bVar28 = ~bVar28;
                      local_434 = bVar28 + (char)(uint)((ulonglong)(uVar20 * local_434) *
                                                        (ulonglong)uVar11 >> 0x27);
                      local_433 = bVar28 + (char)(uint)((ulonglong)(uVar20 * local_433) *
                                                        (ulonglong)uVar11 >> 0x27);
                      local_432 = bVar28 + (char)(uint)((ulonglong)(uVar20 * local_432) *
                                                        (ulonglong)uVar11 >> 0x27);
                      SetPixel(param_3,puVar23,local_434,local_433,local_432,local_431);
                      uVar22 = uVar22 + 1;
                      puVar23 = puVar23 + uVar5;
                    } while (uVar22 != param_4);
                  }
                }
                local_460 = local_460 + 1;
                local_464 = local_464 + param_4 * uVar5;
                local_470 = (uint *)((int)local_470 + param_4);
              } while (local_460 != param_5);
            }
            operator_delete__(__s);
            GenerateMipChain(param_3,param_4,param_5,local_444,*param_7,0);
            return;
          }
          if (uVar20 < local_460) {
            uVar13 = uVar20 + 1;
            if (local_460 < uVar13) {
              uVar18 = 0;
            }
            else {
              puVar21 = local_428 + uVar20;
              uVar18 = 0;
              do {
                iVar17 = uVar13 * 0x24;
                uVar13 = uVar13 + 1;
                uVar18 = uVar18 + (int)*(short *)(iVar17 + iVar16 + 0x49cdc);
                puVar21 = puVar21 + 1;
                *puVar21 = uVar19;
              } while (uVar13 <= local_460);
            }
          }
          else {
            *local_470 = uVar19;
          }
          local_228[uVar7] = uVar26 - uVar18;
          uVar13 = uVar19 + 1;
          local_228[uVar19] = uVar18;
          uVar20 = local_464;
          uVar26 = uVar18;
        }
        local_460 = uVar10;
        if (local_464 <= uVar10) goto LAB_00049e6c;
        iVar17 = *(int *)(param_2 + 0x28);
        uVar19 = uVar13;
        local_470 = local_470 + 1;
        if ((uint)(*(int *)(param_2 + 0x24) - iVar17 >> 1) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_out_of_range((char *)((int)&DAT_0004a468 + DAT_0004a488));
        }
      } while( true );
    }
  }
  return;
}

