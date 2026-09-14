/* 000397ec | STG::GETextureList::~GETextureList */

/* STG::GETextureList::~GETextureList() */

GETextureList * __thiscall STG::GETextureList::~GETextureList(GETextureList *this)

{
  *(int *)this = *(int *)(DAT_00039810 + 0x397fc) + 8;
  operator_delete(this);
  return this;
}

