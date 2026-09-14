/* 0004e730 | STG::GETexture::ClearCompositeData */

/* STG::GETexture::ClearCompositeData() */

void __thiscall STG::GETexture::ClearCompositeData(GETexture *this)

{
  *(undefined4 *)(this + 0x68) = 0;
  if (*(undefined2 **)(this + 100) != *(undefined2 **)(this + 0x60)) {
    **(undefined2 **)(this + 100) = 0;
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 100);
  }
  if (*(undefined1 **)(this + 0x84) != *(undefined1 **)(this + 0x80)) {
    **(undefined1 **)(this + 0x84) = 0;
    *(undefined4 *)(this + 0x80) = *(undefined4 *)(this + 0x84);
  }
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  return;
}

