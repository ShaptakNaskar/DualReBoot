/* 0003aef4 | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::URectangle<unsigned long> const&, STG::GEMaterial const*, STG::GEColor
   const&, bool) */

void __thiscall
STG::GERenderer::Draw
          (GERenderer *this,URectangle *param_1,GEMaterial *param_2,GEColor *param_3,bool param_4)

{
  uint in_fpscr;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_1c = VectorUnsignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x16) & 3);
  local_18 = VectorUnsignedToFloat(*(undefined4 *)(param_1 + 8),(byte)(in_fpscr >> 0x16) & 3);
  local_14 = VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  local_20 = VectorUnsignedToFloat(*(undefined4 *)param_1,(byte)(in_fpscr >> 0x16) & 3);
  Draw(this,(URectangle *)&local_20,param_2,param_3,param_4);
  return;
}

