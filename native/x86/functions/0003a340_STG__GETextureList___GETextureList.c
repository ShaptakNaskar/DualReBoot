/* 0003a340 | STG::GETextureList::~GETextureList */

/* STG::GETextureList::~GETextureList() */

void __thiscall STG::GETextureList::~GETextureList(GETextureList *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x61b46) + 8;
  operator_delete(this);
  return;
}

