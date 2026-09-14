/* 0004e4e4 | STG::LLogicSceneWrapper::GetChildModels */

/* STG::LLogicSceneWrapper::GetChildModels(STG::UArrayFixed<unsigned long, unsigned long>&, unsigned
   long) const */

void __thiscall
STG::LLogicSceneWrapper::GetChildModels(LLogicSceneWrapper *this,UArrayFixed *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = *(int *)this;
  iVar3 = GetChildModelCount(this,param_2);
  if (iVar3 != *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 4) != 0) {
      if (*(void **)param_1 != (void *)0x0) {
        operator_delete__(*(void **)param_1);
      }
      *(undefined4 *)param_1 = 0;
    }
    *(int *)(param_1 + 4) = iVar3;
    if (iVar3 != 0) {
      puVar4 = operator_new__(iVar3 << 2);
      iVar3 = *(int *)(param_1 + 4);
      *(undefined4 **)param_1 = puVar4;
      if (iVar3 != 0) {
        iVar8 = 0;
        do {
          iVar8 = iVar8 + 1;
          *puVar4 = 0xffffffff;
          puVar4 = puVar4 + 1;
        } while (iVar8 != iVar3);
      }
    }
  }
  uVar5 = *(uint *)(iVar7 + 0x18c);
  if (uVar5 != 0) {
    iVar3 = *(int *)(iVar7 + 0x188);
    iVar9 = *(int *)(iVar7 + 400);
    uVar6 = 0;
    iVar8 = 0;
    do {
      iVar1 = uVar6 * 4;
      iVar2 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      if (param_2 == *(ulong *)(iVar9 + iVar1)) {
        *(undefined4 *)(*(int *)param_1 + iVar8 * 4) = *(undefined4 *)(iVar3 + iVar2);
        uVar5 = *(uint *)(iVar7 + 0x18c);
        iVar8 = iVar8 + 1;
      }
    } while (uVar6 < uVar5);
    return;
  }
  return;
}

