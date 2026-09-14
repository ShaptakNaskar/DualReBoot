/* 0003c2e8 | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::UStringBase<unsigned short, unsigned short> const&, STG::GEFont
   const&, STG::MVector2&, STG::GEColor const&) */

void __thiscall
STG::GERenderer::Draw
          (GERenderer *this,UStringBase *param_1,GEFont *param_2,MVector2 *param_3,GEColor *param_4)

{
  int iVar1;
  GEVertexBuffer *this_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ushort uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  GEIndexBuffer *pGVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 local_64;
  GEColor *local_2c [2];
  
  this_00 = *(GEVertexBuffer **)(this + 0xcc);
  uVar10 = *(undefined4 *)(param_2 + 0x50);
  uVar11 = *(uint *)(this_00 + 0x10);
  local_64 = __subsf3(*(undefined4 *)(param_3 + 4),uVar10);
  local_2c[0] = (GEColor *)(DAT_0003c5cc + 0x3c33c);
  pGVar13 = *(GEIndexBuffer **)(this + 0xd0);
  puVar17 = *(undefined4 **)(this_00 + 0x14);
  uVar16 = *(undefined4 *)param_3;
  GERenderState<STG::GEColor>::SetState((GERenderState<STG::GEColor> *)local_2c,param_4);
  iVar14 = *(int *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x24) - iVar14 >> 1;
  if (iVar1 == 0) {
LAB_0003c51c:
    *(undefined4 *)param_3 = uVar16;
    uVar16 = __addsf3(local_64,uVar10);
    *(undefined4 *)(param_3 + 4) = uVar16;
    GERenderState<STG::GEColor>::SetState((GERenderState<STG::GEColor> *)local_2c,local_2c[0]);
    return;
  }
  uVar15 = 0;
  uVar19 = uVar15;
  do {
    uVar9 = *(ushort *)(iVar14 + uVar15 * 2);
    if (uVar9 == 9) {
      uVar9 = 0x20;
LAB_0003c3e0:
      puVar2 = (undefined4 *)GEFont::GetCharacter(param_2,uVar9);
      uVar3 = __floatsisf((int)*(short *)(puVar2 + 5));
      uVar4 = __floatsisf((int)*(short *)(puVar2 + 6));
      uVar5 = __floatsisf((int)*(short *)(puVar2 + 4));
      uVar5 = __addsf3(uVar16,uVar5);
      uVar6 = __floatsisf((int)*(short *)((int)puVar2 + 0x12));
      uVar6 = __subsf3(local_64,uVar6);
      uVar7 = __floatsisf((int)*(short *)((int)puVar2 + 0x16));
      uVar7 = __subsf3(uVar6,uVar7);
      uVar8 = puVar2[2];
      uVar12 = *puVar2;
      uVar20 = puVar2[1];
      uVar18 = puVar2[3];
      puVar17[1] = uVar7;
      puVar17[2] = 0;
      puVar17[7] = 0;
      *puVar17 = uVar5;
      puVar17[5] = uVar5;
      puVar17[6] = uVar6;
      uVar3 = __addsf3(uVar5,uVar3);
      uVar19 = uVar19 + 1;
      puVar17[10] = uVar3;
      puVar17[0xb] = uVar6;
      puVar17[0xc] = 0;
      puVar17[0xf] = uVar3;
      puVar17[0x11] = 0;
      puVar17[0x10] = uVar7;
      puVar17[4] = uVar18;
      puVar17[3] = uVar12;
      puVar17[8] = uVar12;
      puVar17[9] = uVar20;
      puVar17[0xe] = uVar20;
      puVar17[0x13] = uVar18;
      puVar17[0xd] = uVar8;
      puVar17[0x12] = uVar8;
      if (uVar19 < uVar11 >> 2) {
        puVar17 = puVar17 + 0x14;
      }
      else {
        GEVertexBuffer::UpdateBufferObject(this_00);
        VertexBufferInstall(this,this_00);
        DrawElements(this,pGVar13,uVar19 * 2);
        VertexBufferUninstall(this,this_00);
        uVar19 = 0;
        puVar17 = *(undefined4 **)(this_00 + 0x14);
      }
      uVar16 = __addsf3(uVar16,uVar4);
    }
    else {
      if (uVar9 != 10) goto LAB_0003c3e0;
      local_64 = __subsf3(local_64,uVar10);
      uVar16 = *(undefined4 *)param_3;
    }
    if (uVar15 + 1 == iVar1) {
      if (uVar19 != 0) {
        GEVertexBuffer::UpdateBufferObject(this_00);
        VertexBufferInstall(this,this_00);
        DrawElements(this,pGVar13,uVar19 << 1);
        VertexBufferUninstall(this,this_00);
      }
      goto LAB_0003c51c;
    }
    uVar15 = uVar15 + 1;
    iVar14 = *(int *)(param_1 + 0x28);
    if ((uint)(*(int *)(param_1 + 0x24) - iVar14 >> 1) <= uVar15) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_out_of_range((char *)((int)&DAT_0003c5cc + DAT_0003c5d0));
    }
  } while( true );
}

