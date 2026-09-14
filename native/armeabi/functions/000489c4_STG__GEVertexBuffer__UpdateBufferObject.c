/* 000489c4 | STG::GEVertexBuffer::UpdateBufferObject */

/* STG::GEVertexBuffer::UpdateBufferObject() */

void __thiscall STG::GEVertexBuffer::UpdateBufferObject(GEVertexBuffer *this)

{
  GEBufferObject::Update(*(GEBufferObject **)(this + 4),*(uchar **)(this + 0x14));
  return;
}

