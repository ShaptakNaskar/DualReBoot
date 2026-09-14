/* 00058470 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GETextureSwap&) */

void STG::USerialize::Load(FFileBase *param_1,GETextureSwap *param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uchar **ppuVar4;
  uchar *puVar5;
  uchar *puVar6;
  undefined4 *puVar7;
  uchar **ppuVar8;
  size_t __n;
  undefined4 *puVar9;
  uchar **ppuVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uchar *puVar16;
  int iVar17;
  uchar **ppuVar18;
  int iVar19;
  undefined1 *puVar20;
  bool bVar21;
  bool bVar22;
  uchar **local_c0;
  uchar *local_bc;
  bool local_b6;
  bool local_b5;
  ulong local_b4;
  uint local_b0;
  uchar *local_ac;
  GETimeOfDay aGStack_a8 [8];
  int local_a0;
  _String_base<char,std::allocator<char>> a_Stack_9c [24];
  int local_84;
  _String_base<char,std::allocator<char>> a_Stack_80 [24];
  int local_68;
  _String_base<char,std::allocator<char>> a_Stack_64 [16];
  uchar **local_54;
  void *local_50;
  int local_4c;
  uchar *local_48 [4];
  uchar **local_38;
  uchar **local_34;
  undefined4 local_30;
  int local_2c;
  
  iVar19 = DAT_00058af4 + 0x58488;
  piVar11 = *(int **)(iVar19 + DAT_00058af8);
  local_2c = *piVar11;
  FFileBase::Read(param_1,(uchar *)&local_b0,4);
  uVar1 = local_b0;
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_a0);
  Load<char,int>(param_1,(UStringBase *)&local_a0);
  FFileBase::Read(param_1,(uchar *)&local_b4,4);
  if (uVar1 < 2) {
    local_b6 = false;
  }
  else {
    FFileBase::Read(param_1,&local_b6,1);
    if (3 < uVar1) {
      FFileBase::Read(param_1,&local_b5,1);
      goto LAB_0005850c;
    }
  }
  local_b5 = false;
LAB_0005850c:
  GETextureSwap::Initialize(param_2,(UStringBase *)&local_a0,local_b4,local_b6,local_b5);
  if (local_b4 == 0) {
    iVar17 = *(int *)(iVar19 + DAT_00058afc);
  }
  else {
    uVar14 = 0;
    do {
      UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_84);
      Load<char,int>(param_1,(UStringBase *)&local_84);
      UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_4c);
      local_30 = 0xffffffff;
      if (uVar1 < 3) {
        UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_68);
        Load<char,int>(param_1,(UStringBase *)&local_68);
        pvVar2 = local_50;
        ppuVar4 = local_54;
        uVar15 = (int)local_54 - (int)local_50;
        __n = (int)local_38 - (int)local_34;
        if (__n < uVar15) {
          if (__n == 0) {
            puVar5 = (uchar *)0x0;
          }
          else {
            memmove(local_34,local_50,__n);
            puVar5 = (uchar *)((int)local_38 - (int)local_34);
          }
          ppuVar18 = (uchar **)((int)pvVar2 + (int)puVar5);
          if (ppuVar4 != ppuVar18) {
            puVar16 = (uchar *)((int)ppuVar4 - (int)ppuVar18);
            if (local_34 == local_48) {
              puVar6 = (uchar *)((int)local_34 + (0x10 - (int)local_38));
            }
            else {
              puVar6 = local_48[0] + -(int)local_38;
            }
            if (puVar16 < puVar6) {
              puVar20 = (undefined1 *)((int)ppuVar18 + 1);
              uVar15 = (int)ppuVar4 - (int)puVar20;
              if (0 < (int)uVar15) {
                puVar9 = (undefined4 *)((int)local_38 + 1);
                uVar13 = uVar15 >> 2;
                bVar22 = (undefined1 *)((int)local_38 + 5) <= puVar20;
                bVar21 = puVar20 == (undefined1 *)((int)local_38 + 5);
                if (!bVar22 || bVar21) {
                  bVar22 = (undefined4 *)((int)ppuVar18 + 5) <= puVar9;
                  bVar21 = puVar9 == (undefined4 *)((int)ppuVar18 + 5);
                }
                if (uVar13 != 0 &&
                    ((3 < uVar15 && (((uint)puVar20 | (uint)puVar9) & 3) == 0) &&
                    (bVar22 && !bVar21))) {
                  puVar3 = (undefined4 *)((int)ppuVar18 + -3);
                  uVar12 = 0;
                  puVar7 = puVar9;
                  do {
                    puVar3 = puVar3 + 1;
                    uVar12 = uVar12 + 1;
                    *puVar7 = *puVar3;
                    puVar7 = puVar7 + 1;
                  } while (uVar12 < uVar13);
                  bVar21 = uVar15 == uVar13 * 4;
                  uVar15 = uVar15 + uVar13 * -4;
                  puVar9 = puVar9 + uVar13;
                  puVar20 = puVar20 + uVar13 * 4;
                  if (bVar21) goto LAB_000587bc;
                }
                do {
                  uVar15 = uVar15 - 1;
                  *(undefined1 *)puVar9 = *puVar20;
                  puVar9 = (undefined4 *)((int)puVar9 + 1);
                  puVar20 = puVar20 + 1;
                } while (0 < (int)uVar15);
              }
LAB_000587bc:
              *(uchar *)((int)local_38 + (int)puVar16) = '\0';
              *(undefined1 *)local_38 = *(undefined1 *)ppuVar18;
              puVar5 = (uchar *)(((int)local_38 + (int)puVar16) - (int)local_34);
              local_38 = (uchar **)((int)local_38 + (int)puVar16);
            }
            else {
              if ((uchar *)(-2 - (int)puVar5) < puVar16) {
                    /* WARNING: Subroutine does not return */
                std::__stl_throw_length_error((char *)((int)&DAT_00058af4 + DAT_00058b00));
              }
              puVar6 = puVar16;
              if (puVar16 < puVar5) {
                puVar6 = puVar5;
              }
              puVar6 = puVar5 + 1 + (int)puVar6;
              if ((puVar6 == (uchar *)0xffffffff) || (puVar6 < puVar5)) {
                local_ac = (uchar *)0xfffffffe;
LAB_00058a58:
                local_c0 = operator_new((uint)local_ac);
                puVar5 = (uchar *)((int)local_38 - (int)local_34);
                local_bc = (uchar *)((int)local_c0 + (int)local_ac);
              }
              else if (puVar6 == (uchar *)0x0) {
                local_c0 = (uchar **)0x0;
                local_bc = (uchar *)0x0;
              }
              else {
                local_ac = puVar6;
                if ((uchar *)0x80 < puVar6) goto LAB_00058a58;
                local_c0 = (uchar **)std::__node_alloc::_M_allocate((uint *)&local_ac);
                puVar5 = (uchar *)((int)local_38 - (int)local_34);
                local_bc = (uchar *)((int)local_c0 + (int)local_ac);
              }
              ppuVar4 = local_c0;
              if (0 < (int)puVar5) {
                uVar15 = (uint)puVar5 >> 2;
                bVar22 = local_c0 + 1 <= local_34;
                bVar21 = local_34 == local_c0 + 1;
                if (!bVar22 || bVar21) {
                  bVar22 = local_34 + 1 <= local_c0;
                  bVar21 = local_c0 == local_34 + 1;
                }
                puVar6 = puVar5;
                ppuVar8 = local_34;
                if (uVar15 == 0 ||
                    ((puVar5 < (uchar *)0x4 || (((uint)local_c0 | (uint)local_34) & 3) != 0) ||
                    (!bVar22 || bVar21))) {
LAB_0005895c:
                  do {
                    puVar6 = puVar6 + -1;
                    *(undefined1 *)ppuVar4 = *(undefined1 *)ppuVar8;
                    ppuVar4 = (uchar **)((int)ppuVar4 + 1);
                    ppuVar8 = (uchar **)((int)ppuVar8 + 1);
                  } while (0 < (int)puVar6);
                }
                else {
                  uVar13 = 0;
                  ppuVar4 = local_34;
                  ppuVar8 = local_c0;
                  do {
                    uVar13 = uVar13 + 1;
                    *ppuVar8 = *ppuVar4;
                    ppuVar4 = ppuVar4 + 1;
                    ppuVar8 = ppuVar8 + 1;
                  } while (uVar13 < uVar15);
                  puVar6 = puVar5 + uVar15 * -4;
                  ppuVar4 = local_c0 + uVar15;
                  ppuVar8 = local_34 + uVar15;
                  if (puVar5 != (uchar *)(uVar15 * 4)) goto LAB_0005895c;
                }
                ppuVar4 = (uchar **)((int)local_c0 + (int)puVar5);
              }
              if (0 < (int)puVar16) {
                uVar15 = (uint)puVar16 >> 2;
                bVar22 = ppuVar4 + 1 <= ppuVar18;
                bVar21 = ppuVar18 == ppuVar4 + 1;
                if (!bVar22 || bVar21) {
                  bVar22 = ppuVar18 + 1 <= ppuVar4;
                  bVar21 = ppuVar4 == ppuVar18 + 1;
                }
                ppuVar8 = ppuVar4;
                puVar5 = puVar16;
                if (uVar15 == 0 ||
                    ((puVar16 < (uchar *)0x4 || (((uint)ppuVar4 | (uint)ppuVar18) & 3) != 0) ||
                    (!bVar22 || bVar21))) {
LAB_00058a08:
                  do {
                    puVar5 = puVar5 + -1;
                    *(undefined1 *)ppuVar8 = *(undefined1 *)ppuVar18;
                    ppuVar8 = (uchar **)((int)ppuVar8 + 1);
                    ppuVar18 = (uchar **)((int)ppuVar18 + 1);
                  } while (0 < (int)puVar5);
                }
                else {
                  uVar13 = 0;
                  ppuVar8 = ppuVar18;
                  ppuVar10 = ppuVar4;
                  do {
                    uVar13 = uVar13 + 1;
                    *ppuVar10 = *ppuVar8;
                    ppuVar8 = ppuVar8 + 1;
                    ppuVar10 = ppuVar10 + 1;
                  } while (uVar13 < uVar15);
                  ppuVar8 = ppuVar4 + uVar15;
                  puVar5 = puVar16 + uVar15 * -4;
                  ppuVar18 = ppuVar18 + uVar15;
                  if ((uchar *)(uVar15 * 4) != puVar16) goto LAB_00058a08;
                }
                ppuVar4 = (uchar **)((int)ppuVar4 + (int)puVar16);
              }
              *(undefined1 *)ppuVar4 = 0;
              std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
                        ((_String_base<char,std::allocator<char>> *)local_48);
              local_48[0] = local_bc;
              puVar5 = (uchar *)((int)ppuVar4 - (int)local_c0);
              local_38 = ppuVar4;
              local_34 = local_c0;
            }
          }
        }
        else {
          if (uVar15 != 0) {
            memmove(local_34,local_50,uVar15);
          }
          ppuVar4 = (uchar **)((int)local_34 + uVar15);
          if (ppuVar4 == local_38) {
            puVar5 = (uchar *)((int)local_38 - (int)local_34);
          }
          else {
            *(undefined1 *)((int)local_34 + uVar15) = *(undefined1 *)local_38;
            puVar5 = (uchar *)((int)ppuVar4 - (int)local_34);
            local_38 = ppuVar4;
          }
        }
        local_30 = UStringBaseHash_Internal((uchar *)local_34,(uint)puVar5);
        iVar17 = *(int *)(iVar19 + DAT_00058afc);
        local_68 = iVar17 + 8;
        std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_64);
        GETimeOfDay::GETimeOfDay(aGStack_a8);
        if (uVar1 == 2) {
          Load(param_1,aGStack_a8);
        }
LAB_000586a0:
        local_b0 = 0xffffffff;
      }
      else {
        Load(param_1,(FFileHash *)&local_4c);
        GETimeOfDay::GETimeOfDay(aGStack_a8);
        Load(param_1,aGStack_a8);
        if (uVar1 < 4) {
          iVar17 = *(int *)(iVar19 + DAT_00058afc);
          goto LAB_000586a0;
        }
        FFileBase::Read(param_1,(uchar *)&local_b0,4);
        iVar17 = *(int *)(iVar19 + DAT_00058afc);
      }
      uVar15 = uVar14 + 1;
      GETextureSwap::SetVariant
                (param_2,uVar14,(UStringBase *)&local_84,(FFileHash *)&local_4c,aGStack_a8,local_b0)
      ;
      local_4c = iVar17 + 8;
      std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
                ((_String_base<char,std::allocator<char>> *)local_48);
      local_84 = iVar17 + 8;
      std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_80);
      uVar14 = uVar15;
    } while (uVar15 < local_b4);
  }
  local_a0 = iVar17 + 8;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_9c);
  if (local_2c != *piVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

