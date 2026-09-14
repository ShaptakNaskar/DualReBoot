/* 0004d208 | STG::GETextureSwap::GETextureSwap */

/* STG::GETextureSwap::GETextureSwap() */

void __thiscall STG::GETextureSwap::GETextureSwap(GETextureSwap *this)

{
  *(int *)this = *(int *)(DAT_0004d24c + 0x4d218) + 8;
  *(GETextureSwap **)(this + 0x14) = this + 4;
  *(GETextureSwap **)(this + 0x18) = this + 4;
  this[4] = (GETextureSwap)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (GETextureSwap)0x0;
  this[0x21] = (GETextureSwap)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}

