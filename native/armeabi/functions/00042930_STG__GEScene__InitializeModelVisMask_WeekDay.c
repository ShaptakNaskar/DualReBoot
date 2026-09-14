/* 00042930 | STG::GEScene::InitializeModelVisMask_WeekDay */

/* STG::GEScene::InitializeModelVisMask_WeekDay(unsigned long) */

void __thiscall STG::GEScene::InitializeModelVisMask_WeekDay(GEScene *this,ulong param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  if (*(int *)(this + 0x13c) != 0) {
    if (*(void **)(this + 0x138) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x138));
    }
    *(undefined4 *)(this + 0x138) = 0;
    *(undefined4 *)(this + 0x13c) = 0;
  }
  if (*(int *)(this + 0x144) != 0) {
    if (*(void **)(this + 0x140) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x140));
    }
    *(undefined4 *)(this + 0x140) = 0;
    *(undefined4 *)(this + 0x144) = 0;
  }
  if (*(uint *)(this + 0xa4) < param_1) {
    return;
  }
  if (param_1 == *(ulong *)(this + 0x13c)) {
    uVar4 = 0;
  }
  else {
    if (*(ulong *)(this + 0x13c) != 0) {
      if (*(void **)(this + 0x138) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x138));
      }
      *(undefined4 *)(this + 0x138) = 0;
    }
    *(ulong *)(this + 0x13c) = param_1;
    if (param_1 != 0) {
      puVar2 = operator_new__(param_1 << 2);
      iVar5 = *(int *)(this + 0x13c);
      *(undefined4 **)(this + 0x138) = puVar2;
      if (iVar5 != 0) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          *puVar2 = 0xffffffff;
          puVar2 = puVar2 + 1;
        } while (iVar3 != iVar5);
        uVar4 = *(ulong *)(this + 0x144);
        goto LAB_000429ac;
      }
    }
    uVar4 = *(ulong *)(this + 0x144);
  }
LAB_000429ac:
  if (param_1 != uVar4) {
    if (uVar4 != 0) {
      if (*(void **)(this + 0x140) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x140));
      }
      *(undefined4 *)(this + 0x140) = 0;
    }
    *(ulong *)(this + 0x144) = param_1;
    if (param_1 != 0) {
      pvVar1 = operator_new__(param_1);
      iVar5 = *(int *)(this + 0x144);
      *(void **)(this + 0x140) = pvVar1;
      if (iVar5 != 0) {
        iVar3 = 0;
        do {
          *(undefined1 *)(*(int *)(this + 0x140) + iVar3) = 0;
          iVar3 = iVar3 + 1;
        } while (iVar5 != iVar3);
        return;
      }
    }
  }
  return;
}

