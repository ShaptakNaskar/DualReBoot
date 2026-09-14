/* 000397c8 | STG::GERenderer::SaveImageData */

/* STG::GERenderer::SaveImageData(STG::UStringBase<char, int> const&, STG::GEPixelData const&) const
    */

bool __thiscall
STG::GERenderer::SaveImageData(GERenderer *this,UStringBase *param_1,GEPixelData *param_2)

{
  if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x14)) {
    return false;
  }
  if (*(int *)(param_2 + 0x14) * *(int *)(param_2 + 0x1c) == 0) {
    return false;
  }
  if (*(int *)(param_2 + 0x18) == 0) {
    return false;
  }
  return *(int *)(param_2 + 0x1c) != 0;
}

