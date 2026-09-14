/* 000485fc | STG::GEVertexBuffer::~GEVertexBuffer */

/* STG::GEVertexBuffer::~GEVertexBuffer() */

GEVertexBuffer * __thiscall STG::GEVertexBuffer::~GEVertexBuffer(GEVertexBuffer *this)

{
  ~GEVertexBuffer(this);
  operator_delete(this);
  return this;
}

