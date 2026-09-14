/* 00046164 | STG::GEVertexBuffer::~GEVertexBuffer */

/* STG::GEVertexBuffer::~GEVertexBuffer() */

GEVertexBuffer * __thiscall STG::GEVertexBuffer::~GEVertexBuffer(GEVertexBuffer *this)

{
  *(int *)this = *(int *)(DAT_00046188 + 0x46174) + 8;
  Deallocate(this);
  return this;
}

