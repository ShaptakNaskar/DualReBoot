/* 0003aaec | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::GEModel const&) */

void __thiscall STG::GERenderer::Draw(GERenderer *this,GEModel *param_1)

{
  MMatrix aMStack_50 [68];
  
  MMatrix::MakeIdentity(aMStack_50);
  Draw(this,param_1,aMStack_50);
  return;
}

