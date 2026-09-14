/* 000545f0 | STG::LLogicSceneWrapper::ApplyLocalTimeOffset */

/* STG::LLogicSceneWrapper::ApplyLocalTimeOffset(unsigned long, STG::UTimeValue<unsigned long long,
   1ul> const&) */

void __thiscall
STG::LLogicSceneWrapper::ApplyLocalTimeOffset
          (LLogicSceneWrapper *this,ulong param_1,UTimeValue *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar4 = *(int *)this;
  uVar5 = *(uint *)param_2;
  iVar6 = *(int *)(param_2 + 4);
  iVar7 = *(int *)(iVar4 + 0x1a8);
  puVar1 = (uint *)(iVar7 + param_1 * 8);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + uVar5;
  iVar8 = *(int *)(iVar4 + 0x100);
  piVar2 = (int *)(iVar7 + 4 + param_1 * 8);
  *piVar2 = *piVar2 + iVar6 + (uint)CARRY4(uVar3,uVar5);
  uVar3 = *(uint *)(iVar8 + param_1 * 4);
  if (uVar3 < *(uint *)(iVar4 + 0x1ac)) {
    iVar4 = *(int *)(param_2 + 4);
    uVar9 = *(uint *)param_2;
    puVar1 = (uint *)(iVar7 + uVar3 * 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + uVar9;
    piVar2 = (int *)(iVar7 + 4 + uVar3 * 8);
    *piVar2 = *piVar2 + iVar4 + (uint)CARRY4(uVar5,uVar9);
  }
  return;
}

