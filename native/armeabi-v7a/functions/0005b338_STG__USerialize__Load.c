/* 0005b338 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GETextureModifier&) */

void STG::USerialize::Load(FFileBase *param_1,GETextureModifier *param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uchar *puVar4;
  undefined4 *puVar5;
  uchar **ppuVar6;
  size_t __n;
  undefined4 *puVar7;
  uchar **ppuVar8;
  uint uVar9;
  uint uVar10;
  uchar *puVar11;
  int iVar12;
  uint uVar13;
  uchar *puVar14;
  int iVar15;
  ulong uVar16;
  uchar **ppuVar17;
  uint uVar18;
  uchar **ppuVar19;
  int *piVar20;
  undefined1 *puVar21;
  bool bVar22;
  bool bVar23;
  uchar **local_98;
  uchar *local_94;
  uchar uStack_89;
  ulong local_88;
  uchar auStack_84 [4];
  ulong local_80;
  ulong local_7c;
  uint local_78;
  uchar *local_74;
  GETimeOfDay aGStack_70 [8];
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
  
  piVar20 = *(int **)(DAT_0005bb80 + 0x5b34c);
  local_2c = *piVar20;
  FFileBase::Read(param_1,(uchar *)&local_78,4);
  uVar1 = local_78;
  if (local_78 < 7) {
    FFileBase::Read(param_1,(uchar *)&local_88,4);
    FFileBase::Read(param_1,auStack_84,4);
    if ((uVar1 < 3) || (Load(param_1,(GETextureSwapContainer *)param_2), uVar1 < 5)) {
      GETextureModifier::Initialize(param_2,local_88);
      *(undefined4 *)(param_2 + 0x24) = 0;
    }
    else {
      Load(param_1,(GETextureFontContainer *)(param_2 + 0xc));
      GETextureModifier::Initialize(param_2,local_88);
      *(undefined4 *)(param_2 + 0x24) = 0;
    }
    if (local_88 != 0) {
      uVar18 = 0;
      do {
        UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_68);
        FFileBase::Read(param_1,(uchar *)&local_80,4);
        Load<char,int>(param_1,(UStringBase *)&local_68);
        if (uVar1 < 2) {
LAB_0005b69c:
          local_78 = 0xffffffff;
        }
        else {
          FFileBase::Read(param_1,(uchar *)&local_7c,4);
          FFileBase::ReadSkip(param_1,local_7c);
          if (uVar1 == 2) goto LAB_0005b69c;
          FFileBase::Read(param_1,&uStack_89,1);
          FFileBase::Read(param_1,(uchar *)&local_7c,4);
          FFileBase::Read(param_1,(uchar *)&local_7c,4);
          if (uVar1 == 3) goto LAB_0005b69c;
          GETimeOfDay::GETimeOfDay(aGStack_70);
          FFileBase::Read(param_1,&uStack_89,1);
          Load(param_1,aGStack_70);
          if (uVar1 == 4) goto LAB_0005b69c;
          FFileBase::Read(param_1,&uStack_89,1);
          FFileBase::Read(param_1,(uchar *)&local_7c,4);
          local_78 = 0xffffffff;
          if (uVar1 == 6) {
            FFileBase::Read(param_1,&uStack_89,1);
            FFileBase::Read(param_1,(uchar *)&local_78,4);
          }
        }
        uVar16 = *(ulong *)(param_2 + 0x24);
        *(ulong *)(param_2 + 0x24) = uVar16 + 1;
        UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_4c);
        pvVar2 = local_50;
        ppuVar17 = local_54;
        uVar13 = (int)local_54 - (int)local_50;
        local_30 = 0xffffffff;
        __n = (int)local_38 - (int)local_34;
        if (__n < uVar13) {
          if (__n == 0) {
            puVar11 = (uchar *)0x0;
          }
          else {
            memmove(local_34,local_50,__n);
            puVar11 = (uchar *)((int)local_38 - (int)local_34);
          }
          ppuVar19 = (uchar **)((int)pvVar2 + (int)puVar11);
          if (ppuVar17 != ppuVar19) {
            puVar14 = (uchar *)((int)ppuVar17 - (int)ppuVar19);
            if (local_34 == local_48) {
              puVar4 = (uchar *)((int)local_34 + (0x10 - (int)local_38));
            }
            else {
              puVar4 = local_48[0] + -(int)local_38;
            }
            if (puVar14 < puVar4) {
              puVar21 = (undefined1 *)((int)ppuVar19 + 1);
              uVar13 = (int)ppuVar17 - (int)puVar21;
              if (0 < (int)uVar13) {
                puVar7 = (undefined4 *)((int)local_38 + 1);
                uVar10 = uVar13 >> 2;
                bVar23 = (undefined1 *)((int)local_38 + 5) <= puVar21;
                bVar22 = puVar21 == (undefined1 *)((int)local_38 + 5);
                if (!bVar23 || bVar22) {
                  bVar23 = (undefined4 *)((int)ppuVar19 + 5) <= puVar7;
                  bVar22 = puVar7 == (undefined4 *)((int)ppuVar19 + 5);
                }
                if (uVar10 != 0 &&
                    ((3 < uVar13 && (((uint)puVar21 | (uint)puVar7) & 3) == 0) &&
                    (bVar23 && !bVar22))) {
                  puVar3 = (undefined4 *)((int)ppuVar19 + -3);
                  uVar9 = 0;
                  puVar5 = puVar7;
                  do {
                    puVar3 = puVar3 + 1;
                    uVar9 = uVar9 + 1;
                    *puVar5 = *puVar3;
                    puVar5 = puVar5 + 1;
                  } while (uVar9 < uVar10);
                  bVar22 = uVar13 == uVar10 * 4;
                  uVar13 = uVar13 + uVar10 * -4;
                  puVar7 = puVar7 + uVar10;
                  puVar21 = puVar21 + uVar10 * 4;
                  if (bVar22) goto LAB_0005b7e0;
                }
                do {
                  uVar13 = uVar13 - 1;
                  *(undefined1 *)puVar7 = *puVar21;
                  puVar7 = (undefined4 *)((int)puVar7 + 1);
                  puVar21 = puVar21 + 1;
                } while (0 < (int)uVar13);
              }
LAB_0005b7e0:
              *(uchar *)((int)local_38 + (int)puVar14) = '\0';
              *(undefined1 *)local_38 = *(undefined1 *)ppuVar19;
              puVar11 = (uchar *)(((int)local_38 + (int)puVar14) - (int)local_34);
              local_38 = (uchar **)((int)local_38 + (int)puVar14);
            }
            else {
              if ((uchar *)(-2 - (int)puVar11) < puVar14) {
                    /* WARNING: Subroutine does not return */
                std::__stl_throw_length_error((char *)(DAT_0005bb88 + 0x5bb34));
              }
              puVar4 = puVar14;
              if (puVar14 < puVar11) {
                puVar4 = puVar11;
              }
              puVar4 = puVar11 + 1 + (int)puVar4;
              if ((puVar4 == (uchar *)0xffffffff) || (puVar4 < puVar11)) {
                local_74 = (uchar *)0xfffffffe;
LAB_0005ba34:
                local_98 = operator_new((uint)local_74);
                puVar11 = (uchar *)((int)local_38 - (int)local_34);
                local_94 = (uchar *)((int)local_98 + (int)local_74);
              }
              else if (puVar4 == (uchar *)0x0) {
                local_98 = (uchar **)0x0;
                local_94 = (uchar *)0x0;
              }
              else {
                local_74 = puVar4;
                if ((uchar *)0x80 < puVar4) goto LAB_0005ba34;
                local_98 = (uchar **)std::__node_alloc::_M_allocate((uint *)&local_74);
                puVar11 = (uchar *)((int)local_38 - (int)local_34);
                local_94 = (uchar *)((int)local_98 + (int)local_74);
              }
              ppuVar17 = local_98;
              if (0 < (int)puVar11) {
                uVar13 = (uint)puVar11 >> 2;
                bVar23 = local_98 + 1 <= local_34;
                bVar22 = local_34 == local_98 + 1;
                if (!bVar23 || bVar22) {
                  bVar23 = local_34 + 1 <= local_98;
                  bVar22 = local_98 == local_34 + 1;
                }
                puVar4 = puVar11;
                ppuVar6 = local_34;
                if (uVar13 == 0 ||
                    ((puVar11 < (uchar *)0x4 || (((uint)local_98 | (uint)local_34) & 3) != 0) ||
                    (!bVar23 || bVar22))) {
LAB_0005b938:
                  do {
                    puVar4 = puVar4 + -1;
                    *(undefined1 *)ppuVar17 = *(undefined1 *)ppuVar6;
                    ppuVar17 = (uchar **)((int)ppuVar17 + 1);
                    ppuVar6 = (uchar **)((int)ppuVar6 + 1);
                  } while (0 < (int)puVar4);
                }
                else {
                  uVar10 = 0;
                  ppuVar17 = local_34;
                  ppuVar6 = local_98;
                  do {
                    uVar10 = uVar10 + 1;
                    *ppuVar6 = *ppuVar17;
                    ppuVar17 = ppuVar17 + 1;
                    ppuVar6 = ppuVar6 + 1;
                  } while (uVar10 < uVar13);
                  puVar4 = puVar11 + uVar13 * -4;
                  ppuVar17 = local_98 + uVar13;
                  ppuVar6 = local_34 + uVar13;
                  if (puVar11 != (uchar *)(uVar13 * 4)) goto LAB_0005b938;
                }
                ppuVar17 = (uchar **)((int)local_98 + (int)puVar11);
              }
              if (0 < (int)puVar14) {
                bVar23 = ppuVar19 + 1 <= ppuVar17;
                bVar22 = ppuVar17 == ppuVar19 + 1;
                if (!bVar23 || bVar22) {
                  bVar23 = ppuVar17 + 1 <= ppuVar19;
                  bVar22 = ppuVar19 == ppuVar17 + 1;
                }
                uVar13 = (uint)puVar14 >> 2;
                ppuVar6 = ppuVar17;
                puVar11 = puVar14;
                if (uVar13 == 0 ||
                    ((!bVar23 || bVar22) ||
                    (puVar14 < (uchar *)0x4 || (((uint)ppuVar17 | (uint)ppuVar19) & 3) != 0))) {
LAB_0005b9e4:
                  do {
                    puVar11 = puVar11 + -1;
                    *(undefined1 *)ppuVar6 = *(undefined1 *)ppuVar19;
                    ppuVar6 = (uchar **)((int)ppuVar6 + 1);
                    ppuVar19 = (uchar **)((int)ppuVar19 + 1);
                  } while (0 < (int)puVar11);
                }
                else {
                  uVar10 = 0;
                  ppuVar6 = ppuVar19;
                  ppuVar8 = ppuVar17;
                  do {
                    uVar10 = uVar10 + 1;
                    *ppuVar8 = *ppuVar6;
                    ppuVar6 = ppuVar6 + 1;
                    ppuVar8 = ppuVar8 + 1;
                  } while (uVar10 < uVar13);
                  ppuVar6 = ppuVar17 + uVar13;
                  puVar11 = puVar14 + uVar13 * -4;
                  ppuVar19 = ppuVar19 + uVar13;
                  if ((uchar *)(uVar13 * 4) != puVar14) goto LAB_0005b9e4;
                }
                ppuVar17 = (uchar **)((int)ppuVar17 + (int)puVar14);
              }
              *(undefined1 *)ppuVar17 = 0;
              std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
                        ((_String_base<char,std::allocator<char>> *)local_48);
              local_48[0] = local_94;
              puVar11 = (uchar *)((int)ppuVar17 - (int)local_98);
              local_38 = ppuVar17;
              local_34 = local_98;
            }
          }
        }
        else {
          if (uVar13 != 0) {
            memmove(local_34,local_50,uVar13);
          }
          ppuVar17 = (uchar **)((int)local_34 + uVar13);
          if (ppuVar17 == local_38) {
            puVar11 = (uchar *)((int)local_38 - (int)local_34);
          }
          else {
            *(undefined1 *)((int)local_34 + uVar13) = *(undefined1 *)local_38;
            puVar11 = (uchar *)((int)ppuVar17 - (int)local_34);
            local_38 = ppuVar17;
          }
        }
        iVar15 = DAT_0005bb84;
        local_30 = UStringBaseHash_Internal((uchar *)local_34,(uint)puVar11);
        GETextureModifier::InitializeTexture(param_2,uVar16,(FFileHash *)&local_4c,local_78);
        iVar12 = *(int *)(iVar15 + 0x5b594);
        local_4c = iVar12 + 8;
        std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
                  ((_String_base<char,std::allocator<char>> *)local_48);
        iVar15 = *(int *)(param_2 + 0x1c) + uVar16 * 0x68;
        if (((*(char *)(*(int *)(param_2 + 0x1c) + uVar16 * 0x68) == '\0') &&
            (*(char *)(iVar15 + 1) == '\0')) && (*(char *)(iVar15 + 2) == '\0')) {
          *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
        }
        FFileBase::ReadSkip(param_1,local_80);
        local_68 = iVar12 + 8;
        std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_64);
        uVar18 = uVar18 + 1;
      } while (uVar18 < local_88);
    }
  }
  else {
    FFileBase::Read(param_1,(uchar *)&local_78,4);
    GETextureModifier::Initialize(param_2,local_78);
    Load(param_1,(GETextureSwapContainer *)param_2);
    Load(param_1,(GETextureFontContainer *)(param_2 + 0xc));
    if (local_78 != 0) {
      iVar15 = 0;
      uVar18 = 0;
      do {
        while( true ) {
          puVar11 = (uchar *)(*(int *)(param_2 + 0x1c) + iVar15);
          FFileBase::Read(param_1,puVar11,1);
          FFileBase::Read(param_1,puVar11 + 1,1);
          FFileBase::Read(param_1,puVar11 + 2,1);
          FFileBase::Read(param_1,puVar11 + 4,4);
          FFileBase::Read(param_1,puVar11 + 8,4);
          FFileBase::Read(param_1,puVar11 + 0xc,4);
          FFileBase::Read(param_1,puVar11 + 0x10,4);
          Load(param_1,(GETimeOfDay *)(puVar11 + 0x14));
          FFileBase::Read(param_1,puVar11 + 0x1c,1);
          Load(param_1,(FFileHash *)(puVar11 + 0x28));
          Load(param_1,(FFileHash *)(puVar11 + 0x48));
          if (uVar1 == 7) break;
          uVar18 = uVar18 + 1;
          FFileBase::Read(param_1,puVar11 + 0x20,4);
          FFileBase::Read(param_1,puVar11 + 0x24,1);
          iVar15 = iVar15 + 0x68;
          if (local_78 <= uVar18) goto LAB_0005b4bc;
        }
        uVar18 = uVar18 + 1;
        iVar15 = iVar15 + 0x68;
      } while (uVar18 < local_78);
    }
  }
LAB_0005b4bc:
  if (local_2c != *piVar20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

