/* 00036950 | STG::GEBufferObject::~GEBufferObject */

/* STG::GEBufferObject::~GEBufferObject() */

void __thiscall STG::GEBufferObject::~GEBufferObject(GEBufferObject *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x6551e) + 8;
  Deallocate(this);
  return;
}

