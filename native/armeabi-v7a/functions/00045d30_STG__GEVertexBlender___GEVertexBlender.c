/* 00045d30 | STG::GEVertexBlender::~GEVertexBlender */

/* STG::GEVertexBlender::~GEVertexBlender() */

GEVertexBlender * __thiscall STG::GEVertexBlender::~GEVertexBlender(GEVertexBlender *this)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    if (*(int *)((int)pvVar3 + 0x24) != 0) {
      if (*(void **)((int)pvVar3 + 0x20) != (void *)0x0) {
        operator_delete__(*(void **)((int)pvVar3 + 0x20));
      }
      *(undefined4 *)((int)pvVar3 + 0x20) = 0;
      *(undefined4 *)((int)pvVar3 + 0x24) = 0;
    }
    if (*(int *)((int)pvVar3 + 0x1c) != 0) {
      if (*(void **)((int)pvVar3 + 0x18) != (void *)0x0) {
        operator_delete__(*(void **)((int)pvVar3 + 0x18));
      }
      *(undefined4 *)((int)pvVar3 + 0x18) = 0;
      *(undefined4 *)((int)pvVar3 + 0x1c) = 0;
    }
    if (*(int *)((int)pvVar3 + 0x14) != 0) {
      if (*(void **)((int)pvVar3 + 0x10) != (void *)0x0) {
        operator_delete__(*(void **)((int)pvVar3 + 0x10));
      }
      *(undefined4 *)((int)pvVar3 + 0x10) = 0;
      *(undefined4 *)((int)pvVar3 + 0x14) = 0;
    }
    operator_delete(pvVar3);
  }
  uVar1 = *(uint *)(this + 4);
  uVar4 = 0;
  *(undefined4 *)this = 0;
  if (uVar1 != 0) {
    pvVar3 = *(void **)(this + 0xc);
    do {
      iVar2 = *(int *)((int)pvVar3 + uVar4 * 4);
      uVar4 = uVar4 + 1;
      if (iVar2 != 0) {
        free(*(void **)(iVar2 + -4));
        uVar1 = *(uint *)(this + 4);
        pvVar3 = *(void **)(this + 0xc);
      }
    } while (uVar4 < uVar1);
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(undefined4 *)(this + 0xc) = 0;
  }
  return this;
}

