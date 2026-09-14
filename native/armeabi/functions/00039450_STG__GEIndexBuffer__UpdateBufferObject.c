/* 00039450 | STG::GEIndexBuffer::UpdateBufferObject */

/* STG::GEIndexBuffer::UpdateBufferObject() */

void __thiscall STG::GEIndexBuffer::UpdateBufferObject(GEIndexBuffer *this)

{
  GEBufferObject::Update(*(GEBufferObject **)(this + 4),*(uchar **)(this + 0x10));
  return;
}

