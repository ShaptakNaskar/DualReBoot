/* 000394ec | STG::UResourceList<STG::GETexture,STG::GETextureList,STG::GETextureList_CreateParams>::~UResourceList */

/* STG::UResourceList<STG::GETexture, STG::GETextureList,
   STG::GETextureList_CreateParams>::~UResourceList() */

UResourceList<STG::GETexture,STG::GETextureList,STG::GETextureList_CreateParams> * __thiscall
STG::UResourceList<STG::GETexture,STG::GETextureList,STG::GETextureList_CreateParams>::
~UResourceList(UResourceList<STG::GETexture,STG::GETextureList,STG::GETextureList_CreateParams>
               *this)

{
  *(int *)this = *(int *)(DAT_00039510 + 0x394fc) + 8;
  operator_delete(this);
  return this;
}

