/* 000369f8 | STG::GECamera::ConvertClipToWorld */

/* STG::GECamera::ConvertClipToWorld(float, float, STG::MVector3&, STG::MVector3&) const */

void __thiscall
STG::GECamera::ConvertClipToWorld
          (GECamera *this,float param_1,float param_2,MVector3 *param_3,MVector3 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *in_r3;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 *in_stack_00000000;
  
  iVar21 = *(int *)(this + 0x1f0);
  uVar22 = *(undefined4 *)(this + 500);
  uVar1 = __mulsf3(param_3,iVar21);
  uVar2 = __mulsf3(param_4,iVar21);
  uVar3 = __mulsf3(param_3,uVar22);
  uVar4 = __mulsf3(param_4,uVar22);
  uVar9 = *(undefined4 *)(this + 0x1b0);
  uVar13 = *(undefined4 *)(this + 0x1a0);
  uVar5 = __addsf3(uVar9,uVar13);
  iVar23 = iVar21 + -0x80000000;
  uVar13 = __mulsf3(iVar23,uVar13);
  uVar9 = __mulsf3(uVar9,iVar21);
  uVar14 = *(undefined4 *)(this + 0x180);
  uVar13 = __addsf3(uVar13,uVar9);
  uVar9 = __mulsf3(uVar1,uVar14);
  uVar15 = *(undefined4 *)(this + 400);
  uVar13 = __addsf3(uVar13,uVar9);
  uVar9 = __mulsf3(uVar2,uVar15);
  uVar13 = __addsf3(uVar13,uVar9);
  uVar10 = *(undefined4 *)(this + 0x1b4);
  uVar16 = *(undefined4 *)(this + 0x1a4);
  uVar6 = *(undefined4 *)(this + 0x184);
  uVar9 = __addsf3(uVar10,uVar16);
  uVar16 = __mulsf3(iVar23,uVar16);
  uVar10 = __mulsf3(uVar10,iVar21);
  uVar16 = __addsf3(uVar16,uVar10);
  uVar10 = __mulsf3(uVar1,uVar6);
  uVar17 = *(undefined4 *)(this + 0x194);
  uVar16 = __addsf3(uVar16,uVar10);
  uVar10 = __mulsf3(uVar2,uVar17);
  uVar16 = __addsf3(uVar16,uVar10);
  uVar11 = *(undefined4 *)(this + 0x1b8);
  uVar18 = *(undefined4 *)(this + 0x1a8);
  uVar7 = *(undefined4 *)(this + 0x188);
  uVar10 = __addsf3(uVar11,uVar18);
  uVar18 = __mulsf3(iVar23,uVar18);
  uVar11 = __mulsf3(uVar11,iVar21);
  uVar18 = __addsf3(uVar18,uVar11);
  uVar11 = __mulsf3(uVar1,uVar7);
  uVar19 = *(undefined4 *)(this + 0x198);
  uVar18 = __addsf3(uVar18,uVar11);
  uVar11 = __mulsf3(uVar2,uVar19);
  uVar18 = __addsf3(uVar18,uVar11);
  uVar12 = *(undefined4 *)(this + 0x1bc);
  uVar20 = *(undefined4 *)(this + 0x1ac);
  uVar8 = *(undefined4 *)(this + 0x18c);
  uVar11 = __addsf3(uVar12,uVar20);
  uVar20 = __mulsf3(iVar23,uVar20);
  uVar12 = __mulsf3(uVar12,iVar21);
  uVar20 = __addsf3(uVar20,uVar12);
  uVar1 = __mulsf3(uVar1,uVar8);
  uVar1 = __addsf3(uVar20,uVar1);
  uVar20 = *(undefined4 *)(this + 0x19c);
  uVar2 = __mulsf3(uVar2,uVar20);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar3,uVar14);
  uVar5 = __mulsf3(uVar5,uVar22);
  uVar2 = __addsf3(uVar2,uVar5);
  uVar5 = __mulsf3(uVar4,uVar15);
  uVar2 = __addsf3(uVar2,uVar5);
  uVar5 = __mulsf3(uVar3,uVar6);
  uVar9 = __mulsf3(uVar9,uVar22);
  uVar5 = __addsf3(uVar5,uVar9);
  uVar9 = __mulsf3(uVar4,uVar17);
  uVar5 = __addsf3(uVar5,uVar9);
  uVar9 = __mulsf3(uVar3,uVar7);
  uVar10 = __mulsf3(uVar10,uVar22);
  uVar9 = __addsf3(uVar9,uVar10);
  uVar10 = __mulsf3(uVar4,uVar19);
  uVar9 = __addsf3(uVar9,uVar10);
  uVar3 = __mulsf3(uVar3,uVar8);
  uVar10 = __mulsf3(uVar11,uVar22);
  uVar3 = __addsf3(uVar3,uVar10);
  uVar4 = __mulsf3(uVar4,uVar20);
  uVar3 = __addsf3(uVar3,uVar4);
  uVar1 = __divsf3(0x3f800000,uVar1);
  uVar4 = __mulsf3(uVar1,uVar13);
  uVar13 = __mulsf3(uVar1,uVar16);
  uVar1 = __mulsf3(uVar1,uVar18);
  *in_r3 = uVar4;
  in_r3[2] = uVar1;
  in_r3[1] = uVar13;
  uVar1 = __divsf3(0x3f800000,uVar3);
  uVar2 = __mulsf3(uVar1,uVar2);
  uVar3 = __mulsf3(uVar1,uVar5);
  uVar1 = __mulsf3(uVar1,uVar9);
  *in_stack_00000000 = uVar2;
  in_stack_00000000[1] = uVar3;
  in_stack_00000000[2] = uVar1;
  return;
}

