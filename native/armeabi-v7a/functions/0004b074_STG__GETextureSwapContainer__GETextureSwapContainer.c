/* 0004b074 | STG::GETextureSwapContainer::GETextureSwapContainer */

/* STG::GETextureSwapContainer::GETextureSwapContainer() */

void __thiscall STG::GETextureSwapContainer::GETextureSwapContainer(GETextureSwapContainer *this)

{
  int iVar1;
  
  iVar1 = DAT_0004b094;
  *(undefined4 *)(this + 4) = 0;
  iVar1 = *(int *)(iVar1 + 0x4b088);
  *(undefined4 *)(this + 8) = 0;
  *(int *)this = iVar1 + 8;
  return;
}

