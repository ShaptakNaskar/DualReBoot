/* 0004e6b4 | STG::LLogicSceneWrapper::GetChildModels_Recurse */

/* STG::LLogicSceneWrapper::GetChildModels_Recurse(STG::UArrayFixed<unsigned long, unsigned long>&,
   unsigned long) const */

void __thiscall
STG::LLogicSceneWrapper::GetChildModels_Recurse
          (LLogicSceneWrapper *this,UArrayFixed *param_1,ulong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  ulong *local_1c [2];
  
  iVar1 = GetChildModelCount_Recurse(this,param_2);
  if (iVar1 == *(int *)(param_1 + 4)) {
    if (iVar1 == 0) {
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
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0) {
      return;
    }
    puVar2 = operator_new__(iVar1 << 2);
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 **)param_1 = puVar2;
    if (iVar1 != 0) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        *puVar2 = 0xffffffff;
        puVar2 = puVar2 + 1;
      } while (iVar3 != iVar1);
    }
  }
  local_1c[0] = *(ulong **)param_1;
  GetChildModels_Recurse_Internal(this,local_1c,param_2);
  return;
}

