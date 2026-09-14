/* 00055690 | STG::LLogicSceneWrapper::ComputeModelsAffectedByPreference */

/* STG::LLogicSceneWrapper::ComputeModelsAffectedByPreference(STG::UArrayFixed<unsigned long,
   unsigned long>&, STG::UStringBase<char, int> const&) const */

bool __thiscall
STG::LLogicSceneWrapper::ComputeModelsAffectedByPreference
          (LLogicSceneWrapper *this,UArrayFixed *param_1,UStringBase *param_2)

{
  int iVar1;
  ulong *puVar2;
  UPreference_ModelSwap *this_00;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong local_4c;
  int local_44;
  ulong *local_40 [3];
  ulong local_34;
  void *local_30;
  uint local_2c;
  void *local_20;
  int local_1c;
  undefined4 uStack_14;
  
  uStack_14 = 0x5569b;
  FUN_0002e044();
  iVar3 = *(int *)this;
  this_00 = (UPreference_ModelSwap *)
            UPreference_Scene::FindPreference((UPreference_Scene *)(iVar3 + 0x2c),param_2);
  if (this_00 == (UPreference_ModelSwap *)0x0) {
    return false;
  }
  local_30 = (void *)0x0;
  local_2c = 0;
  iVar3 = UPreference_Scene::GetPreferenceType
                    ((UPreference_Scene *)(iVar3 + 0x2c),(UPreferenceBase *)this_00);
  if (iVar3 == 3) {
    uVar6 = *(uint *)(this_00 + 0x8c);
    if (uVar6 == local_2c) {
      if (uVar6 == 0) goto LAB_00055707;
    }
    else {
      if (local_2c != 0) {
        if (local_30 != (void *)0x0) {
          operator_delete__(local_30);
        }
        local_30 = (void *)0x0;
      }
      local_2c = uVar6;
      if (uVar6 == 0) goto LAB_00055707;
      local_30 = operator_new__(uVar6 * 4);
    }
    uVar7 = 0;
    do {
      *(undefined4 *)((int)local_30 + uVar7 * 4) =
           *(undefined4 *)(*(int *)(this_00 + 0x88) + uVar7 * 4);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  else if (iVar3 == 4) {
    uVar6 = *(uint *)(this_00 + 0x8c);
    if (uVar6 != local_2c) {
      if (local_2c != 0) {
        if (local_30 != (void *)0x0) {
          operator_delete__(local_30);
        }
        local_30 = (void *)0x0;
      }
      local_2c = uVar6;
      if (uVar6 != 0) {
        local_30 = operator_new__(uVar6 << 2);
      }
    }
    uVar5 = (**(code **)(*(int *)this_00 + 0x18))(this_00);
    if (uVar5 != 0) {
      local_4c = 0;
      local_44 = 0;
      do {
        local_40[0] = (ulong *)0x0;
        local_34 = 0;
        UPreference_ModelSwap::GetModelIndices(this_00,local_4c,local_40,&local_34);
        if (local_34 != 0) {
          iVar3 = local_44 << 2;
          uVar6 = 0;
          do {
            local_44 = local_44 + 1;
            puVar2 = local_40[0] + uVar6;
            uVar6 = uVar6 + 1;
            *(ulong *)((int)local_30 + iVar3) = *puVar2;
            iVar3 = iVar3 + 4;
          } while (uVar6 < local_34);
        }
        local_4c = local_4c + 1;
      } while (local_4c != uVar5);
    }
  }
LAB_00055707:
  local_20 = (void *)0x0;
  local_1c = 0;
  GetChildModels_Recurse(this,(UArrayFixed *)&local_20,(UArrayFixed *)&local_30);
  iVar3 = local_1c;
  uVar6 = local_2c;
  iVar9 = local_2c + local_1c;
  if (iVar9 != *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 4) != 0) {
      if (*(void **)param_1 != (void *)0x0) {
        operator_delete__(*(void **)param_1);
      }
      *(undefined4 *)param_1 = 0;
    }
    *(int *)(param_1 + 4) = iVar9;
    if (iVar9 != 0) {
      pvVar4 = operator_new__(iVar9 * 4);
      *(void **)param_1 = pvVar4;
    }
  }
  uVar7 = 0;
  if (uVar6 != 0) {
    iVar9 = 0;
    do {
      uVar7 = uVar7 + 1;
      *(undefined4 *)(*(int *)param_1 + iVar9) = *(undefined4 *)((int)local_30 + iVar9);
      iVar9 = iVar9 + 4;
    } while (uVar7 != uVar6);
  }
  if (iVar3 != 0) {
    iVar8 = uVar7 << 2;
    iVar9 = 0;
    do {
      iVar1 = iVar9 * 4;
      iVar9 = iVar9 + 1;
      *(undefined4 *)(*(int *)param_1 + iVar8) = *(undefined4 *)((int)local_20 + iVar1);
      iVar8 = iVar8 + 4;
    } while (iVar9 != iVar3);
  }
  if (local_1c != 0) {
    if (local_20 != (void *)0x0) {
      operator_delete__(local_20);
    }
    local_20 = (void *)0x0;
    local_1c = 0;
  }
  iVar3 = *(int *)(param_1 + 4);
  if ((local_2c != 0) && (local_30 != (void *)0x0)) {
    operator_delete__(local_30);
  }
  return iVar3 != 0;
}

