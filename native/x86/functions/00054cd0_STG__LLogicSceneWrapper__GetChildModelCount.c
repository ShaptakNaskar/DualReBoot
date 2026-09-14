/* 00054cd0 | STG::LLogicSceneWrapper::GetChildModelCount */

/* STG::LLogicSceneWrapper::GetChildModelCount(unsigned long) const */

int __thiscall STG::LLogicSceneWrapper::GetChildModelCount(LLogicSceneWrapper *this,ulong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar2 = *(int *)(*(int *)this + 0x18c);
  if (iVar2 != 0) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      if (*(ulong *)(*(int *)(*(int *)this + 400) + iVar1) == param_1) {
        iVar3 = iVar3 + 1;
      }
    } while (iVar4 != iVar2);
  }
  return iVar3;
}

