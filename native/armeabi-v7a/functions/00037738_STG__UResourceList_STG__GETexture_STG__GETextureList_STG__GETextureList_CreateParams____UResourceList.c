/* 00037738 | STG::UResourceList<STG::GETexture,STG::GETextureList,STG::GETextureList_CreateParams>::~UResourceList */

/* STG::UResourceList<STG::GETexture, STG::GETextureList,
   STG::GETextureList_CreateParams>::~UResourceList() */

UResourceList<STG::GETexture,STG::GETextureList,STG::GETextureList_CreateParams> * __thiscall
STG::UResourceList<STG::GETexture,STG::GETextureList,STG::GETextureList_CreateParams>::
~UResourceList(UResourceList<STG::GETexture,STG::GETextureList,STG::GETextureList_CreateParams>
               *this)

{
  *(int *)this = *(int *)(DAT_0003775c + 0x37748) + 8;
  operator_delete(this);
  return this;
}

