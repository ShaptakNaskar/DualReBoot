/* 00039318 | STG::GEIndexBuffer::~GEIndexBuffer */

/* STG::GEIndexBuffer::~GEIndexBuffer() */

GEIndexBuffer * __thiscall STG::GEIndexBuffer::~GEIndexBuffer(GEIndexBuffer *this)

{
  ~GEIndexBuffer(this);
  operator_delete(this);
  return this;
}

