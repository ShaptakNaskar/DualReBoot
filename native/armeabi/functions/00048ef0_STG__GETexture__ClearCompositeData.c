/* 00048ef0 | STG::GETexture::ClearCompositeData */

/* STG::GETexture::ClearCompositeData() */

void __thiscall STG::GETexture::ClearCompositeData(GETexture *this)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = *(undefined2 **)(this + 100);
  puVar1 = *(undefined2 **)(this + 0x60);
  *(undefined4 *)(this + 0x68) = 0;
  if (puVar2 != puVar1) {
    *puVar2 = 0;
  }
  if (puVar2 != puVar1) {
    *(undefined2 **)(this + 0x60) = puVar2;
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

