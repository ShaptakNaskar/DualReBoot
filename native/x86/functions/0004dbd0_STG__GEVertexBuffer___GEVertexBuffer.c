/* 0004dbd0 | STG::GEVertexBuffer::~GEVertexBuffer */

/* STG::GEVertexBuffer::~GEVertexBuffer() */

void __thiscall STG::GEVertexBuffer::~GEVertexBuffer(GEVertexBuffer *this)

{
  FUN_0002e044();
  ~GEVertexBuffer(this);
  operator_delete(this);
  return;
}

