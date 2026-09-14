/* 00054d10 | STG::LLogicSceneWrapper::GetChildModels */

/* STG::LLogicSceneWrapper::GetChildModels(STG::UArrayFixed<unsigned long, unsigned long>&, unsigned
   long) const */

void __thiscall
STG::LLogicSceneWrapper::GetChildModels(LLogicSceneWrapper *this,UArrayFixed *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint local_18;
  int local_14;
  
  FUN_0002e044();
  iVar1 = *(int *)this;
  iVar2 = GetChildModelCount(this,param_2);
  if (iVar2 != *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 4) != 0) {
      if (*(void **)param_1 != (void *)0x0) {
        operator_delete__(*(void **)param_1);
      }
      *(undefined4 *)param_1 = 0;
    }
    *(int *)(param_1 + 4) = iVar2;
    if (iVar2 != 0) {
      pvVar4 = operator_new__(iVar2 << 2);
      uVar3 = *(uint *)(param_1 + 4);
      *(void **)param_1 = pvVar4;
      if (uVar3 != 0) {
        uVar5 = -(((uint)pvVar4 & 0xf) >> 2) & 3;
        if (uVar3 <= uVar5) {
          uVar5 = uVar3;
        }
        uVar7 = 0;
        if (uVar5 != 0) {
          do {
            *(undefined4 *)((int)pvVar4 + uVar7 * 4) = 0xffffffff;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar5);
          if (uVar3 == uVar5) goto LAB_00054d73;
        }
        uVar8 = uVar3 - uVar5 >> 2;
        if (uVar8 != 0) {
          puVar9 = (undefined4 *)((int)pvVar4 + uVar5 * 4);
          uVar6 = 0;
          do {
            uVar6 = uVar6 + 1;
            *puVar9 = 0xffffffff;
            puVar9[1] = 0xffffffff;
            puVar9[2] = 0xffffffff;
            puVar9[3] = 0xffffffff;
            puVar9 = puVar9 + 4;
          } while (uVar6 < uVar8);
          uVar7 = uVar7 + uVar8 * 4;
          if (uVar3 - uVar5 == uVar8 * 4) goto LAB_00054d73;
        }
        do {
          *(undefined4 *)((int)pvVar4 + uVar7 * 4) = 0xffffffff;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar3);
      }
    }
  }
LAB_00054d73:
  local_18 = *(uint *)(iVar1 + 0x18c);
  if (local_18 != 0) {
    uVar3 = 0;
    local_14 = 0;
    do {
      while (iVar2 = uVar3 * 4, param_2 != *(ulong *)(*(int *)(iVar1 + 400) + uVar3 * 4)) {
        uVar3 = uVar3 + 1;
        if (local_18 <= uVar3) {
          return;
        }
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)(*(int *)param_1 + local_14 * 4) =
           *(undefined4 *)(*(int *)(iVar1 + 0x188) + iVar2);
      local_18 = *(uint *)(iVar1 + 0x18c);
      local_14 = local_14 + 1;
    } while (uVar3 < local_18);
  }
  return;
}

