/* 0004dba0 | STG::GEVertexBuffer::~GEVertexBuffer */

/* STG::GEVertexBuffer::~GEVertexBuffer() */

void __thiscall STG::GEVertexBuffer::~GEVertexBuffer(GEVertexBuffer *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x4e316) + 8;
  Deallocate(this);
  return;
}

