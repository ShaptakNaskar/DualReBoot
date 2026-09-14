/* 0004ea60 | STG::MMatrix::Transform3x3_Transpose */

/* STG::MMatrix::Transform3x3_Transpose(STG::MMatrix const&, STG::MMatrix&) const */

void __thiscall
STG::MMatrix::Transform3x3_Transpose(MMatrix *this,MMatrix *param_1,MMatrix *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar19 = *(float *)param_1;
  fVar21 = *(float *)this;
  fVar13 = *(float *)(this + 0x10);
  fVar10 = *(float *)(param_1 + 0x10);
  fVar15 = *(float *)(this + 0x20);
  fVar20 = *(float *)(param_1 + 0x20);
  fVar12 = *(float *)(param_1 + 4);
  fVar7 = *(float *)(param_1 + 0x14);
  fVar8 = *(float *)(param_1 + 0x24);
  fVar9 = *(float *)(param_1 + 8);
  fVar11 = *(float *)(param_1 + 0x18);
  fVar22 = *(float *)(this + 4);
  fVar18 = *(float *)(param_1 + 0x28);
  fVar6 = *(float *)(this + 0x14);
  fVar16 = *(float *)(this + 0x24);
  fVar17 = *(float *)(this + 0x28);
  uVar1 = *(undefined4 *)(this + 0x34);
  fVar14 = *(float *)(this + 0x18);
  fVar5 = *(float *)(this + 8);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  *(float *)param_2 = fVar19 * fVar21 + fVar13 * fVar10 + fVar15 * fVar20;
  fVar19 = *(float *)this;
  fVar10 = *(float *)param_1;
  *(float *)(param_2 + 0x10) = fVar19 * fVar12 + fVar7 * fVar13 + fVar8 * fVar15;
  fVar12 = *(float *)(param_1 + 0x10);
  *(float *)(param_2 + 0x20) = fVar9 * fVar19 + fVar11 * *(float *)(this + 0x10) + fVar18 * fVar15;
  fVar13 = *(float *)(param_1 + 0x20);
  *(float *)(param_2 + 4) = fVar10 * fVar22 + fVar12 * fVar6 + fVar13 * fVar16;
  fVar15 = *(float *)(param_1 + 4);
  fVar19 = *(float *)(this + 4);
  *(float *)(param_2 + 0x14) = fVar15 * fVar19 + fVar6 * fVar7 + fVar16 * fVar8;
  fVar6 = *(float *)(this + 0x14);
  uVar3 = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 0x1c);
  uVar4 = *(undefined4 *)(this + 0x2c);
  uVar1 = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(this + 0x38);
  *(undefined4 *)(param_2 + 0xc) = uVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = uVar4;
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  *(float *)(param_2 + 0x24) = fVar19 * fVar9 + fVar11 * fVar6 + fVar16 * fVar18;
  fVar6 = *(float *)(param_1 + 0x14);
  *(float *)(param_2 + 8) = fVar10 * fVar5 + fVar14 * fVar12 + fVar17 * fVar13;
  fVar7 = *(float *)(this + 8);
  fVar5 = *(float *)(param_1 + 8);
  *(float *)(param_2 + 0x18) = fVar7 * fVar15 + fVar14 * fVar6 + fVar17 * *(float *)(param_1 + 0x24)
  ;
  *(float *)(param_2 + 0x28) =
       fVar7 * fVar5 + *(float *)(param_1 + 0x18) * *(float *)(this + 0x18) + fVar17 * fVar18;
  return;
}

