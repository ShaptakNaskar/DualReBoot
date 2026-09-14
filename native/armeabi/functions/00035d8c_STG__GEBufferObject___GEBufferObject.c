/* 00035d8c | STG::GEBufferObject::~GEBufferObject */

/* STG::GEBufferObject::~GEBufferObject() */

GEBufferObject * __thiscall STG::GEBufferObject::~GEBufferObject(GEBufferObject *this)

{
  *(int *)this = *(int *)(DAT_00035db0 + 0x35d9c) + 8;
  Deallocate(this);
  return this;
}

