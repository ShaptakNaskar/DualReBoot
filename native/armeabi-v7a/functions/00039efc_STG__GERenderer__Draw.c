/* 00039efc | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::UStringBase<unsigned short, unsigned short> const&, STG::GEFont
   const&, STG::MVector2&, STG::GEColor const&) */

void __thiscall
STG::GERenderer::Draw
          (GERenderer *this,UStringBase *param_1,GEFont *param_2,MVector2 *param_3,GEColor *param_4)

{
  ulong uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  float *pfVar6;
  float fVar7;
  ushort uVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  GEVertexBuffer *this_00;
  uint uVar14;
  float *pfVar15;
  uint uVar16;
  GEIndexBuffer *pGVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  GEColor *local_3c [2];
  
  fVar22 = *(float *)(param_2 + 0x50);
  fVar20 = *(float *)param_3;
  fVar21 = *(float *)(param_3 + 4) - fVar22;
  this_00 = *(GEVertexBuffer **)(this + 0xcc);
  local_3c[0] = (GEColor *)(DAT_0003a160 + 0x39f40);
  uVar11 = *(uint *)(this_00 + 0x10);
  pfVar15 = *(float **)(this_00 + 0x14);
  pGVar17 = *(GEIndexBuffer **)(this + 0xd0);
  GERenderState<STG::GEColor>::SetState((GERenderState<STG::GEColor> *)local_3c,param_4);
  iVar12 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x24) - iVar12 >> 1;
  if (iVar2 == 0) {
LAB_0003a0bc:
    *(float *)param_3 = fVar20;
    *(float *)(param_3 + 4) = fVar21 + fVar22;
    GERenderState<STG::GEColor>::SetState((GERenderState<STG::GEColor> *)local_3c,local_3c[0]);
    return;
  }
  uVar14 = 0;
  uVar16 = uVar14;
  do {
    uVar8 = *(ushort *)(iVar12 + uVar14 * 2);
    if (uVar8 == 9) {
      uVar8 = 0x20;
LAB_00039fd4:
      uVar16 = uVar16 + 1;
      pfVar6 = (float *)GEFont::GetCharacter(param_2,uVar8);
      fVar18 = (float)VectorSignedToFloat((int)*(short *)(pfVar6 + 4),(byte)(in_fpscr >> 0x16) & 3);
      sVar3 = *(short *)(pfVar6 + 5);
      sVar4 = *(short *)((int)pfVar6 + 0x16);
      fVar9 = *pfVar6;
      sVar5 = *(short *)(pfVar6 + 6);
      fVar13 = pfVar6[2];
      fVar19 = (float)VectorSignedToFloat((int)*(short *)((int)pfVar6 + 0x12),
                                          (byte)(in_fpscr >> 0x16) & 3);
      fVar10 = pfVar6[1];
      fVar7 = pfVar6[3];
      pfVar15[2] = 0.0;
      pfVar15[7] = 0.0;
      pfVar15[0xc] = 0.0;
      fVar18 = fVar20 + fVar18;
      pfVar15[0x11] = 0.0;
      pfVar15[3] = fVar9;
      pfVar15[4] = fVar7;
      pfVar15[8] = fVar9;
      pfVar15[9] = fVar10;
      pfVar15[0xd] = fVar13;
      pfVar15[0xe] = fVar10;
      pfVar15[0x12] = fVar13;
      pfVar15[0x13] = fVar7;
      fVar19 = fVar21 - fVar19;
      *pfVar15 = fVar18;
      pfVar15[5] = fVar18;
      fVar7 = (float)VectorSignedToFloat((int)sVar3,(byte)(in_fpscr >> 0x16) & 3);
      pfVar15[6] = fVar19;
      pfVar15[0xb] = fVar19;
      fVar9 = (float)VectorSignedToFloat((int)sVar4,(byte)(in_fpscr >> 0x16) & 3);
      pfVar15[10] = fVar18 + fVar7;
      pfVar15[0xf] = fVar18 + fVar7;
      pfVar15[1] = fVar19 - fVar9;
      fVar7 = (float)VectorSignedToFloat((int)sVar5,(byte)(in_fpscr >> 0x16) & 3);
      pfVar15[0x10] = fVar19 - fVar9;
      if (uVar16 < uVar11 >> 2) {
        pfVar15 = pfVar15 + 0x14;
      }
      else {
        GEVertexBuffer::UpdateBufferObject(this_00);
        VertexBufferInstall(this,this_00);
        uVar1 = uVar16 * 2;
        uVar16 = 0;
        DrawElements(this,pGVar17,uVar1);
        VertexBufferUninstall(this,this_00);
        pfVar15 = *(float **)(this_00 + 0x14);
      }
      fVar20 = fVar20 + fVar7;
    }
    else {
      if (uVar8 != 10) goto LAB_00039fd4;
      fVar20 = *(float *)param_3;
      fVar21 = fVar21 - fVar22;
    }
    if (uVar14 + 1 == iVar2) {
      if (uVar16 != 0) {
        GEVertexBuffer::UpdateBufferObject(this_00);
        VertexBufferInstall(this,this_00);
        DrawElements(this,pGVar17,uVar16 << 1);
        VertexBufferUninstall(this,this_00);
      }
      goto LAB_0003a0bc;
    }
    uVar14 = uVar14 + 1;
    iVar12 = *(int *)(param_1 + 0x28);
    if ((uint)(*(int *)(param_1 + 0x24) - iVar12 >> 1) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_out_of_range((char *)((int)&DAT_0003a160 + DAT_0003a164));
    }
  } while( true );
}

