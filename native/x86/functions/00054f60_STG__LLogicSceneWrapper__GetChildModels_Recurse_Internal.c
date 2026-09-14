/* 00054f60 | STG::LLogicSceneWrapper::GetChildModels_Recurse_Internal */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* STG::LLogicSceneWrapper::GetChildModels_Recurse_Internal(unsigned long*&, unsigned long) const */

void __thiscall
STG::LLogicSceneWrapper::GetChildModels_Recurse_Internal
          (LLogicSceneWrapper *this,ulong **param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  void *local_20;
  int local_1c;
  undefined4 uStack_14;
  
  uStack_14 = 0x54f6b;
  FUN_0002e044();
  local_20 = (void *)0x0;
  local_1c = 0;
  GetChildModels(this,(UArrayFixed *)&local_20,param_2);
  iVar3 = local_1c;
  if (local_1c != 0) {
    iVar4 = 0;
    do {
      puVar1 = *param_1;
      uVar2 = *(ulong *)((int)local_20 + iVar4 * 4);
      iVar4 = iVar4 + 1;
      *puVar1 = uVar2;
      *param_1 = puVar1 + 1;
      GetChildModels_Recurse_Internal(this,param_1,uVar2);
    } while (iVar4 != iVar3);
    if ((local_1c != 0) && (local_20 != (void *)0x0)) {
      operator_delete__(local_20);
    }
  }
  return;
}

