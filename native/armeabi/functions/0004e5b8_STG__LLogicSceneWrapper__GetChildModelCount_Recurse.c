/* 0004e5b8 | STG::LLogicSceneWrapper::GetChildModelCount_Recurse */

/* STG::LLogicSceneWrapper::GetChildModelCount_Recurse(unsigned long) const */

int __thiscall
STG::LLogicSceneWrapper::GetChildModelCount_Recurse(LLogicSceneWrapper *this,ulong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_20;
  int local_1c;
  
  iVar3 = 0;
  local_20 = (void *)0x0;
  local_1c = 0;
  GetChildModels(this,(UArrayFixed *)&local_20,param_1);
  iVar1 = local_1c;
  iVar4 = local_1c;
  iVar2 = 0;
  if (local_1c != 0) {
    do {
      iVar2 = GetChildModelCount_Recurse(this,*(ulong *)((int)local_20 + iVar3 * 4));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + iVar2;
    } while (iVar3 != iVar1);
    iVar2 = iVar4;
    if ((local_1c != 0) && (local_20 != (void *)0x0)) {
      operator_delete__(local_20);
    }
  }
  return iVar2;
}

