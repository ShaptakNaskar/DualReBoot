/* 0004e090 | STG::GEVertexBuffer::AllocateBufferObject */

/* STG::GEVertexBuffer::AllocateBufferObject() */

void __thiscall STG::GEVertexBuffer::AllocateBufferObject(GEVertexBuffer *this)

{
  GEBufferObject *pGVar1;
  
  FUN_0002e044();
  pGVar1 = operator_new(0x1c);
  GEBufferObject::GEBufferObject(pGVar1,0,*(undefined4 *)(this + 8));
  *(GEBufferObject **)(this + 4) = pGVar1;
  GEBufferObject::Allocate((ulong)pGVar1);
  return;
}

