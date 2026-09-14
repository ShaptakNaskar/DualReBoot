/* 00048eb8 | STG::GETexture::GetHasValidUserImageData */

/* STG::GETexture::GetHasValidUserImageData() const */

bool __thiscall STG::GETexture::GetHasValidUserImageData(GETexture *this)

{
  if (*(int *)(this + 0x88) == 0) {
    return false;
  }
  if (*(int *)(this + 0x8c) == 0) {
    return false;
  }
  return *(int *)(this + 0x84) != *(int *)(this + 0x80);
}

