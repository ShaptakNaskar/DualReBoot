/* 0003c9a0 | STG::GERenderer::SaveImageData */

/* STG::GERenderer::SaveImageData(STG::UStringBase<char, int> const&, STG::GEPixelData const&) const
    */

bool __thiscall
STG::GERenderer::SaveImageData(GERenderer *this,UStringBase *param_1,GEPixelData *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (((*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x14)) &&
      (*(int *)(param_2 + 0x14) * *(int *)(param_2 + 0x1c) != 0)) && (*(int *)(param_2 + 0x18) != 0)
     ) {
    bVar1 = *(int *)(param_2 + 0x1c) != 0;
  }
  return bVar1;
}

