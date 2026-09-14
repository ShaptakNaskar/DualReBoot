/* 0003d540 | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::UStringBase<unsigned short, unsigned short> const&, STG::GEFont
   const&, STG::MVector2&, STG::GEColor const&) */

void __thiscall
STG::GERenderer::Draw
          (GERenderer *this,UStringBase *param_1,GEFont *param_2,MVector2 *param_3,GEColor *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  GEVertexBuffer *this_00;
  GEIndexBuffer *pGVar8;
  uint uVar9;
  float fVar10;
  ushort uVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int unaff_EBX;
  float *pfVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint local_4c;
  GEColor *local_20 [3];
  undefined4 uStack_14;
  
  uVar16 = 0;
  uStack_14 = 0x3d54b;
  FUN_0002e044();
  this_00 = *(GEVertexBuffer **)(this + 0xcc);
  pGVar8 = *(GEIndexBuffer **)(this + 0xd0);
  uVar9 = *(uint *)(this_00 + 0x10);
  pfVar15 = *(float **)(this_00 + 0x14);
  fVar1 = *(float *)(param_2 + 0x50);
  fVar19 = *(float *)(param_3 + 4) - fVar1;
  fVar18 = *(float *)param_3;
  local_20[0] = (GEColor *)(unaff_EBX + 0x5ed65);
  GERenderState<STG::GEColor>::SetState((GERenderState<STG::GEColor> *)local_20,param_4);
  iVar14 = *(int *)(param_1 + 0x28);
  local_4c = 0;
  iVar12 = *(int *)(param_1 + 0x24) - iVar14 >> 1;
  if (iVar12 != 0) {
    while (uVar11 = *(ushort *)(iVar14 + uVar16 * 2), uVar11 == 9) {
      uVar11 = 0x20;
LAB_0003d659:
      pfVar13 = (float *)GEFont::GetCharacter(param_2,uVar11);
      sVar4 = *(short *)(pfVar13 + 5);
      fVar10 = *pfVar13;
      sVar5 = *(short *)(pfVar13 + 6);
      fVar2 = pfVar13[1];
      sVar6 = *(short *)(pfVar13 + 4);
      fVar3 = pfVar13[2];
      fVar20 = fVar19 - (float)(int)*(short *)((int)pfVar13 + 0x12);
      fVar21 = pfVar13[3];
      sVar7 = *(short *)((int)pfVar13 + 0x16);
      pfVar15[2] = 0.0;
      fVar17 = (float)(int)sVar6 + fVar18;
      pfVar15[0x13] = fVar21;
      pfVar15[7] = 0.0;
      pfVar15[0xc] = 0.0;
      pfVar15[0x11] = 0.0;
      fVar21 = fVar20 - (float)(int)sVar7;
      *pfVar15 = fVar17;
      pfVar15[5] = fVar17;
      pfVar15[3] = fVar10;
      pfVar15[8] = fVar10;
      pfVar15[6] = fVar20;
      pfVar15[1] = fVar21;
      pfVar15[0x10] = fVar21;
      pfVar15[10] = (float)(int)sVar4 + fVar17;
      pfVar15[0xb] = fVar20;
      pfVar15[0xf] = (float)(int)sVar4 + fVar17;
      pfVar15[4] = pfVar15[0x13];
      pfVar15[9] = fVar2;
      pfVar15[0xd] = fVar3;
      local_4c = local_4c + 1;
      pfVar15[0xe] = fVar2;
      pfVar15[0x12] = fVar3;
      pfVar15 = pfVar15 + 0x14;
      if (uVar9 >> 2 <= local_4c) {
        GEVertexBuffer::UpdateBufferObject(this_00);
        VertexBufferInstall(this,this_00);
        DrawElements(this,pGVar8,local_4c * 2);
        VertexBufferUninstall(this,this_00);
        local_4c = 0;
        pfVar15 = *(float **)(this_00 + 0x14);
      }
      fVar18 = fVar18 + (float)(int)sVar5;
      if (uVar16 + 1 == iVar12) goto LAB_0003d77d;
LAB_0003d638:
      uVar16 = uVar16 + 1;
      iVar14 = *(int *)(param_1 + 0x28);
      if ((uint)(*(int *)(param_1 + 0x24) - iVar14 >> 1) <= uVar16) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_out_of_range((char *)(unaff_EBX + 0x49dc1));
      }
    }
    if (uVar11 != 10) goto LAB_0003d659;
    fVar18 = *(float *)param_3;
    fVar19 = fVar19 - fVar1;
    if (uVar16 + 1 != iVar12) goto LAB_0003d638;
LAB_0003d77d:
    if (local_4c != 0) {
      GEVertexBuffer::UpdateBufferObject(this_00);
      VertexBufferInstall(this,this_00);
      DrawElements(this,pGVar8,local_4c * 2);
      VertexBufferUninstall(this,this_00);
    }
  }
  *(float *)param_3 = fVar18;
  *(float *)(param_3 + 4) = fVar19 + fVar1;
  GERenderState<STG::GEColor>::SetState((GERenderState<STG::GEColor> *)local_20,local_20[0]);
  return;
}

