/* 00048988 | STG::GEVertexBuffer::AllocateBufferObject */

/* STG::GEVertexBuffer::AllocateBufferObject() */

void __thiscall STG::GEVertexBuffer::AllocateBufferObject(GEVertexBuffer *this)

{
  GEBufferObject *this_00;
  
  this_00 = operator_new(0x1c);
  GEBufferObject::GEBufferObject(this_00,0,*(undefined4 *)(this + 8));
  *(GEBufferObject **)(this + 4) = this_00;
  GEBufferObject::Allocate(this_00,*(int *)(this + 0xc) * *(int *)(this + 0x10));
  return;
}

