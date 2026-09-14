/* 0003d0c0 | STG::GERenderer::DrawVignette */

/* STG::GERenderer::DrawVignette() */

void __thiscall STG::GERenderer::DrawVignette(GERenderer *this)

{
  float extraout_s0;
  float extraout_s1;
  float extraout_s2;
  MMatrix *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  MMatrix aMStack_58 [68];
  
  local_78 = 0x3f800000;
  local_74 = 0x3f800000;
  local_70 = 0x3f800000;
  local_6c = 0x3f800000;
  SetMaterial(this,*(GEMaterial **)(this + 0xe4),(GEColor *)&local_78);
  MMatrix::MakeIdentity(aMStack_58);
  __floatunsisf(*(undefined4 *)(this + 0x36c));
  __floatunsisf(*(undefined4 *)(this + 0x370));
  MMatrix::SetScale(aMStack_58,extraout_s0,extraout_s1,extraout_s2);
  local_7c = aMStack_58;
  GERenderState<STG::MMatrix>::SetState((GERenderState<STG::MMatrix> *)&local_7c,aMStack_58);
  Draw(this,*(GEVertexBuffer **)(this + 0xdc),*(GEIndexBuffer **)(this + 0xe0));
  GERenderState<STG::MMatrix>::RestoreState();
  local_68 = 0x3f800000;
  local_64 = 0x3f800000;
  local_60 = 0x3f800000;
  local_5c = 0x3f800000;
  SetMaterial(this,(GEMaterial *)0x0,(GEColor *)&local_68);
  return;
}

