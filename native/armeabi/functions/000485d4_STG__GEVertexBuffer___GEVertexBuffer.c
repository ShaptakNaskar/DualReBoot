/* 000485d4 | STG::GEVertexBuffer::~GEVertexBuffer */

/* STG::GEVertexBuffer::~GEVertexBuffer() */

GEVertexBuffer * __thiscall STG::GEVertexBuffer::~GEVertexBuffer(GEVertexBuffer *this)

{
  *(int *)this = *(int *)(DAT_000485f8 + 0x485e4) + 8;
  Deallocate(this);
  return this;
}

