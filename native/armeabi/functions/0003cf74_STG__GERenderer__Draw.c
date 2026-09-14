/* 0003cf74 | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::MVector2 const&, STG::GEMaterial const*) */

void STG::GERenderer::Draw(MVector2 *param_1,GEMaterial *param_2)

{
  undefined4 extraout_r0;
  undefined4 extraout_r0_00;
  undefined4 uVar1;
  undefined4 uVar2;
  GEMaterial *in_r2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  GEVertexBuffer *pGVar9;
  GEIndexBuffer *pGVar10;
  float in_s0;
  float __x;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar4 = *(int *)(in_r2 + 0x2c);
  iVar3 = *(int *)(in_r2 + 0x30);
  if (iVar4 == 0) {
    uVar8 = 0;
    uVar5 = 0;
  }
  else {
    uVar8 = *(uint *)(iVar4 + 0x2c);
    uVar5 = *(uint *)(iVar4 + 0x30);
  }
  uVar7 = uVar5;
  if (iVar3 != 0) {
    if (uVar8 < *(uint *)(iVar3 + 0x2c)) {
      uVar8 = *(uint *)(iVar3 + 0x2c);
    }
    uVar7 = *(uint *)(iVar3 + 0x30);
    if (*(uint *)(iVar3 + 0x30) < uVar5) {
      uVar7 = uVar5;
    }
  }
  __x = floorf(in_s0);
  floorf(__x);
  uVar1 = __floatunsisf(uVar8);
  uVar1 = __addsf3(uVar1,extraout_r0);
  uVar2 = __floatunsisf(uVar7);
  uVar2 = __addsf3(uVar2,extraout_r0_00);
  pGVar9 = *(GEVertexBuffer **)(param_1 + 0xd4);
  pGVar10 = *(GEIndexBuffer **)(param_1 + 0xd8);
  puVar6 = *(undefined4 **)(pGVar9 + 0x14);
  *puVar6 = extraout_r0;
  puVar6[1] = extraout_r0_00;
  puVar6[2] = 0;
  puVar6[5] = extraout_r0;
  puVar6[6] = uVar2;
  puVar6[7] = 0;
  puVar6[10] = uVar1;
  puVar6[0xb] = uVar2;
  puVar6[0xc] = 0;
  puVar6[0xf] = uVar1;
  puVar6[0x10] = extraout_r0_00;
  puVar6[0x11] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0x3f800000;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[0xd] = 0x3f800000;
  puVar6[0xe] = 0;
  puVar6[0x12] = 0x3f800000;
  puVar6[0x13] = 0x3f800000;
  local_48 = 0x3f800000;
  local_44 = 0x3f800000;
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  SetMaterial((GERenderer *)param_1,in_r2,(GEColor *)&local_48);
  Draw((GERenderer *)param_1,pGVar9,pGVar10);
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  SetMaterial((GERenderer *)param_1,(GEMaterial *)0x0,(GEColor *)&local_38);
  return;
}

