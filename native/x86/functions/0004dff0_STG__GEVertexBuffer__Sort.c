/* 0004dff0 | STG::GEVertexBuffer::Sort */

/* STG::GEVertexBuffer::Sort(unsigned long const*) */

void __thiscall STG::GEVertexBuffer::Sort(GEVertexBuffer *this,ulong *param_1)

{
  ulong *puVar1;
  void *__dest;
  int iVar2;
  size_t __n;
  uint uVar3;
  
  FUN_0002e044();
  __dest = operator_new__(*(int *)(this + 0xc) * *(int *)(this + 0x10));
  memcpy(__dest,*(void **)(this + 0x14),*(int *)(this + 0x10) * *(int *)(this + 0xc));
  if (*(int *)(this + 0x10) != 0) {
    __n = *(size_t *)(this + 0xc);
    uVar3 = 0;
    while( true ) {
      puVar1 = param_1 + uVar3;
      iVar2 = __n * uVar3;
      uVar3 = uVar3 + 1;
      memcpy((void *)(__n * *puVar1 + *(int *)(this + 0x14)),(void *)(iVar2 + (int)__dest),__n);
      if (*(uint *)(this + 0x10) <= uVar3) break;
      __n = *(size_t *)(this + 0xc);
    }
  }
  if (__dest != (void *)0x0) {
    operator_delete__(__dest);
  }
  return;
}

