/* 00046494 | STG::GEVertexBuffer::Sort */

/* STG::GEVertexBuffer::Sort(unsigned long const*) */

void __thiscall STG::GEVertexBuffer::Sort(GEVertexBuffer *this,ulong *param_1)

{
  int iVar1;
  void *__dest;
  size_t __n;
  uint uVar2;
  
  __dest = operator_new__(*(int *)(this + 0x10) * *(int *)(this + 0xc));
  memcpy(__dest,*(void **)(this + 0x14),*(int *)(this + 0xc) * *(int *)(this + 0x10));
  if (*(int *)(this + 0x10) != 0) {
    __n = *(size_t *)(this + 0xc);
    uVar2 = 0;
    while( true ) {
      iVar1 = uVar2 * __n;
      uVar2 = uVar2 + 1;
      memcpy((void *)(__n * *param_1 + *(int *)(this + 0x14)),(void *)(iVar1 + (int)__dest),__n);
      if (*(uint *)(this + 0x10) <= uVar2) break;
      __n = *(size_t *)(this + 0xc);
      param_1 = param_1 + 1;
    }
  }
  if (__dest == (void *)0x0) {
    return;
  }
  operator_delete__(__dest);
  return;
}

