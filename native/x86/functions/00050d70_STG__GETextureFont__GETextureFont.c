/* 00050d70 | STG::GETextureFont::GETextureFont */

/* STG::GETextureFont::GETextureFont() */

void __thiscall STG::GETextureFont::GETextureFont(GETextureFont *this)

{
  int extraout_ECX;
  
  FUN_0002e915();
  *(int *)this = *(int *)(extraout_ECX + 0x4b0c7) + 8;
  this[4] = (GETextureFont)0x0;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(GETextureFont **)(this + 0x14) = this + 4;
  *(GETextureFont **)(this + 0x18) = this + 4;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (GETextureFont)0x0;
  this[0x29] = (GETextureFont)0x0;
  this[0x2a] = (GETextureFont)0x0;
  this[0x2b] = (GETextureFont)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}

