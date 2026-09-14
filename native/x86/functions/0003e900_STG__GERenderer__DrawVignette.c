/* 0003e900 | STG::GERenderer::DrawVignette */

/* STG::GERenderer::DrawVignette() */

void __thiscall STG::GERenderer::DrawVignette(GERenderer *this)

{
  int unaff_EBX;
  MMatrix *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  MMatrix local_5c [76];
  
  FUN_0002e044();
  local_7c = 0x3f800000;
  local_78 = 0x3f800000;
  local_74 = 0x3f800000;
  local_70 = 0x3f800000;
  SetMaterial(this,*(GEMaterial **)(this + 0xe4),(GEColor *)&local_7c);
  MMatrix::MakeIdentity(local_5c);
  MMatrix::SetScale(local_5c,(float)(*(uint *)(this + 0x36c) >> 0x10) *
                             *(float *)(unaff_EBX + 0x48da2) +
                             (float)(*(uint *)(this + 0x36c) & 0xffff),
                    (float)(*(uint *)(this + 0x370) >> 0x10) * *(float *)(unaff_EBX + 0x48da2) +
                    (float)(*(uint *)(this + 0x370) & 0xffff),1.0);
  local_80 = local_5c;
  GERenderState<STG::MMatrix>::SetState((GERenderState<STG::MMatrix> *)&local_80,local_5c);
  Draw(this,*(GEVertexBuffer **)(this + 0xdc),*(GEIndexBuffer **)(this + 0xe0));
  GERenderState<STG::MMatrix>::RestoreState();
  local_6c = 0x3f800000;
  local_68 = 0x3f800000;
  local_64 = 0x3f800000;
  local_60 = 0x3f800000;
  SetMaterial(this,(GEMaterial *)0x0,(GEColor *)&local_6c);
  return;
}

