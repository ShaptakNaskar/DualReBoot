/* 0004d570 | STG::GEVertexBlender::~GEVertexBlender */

/* STG::GEVertexBlender::~GEVertexBlender() */

void __thiscall STG::GEVertexBlender::~GEVertexBlender(GEVertexBlender *this)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_0002e044();
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    if (*(int *)((int)pvVar2 + 0x24) != 0) {
      if (*(void **)((int)pvVar2 + 0x20) != (void *)0x0) {
        operator_delete__(*(void **)((int)pvVar2 + 0x20));
      }
      *(undefined4 *)((int)pvVar2 + 0x20) = 0;
      *(undefined4 *)((int)pvVar2 + 0x24) = 0;
    }
    if (*(int *)((int)pvVar2 + 0x1c) != 0) {
      if (*(void **)((int)pvVar2 + 0x18) != (void *)0x0) {
        operator_delete__(*(void **)((int)pvVar2 + 0x18));
      }
      *(undefined4 *)((int)pvVar2 + 0x18) = 0;
      *(undefined4 *)((int)pvVar2 + 0x1c) = 0;
    }
    if (*(int *)((int)pvVar2 + 0x14) != 0) {
      if (*(void **)((int)pvVar2 + 0x10) != (void *)0x0) {
        operator_delete__(*(void **)((int)pvVar2 + 0x10));
      }
      *(undefined4 *)((int)pvVar2 + 0x10) = 0;
      *(undefined4 *)((int)pvVar2 + 0x14) = 0;
    }
    operator_delete(pvVar2);
  }
  uVar3 = *(uint *)(this + 4);
  *(undefined4 *)this = 0;
  if (uVar3 != 0) {
    pvVar2 = *(void **)(this + 0xc);
    uVar4 = 0;
    do {
      iVar1 = *(int *)((int)pvVar2 + uVar4 * 4);
      if (iVar1 != 0) {
        free(*(void **)(iVar1 + -4));
        uVar3 = *(uint *)(this + 4);
        pvVar2 = *(void **)(this + 0xc);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(undefined4 *)(this + 0xc) = 0;
  }
  return;
}

