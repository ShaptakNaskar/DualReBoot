/* 0004e76c | STG::LLogicSceneWrapper::GetChildModels_Recurse */

/* STG::LLogicSceneWrapper::GetChildModels_Recurse(STG::UArrayFixed<unsigned long, unsigned long>&,
   STG::UArrayFixed<unsigned long, unsigned long> const&) const */

void __thiscall
STG::LLogicSceneWrapper::GetChildModels_Recurse
          (LLogicSceneWrapper *this,UArrayFixed *param_1,UArrayFixed *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong *local_1c;
  
  if (*(int *)(param_2 + 4) == 0) {
    uVar3 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = 0;
    iVar5 = 0;
    do {
      iVar1 = GetChildModelCount_Recurse(this,*(ulong *)(*(int *)param_2 + uVar4 * 4));
      uVar3 = *(uint *)(param_2 + 4);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + iVar1;
    } while (uVar4 < uVar3);
  }
  if (*(int *)(param_1 + 4) == iVar5) {
    if (iVar5 == 0) {
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
    *(int *)(param_1 + 4) = iVar5;
    if (iVar5 == 0) {
      return;
    }
    puVar2 = operator_new__(iVar5 << 2);
    iVar5 = *(int *)(param_1 + 4);
    *(undefined4 **)param_1 = puVar2;
    if (iVar5 != 0) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        *puVar2 = 0xffffffff;
        puVar2 = puVar2 + 1;
      } while (iVar5 != iVar1);
    }
    uVar3 = *(uint *)(param_2 + 4);
  }
  local_1c = *(ulong **)param_1;
  if (uVar3 != 0) {
    uVar3 = 0;
    do {
      GetChildModels_Recurse_Internal(this,&local_1c,*(ulong *)(*(int *)param_2 + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 4));
  }
  return;
}

