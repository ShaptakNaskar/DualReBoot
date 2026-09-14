/* 00039f90 | STG::UResourceList<STG::GETexture,STG::GETextureList,STG::GETextureList_CreateParams>::~UResourceList */

/* STG::UResourceList<STG::GETexture, STG::GETextureList,
   STG::GETextureList_CreateParams>::~UResourceList() */

void __thiscall
STG::UResourceList<STG::GETexture,STG::GETextureList,STG::GETextureList_CreateParams>::
~UResourceList(UResourceList<STG::GETexture,STG::GETextureList,STG::GETextureList_CreateParams>
               *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x61ef6) + 8;
  operator_delete(this);
  return;
}

