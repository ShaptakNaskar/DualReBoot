/* 0003ab1c | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::MVector2 const&, STG::GEMaterial const*) */

void __thiscall STG::GERenderer::Draw(GERenderer *this,MVector2 *param_1,GEMaterial *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  GEVertexBuffer *pGVar7;
  GEIndexBuffer *pGVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar2 = *(int *)(param_2 + 0x2c);
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar2 == 0) {
    uVar3 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(iVar2 + 0x2c);
    uVar3 = *(uint *)(iVar2 + 0x30);
  }
  uVar5 = uVar3;
  if (iVar1 != 0) {
    if (uVar6 < *(uint *)(iVar1 + 0x2c)) {
      uVar6 = *(uint *)(iVar1 + 0x2c);
    }
    uVar5 = *(uint *)(iVar1 + 0x30);
    if (*(uint *)(iVar1 + 0x30) < uVar3) {
      uVar5 = uVar3;
    }
  }
  fVar9 = floorf(*(float *)param_1);
  fVar10 = floorf(*(float *)(param_1 + 4));
  pGVar7 = *(GEVertexBuffer **)(this + 0xd4);
  pGVar8 = *(GEIndexBuffer **)(this + 0xd8);
  fVar11 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  pfVar4 = *(float **)(pGVar7 + 0x14);
  *pfVar4 = fVar9;
  pfVar4[5] = fVar9;
  local_48 = 0x3f800000;
  pfVar4[2] = 0.0;
  pfVar4[3] = 0.0;
  pfVar4[7] = 0.0;
  fVar12 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
  pfVar4[0xc] = 0.0;
  pfVar4[0x11] = 0.0;
  pfVar4[4] = 1.0;
  pfVar4[8] = 0.0;
  pfVar4[9] = 0.0;
  pfVar4[0xd] = 1.0;
  pfVar4[0xe] = 0.0;
  pfVar4[0x12] = 1.0;
  pfVar4[0x13] = 1.0;
  pfVar4[10] = fVar11 + fVar9;
  pfVar4[0xf] = fVar11 + fVar9;
  pfVar4[1] = fVar10;
  pfVar4[0x10] = fVar10;
  local_44 = 0x3f800000;
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  pfVar4[6] = fVar12 + fVar10;
  pfVar4[0xb] = fVar12 + fVar10;
  SetMaterial(this,param_2,(GEColor *)&local_48);
  Draw(this,pGVar7,pGVar8);
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  SetMaterial(this,(GEMaterial *)0x0,(GEColor *)&local_38);
  return;
}

