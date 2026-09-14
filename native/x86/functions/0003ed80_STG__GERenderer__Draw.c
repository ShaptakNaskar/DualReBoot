/* 0003ed80 | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::URectangle<unsigned long> const&, STG::GEMaterial const*, STG::GEColor
   const&, bool) */

void __thiscall
STG::GERenderer::Draw
          (GERenderer *this,URectangle *param_1,GEMaterial *param_2,GEColor *param_3,bool param_4)

{
  float fVar1;
  int unaff_EBX;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 uStack_8;
  
  uStack_8 = 0x3ed86;
  FUN_0002e044();
  fVar1 = *(float *)(unaff_EBX + 0x48936);
  local_10 = (float)(*(uint *)(param_1 + 0xc) >> 0x10) * fVar1 +
             (float)(*(uint *)(param_1 + 0xc) & 0xffff);
  local_14 = (float)(*(uint *)(param_1 + 8) >> 0x10) * fVar1 +
             (float)(*(uint *)(param_1 + 8) & 0xffff);
  local_18 = (float)(*(uint *)(param_1 + 4) >> 0x10) * fVar1 +
             (float)(*(uint *)(param_1 + 4) & 0xffff);
  local_1c = (float)(*(uint *)param_1 >> 0x10) * fVar1 + (float)(*(uint *)param_1 & 0xffff);
  Draw(this,(URectangle *)&local_1c,param_2,param_3,param_4);
  return;
}

