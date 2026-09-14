/* 0004e700 | STG::GETexture::GetHasValidUserImageData */

/* STG::GETexture::GetHasValidUserImageData() const */

undefined4 __thiscall STG::GETexture::GetHasValidUserImageData(GETexture *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(this + 0x88) != 0) && (*(int *)(this + 0x8c) != 0)) {
    uVar1 = CONCAT31((int3)((uint)*(int *)(this + 0x80) >> 8),
                     *(int *)(this + 0x84) != *(int *)(this + 0x80));
  }
  return uVar1;
}

