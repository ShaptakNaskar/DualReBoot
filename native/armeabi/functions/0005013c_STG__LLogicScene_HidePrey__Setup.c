/* 0005013c | STG::LLogicScene_HidePrey::Setup */

/* STG::LLogicScene_HidePrey::Setup(STG::LLogicSceneWrapper const&) */

undefined4 __thiscall
STG::LLogicScene_HidePrey::Setup(LLogicScene_HidePrey *this,LLogicSceneWrapper *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
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
  uVar6 = *(uint *)(this + 0x2c);
  if (uVar6 != *(uint *)(this + 0x34)) {
    if (*(uint *)(this + 0x34) != 0) {
      if (*(void **)(this + 0x30) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x30));
      }
      *(undefined4 *)(this + 0x30) = 0;
    }
    *(uint *)(this + 0x34) = uVar6;
    if (uVar6 != 0) {
      pvVar2 = operator_new__(uVar6);
      iVar1 = *(int *)(this + 0x34);
      *(void **)(this + 0x30) = pvVar2;
      if (iVar1 != 0) {
        iVar5 = 0;
        do {
          *(undefined1 *)((int)pvVar2 + iVar5) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 != iVar1);
        uVar6 = *(uint *)(this + 0x2c);
        goto LAB_000501e4;
      }
    }
    uVar6 = *(uint *)(this + 0x2c);
  }
LAB_000501e4:
  if (*(uint *)(this + 0x48) != uVar6) {
    if (*(uint *)(this + 0x48) != 0) {
      if (*(void **)(this + 0x44) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x44));
      }
      *(undefined4 *)(this + 0x44) = 0;
    }
    *(uint *)(this + 0x48) = uVar6;
    if (uVar6 != 0) {
      puVar3 = operator_new__(uVar6 << 2);
      iVar1 = *(int *)(this + 0x48);
      *(undefined4 **)(this + 0x44) = puVar3;
      if (iVar1 != 0) {
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        } while (iVar1 != iVar5);
        uVar6 = *(uint *)(this + 0x2c);
        goto LAB_00050220;
      }
    }
    uVar6 = *(uint *)(this + 0x2c);
  }
LAB_00050220:
  if (*(uint *)(this + 0x40) != uVar6) {
    if (*(uint *)(this + 0x40) != 0) {
      if (*(void **)(this + 0x3c) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x3c));
      }
      *(undefined4 *)(this + 0x3c) = 0;
    }
    *(uint *)(this + 0x40) = uVar6;
    if (uVar6 != 0) {
      puVar3 = operator_new__(uVar6 << 2);
      iVar1 = *(int *)(this + 0x40);
      *(undefined4 **)(this + 0x3c) = puVar3;
      if (iVar1 != 0) {
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
          *puVar3 = 0x3f800000;
          puVar3 = puVar3 + 1;
        } while (iVar5 != iVar1);
        uVar6 = *(uint *)(this + 0x2c);
        goto LAB_0005025c;
      }
    }
    uVar6 = *(uint *)(this + 0x2c);
  }
LAB_0005025c:
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      iVar1 = LLogicSceneWrapper::GetModel(param_1,*(ulong *)(*(int *)(this + 0x20) + uVar6 * 4));
      uVar4 = *(uint *)(this + 0x2c);
      *(undefined4 *)(*(int *)(this + 0x3c) + uVar6 * 4) = *(undefined4 *)(iVar1 + 0x98);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  return 1;
}

