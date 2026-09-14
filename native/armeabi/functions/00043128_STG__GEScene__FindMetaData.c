/* 00043128 | STG::GEScene::FindMetaData */

/* STG::GEScene::FindMetaData(STG::UStringBase<char, int> const&, unsigned long&) const */

void __thiscall STG::GEScene::FindMetaData(GEScene *this,UStringBase *param_1,ulong *param_2)

{
  byte **ppbVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  ulong uVar8;
  byte **ppbVar9;
  byte **ppbVar10;
  size_t sVar11;
  void *pvVar12;
  byte **ppbVar13;
  void *pvVar14;
  int iVar15;
  int iVar16;
  size_t sVar17;
  ulong uVar18;
  size_t sVar19;
  uint local_68;
  int local_64;
  byte *local_60 [4];
  byte **local_50;
  byte **local_4c;
  int local_48;
  byte *local_44 [4];
  byte **local_34;
  byte **local_30;
  int local_2c;
  
  iVar6 = DAT_00043470 + 0x43140;
  piVar7 = *(int **)(iVar6 + DAT_00043474);
  uVar8 = *(ulong *)(this + 0x78c);
  local_2c = *piVar7;
  if (uVar8 != 0) {
    iVar16 = 0;
    uVar18 = 0;
    iVar15 = *(int *)(iVar6 + DAT_00043478) + 8;
    do {
      pvVar12 = *(void **)(*(int *)(this + 0x788) + iVar16 + 0x18);
      pvVar14 = *(void **)(*(int *)(this + 0x788) + iVar16 + 0x14);
      sVar11 = (int)pvVar14 - (int)pvVar12;
      uVar2 = sVar11 + 1;
      local_50 = local_60;
      local_64 = iVar15;
      local_4c = local_60;
      if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(DAT_00043480 + 0x43420));
      }
      if (0x10 < uVar2) {
        local_68 = uVar2;
        if (uVar2 < 0x81) {
          local_50 = (byte **)std::__node_alloc::_M_allocate(&local_68);
        }
        else {
          local_50 = operator_new(uVar2);
        }
        local_60[0] = (byte *)((int)local_50 + local_68);
      }
      local_4c = local_50;
      if (pvVar12 != pvVar14) {
        pvVar12 = memcpy(local_50,pvVar12,sVar11);
        local_50 = (byte **)((int)pvVar12 + sVar11);
      }
      *(byte *)local_50 = 0;
      pvVar12 = *(void **)(param_1 + 0x18);
      pvVar14 = *(void **)(param_1 + 0x14);
      sVar11 = (int)pvVar14 - (int)pvVar12;
      uVar2 = sVar11 + 1;
      local_34 = local_44;
      local_48 = iVar15;
      local_30 = local_44;
      if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(DAT_00043484 + 0x4342c));
      }
      if (0x10 < uVar2) {
        local_68 = uVar2;
        if (uVar2 < 0x81) {
          local_34 = (byte **)std::__node_alloc::_M_allocate(&local_68);
        }
        else {
          local_34 = operator_new(uVar2);
        }
        local_44[0] = (byte *)((int)local_34 + local_68);
      }
      local_30 = local_34;
      if (pvVar12 != pvVar14) {
        pvVar12 = memcpy(local_34,pvVar12,sVar11);
        local_34 = (byte **)((int)pvVar12 + sVar11);
      }
      ppbVar13 = local_4c;
      *(byte *)local_34 = 0;
      ppbVar1 = local_30;
      if (local_4c != local_50) {
        piVar5 = *(int **)(iVar6 + DAT_0004347c);
        ppbVar9 = local_4c;
        do {
          ppbVar10 = (byte **)((int)ppbVar9 + 1);
          *(byte *)ppbVar9 = (byte)*(undefined2 *)(*piVar5 + (uint)*(byte *)ppbVar9 * 2 + 2);
          ppbVar9 = ppbVar10;
        } while (ppbVar10 != local_50);
      }
      if (local_30 != local_34) {
        piVar5 = *(int **)(iVar6 + DAT_0004347c);
        ppbVar9 = local_30;
        do {
          ppbVar10 = (byte **)((int)ppbVar9 + 1);
          *(byte *)ppbVar9 = (byte)*(undefined2 *)(*piVar5 + (uint)*(byte *)ppbVar9 * 2 + 2);
          ppbVar9 = ppbVar10;
        } while (ppbVar10 != local_34);
      }
      sVar19 = (int)local_34 - (int)local_30;
      sVar17 = (int)local_50 - (int)local_4c;
      sVar11 = sVar19;
      if ((int)sVar17 <= (int)sVar19) {
        sVar11 = sVar17;
      }
      iVar3 = memcmp(local_4c,local_30,sVar11);
      if (iVar3 == 0) {
        if ((int)sVar17 < (int)sVar19) {
          iVar3 = -1;
        }
        else if ((int)sVar19 < (int)sVar17) {
          iVar3 = 1;
        }
        else {
          iVar3 = 0;
        }
      }
      local_48 = iVar15;
      if ((ppbVar1 != local_44) && (ppbVar1 != (byte **)0x0)) {
        if ((uint)((int)local_44[0] - (int)ppbVar1) < 0x81) {
          std::__node_alloc::_M_deallocate(ppbVar1,(int)local_44[0] - (int)ppbVar1);
          ppbVar13 = local_4c;
        }
        else {
          operator_delete(ppbVar1);
          ppbVar13 = local_4c;
        }
      }
      local_64 = iVar15;
      if ((ppbVar13 != local_60) && (ppbVar13 != (byte **)0x0)) {
        if ((uint)((int)local_60[0] - (int)ppbVar13) < 0x81) {
          std::__node_alloc::_M_deallocate(ppbVar13,(int)local_60[0] - (int)ppbVar13);
        }
        else {
          operator_delete(ppbVar13);
        }
      }
      if (iVar3 == 0) {
        uVar4 = 1;
        *param_2 = uVar18;
        goto LAB_000433f8;
      }
      uVar18 = uVar18 + 1;
      iVar16 = iVar16 + 0x38;
    } while (uVar18 != uVar8);
  }
  *param_2 = 0xffffffff;
  uVar4 = 0;
LAB_000433f8:
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

