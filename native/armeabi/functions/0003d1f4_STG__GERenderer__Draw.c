/* 0003d1f4 | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::URectangle<float> const&, STG::GEMaterial const*, STG::GEColor const&,
   bool) */

void STG::GERenderer::Draw(URectangle *param_1,GEMaterial *param_2,GEColor *param_3,bool param_4)

{
  undefined4 extraout_r0;
  undefined4 extraout_r0_00;
  undefined4 extraout_r0_01;
  undefined4 extraout_r0_02;
  undefined4 uVar1;
  undefined4 *puVar2;
  GEVertexBuffer *this;
  GEIndexBuffer *pGVar3;
  float in_s0;
  float fVar4;
  char in_stack_00000000;
  GEColor *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  fVar4 = floorf(in_s0);
  this = *(GEVertexBuffer **)(param_1 + 0xd4);
  fVar4 = floorf(fVar4);
  fVar4 = floorf(fVar4);
  floorf(fVar4);
  puVar2 = *(undefined4 **)(this + 0x14);
  uVar1 = 0;
  pGVar3 = *(GEIndexBuffer **)(param_1 + 0xd8);
  *puVar2 = extraout_r0;
  puVar2[5] = extraout_r0;
  puVar2[1] = extraout_r0_02;
  puVar2[2] = 0;
  puVar2[6] = extraout_r0_00;
  puVar2[7] = 0;
  puVar2[10] = extraout_r0_01;
  puVar2[0xb] = extraout_r0_00;
  puVar2[0xc] = 0;
  puVar2[0xf] = extraout_r0_01;
  puVar2[0x10] = extraout_r0_02;
  puVar2[0x11] = 0;
  puVar2[3] = 0;
  if (in_stack_00000000 == '\0') {
    puVar2[8] = 0;
    puVar2[4] = 0x3f800000;
    puVar2[9] = 0;
    puVar2[0xd] = 0x3f800000;
    puVar2[0xe] = 0;
    uVar1 = 0x3f800000;
  }
  else {
    puVar2[9] = 0x3f800000;
    puVar2[0xd] = 0x3f800000;
    puVar2[0xe] = 0x3f800000;
    puVar2[4] = 0;
    puVar2[8] = 0;
  }
  puVar2[0x13] = uVar1;
  puVar2[0x12] = 0x3f800000;
  GEVertexBuffer::UpdateBufferObject(this);
  local_48 = 0x3f800000;
  local_44 = 0x3f800000;
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  SetMaterial((GERenderer *)param_1,(GEMaterial *)param_3,(GEColor *)&local_48);
  local_4c = (GEColor *)(DAT_0003d358 + 0x3d2f0);
  GERenderState<STG::GEColor>::SetState
            ((GERenderState<STG::GEColor> *)&local_4c,(GEColor *)(uint)param_4);
  Draw((GERenderer *)param_1,this,pGVar3);
  GERenderState<STG::GEColor>::SetState((GERenderState<STG::GEColor> *)&local_4c,local_4c);
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  SetMaterial((GERenderer *)param_1,(GEMaterial *)0x0,(GEColor *)&local_38);
  return;
}

