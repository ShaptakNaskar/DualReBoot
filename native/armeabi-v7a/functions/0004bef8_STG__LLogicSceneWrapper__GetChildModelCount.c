/* 0004bef8 | STG::LLogicSceneWrapper::GetChildModelCount */

/* STG::LLogicSceneWrapper::GetChildModelCount(unsigned long) const */

int __thiscall STG::LLogicSceneWrapper::GetChildModelCount(LLogicSceneWrapper *this,ulong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)this + 0x18c);
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      if (*(ulong *)(*(int *)(*(int *)this + 400) + iVar1) == param_1) {
        iVar2 = iVar2 + 1;
      }
    } while (iVar3 != iVar4);
  }
  return iVar2;
}

