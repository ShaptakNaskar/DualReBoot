/* 0004e6e0 | STG::GETexture::GetHasValidFontCompositeData */

/* STG::GETexture::GetHasValidFontCompositeData() const */

undefined4 __thiscall STG::GETexture::GetHasValidFontCompositeData(GETexture *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0x68) != 0) {
    uVar1 = CONCAT31((int3)((uint)*(int *)(this + 0x60) >> 8),
                     *(int *)(this + 100) != *(int *)(this + 0x60));
  }
  return uVar1;
}

