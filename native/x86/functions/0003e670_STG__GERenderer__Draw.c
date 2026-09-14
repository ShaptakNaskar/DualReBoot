/* 0003e670 | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::GEModel const&) */

void __thiscall STG::GERenderer::Draw(GERenderer *this,GEModel *param_1)

{
  MMatrix local_4c [68];
  
  FUN_0002e044();
  MMatrix::MakeIdentity(local_4c);
  Draw(this,param_1,local_4c);
  return;
}

