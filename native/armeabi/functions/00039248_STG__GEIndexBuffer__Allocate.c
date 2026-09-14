/* 00039248 | STG::GEIndexBuffer::Allocate */

/* STG::GEIndexBuffer::Allocate(unsigned long) */

void __thiscall STG::GEIndexBuffer::Allocate(GEIndexBuffer *this,ulong param_1)

{
  void *pvVar1;
  uint uVar2;
  
  *(ulong *)(this + 0xc) = param_1;
  *(ulong *)(this + 8) = param_1 * 3;
  if (param_1 * 3 != 0) {
    pvVar1 = malloc(param_1 * 6 + 0x13);
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (int)pvVar1 + 0x13U & 0xfffffff0;
      *(void **)(uVar2 - 4) = pvVar1;
    }
    *(uint *)(this + 0x10) = uVar2;
    this[0x14] = (GEIndexBuffer)0x1;
  }
  return;
}

