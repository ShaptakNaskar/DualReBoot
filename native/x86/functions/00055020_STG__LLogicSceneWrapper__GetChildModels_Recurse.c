/* 00055020 | STG::LLogicSceneWrapper::GetChildModels_Recurse */

/* STG::LLogicSceneWrapper::GetChildModels_Recurse(STG::UArrayFixed<unsigned long, unsigned long>&,
   unsigned long) const */

void __thiscall
STG::LLogicSceneWrapper::GetChildModels_Recurse
          (LLogicSceneWrapper *this,UArrayFixed *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulong *local_14;
  
  local_14 = (ulong *)0x5502b;
  FUN_0002e044();
  iVar2 = GetChildModelCount_Recurse(this,param_2);
  if (iVar2 == *(int *)(param_1 + 4)) {
    if (iVar2 != 0) goto LAB_00055136;
  }
  else {
    if (*(int *)(param_1 + 4) != 0) {
      if (*(void **)param_1 != (void *)0x0) {
        operator_delete__(*(void **)param_1);
      }
      *(undefined4 *)param_1 = 0;
    }
    *(int *)(param_1 + 4) = iVar2;
    if (iVar2 != 0) {
      pvVar3 = operator_new__(iVar2 << 2);
      uVar1 = *(uint *)(param_1 + 4);
      *(void **)param_1 = pvVar3;
      if (uVar1 != 0) {
        uVar4 = -(((uint)pvVar3 & 0xf) >> 2) & 3;
        if (uVar1 < uVar4) {
          uVar4 = uVar1;
        }
        uVar6 = 0;
        if (uVar4 != 0) {
          do {
            *(undefined4 *)((int)pvVar3 + uVar6 * 4) = 0xffffffff;
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar4);
          if (uVar1 == uVar4) goto LAB_00055136;
        }
        uVar7 = uVar1 - uVar4 >> 2;
        if (uVar7 != 0) {
          puVar8 = (undefined4 *)((int)pvVar3 + uVar4 * 4);
          uVar5 = 0;
          do {
            uVar5 = uVar5 + 1;
            *puVar8 = 0xffffffff;
            puVar8[1] = 0xffffffff;
            puVar8[2] = 0xffffffff;
            puVar8[3] = 0xffffffff;
            puVar8 = puVar8 + 4;
          } while (uVar5 < uVar7);
          uVar6 = uVar6 + uVar7 * 4;
          if (uVar1 - uVar4 == uVar7 * 4) goto LAB_00055136;
        }
        do {
          *(undefined4 *)((int)pvVar3 + uVar6 * 4) = 0xffffffff;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
      }
LAB_00055136:
      local_14 = *(ulong **)param_1;
      GetChildModels_Recurse_Internal(this,&local_14,param_2);
      return;
    }
  }
  return;
}

