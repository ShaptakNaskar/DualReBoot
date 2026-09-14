/* 00036980 | STG::GEBufferObject::~GEBufferObject */

/* STG::GEBufferObject::~GEBufferObject() */

void __thiscall STG::GEBufferObject::~GEBufferObject(GEBufferObject *this)

{
  FUN_0002e044();
  ~GEBufferObject(this);
  operator_delete(this);
  return;
}

