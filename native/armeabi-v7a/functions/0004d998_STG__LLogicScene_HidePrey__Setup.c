/* 0004d998 | STG::LLogicScene_HidePrey::Setup */

/* STG::LLogicScene_HidePrey::Setup(STG::LLogicSceneWrapper const&) */

undefined4 __thiscall
STG::LLogicScene_HidePrey::Setup(LLogicScene_HidePrey *this,LLogicSceneWrapper *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar6;
  int extraout_r3;
  int extraout_r3_00;
  uint uVar7;
  
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x38] = (LLogicScene_HidePrey)0x0;
  iVar1 = SetupIndices(this,param_1,(UArrayFixed *)(this + 8),(UArrayFixed *)(this + 0x18),
                       (ulong *)(this + 0x28));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = SetupIndices(this,param_1,(UArrayFixed *)(this + 0x10),(UArrayFixed *)(this + 0x20),
                       (ulong *)(this + 0x2c));
  if (iVar1 == 0) {
    return 0;
  }
  uVar7 = *(uint *)(this + 0x2c);
  if (uVar7 != *(uint *)(this + 0x34)) {
    if (*(uint *)(this + 0x34) != 0) {
      if (*(void **)(this + 0x30) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x30));
      }
      *(undefined4 *)(this + 0x30) = 0;
    }
    *(uint *)(this + 0x34) = uVar7;
    if (uVar7 != 0) {
      pvVar3 = operator_new__(uVar7);
      iVar1 = *(int *)(this + 0x34);
      *(void **)(this + 0x30) = pvVar3;
      if (iVar1 != 0) {
        iVar2 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar2) = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 != iVar1);
        uVar7 = *(uint *)(this + 0x2c);
        goto LAB_0004da40;
      }
    }
    uVar7 = *(uint *)(this + 0x2c);
  }
LAB_0004da40:
  if (*(uint *)(this + 0x48) != uVar7) {
    if (*(uint *)(this + 0x48) != 0) {
      if (*(void **)(this + 0x44) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x44));
      }
      *(undefined4 *)(this + 0x44) = 0;
    }
    *(uint *)(this + 0x48) = uVar7;
    if (uVar7 != 0) {
      puVar4 = operator_new__(uVar7 << 2);
      iVar2 = *(int *)(this + 0x48);
      uVar6 = extraout_r2;
      iVar1 = extraout_r3;
      if (iVar2 != 0) {
        iVar1 = 0;
        uVar6 = 0;
      }
      *(undefined4 **)(this + 0x44) = puVar4;
      if (iVar2 != 0) {
        do {
          iVar1 = iVar1 + 1;
          *puVar4 = uVar6;
          puVar4 = puVar4 + 1;
        } while (iVar2 != iVar1);
        uVar7 = *(uint *)(this + 0x2c);
        goto LAB_0004da7c;
      }
    }
    uVar7 = *(uint *)(this + 0x2c);
  }
LAB_0004da7c:
  if (*(uint *)(this + 0x40) != uVar7) {
    if (*(uint *)(this + 0x40) != 0) {
      if (*(void **)(this + 0x3c) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x3c));
      }
      *(undefined4 *)(this + 0x3c) = 0;
    }
    *(uint *)(this + 0x40) = uVar7;
    if (uVar7 != 0) {
      puVar4 = operator_new__(uVar7 << 2);
      iVar2 = *(int *)(this + 0x40);
      uVar6 = extraout_r2_00;
      iVar1 = extraout_r3_00;
      if (iVar2 != 0) {
        iVar1 = 0;
        uVar6 = 0x3f800000;
      }
      *(undefined4 **)(this + 0x3c) = puVar4;
      if (iVar2 != 0) {
        do {
          iVar1 = iVar1 + 1;
          *puVar4 = uVar6;
          puVar4 = puVar4 + 1;
        } while (iVar1 != iVar2);
        uVar7 = *(uint *)(this + 0x2c);
        goto LAB_0004dab8;
      }
    }
    uVar7 = *(uint *)(this + 0x2c);
  }
LAB_0004dab8:
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      iVar1 = uVar7 * 4;
      iVar2 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      iVar2 = LLogicSceneWrapper::GetModel(param_1,*(ulong *)(*(int *)(this + 0x20) + iVar2));
      uVar5 = *(uint *)(this + 0x2c);
      *(undefined4 *)(*(int *)(this + 0x3c) + iVar1) = *(undefined4 *)(iVar2 + 0x98);
    } while (uVar7 < uVar5);
  }
  return 1;
}

