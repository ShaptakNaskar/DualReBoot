/* 0004dfec | STG::LLogicSceneWrapper::FindModel */

/* STG::LLogicSceneWrapper::FindModel(STG::UStringBase<char, int> const&, unsigned long&) const */

void __thiscall
STG::LLogicSceneWrapper::FindModel(LLogicSceneWrapper *this,UStringBase *param_1,ulong *param_2)

{
  byte **ppbVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  ulong uVar8;
  int iVar9;
  byte **ppbVar10;
  byte **ppbVar11;
  size_t sVar12;
  size_t sVar13;
  void *pvVar14;
  byte **ppbVar15;
  void *pvVar16;
  int iVar17;
  size_t sVar18;
  ulong uVar19;
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
  
  iVar2 = *(int *)this;
  iVar6 = DAT_0004e320 + 0x4e004;
  piVar7 = *(int **)(iVar6 + DAT_0004e324);
  uVar8 = *(ulong *)(iVar2 + 0xa4);
  local_2c = *piVar7;
  if (uVar8 != 0) {
    uVar19 = 0;
    iVar17 = *(int *)(iVar6 + DAT_0004e328) + 8;
    do {
      iVar9 = *(int *)(*(int *)(iVar2 + 0xb0) + uVar19 * 4);
      pvVar14 = *(void **)(iVar9 + 0x50);
      pvVar16 = *(void **)(iVar9 + 0x4c);
      sVar13 = (int)pvVar16 - (int)pvVar14;
      uVar3 = sVar13 + 1;
      local_50 = local_60;
      local_64 = iVar17;
      local_4c = local_60;
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(DAT_0004e330 + 0x4e2d4));
      }
      if (0x10 < uVar3) {
        local_68 = uVar3;
        if (uVar3 < 0x81) {
          local_50 = (byte **)std::__node_alloc::_M_allocate(&local_68);
        }
        else {
          local_50 = operator_new(uVar3);
        }
        local_60[0] = (byte *)((int)local_50 + local_68);
      }
      local_4c = local_50;
      if (pvVar14 != pvVar16) {
        pvVar14 = memcpy(local_50,pvVar14,sVar13);
        local_50 = (byte **)((int)pvVar14 + sVar13);
      }
      *(byte *)local_50 = 0;
      pvVar14 = *(void **)(param_1 + 0x18);
      pvVar16 = *(void **)(param_1 + 0x14);
      sVar13 = (int)pvVar16 - (int)pvVar14;
      uVar3 = sVar13 + 1;
      local_34 = local_44;
      local_48 = iVar17;
      local_30 = local_44;
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(DAT_0004e334 + 0x4e2e0));
      }
      if (0x10 < uVar3) {
        local_68 = uVar3;
        if (uVar3 < 0x81) {
          local_34 = (byte **)std::__node_alloc::_M_allocate(&local_68);
        }
        else {
          local_34 = operator_new(uVar3);
        }
        local_44[0] = (byte *)((int)local_34 + local_68);
      }
      local_30 = local_34;
      if (pvVar14 != pvVar16) {
        pvVar14 = memcpy(local_34,pvVar14,sVar13);
        local_34 = (byte **)((int)pvVar14 + sVar13);
      }
      ppbVar15 = local_4c;
      *(byte *)local_34 = 0;
      ppbVar1 = local_30;
      if (local_4c != local_50) {
        piVar5 = *(int **)(iVar6 + DAT_0004e32c);
        ppbVar10 = local_4c;
        do {
          ppbVar11 = (byte **)((int)ppbVar10 + 1);
          *(byte *)ppbVar10 = (byte)*(undefined2 *)(*piVar5 + (uint)*(byte *)ppbVar10 * 2 + 2);
          ppbVar10 = ppbVar11;
        } while (ppbVar11 != local_50);
      }
      if (local_30 != local_34) {
        piVar5 = *(int **)(iVar6 + DAT_0004e32c);
        ppbVar10 = local_30;
        do {
          ppbVar11 = (byte **)((int)ppbVar10 + 1);
          *(byte *)ppbVar10 = (byte)*(undefined2 *)(*piVar5 + (uint)*(byte *)ppbVar10 * 2 + 2);
          ppbVar10 = ppbVar11;
        } while (ppbVar11 != local_34);
      }
      sVar12 = (int)local_34 - (int)local_30;
      sVar18 = (int)local_50 - (int)local_4c;
      sVar13 = sVar12;
      if ((int)sVar18 <= (int)sVar12) {
        sVar13 = sVar18;
      }
      iVar9 = memcmp(local_4c,local_30,sVar13);
      if (iVar9 == 0) {
        if ((int)sVar18 < (int)sVar12) {
          iVar9 = -1;
        }
        else if ((int)sVar12 < (int)sVar18) {
          iVar9 = 1;
        }
        else {
          iVar9 = 0;
        }
      }
      local_48 = iVar17;
      if ((ppbVar1 != local_44) && (ppbVar1 != (byte **)0x0)) {
        if ((uint)((int)local_44[0] - (int)ppbVar1) < 0x81) {
          std::__node_alloc::_M_deallocate(ppbVar1,(int)local_44[0] - (int)ppbVar1);
          ppbVar15 = local_4c;
        }
        else {
          operator_delete(ppbVar1);
          ppbVar15 = local_4c;
        }
      }
      local_64 = iVar17;
      if ((ppbVar15 != local_60) && (ppbVar15 != (byte **)0x0)) {
        if ((uint)((int)local_60[0] - (int)ppbVar15) < 0x81) {
          std::__node_alloc::_M_deallocate(ppbVar15,(int)local_60[0] - (int)ppbVar15);
        }
        else {
          operator_delete(ppbVar15);
        }
      }
      if (iVar9 == 0) {
        uVar4 = 1;
        *param_2 = uVar19;
        goto LAB_0004e2ac;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar8);
  }
  *param_2 = 0xffffffff;
  uVar4 = 0;
LAB_0004e2ac:
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

