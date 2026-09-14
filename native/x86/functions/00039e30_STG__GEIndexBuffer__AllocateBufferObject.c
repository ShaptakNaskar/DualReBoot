/* 00039e30 | STG::GEIndexBuffer::AllocateBufferObject */

/* STG::GEIndexBuffer::AllocateBufferObject() */

void __thiscall STG::GEIndexBuffer::AllocateBufferObject(GEIndexBuffer *this)

{
  GEBufferObject *pGVar1;
  
  FUN_0002e044();
  pGVar1 = operator_new(0x1c);
  GEBufferObject::GEBufferObject(pGVar1,1,0);
  *(GEBufferObject **)(this + 4) = pGVar1;
  GEBufferObject::Allocate((ulong)pGVar1);
  return;
}

