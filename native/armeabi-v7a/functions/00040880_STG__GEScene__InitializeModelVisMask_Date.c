/* 00040880 | STG::GEScene::InitializeModelVisMask_Date */

/* STG::GEScene::InitializeModelVisMask_Date(unsigned long) */

void __thiscall STG::GEScene::InitializeModelVisMask_Date(GEScene *this,ulong param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 extraout_r2;
  undefined4 uVar5;
  ulong uVar6;
  int iVar7;
  int extraout_r3;
  
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
    uVar6 = 0;
    if (param_1 == 0) {
      return;
    }
    goto LAB_00040900;
  }
  if (*(ulong *)(this + 0x14c) != 0) {
    if (*(void **)(this + 0x148) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x148));
    }
    *(undefined4 *)(this + 0x148) = 0;
  }
  *(ulong *)(this + 0x14c) = param_1;
  if (param_1 == 0) {
LAB_0004099c:
    uVar6 = *(ulong *)(this + 0x154);
  }
  else {
    puVar2 = operator_new__(param_1 << 2);
    iVar3 = *(int *)(this + 0x14c);
    uVar5 = extraout_r2;
    iVar7 = extraout_r3;
    if (iVar3 != 0) {
      iVar7 = 0;
      uVar5 = 0xffffffff;
    }
    *(undefined4 **)(this + 0x148) = puVar2;
    if (iVar3 == 0) goto LAB_0004099c;
    do {
      iVar7 = iVar7 + 1;
      *puVar2 = uVar5;
      puVar2 = puVar2 + 1;
    } while (iVar3 != iVar7);
    uVar6 = *(ulong *)(this + 0x154);
  }
  if (param_1 == uVar6) {
    return;
  }
LAB_00040900:
  if (uVar6 != 0) {
    if (*(void **)(this + 0x150) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x150));
    }
    *(undefined4 *)(this + 0x150) = 0;
  }
  *(ulong *)(this + 0x154) = param_1;
  if (param_1 != 0) {
    pvVar1 = operator_new__(param_1 * 0x30);
    uVar6 = 0;
    pvVar4 = pvVar1;
    do {
      iVar7 = 0;
      do {
        *(undefined4 *)((int)pvVar4 + iVar7) = 0;
        iVar7 = iVar7 + 4;
      } while (iVar7 != 0x30);
      uVar6 = uVar6 + 1;
      pvVar4 = (void *)((int)pvVar4 + 0x30);
    } while (uVar6 != param_1);
    *(void **)(this + 0x150) = pvVar1;
    return;
  }
  return;
}

