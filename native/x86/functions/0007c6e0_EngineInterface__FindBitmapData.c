/* 0007c6e0 | EngineInterface::FindBitmapData */

/* EngineInterface::FindBitmapData(STG::UStringBase<char, int> const&) const */

EngineBitmapData * __thiscall
EngineInterface::FindBitmapData(EngineInterface *this,UStringBase *param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  char **ppcVar4;
  char cVar5;
  void *pvVar6;
  char **ppcVar7;
  uint uVar8;
  size_t sVar9;
  size_t sVar10;
  int unaff_EBX;
  size_t sVar11;
  char **ppcVar12;
  EngineBitmapData *local_70;
  uint local_6c;
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
  
  local_14 = 0x7c6eb;
  FUN_0002e044();
  local_14 = **(int **)(
                       "_ZNK3STG18LLogicSceneWrapper22GetChildModels_RecurseERNS_11UArrayFixedImmEERKS2_"
                       + unaff_EBX + 0x4d);
  uVar8 = *(uint *)(this + 0x18);
  if (uVar8 != 0) {
    local_6c = 0;
    do {
      local_70 = *(EngineBitmapData **)(*(int *)(this + 0x10) + local_6c * 4);
      if (local_70 != (EngineBitmapData *)0x0) {
        cVar5 = EngineBitmapData::GetIsValid(local_70);
        if (cVar5 != '\0') {
          local_50 = *(int *)(
                             "_ZNK3STG18LLogicSceneWrapper22ComputeClipSpaceBoundsEmRNS_8MVector2ES2_S2_"
                             + unaff_EBX) + 8;
          pvVar6 = *(void **)(local_70 + 0x14);
          pvVar1 = *(void **)(local_70 + 0x18);
          sVar11 = (int)pvVar6 - (int)pvVar1;
          uVar8 = sVar11 + 1;
          local_3c = local_4c;
          local_38 = local_4c;
          if (uVar8 == 0) {
LAB_0007c9e0:
                    /* WARNING: Subroutine does not return */
            std::__stl_throw_length_error((char *)(unaff_EBX + 0xac21));
          }
          if (0x10 < uVar8) {
            local_60[0] = uVar8;
            if (uVar8 < 0x81) {
              local_38 = (char **)std::__node_alloc::_M_allocate(local_60);
            }
            else {
              local_38 = operator_new(uVar8);
            }
            local_4c[0] = (char *)((int)local_38 + local_60[0]);
          }
          local_3c = local_38;
          if (pvVar6 != pvVar1) {
            pvVar6 = memcpy(local_38,pvVar1,sVar11);
            local_3c = (char **)((int)pvVar6 + sVar11);
          }
          iVar2 = *(int *)(
                          "_ZNK3STG18LLogicSceneWrapper22ComputeClipSpaceBoundsEmRNS_8MVector2ES2_S2_"
                          + unaff_EBX);
          *(char *)local_3c = '\0';
          local_30 = iVar2 + 8;
          pvVar6 = *(void **)(param_1 + 0x14);
          pvVar1 = *(void **)(param_1 + 0x18);
          sVar11 = (int)pvVar6 - (int)pvVar1;
          uVar8 = sVar11 + 1;
          local_1c = local_2c;
          local_18 = local_2c;
          if (uVar8 == 0) goto LAB_0007c9e0;
          if (0x10 < uVar8) {
            local_60[0] = uVar8;
            if (uVar8 < 0x81) {
              local_18 = (char **)std::__node_alloc::_M_allocate(local_60);
            }
            else {
              local_18 = operator_new(uVar8);
            }
            local_2c[0] = (char *)((int)local_18 + local_60[0]);
          }
          local_1c = local_18;
          if (pvVar6 != pvVar1) {
            pvVar6 = memcpy(local_18,pvVar1,sVar11);
            local_1c = (char **)((int)pvVar6 + sVar11);
          }
          ppcVar12 = local_38;
          *(char *)local_1c = '\0';
          ppcVar4 = local_18;
          if (local_38 != local_3c) {
            piVar3 = *(int **)(
                              "_ZNK3STG18LLogicSceneWrapper22ComputeClipSpaceBoundsEmRNS_8MVector2ES2_S2_"
                              + unaff_EBX + 0x18);
            ppcVar7 = local_38;
            do {
              cVar5 = *(char *)ppcVar7;
              if ((uint)(int)cVar5 < 0x100) {
                cVar5 = (char)*(undefined2 *)(*piVar3 + 2 + cVar5 * 2);
              }
              *(char *)ppcVar7 = cVar5;
              ppcVar7 = (char **)((int)ppcVar7 + 1);
            } while (ppcVar7 != local_3c);
          }
          if (local_18 != local_1c) {
            piVar3 = *(int **)(
                              "_ZNK3STG18LLogicSceneWrapper22ComputeClipSpaceBoundsEmRNS_8MVector2ES2_S2_"
                              + unaff_EBX + 0x18);
            ppcVar7 = local_18;
            do {
              cVar5 = *(char *)ppcVar7;
              if ((uint)(int)cVar5 < 0x100) {
                cVar5 = (char)*(undefined2 *)(*piVar3 + 2 + cVar5 * 2);
              }
              *(char *)ppcVar7 = cVar5;
              ppcVar7 = (char **)((int)ppcVar7 + 1);
            } while (ppcVar7 != local_1c);
          }
          sVar9 = (int)local_3c - (int)local_38;
          sVar10 = (int)local_1c - (int)local_18;
          sVar11 = sVar10;
          if ((int)sVar9 < (int)sVar10) {
            sVar11 = sVar9;
          }
          uVar8 = memcmp(local_38,local_18,sVar11);
          if (uVar8 == 0) {
            uVar8 = 0xffffffff;
            if ((int)sVar10 <= (int)sVar9) {
              uVar8 = (uint)((int)sVar10 < (int)sVar9);
            }
          }
          local_30 = *(int *)(
                             "_ZNK3STG18LLogicSceneWrapper22ComputeClipSpaceBoundsEmRNS_8MVector2ES2_S2_"
                             + unaff_EBX) + 8;
          if ((ppcVar4 != local_2c) && (ppcVar4 != (char **)0x0)) {
            if ((uint)((int)local_2c[0] - (int)ppcVar4) < 0x81) {
              std::__node_alloc::_M_deallocate(ppcVar4,(int)local_2c[0] - (int)ppcVar4);
              ppcVar12 = local_38;
            }
            else {
              operator_delete(ppcVar4);
              ppcVar12 = local_38;
            }
          }
          local_50 = *(int *)(
                             "_ZNK3STG18LLogicSceneWrapper22ComputeClipSpaceBoundsEmRNS_8MVector2ES2_S2_"
                             + unaff_EBX) + 8;
          if ((ppcVar12 != local_4c) && (ppcVar12 != (char **)0x0)) {
            if ((uint)((int)local_4c[0] - (int)ppcVar12) < 0x81) {
              std::__node_alloc::_M_deallocate(ppcVar12,(int)local_4c[0] - (int)ppcVar12);
            }
            else {
              operator_delete(ppcVar12);
            }
          }
          if (uVar8 == 0) goto LAB_0007c9be;
        }
        uVar8 = *(uint *)(this + 0x18);
      }
      local_6c = local_6c + 1;
    } while (local_6c < uVar8);
  }
  local_70 = (EngineBitmapData *)0x0;
LAB_0007c9be:
  if (local_14 !=
      **(int **)("_ZNK3STG18LLogicSceneWrapper22GetChildModels_RecurseERNS_11UArrayFixedImmEERKS2_"
                + unaff_EBX + 0x4d)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return local_70;
}

