/* 0003e430 | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::GEModel const&, STG::MMatrix const&) */

void __thiscall STG::GERenderer::Draw(GERenderer *this,GEModel *param_1,MMatrix *param_2)

{
  int iVar1;
  GEModel GVar2;
  GEModel GVar3;
  int iVar4;
  GEIndexBuffer *pGVar5;
  int unaff_EBX;
  int iVar6;
  uint uVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  
  local_14 = 3.5738e-40;
  FUN_0002e044();
  local_14 = *(float *)(param_1 + 0x98) * *(float *)(param_1 + 0x94);
  local_20 = *(undefined4 *)(param_1 + 0x88);
  local_1c = *(undefined4 *)(param_1 + 0x8c);
  local_18 = *(undefined4 *)(param_1 + 0x90);
  if (*(float *)(unaff_EBX + 0x49299) <= local_14 && local_14 != *(float *)(unaff_EBX + 0x49299)) {
    iVar4 = *(int *)(param_1 + 0x34);
    if (iVar4 != 0) {
      iVar6 = 0;
      do {
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        VertexBufferInstall(this,*(GEVertexBuffer **)(*(int *)(param_1 + 0x7c) + iVar1));
      } while (iVar6 != iVar4);
    }
    GVar2 = param_1[0xa4];
    if (GVar2 == (GEModel)0x0) {
      GVar3 = param_1[0xb0];
    }
    else {
      GetFogEnabled();
      SetFogEnabled(SUB41(this,0));
      GVar3 = param_1[0xb0];
    }
    if (GVar3 != (GEModel)0x0) {
      GERendererAPI::GL_DepthRange(*(float *)(param_1 + 0xa8),*(float *)(param_1 + 0xac));
    }
    GERendererAPI::GL_LoadMatrixMode(0x1700,param_2);
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar7 = 0;
      do {
        pGVar5 = *(GEIndexBuffer **)(*(int *)(param_1 + 0x80) + uVar7 * 4);
        iVar6 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        SetMaterial(this,*(GEMaterial **)(*(int *)(param_1 + 0x84) + iVar6),(GEColor *)&local_20);
        DrawElements(this,pGVar5);
      } while (uVar7 < *(uint *)(param_1 + 0x30));
    }
    if (iVar4 != 0) {
      iVar6 = 0;
      do {
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        VertexBufferUninstall(this,*(GEVertexBuffer **)(*(int *)(param_1 + 0x7c) + iVar1));
      } while (iVar6 != iVar4);
    }
    if (GVar3 != (GEModel)0x0) {
      GERendererAPI::GL_DepthRange(0.0,1.0);
    }
    if (GVar2 != (GEModel)0x0) {
      SetFogEnabled(SUB41(this,0));
      return;
    }
  }
  return;
}

