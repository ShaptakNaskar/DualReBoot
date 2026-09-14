/* 0004b97c | STG::LLogicSceneWrapper::ApplyLocalTimeOffset */

/* STG::LLogicSceneWrapper::ApplyLocalTimeOffset(unsigned long, STG::UTimeValue<unsigned long long,
   1ul> const&) */

void __thiscall
STG::LLogicSceneWrapper::ApplyLocalTimeOffset
          (LLogicSceneWrapper *this,ulong param_1,UTimeValue *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar5 = *(int *)this;
  iVar10 = *(int *)(iVar5 + 0x1a8);
  uVar8 = *(uint *)param_2;
  iVar9 = *(int *)(param_2 + 4);
  puVar1 = (uint *)(iVar10 + param_1 * 8);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar6 = *(uint *)(iVar5 + 0x1ac);
  uVar7 = *(uint *)(*(int *)(iVar5 + 0x100) + param_1 * 4);
  piVar2 = (int *)(iVar10 + param_1 * 8);
  *piVar2 = uVar3 + uVar8;
  piVar2[1] = uVar4 + iVar9 + (uint)CARRY4(uVar3,uVar8);
  if (uVar7 < uVar6) {
    iVar5 = uVar7 * 8;
    uVar3 = *(uint *)param_2;
    iVar9 = *(int *)(param_2 + 4);
    puVar1 = (uint *)(iVar10 + iVar5);
    uVar4 = *puVar1;
    uVar6 = puVar1[1];
    piVar2 = (int *)(iVar10 + iVar5);
    *piVar2 = uVar4 + uVar3;
    piVar2[1] = uVar6 + iVar9 + (uint)CARRY4(uVar4,uVar3);
  }
  return;
}

