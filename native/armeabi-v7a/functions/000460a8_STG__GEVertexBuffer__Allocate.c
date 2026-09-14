/* 000460a8 | STG::GEVertexBuffer::Allocate */

/* STG::GEVertexBuffer::Allocate(STG::GEBufferObject::EUsage, unsigned long) */

void __thiscall STG::GEVertexBuffer::Allocate(GEVertexBuffer *this,undefined4 param_2,int param_3)

{
  void *pvVar1;
  void *__s;
  size_t __n;
  
  if (*(int *)(this + 0xc) != 0) {
    __n = *(int *)(this + 0xc) * param_3;
    *(int *)(this + 0x10) = param_3;
    pvVar1 = malloc(__n + 0x13);
    if (pvVar1 == (void *)0x0) {
      __s = (void *)0x0;
    }
    else {
      __s = (void *)((int)pvVar1 + 0x13U & 0xfffffff0);
      *(void **)((int)__s + -4) = pvVar1;
    }
    *(void **)(this + 0x14) = __s;
    memset(__s,0,__n);
    *(undefined4 *)(this + 8) = param_2;
    this[0xa8] = (GEVertexBuffer)0x1;
    return;
  }
  return;
}

