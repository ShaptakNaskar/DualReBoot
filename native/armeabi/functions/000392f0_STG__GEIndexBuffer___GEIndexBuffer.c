/* 000392f0 | STG::GEIndexBuffer::~GEIndexBuffer */

/* STG::GEIndexBuffer::~GEIndexBuffer() */

GEIndexBuffer * __thiscall STG::GEIndexBuffer::~GEIndexBuffer(GEIndexBuffer *this)

{
  *(int *)this = *(int *)(DAT_00039314 + 0x39300) + 8;
  Deallocate(this);
  return this;
}

