/* 0004bf3c | STG::LLogicSceneWrapper::GetChildModels */

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
  undefined4 extraout_r2;
  undefined4 uVar6;
  uint uVar7;
  int extraout_r3;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar8 = *(int *)this;
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
      iVar9 = *(int *)(param_1 + 4);
      uVar6 = extraout_r2;
      iVar3 = extraout_r3;
      if (iVar9 != 0) {
        iVar3 = 0;
        uVar6 = 0xffffffff;
      }
      *(undefined4 **)param_1 = puVar4;
      if (iVar9 != 0) {
        do {
          iVar3 = iVar3 + 1;
          *puVar4 = uVar6;
          puVar4 = puVar4 + 1;
        } while (iVar3 != iVar9);
        uVar5 = *(uint *)(iVar8 + 0x18c);
        if (uVar5 == 0) {
          return;
        }
        goto LAB_0004bf9c;
      }
    }
  }
  uVar5 = *(uint *)(iVar8 + 0x18c);
  if (uVar5 == 0) {
    return;
  }
LAB_0004bf9c:
  iVar9 = *(int *)(iVar8 + 0x188);
  uVar7 = 0;
  iVar10 = *(int *)(iVar8 + 400);
  iVar3 = 0;
  do {
    iVar1 = uVar7 * 4;
    iVar2 = uVar7 * 4;
    uVar7 = uVar7 + 1;
    if (param_2 == *(ulong *)(iVar10 + iVar1)) {
      *(undefined4 *)(*(int *)param_1 + iVar3 * 4) = *(undefined4 *)(iVar9 + iVar2);
      iVar3 = iVar3 + 1;
      uVar5 = *(uint *)(iVar8 + 0x18c);
    }
  } while (uVar7 < uVar5);
  return;
}

