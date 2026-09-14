/* 00054820 | STG::LLogicSceneWrapper::FindModel */

/* STG::LLogicSceneWrapper::FindModel(STG::UStringBase<char, int> const&, unsigned long&) const */

undefined4 __thiscall
STG::LLogicSceneWrapper::FindModel(LLogicSceneWrapper *this,UStringBase *param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  char **ppcVar6;
  void *pvVar7;
  char **ppcVar8;
  undefined4 uVar9;
  uint uVar10;
  size_t sVar11;
  char cVar12;
  size_t sVar13;
  int unaff_EBX;
  size_t sVar14;
  char **ppcVar15;
  ulong local_70;
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
  
  local_14 = 0x5482b;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x4760d);
  iVar1 = *(int *)this;
  uVar2 = *(ulong *)(iVar1 + 0xa4);
  if (uVar2 != 0) {
    local_70 = 0;
    do {
      local_50 = *(int *)(unaff_EBX + 0x47611) + 8;
      iVar3 = *(int *)(*(int *)(iVar1 + 0xb0) + local_70 * 4);
      local_3c = local_4c;
      pvVar7 = *(void **)(iVar3 + 0x4c);
      pvVar4 = *(void **)(iVar3 + 0x50);
      sVar14 = (int)pvVar7 - (int)pvVar4;
      uVar10 = sVar14 + 1;
      local_38 = local_3c;
      if (uVar10 == 0) {
LAB_00054b40:
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(unaff_EBX + 0x32ae1));
      }
      if (0x10 < uVar10) {
        local_60[0] = uVar10;
        if (uVar10 < 0x81) {
          local_38 = (char **)std::__node_alloc::_M_allocate(local_60);
        }
        else {
          local_38 = operator_new(uVar10);
        }
        local_4c[0] = (char *)((int)local_38 + local_60[0]);
      }
      local_3c = local_38;
      if (pvVar7 != pvVar4) {
        pvVar7 = memcpy(local_38,pvVar4,sVar14);
        local_3c = (char **)((int)pvVar7 + sVar14);
      }
      iVar3 = *(int *)(unaff_EBX + 0x47611);
      *(char *)local_3c = '\0';
      pvVar7 = *(void **)(param_1 + 0x14);
      pvVar4 = *(void **)(param_1 + 0x18);
      local_30 = iVar3 + 8;
      sVar14 = (int)pvVar7 - (int)pvVar4;
      uVar10 = sVar14 + 1;
      local_1c = local_2c;
      local_18 = local_2c;
      if (uVar10 == 0) goto LAB_00054b40;
      if (0x10 < uVar10) {
        local_60[0] = uVar10;
        if (uVar10 < 0x81) {
          local_18 = (char **)std::__node_alloc::_M_allocate(local_60);
        }
        else {
          local_18 = operator_new(uVar10);
        }
        local_2c[0] = (char *)((int)local_18 + local_60[0]);
      }
      local_1c = local_18;
      if (pvVar7 != pvVar4) {
        pvVar7 = memcpy(local_18,pvVar4,sVar14);
        local_1c = (char **)((int)pvVar7 + sVar14);
      }
      ppcVar15 = local_38;
      *(char *)local_1c = '\0';
      ppcVar6 = local_18;
      for (ppcVar8 = local_38; ppcVar8 != local_3c; ppcVar8 = (char **)((int)ppcVar8 + 1)) {
        cVar12 = *(char *)ppcVar8;
        if ((uint)(int)cVar12 < 0x100) {
          cVar12 = (char)*(undefined2 *)(**(int **)(unaff_EBX + 0x47629) + 2 + cVar12 * 2);
        }
        *(char *)ppcVar8 = cVar12;
      }
      if (local_18 != local_1c) {
        piVar5 = *(int **)(unaff_EBX + 0x47629);
        ppcVar8 = local_18;
        do {
          cVar12 = *(char *)ppcVar8;
          if ((uint)(int)cVar12 < 0x100) {
            cVar12 = (char)*(undefined2 *)(*piVar5 + 2 + cVar12 * 2);
          }
          *(char *)ppcVar8 = cVar12;
          ppcVar8 = (char **)((int)ppcVar8 + 1);
        } while (ppcVar8 != local_1c);
      }
      sVar13 = (int)local_3c - (int)local_38;
      sVar11 = (int)local_1c - (int)local_18;
      sVar14 = sVar11;
      if ((int)sVar13 < (int)sVar11) {
        sVar14 = sVar13;
      }
      uVar10 = memcmp(local_38,local_18,sVar14);
      if (uVar10 == 0) {
        uVar10 = 0xffffffff;
        if ((int)sVar11 <= (int)sVar13) {
          uVar10 = (uint)((int)sVar11 < (int)sVar13);
        }
      }
      local_30 = *(int *)(unaff_EBX + 0x47611) + 8;
      if ((ppcVar6 != local_2c) && (ppcVar6 != (char **)0x0)) {
        if ((uint)((int)local_2c[0] - (int)ppcVar6) < 0x81) {
          std::__node_alloc::_M_deallocate(ppcVar6,(int)local_2c[0] - (int)ppcVar6);
          ppcVar15 = local_38;
        }
        else {
          operator_delete(ppcVar6);
          ppcVar15 = local_38;
        }
      }
      local_50 = *(int *)(unaff_EBX + 0x47611) + 8;
      if ((ppcVar15 != local_4c) && (ppcVar15 != (char **)0x0)) {
        if ((uint)((int)local_4c[0] - (int)ppcVar15) < 0x81) {
          std::__node_alloc::_M_deallocate(ppcVar15,(int)local_4c[0] - (int)ppcVar15);
        }
        else {
          operator_delete(ppcVar15);
        }
      }
      if (uVar10 == 0) {
        uVar9 = 1;
        *param_2 = local_70;
        goto LAB_00054b21;
      }
      local_70 = local_70 + 1;
    } while (local_70 != uVar2);
  }
  uVar9 = 0;
  *param_2 = 0xffffffff;
LAB_00054b21:
  if (local_14 == **(int **)(unaff_EBX + 0x4760d)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

