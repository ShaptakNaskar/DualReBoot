/* 0004e634 | STG::LLogicSceneWrapper::GetChildModels_Recurse_Internal */

/* STG::LLogicSceneWrapper::GetChildModels_Recurse_Internal(unsigned long*&, unsigned long) const */

void __thiscall
STG::LLogicSceneWrapper::GetChildModels_Recurse_Internal
          (LLogicSceneWrapper *this,ulong **param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  int iVar4;
  void *local_20;
  int local_1c;
  
  iVar4 = 0;
  local_20 = (void *)0x0;
  local_1c = 0;
  GetChildModels(this,(UArrayFixed *)&local_20,param_2);
  iVar1 = local_1c;
  if (local_1c != 0) {
    do {
      puVar3 = *param_1;
      uVar2 = *(ulong *)((int)local_20 + iVar4 * 4);
      iVar4 = iVar4 + 1;
      *puVar3 = uVar2;
      *param_1 = puVar3 + 1;
      GetChildModels_Recurse_Internal(this,param_1,uVar2);
    } while (iVar4 != iVar1);
    if ((local_1c != 0) && (local_20 != (void *)0x0)) {
      operator_delete__(local_20);
    }
  }
  return;
}

