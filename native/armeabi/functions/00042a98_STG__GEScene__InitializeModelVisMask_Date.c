/* 00042a98 | STG::GEScene::InitializeModelVisMask_Date */

/* STG::GEScene::InitializeModelVisMask_Date(unsigned long) */

void __thiscall STG::GEScene::InitializeModelVisMask_Date(GEScene *this,ulong param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(this + 0x14c) != 0) {
    if (*(void **)(this + 0x148) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x148));
    }
    *(undefined4 *)(this + 0x148) = 0;
    *(undefined4 *)(this + 0x14c) = 0;
  }
  if (*(int *)(this + 0x154) != 0) {
    if (*(void **)(this + 0x150) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x150));
    }
    *(undefined4 *)(this + 0x150) = 0;
    *(undefined4 *)(this + 0x154) = 0;
  }
  if (*(uint *)(this + 0xa4) < param_1) {
    return;
  }
  if (param_1 == *(ulong *)(this + 0x14c)) {
    uVar4 = 0;
  }
  else {
    if (*(ulong *)(this + 0x14c) != 0) {
      if (*(void **)(this + 0x148) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x148));
      }
      *(undefined4 *)(this + 0x148) = 0;
    }
    *(ulong *)(this + 0x14c) = param_1;
    if (param_1 != 0) {
      puVar2 = operator_new__(param_1 << 2);
      iVar5 = *(int *)(this + 0x14c);
      *(undefined4 **)(this + 0x148) = puVar2;
      if (iVar5 != 0) {
        iVar6 = 0;
        do {
          iVar6 = iVar6 + 1;
          *puVar2 = 0xffffffff;
          puVar2 = puVar2 + 1;
        } while (iVar5 != iVar6);
        uVar4 = *(ulong *)(this + 0x154);
        goto LAB_00042b14;
      }
    }
    uVar4 = *(ulong *)(this + 0x154);
  }
LAB_00042b14:
  if (param_1 != uVar4) {
    if (uVar4 != 0) {
      if (*(void **)(this + 0x150) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x150));
      }
      *(undefined4 *)(this + 0x150) = 0;
    }
    *(ulong *)(this + 0x154) = param_1;
    if (param_1 != 0) {
      pvVar1 = operator_new__(param_1 * 0x30);
      uVar4 = 0;
      pvVar3 = pvVar1;
      do {
        iVar5 = 0;
        do {
          *(undefined4 *)((int)pvVar3 + iVar5) = 0;
          iVar5 = iVar5 + 4;
        } while (iVar5 != 0x30);
        uVar4 = uVar4 + 1;
        pvVar3 = (void *)((int)pvVar3 + 0x30);
      } while (uVar4 != param_1);
      *(void **)(this + 0x150) = pvVar1;
      return;
    }
  }
  return;
}

