/* 00049ce4 | STG::GETextureModifier::GETextureModifier */

/* STG::GETextureModifier::GETextureModifier() */

GETextureModifier * __thiscall STG::GETextureModifier::GETextureModifier(GETextureModifier *this)

{
  GETextureSwapContainer::GETextureSwapContainer((GETextureSwapContainer *)this);
  GETextureFontContainer::GETextureFontContainer((GETextureFontContainer *)(this + 0xc));
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  GETimeOfDay::GETimeOfDay((GETimeOfDay *)(this + 0x2c));
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  return this;
}

