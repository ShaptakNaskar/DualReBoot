/* 0005eac4 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEMaterial&) */

void STG::USerialize::Load(FFileBase *param_1,GEMaterial *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uchar **ppuVar4;
  uchar **ppuVar5;
  undefined4 *puVar6;
  uchar **ppuVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  GEMaterial *pGVar12;
  uchar **ppuVar13;
  int *piVar14;
  uint __n;
  int iVar15;
  uint uVar16;
  uchar **ppuVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  bool bVar20;
  bool bVar21;
  uchar **local_100;
  uchar *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  uint local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  MMatrix aMStack_a8 [64];
  int local_68;
  _String_base<char,std::allocator<char>> a_Stack_64 [16];
  uchar **local_54;
  uchar **local_50;
  int local_4c;
  uchar *local_48 [4];
  uchar **local_38;
  uchar **local_34;
  undefined4 local_30;
  int local_2c;
  
  piVar14 = *(int **)(DAT_0005f1f8 + 0x5eadc);
  local_2c = *piVar14;
  FFileBase::Read(param_1,(uchar *)&local_c0,4);
  uVar1 = local_c0;
  FFileBase::Read(param_1,(uchar *)&local_e0,4);
  FFileBase::Read(param_1,(uchar *)&local_dc,4);
  FFileBase::Read(param_1,(uchar *)&local_d8,4);
  *(undefined4 *)(param_2 + 0x13c) = local_e0;
  *(undefined4 *)(param_2 + 0x140) = local_dc;
  *(undefined4 *)(param_2 + 0x144) = local_d8;
  if (3 < uVar1) {
    Load(param_1,(GEColor *)(param_2 + 0x148));
  }
  FFileBase::Read(param_1,(uchar *)&local_d4,4);
  if (local_d4 != 0) {
    uVar11 = 0;
    iVar15 = *(int *)(DAT_0005f1fc + 0x5eb7c);
    pGVar12 = param_2;
    do {
      FFileBase::Read(param_1,(uchar *)&local_d0,4);
      FFileBase::Read(param_1,(uchar *)&local_cc,4);
      if (uVar1 < 5) {
        local_c8 = 0;
      }
      else {
        FFileBase::Read(param_1,(uchar *)&local_c8,4);
      }
      Load(param_1,(GEColor *)&local_b8);
      UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_4c);
      local_30 = 0xffffffff;
      if (uVar1 < 6) {
        UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_68);
        Load<char,int>(param_1,(UStringBase *)&local_68);
        ppuVar13 = local_50;
        ppuVar5 = local_54;
        if (local_50 != local_54) {
          __n = (int)local_54 - (int)local_50;
          uVar16 = (int)local_38 - (int)local_34;
          if (uVar16 < __n) {
            if (uVar16 == 0) {
              uVar16 = 0;
            }
            else {
              memmove(local_34,local_50,uVar16);
              uVar16 = (int)local_38 - (int)local_34;
              ppuVar13 = (uchar **)((int)ppuVar13 + uVar16);
              if (ppuVar5 == ppuVar13) goto LAB_0005ecc4;
              __n = (int)ppuVar5 - (int)ppuVar13;
            }
            local_100 = local_34;
            if (local_34 == local_48) {
              uVar8 = (int)&local_38 - (int)local_38;
            }
            else {
              uVar8 = (int)local_48[0] - (int)local_38;
            }
            if (__n < uVar8) {
              puVar18 = (undefined1 *)((int)ppuVar13 + 1);
              uVar16 = (int)ppuVar5 - (int)puVar18;
              if (0 < (int)uVar16) {
                puVar6 = (undefined4 *)((int)local_38 + 1);
                bVar21 = (undefined1 *)((int)local_38 + 5) <= puVar18;
                bVar20 = puVar18 == (undefined1 *)((int)local_38 + 5);
                if (!bVar21 || bVar20) {
                  bVar21 = (undefined4 *)((int)ppuVar13 + 5) <= puVar6;
                  bVar20 = puVar6 == (undefined4 *)((int)ppuVar13 + 5);
                }
                uVar8 = uVar16 >> 2;
                if (uVar8 != 0 &&
                    ((3 < uVar16 && (((uint)puVar6 | (uint)puVar18) & 3) == 0) &&
                    (bVar21 && !bVar20))) {
                  puVar19 = (undefined4 *)((int)ppuVar13 + -3);
                  uVar9 = 0;
                  puVar3 = puVar6;
                  do {
                    puVar19 = puVar19 + 1;
                    uVar9 = uVar9 + 1;
                    *puVar3 = *puVar19;
                    puVar3 = puVar3 + 1;
                  } while (uVar9 < uVar8);
                  puVar6 = puVar6 + uVar8;
                  puVar18 = puVar18 + uVar8 * 4;
                  bVar20 = uVar16 == uVar8 * 4;
                  uVar16 = uVar16 + uVar8 * -4;
                  if (bVar20) goto LAB_0005eecc;
                }
                do {
                  uVar16 = uVar16 - 1;
                  *(undefined1 *)puVar6 = *puVar18;
                  puVar6 = (undefined4 *)((int)puVar6 + 1);
                  puVar18 = puVar18 + 1;
                } while (0 < (int)uVar16);
              }
LAB_0005eecc:
              *(undefined1 *)((int)local_38 + __n) = 0;
              *(undefined1 *)local_38 = *(undefined1 *)ppuVar13;
              uVar16 = (int)((int)local_38 + __n) - (int)local_34;
              local_38 = (uchar **)((int)local_38 + __n);
            }
            else {
              uVar8 = std::string::_M_compute_next_size((string *)local_48,__n);
              if (uVar8 == 0) {
                ppuVar5 = (uchar **)0x0;
                local_e8 = (uchar *)0x0;
              }
              else {
                local_bc = uVar8;
                if (uVar8 < 0x81) {
                  ppuVar5 = (uchar **)std::__node_alloc::_M_allocate(&local_bc);
                }
                else {
                  ppuVar5 = operator_new(uVar8);
                }
                local_100 = local_34;
                uVar16 = (int)local_38 - (int)local_34;
                local_e8 = (uchar *)((int)ppuVar5 + local_bc);
              }
              ppuVar17 = ppuVar5;
              if (0 < (int)uVar16) {
                bVar21 = ppuVar5 + 1 <= local_100;
                bVar20 = local_100 == ppuVar5 + 1;
                if (!bVar21 || bVar20) {
                  bVar21 = local_100 + 1 <= ppuVar5;
                  bVar20 = ppuVar5 == local_100 + 1;
                }
                uVar8 = uVar16 >> 2;
                uVar9 = uVar16;
                if (uVar8 == 0 ||
                    ((uVar16 < 4 || (((uint)ppuVar5 | (uint)local_100) & 3) != 0) ||
                    (!bVar21 || bVar20))) {
LAB_0005f058:
                  do {
                    uVar9 = uVar9 - 1;
                    *(undefined1 *)ppuVar17 = *(undefined1 *)local_100;
                    local_100 = (uchar **)((int)local_100 + 1);
                    ppuVar17 = (uchar **)((int)ppuVar17 + 1);
                  } while (0 < (int)uVar9);
                }
                else {
                  uVar9 = 0;
                  ppuVar17 = local_100;
                  ppuVar4 = ppuVar5;
                  do {
                    uVar9 = uVar9 + 1;
                    *ppuVar4 = *ppuVar17;
                    ppuVar17 = ppuVar17 + 1;
                    ppuVar4 = ppuVar4 + 1;
                  } while (uVar9 < uVar8);
                  local_100 = local_100 + uVar8;
                  ppuVar17 = ppuVar5 + uVar8;
                  uVar9 = uVar16 + uVar8 * -4;
                  if (uVar16 != uVar8 * 4) goto LAB_0005f058;
                }
                ppuVar17 = (uchar **)((int)ppuVar5 + uVar16);
              }
              if (0 < (int)__n) {
                bVar21 = ppuVar17 + 1 <= ppuVar13;
                bVar20 = ppuVar13 == ppuVar17 + 1;
                if (!bVar21 || bVar20) {
                  bVar21 = ppuVar13 + 1 <= ppuVar17;
                  bVar20 = ppuVar17 == ppuVar13 + 1;
                }
                uVar16 = __n >> 2;
                ppuVar4 = ppuVar17;
                uVar8 = __n;
                if (uVar16 == 0 ||
                    ((__n < 4 || (((uint)ppuVar17 | (uint)ppuVar13) & 3) != 0) ||
                    (!bVar21 || bVar20))) {
LAB_0005f108:
                  do {
                    uVar8 = uVar8 - 1;
                    *(undefined1 *)ppuVar4 = *(undefined1 *)ppuVar13;
                    ppuVar4 = (uchar **)((int)ppuVar4 + 1);
                    ppuVar13 = (uchar **)((int)ppuVar13 + 1);
                  } while (0 < (int)uVar8);
                }
                else {
                  uVar8 = 0;
                  ppuVar4 = ppuVar13;
                  ppuVar7 = ppuVar17;
                  do {
                    uVar8 = uVar8 + 1;
                    *ppuVar7 = *ppuVar4;
                    ppuVar4 = ppuVar4 + 1;
                    ppuVar7 = ppuVar7 + 1;
                  } while (uVar8 < uVar16);
                  ppuVar4 = ppuVar17 + uVar16;
                  ppuVar13 = ppuVar13 + uVar16;
                  uVar8 = __n + uVar16 * -4;
                  if (uVar16 * 4 != __n) goto LAB_0005f108;
                }
                ppuVar17 = (uchar **)((int)ppuVar17 + __n);
              }
              *(undefined1 *)ppuVar17 = 0;
              std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
                        ((_String_base<char,std::allocator<char>> *)local_48);
              local_48[0] = local_e8;
              uVar16 = (int)ppuVar17 - (int)ppuVar5;
              local_38 = ppuVar17;
              local_34 = ppuVar5;
            }
          }
          else {
            if (__n != 0) {
              memmove(local_34,local_50,__n);
            }
            ppuVar5 = (uchar **)((int)local_34 + __n);
            if (ppuVar5 == local_38) {
              uVar16 = (int)local_38 - (int)local_34;
            }
            else {
              *(undefined1 *)((int)local_34 + __n) = *(undefined1 *)local_38;
              uVar16 = (int)ppuVar5 - (int)local_34;
              local_38 = ppuVar5;
            }
          }
LAB_0005ecc4:
          local_30 = UStringBaseHash_Internal((uchar *)local_34,uVar16);
        }
        local_68 = iVar15 + 8;
        std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_64);
        if (uVar1 < 2) {
          local_c4 = 0;
          local_c0 = 0;
        }
        else {
          FFileBase::Read(param_1,(uchar *)&local_c4,4);
          FFileBase::Read(param_1,(uchar *)&local_c0,4);
          if (2 < uVar1) goto LAB_0005ec00;
        }
        MMatrix::MakeIdentity(aMStack_a8);
      }
      else {
        Load(param_1,(FFileHash *)&local_4c);
        FFileBase::Read(param_1,(uchar *)&local_c4,4);
        FFileBase::Read(param_1,(uchar *)&local_c0,4);
LAB_0005ec00:
        Load(param_1,aMStack_a8);
      }
      if (uVar11 < 2) {
        *(undefined4 *)(pGVar12 + 0x34) = local_d0;
        *(undefined4 *)(pGVar12 + 0x3c) = local_cc;
        *(undefined4 *)(pGVar12 + 0x44) = local_c8;
        *(undefined4 *)(param_2 + uVar11 * 0x10 + 0x4c) = local_b8;
        *(undefined4 *)(param_2 + uVar11 * 0x10 + 0x50) = local_b4;
        *(undefined4 *)(param_2 + uVar11 * 0x10 + 0x54) = local_b0;
        *(undefined4 *)(param_2 + uVar11 * 0x10 + 0x58) = local_ac;
        UStringBase<char,int>::operator=
                  ((UStringBase<char,int> *)(param_2 + uVar11 * 0x20 + 0x6c),
                   (UStringBase *)&local_4c);
        *(undefined4 *)(param_2 + uVar11 * 0x20 + 0x88) = local_30;
        *(undefined4 *)(pGVar12 + 0xac) = local_c4;
        *(uint *)(pGVar12 + 0xb4) = local_c0;
        MMatrix::operator=((MMatrix *)(param_2 + uVar11 * 0x40 + 0xbc),aMStack_a8);
        piVar2 = *(int **)(pGVar12 + 0x2c);
        if ((piVar2 != (int *)0x0) && (iVar10 = piVar2[1], piVar2[1] = iVar10 + -1, iVar10 == 1)) {
          (**(code **)(*piVar2 + 4))();
        }
        *(undefined4 *)(pGVar12 + 0x2c) = 0;
      }
      local_4c = iVar15 + 8;
      std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
                ((_String_base<char,std::allocator<char>> *)local_48);
      uVar11 = uVar11 + 1;
      pGVar12 = pGVar12 + 4;
    } while (uVar11 < local_d4);
  }
  if (local_2c == *piVar14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

