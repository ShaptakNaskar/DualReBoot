/* 0003ad8c | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::URectangle<float> const&, STG::GEMaterial const*, STG::GEColor const&,
   bool) */

void __thiscall
STG::GERenderer::Draw
          (GERenderer *this,URectangle *param_1,GEMaterial *param_2,GEColor *param_3,bool param_4)

{
  float fVar1;
  float *pfVar2;
  GEVertexBuffer *this_00;
  GEIndexBuffer *pGVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  GEColor *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  fVar4 = floorf(*(float *)param_1);
  fVar5 = floorf(*(float *)(param_1 + 4));
  fVar6 = floorf(*(float *)(param_1 + 8));
  this_00 = *(GEVertexBuffer **)(this + 0xd4);
  fVar7 = floorf(*(float *)(param_1 + 0xc));
  pGVar3 = *(GEIndexBuffer **)(this + 0xd8);
  fVar1 = 0.0;
  pfVar2 = *(float **)(this_00 + 0x14);
  *pfVar2 = fVar4;
  pfVar2[5] = fVar4;
  pfVar2[6] = fVar5;
  pfVar2[2] = 0.0;
  pfVar2[10] = fVar6;
  pfVar2[7] = 0.0;
  pfVar2[0xb] = fVar5;
  pfVar2[0xc] = 0.0;
  pfVar2[0xf] = fVar6;
  pfVar2[0x11] = 0.0;
  pfVar2[3] = 0.0;
  pfVar2[1] = fVar7;
  pfVar2[0x10] = fVar7;
  if (param_4) {
    pfVar2[4] = 0.0;
    pfVar2[8] = 0.0;
    pfVar2[9] = 1.0;
    pfVar2[0xd] = 1.0;
    pfVar2[0xe] = 1.0;
  }
  else {
    pfVar2[8] = 0.0;
    pfVar2[9] = 0.0;
    pfVar2[0xe] = 0.0;
    fVar1 = 1.0;
    pfVar2[4] = 1.0;
    pfVar2[0xd] = 1.0;
  }
  pfVar2[0x13] = fVar1;
  pfVar2[0x12] = 1.0;
  GEVertexBuffer::UpdateBufferObject(this_00);
  local_50 = 0x3f800000;
  local_4c = 0x3f800000;
  local_48 = 0x3f800000;
  local_44 = 0x3f800000;
  SetMaterial(this,param_2,(GEColor *)&local_50);
  local_54 = (GEColor *)(DAT_0003aef0 + 0x3ae88);
  GERenderState<STG::GEColor>::SetState((GERenderState<STG::GEColor> *)&local_54,param_3);
  Draw(this,this_00,pGVar3);
  GERenderState<STG::GEColor>::SetState((GERenderState<STG::GEColor> *)&local_54,local_54);
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  SetMaterial(this,(GEMaterial *)0x0,(GEColor *)&local_40);
  return;
}

