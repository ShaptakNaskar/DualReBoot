/* 0003eb10 | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::URectangle<float> const&, STG::GEMaterial const*, STG::GEColor const&,
   bool) */

void __thiscall
STG::GERenderer::Draw
          (GERenderer *this,URectangle *param_1,GEMaterial *param_2,GEColor *param_3,bool param_4)

{
  uint uVar1;
  GEVertexBuffer *this_00;
  GEIndexBuffer *pGVar2;
  float *pfVar3;
  float fVar4;
  int unaff_EBX;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  GEColor *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0x3eb1b;
  FUN_0002e044();
  fVar7 = *(float *)param_1;
  uVar1 = *(uint *)(unaff_EBX + 0x48ce5);
  fVar4 = *(float *)(unaff_EBX + 0x48bbd);
  this_00 = *(GEVertexBuffer **)(this + 0xd4);
  pGVar2 = *(GEIndexBuffer **)(this + 0xd8);
  pfVar3 = *(float **)(this_00 + 0x14);
  if ((float)((uint)fVar7 & uVar1) < fVar4) {
    fVar7 = (float)(int)fVar7 -
            (float)(*(uint *)(unaff_EBX + 0x48b8d) & -(uint)(fVar7 < (float)(int)fVar7));
  }
  fVar6 = *(float *)(param_1 + 4);
  if ((float)((uint)fVar6 & uVar1) < fVar4) {
    fVar6 = (float)(int)fVar6 -
            (float)(*(uint *)(unaff_EBX + 0x48b8d) & -(uint)(fVar6 < (float)(int)fVar6));
  }
  fVar5 = *(float *)(param_1 + 8);
  if ((float)((uint)fVar5 & uVar1) < fVar4) {
    fVar5 = (float)(int)fVar5 -
            (float)(*(uint *)(unaff_EBX + 0x48b8d) & -(uint)(fVar5 < (float)(int)fVar5));
  }
  fVar8 = *(float *)(param_1 + 0xc);
  if ((float)((uint)fVar8 & uVar1) < fVar4) {
    fVar8 = (float)(int)fVar8 -
            (float)(*(uint *)(unaff_EBX + 0x48b8d) & -(uint)(fVar8 < (float)(int)fVar8));
  }
  fVar4 = 0.0;
  *pfVar3 = fVar7;
  pfVar3[2] = 0.0;
  pfVar3[1] = fVar8;
  pfVar3[7] = 0.0;
  pfVar3[5] = fVar7;
  pfVar3[0xc] = 0.0;
  pfVar3[6] = fVar6;
  pfVar3[0x11] = 0.0;
  pfVar3[10] = fVar5;
  pfVar3[3] = 0.0;
  pfVar3[0xb] = fVar6;
  pfVar3[0xf] = fVar5;
  pfVar3[0x10] = fVar8;
  if (param_4) {
    pfVar3[4] = 0.0;
    pfVar3[8] = 0.0;
    pfVar3[9] = 1.0;
    pfVar3[0xd] = 1.0;
    pfVar3[0xe] = 1.0;
  }
  else {
    pfVar3[8] = 0.0;
    pfVar3[9] = 0.0;
    pfVar3[0xe] = 0.0;
    pfVar3[4] = 1.0;
    pfVar3[0xd] = 1.0;
    fVar4 = 1.0;
  }
  pfVar3[0x13] = fVar4;
  pfVar3[0x12] = 1.0;
  GEVertexBuffer::UpdateBufferObject(this_00);
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  SetMaterial(this,param_2,(GEColor *)&local_30);
  local_34 = (GEColor *)(unaff_EBX + 0x5d795);
  GERenderState<STG::GEColor>::SetState((GERenderState<STG::GEColor> *)&local_34,param_3);
  Draw(this,this_00,pGVar2);
  GERenderState<STG::GEColor>::SetState((GERenderState<STG::GEColor> *)&local_34,local_34);
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  SetMaterial(this,(GEMaterial *)0x0,(GEColor *)&local_20);
  return;
}

