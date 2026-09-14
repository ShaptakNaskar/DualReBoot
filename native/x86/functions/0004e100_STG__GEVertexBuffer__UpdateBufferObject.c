/* 0004e100 | STG::GEVertexBuffer::UpdateBufferObject */

/* STG::GEVertexBuffer::UpdateBufferObject() */

void __thiscall STG::GEVertexBuffer::UpdateBufferObject(GEVertexBuffer *this)

{
  FUN_0002e044();
  GEBufferObject::Update(*(GEBufferObject **)(this + 4),*(uchar **)(this + 0x14));
  return;
}

