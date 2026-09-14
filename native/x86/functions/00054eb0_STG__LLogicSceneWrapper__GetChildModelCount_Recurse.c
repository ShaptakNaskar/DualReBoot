/* 00054eb0 | STG::LLogicSceneWrapper::GetChildModelCount_Recurse */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
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
  undefined4 uStack_14;
  
  iVar4 = 0;
  uStack_14 = 0x54ebd;
  FUN_0002e044();
  local_20 = (void *)0x0;
  local_1c = 0;
  GetChildModels(this,(UArrayFixed *)&local_20,param_1);
  iVar1 = local_1c;
  if (local_1c != 0) {
    iVar3 = 0;
    iVar4 = local_1c;
    do {
      iVar2 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = GetChildModelCount_Recurse(this,*(ulong *)((int)local_20 + iVar2));
      iVar4 = iVar4 + iVar2;
    } while (iVar3 != iVar1);
    if ((local_1c != 0) && (local_20 != (void *)0x0)) {
      operator_delete__(local_20);
    }
  }
  return iVar4;
}

