/* 00037664 | STG::GEIndexBuffer::AllocateBufferObject */

/* STG::GEIndexBuffer::AllocateBufferObject() */

void __thiscall STG::GEIndexBuffer::AllocateBufferObject(GEIndexBuffer *this)

{
  GEBufferObject *this_00;
  
  this_00 = operator_new(0x1c);
  GEBufferObject::GEBufferObject(this_00,1,0);
  *(GEBufferObject **)(this + 4) = this_00;
  GEBufferObject::Allocate(this_00,*(int *)(this + 8) << 1);
  return;
}

