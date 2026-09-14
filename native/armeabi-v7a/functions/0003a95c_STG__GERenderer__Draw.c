/* 0003a95c | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::GEModel const&, STG::MMatrix const&) */

void __thiscall STG::GERenderer::Draw(GERenderer *this,GEModel *param_1,MMatrix *param_2)

{
  int iVar1;
  GEModel GVar2;
  GEModel GVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  GEIndexBuffer *pGVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  
  local_2c = *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x98);
  local_38 = *(undefined4 *)(param_1 + 0x88);
  local_34 = *(undefined4 *)(param_1 + 0x8c);
  local_30 = *(undefined4 *)(param_1 + 0x90);
  if (DAT_0003aae4 < local_2c) {
    iVar6 = *(int *)(param_1 + 0x34);
    if (iVar6 != 0) {
      iVar4 = 0;
      do {
        iVar1 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        VertexBufferInstall(this,*(GEVertexBuffer **)(*(int *)(param_1 + 0x7c) + iVar1));
      } while (iVar4 != iVar6);
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
      uVar5 = 0;
      do {
        pGVar7 = *(GEIndexBuffer **)(*(int *)(param_1 + 0x80) + uVar5 * 4);
        iVar4 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        SetMaterial(this,*(GEMaterial **)(*(int *)(param_1 + 0x84) + iVar4),(GEColor *)&local_38);
        DrawElements(this,pGVar7);
      } while (uVar5 < *(uint *)(param_1 + 0x30));
    }
    if (iVar6 != 0) {
      iVar4 = 0;
      do {
        iVar1 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        VertexBufferUninstall(this,*(GEVertexBuffer **)(*(int *)(param_1 + 0x7c) + iVar1));
      } while (iVar4 != iVar6);
    }
    if (GVar3 != (GEModel)0x0) {
      GERendererAPI::GL_DepthRange(DAT_0003aae8,1.0);
    }
    if (GVar2 != (GEModel)0x0) {
      SetFogEnabled(SUB41(this,0));
    }
  }
  return;
}

