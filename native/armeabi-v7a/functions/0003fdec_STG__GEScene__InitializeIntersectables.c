/* 0003fdec | STG::GEScene::InitializeIntersectables */

/* STG::GEScene::InitializeIntersectables(unsigned long) */

void __thiscall STG::GEScene::InitializeIntersectables(GEScene *this,ulong param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(this + 0x11c) != 0) {
    if (*(void **)(this + 0x118) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x118));
    }
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
  }
  if (*(int *)(this + 0x114) != 0) {
    if (*(void **)(this + 0x110) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x110));
    }
    *(undefined4 *)(this + 0x110) = 0;
    *(undefined4 *)(this + 0x114) = 0;
  }
  uVar5 = *(uint *)(this + 0xa4);
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  if (uVar5 < param_1) {
    return;
  }
  if (uVar5 != *(uint *)(this + 0x11c)) {
    if (*(uint *)(this + 0x11c) != 0) {
      if (*(void **)(this + 0x118) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x118));
      }
      *(undefined4 *)(this + 0x118) = 0;
    }
    *(uint *)(this + 0x11c) = uVar5;
    if (uVar5 != 0) {
      pvVar2 = operator_new__(uVar5);
      iVar3 = *(int *)(this + 0x11c);
      *(void **)(this + 0x118) = pvVar2;
      if (iVar3 != 0) {
        iVar4 = 0;
        do {
          *(undefined1 *)((int)pvVar2 + iVar4) = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 != iVar3);
        if (param_1 == 0) {
          return;
        }
        goto LAB_0003fea4;
      }
    }
  }
  if (param_1 == 0) {
    return;
  }
LAB_0003fea4:
  if (param_1 == *(ulong *)(this + 0x114)) {
    return;
  }
  if (*(ulong *)(this + 0x114) != 0) {
    if (*(void **)(this + 0x110) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x110));
    }
    *(undefined4 *)(this + 0x110) = 0;
  }
  *(ulong *)(this + 0x114) = param_1;
  puVar1 = operator_new__(param_1 << 2);
  iVar3 = *(int *)(this + 0x114);
  *(undefined4 **)(this + 0x110) = puVar1;
  if (iVar3 != 0) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 1;
    } while (iVar4 != iVar3);
    return;
  }
  return;
}

