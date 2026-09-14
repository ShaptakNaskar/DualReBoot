/* 000488fc | STG::GEVertexBuffer::Sort */

/* STG::GEVertexBuffer::Sort(unsigned long const*) */

void __thiscall STG::GEVertexBuffer::Sort(GEVertexBuffer *this,ulong *param_1)

{
  void *__dest;
  size_t __n;
  uint uVar1;
  
  __dest = operator_new__(*(int *)(this + 0xc) * *(int *)(this + 0x10));
  memcpy(__dest,*(void **)(this + 0x14),*(int *)(this + 0x10) * *(int *)(this + 0xc));
  if (*(int *)(this + 0x10) != 0) {
    __n = *(size_t *)(this + 0xc);
    uVar1 = 0;
    while( true ) {
      memcpy((void *)(__n * *param_1 + *(int *)(this + 0x14)),(void *)(uVar1 * __n + (int)__dest),
             __n);
      uVar1 = uVar1 + 1;
      if (*(uint *)(this + 0x10) <= uVar1) break;
      __n = *(size_t *)(this + 0xc);
      param_1 = param_1 + 1;
    }
  }
  if (__dest != (void *)0x0) {
    operator_delete__(__dest);
    return;
  }
  return;
}

