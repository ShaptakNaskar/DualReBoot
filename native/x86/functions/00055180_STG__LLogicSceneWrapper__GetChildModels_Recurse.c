/* 00055180 | STG::LLogicSceneWrapper::GetChildModels_Recurse */

/* STG::LLogicSceneWrapper::GetChildModels_Recurse(STG::UArrayFixed<unsigned long, unsigned long>&,
   STG::UArrayFixed<unsigned long, unsigned long> const&) const */

void __thiscall
STG::LLogicSceneWrapper::GetChildModels_Recurse
          (LLogicSceneWrapper *this,UArrayFixed *param_1,UArrayFixed *param_2)

{
  int iVar1;
  void *pvVar2;
  int extraout_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  ulong *local_14;
  
  local_14 = (ulong *)0x5518d;
  FUN_0002e044();
  iVar9 = extraout_ECX;
  if (*(int *)(param_2 + 4) != 0) {
    uVar6 = 0;
    do {
      iVar1 = GetChildModelCount_Recurse(this,*(ulong *)(*(int *)param_2 + uVar6 * 4));
      iVar9 = iVar9 + iVar1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_2 + 4));
  }
  if (*(int *)(param_1 + 4) == iVar9) {
    if (iVar9 == 0) {
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 4) != 0) {
      if (*(void **)param_1 != (void *)0x0) {
        operator_delete__(*(void **)param_1);
      }
      *(undefined4 *)param_1 = 0;
    }
    *(int *)(param_1 + 4) = iVar9;
    if (iVar9 == 0) {
      return;
    }
    pvVar2 = operator_new__(iVar9 * 4);
    uVar6 = *(uint *)(param_1 + 4);
    *(void **)param_1 = pvVar2;
    if (uVar6 != 0) {
      uVar3 = -(((uint)pvVar2 & 0xf) >> 2) & 3;
      if (uVar6 < uVar3) {
        uVar3 = uVar6;
      }
      uVar5 = 0;
      if (uVar3 != 0) {
        do {
          *(undefined4 *)((int)pvVar2 + uVar5 * 4) = 0xffffffff;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
        if (uVar6 == uVar3) goto LAB_000552d6;
      }
      uVar7 = uVar6 - uVar3 >> 2;
      if (uVar7 != 0) {
        puVar8 = (undefined4 *)((int)pvVar2 + uVar3 * 4);
        uVar4 = 0;
        do {
          uVar4 = uVar4 + 1;
          *puVar8 = 0xffffffff;
          puVar8[1] = 0xffffffff;
          puVar8[2] = 0xffffffff;
          puVar8[3] = 0xffffffff;
          puVar8 = puVar8 + 4;
        } while (uVar4 < uVar7);
        uVar5 = uVar5 + uVar7 * 4;
        if (uVar6 - uVar3 == uVar7 * 4) goto LAB_000552d6;
      }
      do {
        *(undefined4 *)((int)pvVar2 + uVar5 * 4) = 0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
  }
LAB_000552d6:
  local_14 = *(ulong **)param_1;
  if (*(int *)(param_2 + 4) == 0) {
    return;
  }
  uVar6 = 0;
  do {
    iVar9 = uVar6 * 4;
    uVar6 = uVar6 + 1;
    GetChildModels_Recurse_Internal(this,&local_14,*(ulong *)(*(int *)param_2 + iVar9));
  } while (uVar6 < *(uint *)(param_2 + 4));
  return;
}

