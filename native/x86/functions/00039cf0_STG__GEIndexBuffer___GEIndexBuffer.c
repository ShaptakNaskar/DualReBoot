/* 00039cf0 | STG::GEIndexBuffer::~GEIndexBuffer */

/* STG::GEIndexBuffer::~GEIndexBuffer() */

void __thiscall STG::GEIndexBuffer::~GEIndexBuffer(GEIndexBuffer *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x62192) + 8;
  Deallocate(this);
  return;
}

