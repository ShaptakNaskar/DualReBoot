/* 0004ec00 | STG::LLogicSceneWrapper::ComputeModelsAffectedByPreference */

/* STG::LLogicSceneWrapper::ComputeModelsAffectedByPreference(STG::UArrayFixed<unsigned long,
   unsigned long>&, STG::UStringBase<char, int> const&) const */

bool __thiscall
STG::LLogicSceneWrapper::ComputeModelsAffectedByPreference
          (LLogicSceneWrapper *this,UArrayFixed *param_1,UStringBase *param_2)

{
  int iVar1;
  UPreferenceBase *this_00;
  void *pvVar2;
  ulong uVar3;
  ulong *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong *local_38;
  ulong local_34;
  void *local_30;
  uint local_2c;
  void *local_28;
  int local_24;
  
  iVar6 = *(int *)this;
  this_00 = (UPreferenceBase *)
            UPreference_Scene::FindPreference((UPreference_Scene *)(iVar6 + 0x2c),param_2);
  if (this_00 == (UPreferenceBase *)0x0) {
    return false;
  }
  local_30 = (void *)0x0;
  local_2c = 0;
  iVar6 = UPreference_Scene::GetPreferenceType((UPreference_Scene *)(iVar6 + 0x2c),this_00);
  if (iVar6 == 3) {
    uVar7 = *(uint *)(this_00 + 0x8c);
    if (uVar7 == local_2c) {
      if (uVar7 == 0) goto LAB_0004ec54;
    }
    else {
      if (local_2c != 0) {
        if (local_30 != (void *)0x0) {
          operator_delete__(local_30);
        }
        local_30 = (void *)0x0;
      }
      local_2c = uVar7;
      if (uVar7 == 0) goto LAB_0004ec54;
      local_30 = operator_new__(uVar7 << 2);
    }
    iVar6 = *(int *)(this_00 + 0x88);
    uVar5 = 0;
    do {
      *(undefined4 *)((int)local_30 + uVar5 * 4) = *(undefined4 *)(iVar6 + uVar5 * 4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  else if (iVar6 == 4) {
    uVar7 = *(uint *)(this_00 + 0x8c);
    if (uVar7 != local_2c) {
      if (local_2c != 0) {
        if (local_30 != (void *)0x0) {
          operator_delete__(local_30);
        }
        local_30 = (void *)0x0;
      }
      local_2c = uVar7;
      if (uVar7 != 0) {
        local_30 = operator_new__(uVar7 << 2);
      }
    }
    uVar3 = (**(code **)(*(int *)this_00 + 0x18))(this_00);
    if (uVar3 != 0) {
      uVar8 = 0;
      iVar6 = 0;
      do {
        local_38 = (ulong *)0x0;
        local_34 = 0;
        UPreference_ModelSwap::GetModelIndices
                  ((UPreference_ModelSwap *)this_00,uVar8,&local_38,&local_34);
        if (local_34 != 0) {
          iVar9 = iVar6 << 2;
          uVar7 = 0;
          puVar4 = local_38;
          do {
            uVar7 = uVar7 + 1;
            iVar6 = iVar6 + 1;
            *(ulong *)((int)local_30 + iVar9) = *puVar4;
            iVar9 = iVar9 + 4;
            puVar4 = puVar4 + 1;
          } while (uVar7 < local_34);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar3);
    }
  }
LAB_0004ec54:
  local_28 = (void *)0x0;
  local_24 = 0;
  GetChildModels_Recurse(this,(UArrayFixed *)&local_28,(UArrayFixed *)&local_30);
  iVar6 = local_24;
  uVar7 = local_2c;
  iVar9 = local_24 + local_2c;
  if (iVar9 != *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 4) != 0) {
      if (*(void **)param_1 != (void *)0x0) {
        operator_delete__(*(void **)param_1);
      }
      *(undefined4 *)param_1 = 0;
    }
    *(int *)(param_1 + 4) = iVar9;
    if (iVar9 != 0) {
      pvVar2 = operator_new__(iVar9 * 4);
      *(void **)param_1 = pvVar2;
    }
  }
  if (uVar7 == 0) {
    uVar5 = 0;
  }
  else {
    iVar10 = *(int *)param_1;
    iVar9 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      *(undefined4 *)(iVar10 + iVar9) = *(undefined4 *)((int)local_30 + iVar9);
      iVar9 = iVar9 + 4;
    } while (uVar5 != uVar7);
  }
  if (iVar6 != 0) {
    iVar11 = *(int *)param_1;
    iVar9 = uVar5 << 2;
    iVar10 = 0;
    do {
      iVar1 = iVar10 * 4;
      iVar10 = iVar10 + 1;
      *(undefined4 *)(iVar11 + iVar9) = *(undefined4 *)((int)local_28 + iVar1);
      iVar9 = iVar9 + 4;
    } while (iVar10 != iVar6);
  }
  if (local_24 != 0) {
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
    local_28 = (void *)0x0;
    local_24 = 0;
  }
  iVar6 = *(int *)(param_1 + 4);
  if ((local_2c != 0) && (local_30 != (void *)0x0)) {
    operator_delete__(local_30);
  }
  return iVar6 != 0;
}

