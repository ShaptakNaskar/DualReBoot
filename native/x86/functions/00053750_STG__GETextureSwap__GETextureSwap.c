/* 00053750 | STG::GETextureSwap::GETextureSwap */

/* STG::GETextureSwap::GETextureSwap() */

void __thiscall STG::GETextureSwap::GETextureSwap(GETextureSwap *this)

{
  int iVar1;
  int extraout_ECX;
  
  FUN_0002e915();
  iVar1 = *(int *)(extraout_ECX + 0x486e7);
  *(undefined1 (*) [16])(this + 0x24) = (undefined1  [16])0x0;
  *(int *)this = iVar1 + 8;
  this[4] = (GETextureSwap)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(GETextureSwap **)(this + 0x14) = this + 4;
  *(GETextureSwap **)(this + 0x18) = this + 4;
  this[0x20] = (GETextureSwap)0x0;
  this[0x21] = (GETextureSwap)0x0;
  return;
}

