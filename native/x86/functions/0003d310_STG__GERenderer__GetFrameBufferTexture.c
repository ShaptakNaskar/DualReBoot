/* 0003d310 | STG::GERenderer::GetFrameBufferTexture */

/* STG::GERenderer::GetFrameBufferTexture() const */

undefined4 __thiscall STG::GERenderer::GetFrameBufferTexture(GERenderer *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0xfc) != 0) {
    uVar1 = *(undefined4 *)(this + 0xf8);
  }
  return uVar1;
}

