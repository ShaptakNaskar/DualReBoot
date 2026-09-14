/* 0004c1cc | STG::LLogicSceneWrapper::GetChildModels_Recurse */

/* STG::LLogicSceneWrapper::GetChildModels_Recurse(STG::UArrayFixed<unsigned long, unsigned long>&,
   STG::UArrayFixed<unsigned long, unsigned long> const&) const */

void __thiscall
STG::LLogicSceneWrapper::GetChildModels_Recurse
          (LLogicSceneWrapper *this,UArrayFixed *param_1,UArrayFixed *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  uint uVar4;
  int extraout_r3;
  uint uVar5;
  int iVar6;
  ulong *local_1c;
  
  if (*(int *)(param_2 + 4) == 0) {
    uVar4 = 0;
    iVar6 = 0;
  }
  else {
    uVar5 = 0;
    iVar6 = 0;
    do {
      iVar1 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      iVar1 = GetChildModelCount_Recurse(this,*(ulong *)(*(int *)param_2 + iVar1));
      uVar4 = *(uint *)(param_2 + 4);
      iVar6 = iVar6 + iVar1;
    } while (uVar5 < uVar4);
  }
  if (*(int *)(param_1 + 4) == iVar6) {
    if (iVar6 == 0) {
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
    *(int *)(param_1 + 4) = iVar6;
    if (iVar6 == 0) {
      return;
    }
    puVar2 = operator_new__(iVar6 << 2);
    iVar1 = *(int *)(param_1 + 4);
    uVar3 = extraout_r2;
    iVar6 = extraout_r3;
    if (iVar1 != 0) {
      iVar6 = 0;
      uVar3 = 0xffffffff;
    }
    *(undefined4 **)param_1 = puVar2;
    if (iVar1 != 0) {
      do {
        iVar6 = iVar6 + 1;
        *puVar2 = uVar3;
        puVar2 = puVar2 + 1;
      } while (iVar1 != iVar6);
    }
    uVar4 = *(uint *)(param_2 + 4);
  }
  local_1c = *(ulong **)param_1;
  if (uVar4 != 0) {
    uVar4 = 0;
    do {
      iVar6 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      GetChildModels_Recurse_Internal(this,&local_1c,*(ulong *)(*(int *)param_2 + iVar6));
    } while (uVar4 < *(uint *)(param_2 + 4));
  }
  return;
}

