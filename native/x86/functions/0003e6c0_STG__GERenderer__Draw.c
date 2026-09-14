/* 0003e6c0 | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::MVector2 const&, STG::GEMaterial const*) */

void __thiscall STG::GERenderer::Draw(GERenderer *this,MVector2 *param_1,GEMaterial *param_2)

{
  float fVar1;
  int iVar2;
  GEVertexBuffer *pGVar3;
  GEIndexBuffer *pGVar4;
  float *pfVar5;
  uint uVar6;
  uint extraout_ECX;
  uint uVar7;
  uint uVar8;
  int unaff_EBX;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0x3e6cd;
  FUN_0002e044();
  iVar2 = *(int *)(param_2 + 0x2c);
  uVar8 = 0;
  uVar7 = extraout_ECX;
  if (iVar2 != 0) {
    uVar8 = *(uint *)(iVar2 + 0x2c);
    uVar7 = *(uint *)(iVar2 + 0x30);
  }
  iVar2 = *(int *)(param_2 + 0x30);
  uVar6 = uVar7;
  if (iVar2 != 0) {
    if (uVar8 < *(uint *)(iVar2 + 0x2c)) {
      uVar8 = *(uint *)(iVar2 + 0x2c);
    }
    uVar6 = *(uint *)(iVar2 + 0x30);
    if (*(uint *)(iVar2 + 0x30) < uVar7) {
      uVar6 = uVar7;
    }
  }
  fVar11 = *(float *)param_1;
  if ((float)((uint)fVar11 & *(uint *)(unaff_EBX + 0x49133)) < *(float *)(unaff_EBX + 0x4900b)) {
    fVar11 = (float)(int)fVar11 -
             (float)(*(uint *)(unaff_EBX + 0x48fdb) & -(uint)(fVar11 < (float)(int)fVar11));
  }
  fVar10 = *(float *)(param_1 + 4);
  if ((float)((uint)fVar10 & *(uint *)(unaff_EBX + 0x49133)) < *(float *)(unaff_EBX + 0x4900b)) {
    fVar10 = (float)(int)fVar10 -
             (float)(*(uint *)(unaff_EBX + 0x48fdb) & -(uint)(fVar10 < (float)(int)fVar10));
  }
  pGVar3 = *(GEVertexBuffer **)(this + 0xd4);
  fVar1 = *(float *)(unaff_EBX + 0x48fef);
  pGVar4 = *(GEIndexBuffer **)(this + 0xd8);
  fVar9 = (float)(uVar8 >> 0x10) * fVar1 + (float)(uVar8 & 0xffff) + fVar11;
  pfVar5 = *(float **)(pGVar3 + 0x14);
  *pfVar5 = fVar11;
  local_30 = 0x3f800000;
  pfVar5[1] = fVar10;
  local_2c = 0x3f800000;
  pfVar5[5] = fVar11;
  pfVar5[2] = 0.0;
  pfVar5[3] = 0.0;
  pfVar5[10] = fVar9;
  pfVar5[7] = 0.0;
  pfVar5[0xf] = fVar9;
  pfVar5[0xc] = 0.0;
  pfVar5[0x10] = fVar10;
  pfVar5[0x11] = 0.0;
  fVar10 = (float)(uVar6 >> 0x10) * fVar1 + (float)(uVar6 & 0xffff) + fVar10;
  pfVar5[4] = 1.0;
  pfVar5[8] = 0.0;
  pfVar5[9] = 0.0;
  pfVar5[0xd] = 1.0;
  pfVar5[0xe] = 0.0;
  pfVar5[0x12] = 1.0;
  pfVar5[0x13] = 1.0;
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  pfVar5[6] = fVar10;
  pfVar5[0xb] = fVar10;
  SetMaterial(this,param_2,(GEColor *)&local_30);
  Draw(this,pGVar3,pGVar4);
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  SetMaterial(this,(GEMaterial *)0x0,(GEColor *)&local_20);
  return;
}

