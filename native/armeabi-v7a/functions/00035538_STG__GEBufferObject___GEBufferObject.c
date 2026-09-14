/* 00035538 | STG::GEBufferObject::~GEBufferObject */

/* STG::GEBufferObject::~GEBufferObject() */

GEBufferObject * __thiscall STG::GEBufferObject::~GEBufferObject(GEBufferObject *this)

{
  *(int *)this = *(int *)(DAT_0003555c + 0x35548) + 8;
  Deallocate(this);
  return this;
}

