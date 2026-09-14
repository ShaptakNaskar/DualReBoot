/* 000424f8 | STG::GEScene::InitializeInherit_Visibility */

/* STG::GEScene::InitializeInherit_Visibility(unsigned long) */

void __thiscall STG::GEScene::InitializeInherit_Visibility(GEScene *this,ulong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  if (*(int *)(this + 0x18c) != 0) {
    if (*(void **)(this + 0x188) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x188));
    }
    *(undefined4 *)(this + 0x188) = 0;
    *(undefined4 *)(this + 0x18c) = 0;
  }
  if (*(int *)(this + 0x194) != 0) {
    if (*(void **)(this + 400) != (void *)0x0) {
      operator_delete__(*(void **)(this + 400));
    }
    *(undefined4 *)(this + 400) = 0;
    *(undefined4 *)(this + 0x194) = 0;
  }
  if (*(uint *)(this + 0xa4) < param_1) {
    return;
  }
  if (param_1 == *(ulong *)(this + 0x18c)) {
    uVar3 = 0;
  }
  else {
    if (*(ulong *)(this + 0x18c) != 0) {
      if (*(void **)(this + 0x188) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x188));
      }
      *(undefined4 *)(this + 0x188) = 0;
    }
    *(ulong *)(this + 0x18c) = param_1;
    if (param_1 != 0) {
      puVar1 = operator_new__(param_1 << 2);
      iVar2 = *(int *)(this + 0x18c);
      *(undefined4 **)(this + 0x188) = puVar1;
      if (iVar2 != 0) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          *puVar1 = 0xffffffff;
          puVar1 = puVar1 + 1;
        } while (iVar2 != iVar4);
        uVar3 = *(ulong *)(this + 0x194);
        goto LAB_00042574;
      }
    }
    uVar3 = *(ulong *)(this + 0x194);
  }
LAB_00042574:
  if (param_1 != uVar3) {
    if (uVar3 != 0) {
      if (*(void **)(this + 400) != (void *)0x0) {
        operator_delete__(*(void **)(this + 400));
      }
      *(undefined4 *)(this + 400) = 0;
    }
    *(ulong *)(this + 0x194) = param_1;
    if (param_1 != 0) {
      puVar1 = operator_new__(param_1 << 2);
      iVar2 = *(int *)(this + 0x194);
      *(undefined4 **)(this + 400) = puVar1;
      if (iVar2 != 0) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          *puVar1 = 0xffffffff;
          puVar1 = puVar1 + 1;
        } while (iVar2 != iVar4);
        return;
      }
      return;
    }
  }
  return;
}

