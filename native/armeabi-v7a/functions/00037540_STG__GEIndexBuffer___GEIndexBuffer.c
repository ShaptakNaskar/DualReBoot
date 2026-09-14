/* 00037540 | STG::GEIndexBuffer::~GEIndexBuffer */

/* STG::GEIndexBuffer::~GEIndexBuffer() */

GEIndexBuffer * __thiscall STG::GEIndexBuffer::~GEIndexBuffer(GEIndexBuffer *this)

{
  *(int *)this = *(int *)(DAT_00037564 + 0x37550) + 8;
  Deallocate(this);
  return this;
}

