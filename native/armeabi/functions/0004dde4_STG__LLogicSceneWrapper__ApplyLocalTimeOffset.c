/* 0004dde4 | STG::LLogicSceneWrapper::ApplyLocalTimeOffset */

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
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar5 = *(int *)this;
  uVar7 = *(uint *)param_2;
  iVar8 = *(int *)(param_2 + 4);
  iVar9 = *(int *)(iVar5 + 0x1a8);
  uVar10 = *(uint *)(iVar5 + 0x1ac);
  uVar6 = *(uint *)(*(int *)(iVar5 + 0x100) + param_1 * 4);
  puVar1 = (uint *)(iVar9 + param_1 * 8);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  piVar2 = (int *)(iVar9 + param_1 * 8);
  *piVar2 = uVar3 + uVar7;
  piVar2[1] = uVar4 + iVar8 + (uint)CARRY4(uVar3,uVar7);
  if (uVar6 < uVar10) {
    iVar5 = uVar6 * 8;
    puVar1 = (uint *)(iVar9 + iVar5);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar6 = *(uint *)param_2;
    iVar8 = *(int *)(param_2 + 4);
    piVar2 = (int *)(iVar9 + iVar5);
    *piVar2 = uVar3 + uVar6;
    piVar2[1] = uVar4 + iVar8 + (uint)CARRY4(uVar3,uVar6);
  }
  return;
}

