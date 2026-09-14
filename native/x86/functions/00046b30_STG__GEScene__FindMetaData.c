/* 00046b30 | STG::GEScene::FindMetaData */

/* STG::GEScene::FindMetaData(STG::UStringBase<char, int> const&, unsigned long&) const */

undefined4 __thiscall STG::GEScene::FindMetaData(GEScene *this,UStringBase *param_1,ulong *param_2)

{
  ulong uVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  char **ppcVar5;
  void *pvVar6;
  char **ppcVar7;
  undefined4 uVar8;
  uint uVar9;
  size_t sVar10;
  char cVar11;
  size_t sVar12;
  int unaff_EBX;
  size_t sVar13;
  char **ppcVar14;
  ulong local_74;
  int local_70;
  uint local_60 [4];
  int local_50;
  char *local_4c [4];
  char **local_3c;
  char **local_38;
  int local_30;
  char *local_2c [4];
  char **local_1c;
  char **local_18;
  int local_14;
  
  local_14 = 0x46b3b;
  FUN_0002e044();
  uVar1 = *(ulong *)(this + 0x778);
  local_14 = **(int **)(unaff_EBX + 0x552fd);
  if (uVar1 != 0) {
    local_70 = 0;
    local_74 = 0;
    do {
      local_50 = *(int *)(unaff_EBX + 0x55301) + 8;
      local_3c = local_4c;
      pvVar6 = *(void **)(local_70 + *(int *)(this + 0x774) + 0x14);
      pvVar2 = *(void **)(local_70 + *(int *)(this + 0x774) + 0x18);
      sVar13 = (int)pvVar6 - (int)pvVar2;
      uVar9 = sVar13 + 1;
      local_38 = local_3c;
      if (uVar9 == 0) {
LAB_00046e60:
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(unaff_EBX + 0x407d1));
      }
      if (0x10 < uVar9) {
        local_60[0] = uVar9;
        if (uVar9 < 0x81) {
          local_38 = (char **)std::__node_alloc::_M_allocate(local_60);
        }
        else {
          local_38 = operator_new(uVar9);
        }
        local_4c[0] = (char *)((int)local_38 + local_60[0]);
      }
      local_3c = local_38;
      if (pvVar6 != pvVar2) {
        pvVar6 = memcpy(local_38,pvVar2,sVar13);
        local_3c = (char **)((int)pvVar6 + sVar13);
      }
      iVar3 = *(int *)(unaff_EBX + 0x55301);
      *(char *)local_3c = '\0';
      pvVar6 = *(void **)(param_1 + 0x14);
      pvVar2 = *(void **)(param_1 + 0x18);
      local_30 = iVar3 + 8;
      sVar13 = (int)pvVar6 - (int)pvVar2;
      uVar9 = sVar13 + 1;
      local_1c = local_2c;
      local_18 = local_2c;
      if (uVar9 == 0) goto LAB_00046e60;
      if (0x10 < uVar9) {
        local_60[0] = uVar9;
        if (uVar9 < 0x81) {
          local_18 = (char **)std::__node_alloc::_M_allocate(local_60);
        }
        else {
          local_18 = operator_new(uVar9);
        }
        local_2c[0] = (char *)((int)local_18 + local_60[0]);
      }
      local_1c = local_18;
      if (pvVar6 != pvVar2) {
        pvVar6 = memcpy(local_18,pvVar2,sVar13);
        local_1c = (char **)((int)pvVar6 + sVar13);
      }
      ppcVar14 = local_38;
      *(char *)local_1c = '\0';
      ppcVar5 = local_18;
      for (ppcVar7 = local_38; ppcVar7 != local_3c; ppcVar7 = (char **)((int)ppcVar7 + 1)) {
        cVar11 = *(char *)ppcVar7;
        if ((uint)(int)cVar11 < 0x100) {
          cVar11 = (char)*(undefined2 *)(**(int **)(unaff_EBX + 0x55319) + 2 + cVar11 * 2);
        }
        *(char *)ppcVar7 = cVar11;
      }
      if (local_18 != local_1c) {
        piVar4 = *(int **)(unaff_EBX + 0x55319);
        ppcVar7 = local_18;
        do {
          cVar11 = *(char *)ppcVar7;
          if ((uint)(int)cVar11 < 0x100) {
            cVar11 = (char)*(undefined2 *)(*piVar4 + 2 + cVar11 * 2);
          }
          *(char *)ppcVar7 = cVar11;
          ppcVar7 = (char **)((int)ppcVar7 + 1);
        } while (ppcVar7 != local_1c);
      }
      sVar12 = (int)local_3c - (int)local_38;
      sVar10 = (int)local_1c - (int)local_18;
      sVar13 = sVar10;
      if ((int)sVar12 < (int)sVar10) {
        sVar13 = sVar12;
      }
      uVar9 = memcmp(local_38,local_18,sVar13);
      if (uVar9 == 0) {
        uVar9 = 0xffffffff;
        if ((int)sVar10 <= (int)sVar12) {
          uVar9 = (uint)((int)sVar10 < (int)sVar12);
        }
      }
      local_30 = *(int *)(unaff_EBX + 0x55301) + 8;
      if ((ppcVar5 != local_2c) && (ppcVar5 != (char **)0x0)) {
        if ((uint)((int)local_2c[0] - (int)ppcVar5) < 0x81) {
          std::__node_alloc::_M_deallocate(ppcVar5,(int)local_2c[0] - (int)ppcVar5);
          ppcVar14 = local_38;
        }
        else {
          operator_delete(ppcVar5);
          ppcVar14 = local_38;
        }
      }
      local_50 = *(int *)(unaff_EBX + 0x55301) + 8;
      if ((ppcVar14 != local_4c) && (ppcVar14 != (char **)0x0)) {
        if ((uint)((int)local_4c[0] - (int)ppcVar14) < 0x81) {
          std::__node_alloc::_M_deallocate(ppcVar14,(int)local_4c[0] - (int)ppcVar14);
        }
        else {
          operator_delete(ppcVar14);
        }
      }
      if (uVar9 == 0) {
        uVar8 = 1;
        *param_2 = local_74;
        goto LAB_00046e3e;
      }
      local_74 = local_74 + 1;
      local_70 = local_70 + 0x38;
    } while (local_74 != uVar1);
  }
  uVar8 = 0;
  *param_2 = 0xffffffff;
LAB_00046e3e:
  if (local_14 != **(int **)(unaff_EBX + 0x552fd)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return uVar8;
}

