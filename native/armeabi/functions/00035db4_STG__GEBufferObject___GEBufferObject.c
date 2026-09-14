/* 00035db4 | STG::GEBufferObject::~GEBufferObject */

/* STG::GEBufferObject::~GEBufferObject() */

GEBufferObject * __thiscall STG::GEBufferObject::~GEBufferObject(GEBufferObject *this)

{
  ~GEBufferObject(this);
  operator_delete(this);
  return this;
}

