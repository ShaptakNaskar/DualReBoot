/* 000469c0 | STG::GETexture::GetHasValidFontCompositeData */

/* STG::GETexture::GetHasValidFontCompositeData() const */

bool __thiscall STG::GETexture::GetHasValidFontCompositeData(GETexture *this)

{
  if (*(int *)(this + 0x68) != 0) {
    return *(int *)(this + 100) != *(int *)(this + 0x60);
  }
  return false;
}

