/* 0003cdbc | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::GEModel const&, STG::MMatrix const&) */

void __thiscall STG::GERenderer::Draw(GERenderer *this,GEModel *param_1,MMatrix *param_2)

{
  int iVar1;
  GEModel GVar2;
  GEModel GVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  GEIndexBuffer *pGVar7;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined8 uVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_38 = *(undefined4 *)(param_1 + 0x88);
  local_34 = *(undefined4 *)(param_1 + 0x8c);
  local_30 = *(undefined4 *)(param_1 + 0x90);
  local_2c = __mulsf3(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
  iVar4 = __aeabi_fcmpgt(local_2c,0x3b800000);
  uVar8 = CONCAT44(extraout_s1,extraout_s0);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0x34);
    if (iVar4 != 0) {
      iVar5 = 0;
      do {
        iVar1 = iVar5 * 4;
        iVar5 = iVar5 + 1;
        uVar8 = VertexBufferInstall(this,*(GEVertexBuffer **)(*(int *)(param_1 + 0x7c) + iVar1));
      } while (iVar5 != iVar4);
    }
    GVar2 = param_1[0xa4];
    if (GVar2 == (GEModel)0x0) {
      GVar3 = param_1[0xb0];
    }
    else {
      GetFogEnabled();
      uVar8 = SetFogEnabled(SUB41(this,0));
      GVar3 = param_1[0xb0];
    }
    if (GVar3 != (GEModel)0x0) {
      GERendererAPI::GL_DepthRange((float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
    }
    uVar8 = GERendererAPI::GL_LoadMatrixMode(0x1700,param_2);
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar6 = 0;
      do {
        pGVar7 = *(GEIndexBuffer **)(*(int *)(param_1 + 0x80) + uVar6 * 4);
        SetMaterial(this,*(GEMaterial **)(*(int *)(param_1 + 0x84) + uVar6 * 4),(GEColor *)&local_38
                   );
        uVar8 = DrawElements(this,pGVar7);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x30));
    }
    if (iVar4 != 0) {
      iVar5 = 0;
      do {
        iVar1 = iVar5 * 4;
        iVar5 = iVar5 + 1;
        uVar8 = VertexBufferUninstall(this,*(GEVertexBuffer **)(*(int *)(param_1 + 0x7c) + iVar1));
      } while (iVar5 != iVar4);
    }
    if (GVar3 != (GEModel)0x0) {
      GERendererAPI::GL_DepthRange((float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
    }
    if (GVar2 != (GEModel)0x0) {
      SetFogEnabled(SUB41(this,0));
    }
  }
  return;
}

