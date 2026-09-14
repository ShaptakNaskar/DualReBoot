/* 0003ac5c | STG::GERenderer::DrawVignette */

/* STG::GERenderer::DrawVignette() */

void __thiscall STG::GERenderer::DrawVignette(GERenderer *this)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  MMatrix *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  MMatrix aMStack_58 [64];
  
  local_78 = 0x3f800000;
  local_74 = 0x3f800000;
  local_70 = 0x3f800000;
  local_6c = 0x3f800000;
  SetMaterial(this,*(GEMaterial **)(this + 0xe4),(GEColor *)&local_78);
  MMatrix::MakeIdentity(aMStack_58);
  fVar1 = (float)VectorUnsignedToFloat(*(undefined4 *)(this + 0x36c),(byte)(in_fpscr >> 0x16) & 3);
  fVar2 = (float)VectorUnsignedToFloat(*(undefined4 *)(this + 0x370),(byte)(in_fpscr >> 0x16) & 3);
  MMatrix::SetScale(aMStack_58,fVar1,fVar2,1.0);
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

