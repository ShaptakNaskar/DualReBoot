/* 00037a34 | STG::GETextureList::~GETextureList */

/* STG::GETextureList::~GETextureList() */

GETextureList * __thiscall STG::GETextureList::~GETextureList(GETextureList *this)

{
  *(int *)this = *(int *)(DAT_00037a58 + 0x37a44) + 8;
  operator_delete(this);
  return this;
}

