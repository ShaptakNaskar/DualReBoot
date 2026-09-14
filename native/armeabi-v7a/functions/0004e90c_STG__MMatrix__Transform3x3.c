/* 0004e90c | STG::MMatrix::Transform3x3 */

/* STG::MMatrix::Transform3x3(STG::MMatrix const&, STG::MMatrix&) const */

void __thiscall STG::MMatrix::Transform3x3(MMatrix *this,MMatrix *param_1,MMatrix *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
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
  
  fVar18 = *(float *)this;
  fVar16 = *(float *)param_1;
  fVar8 = *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(this + 4);
  fVar11 = *(float *)(param_1 + 0x20);
  fVar10 = *(float *)(this + 8);
  fVar20 = *(float *)(param_1 + 4);
  fVar17 = *(float *)(this + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(this + 0x14);
  fVar12 = *(float *)(this + 0x18);
  fVar13 = *(float *)(param_1 + 0x24);
  fVar21 = *(float *)(param_1 + 8);
  fVar7 = *(float *)(param_1 + 0x18);
  fVar15 = *(float *)(param_1 + 0x28);
  fVar14 = *(float *)(this + 0x28);
  uVar1 = *(undefined4 *)(this + 0x1c);
  fVar9 = *(float *)(this + 0x24);
  fVar19 = *(float *)(this + 0x20);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  *(float *)param_2 = fVar16 * fVar18 + fVar8 * fVar4 + fVar11 * fVar10;
  fVar16 = *(float *)param_1;
  fVar18 = *(float *)this;
  *(float *)(param_2 + 0x10) = fVar16 * fVar17 + fVar5 * fVar8 + fVar12 * fVar11;
  fVar8 = *(float *)(param_1 + 0x10);
  *(float *)(param_2 + 4) = fVar18 * fVar20 + fVar6 * fVar4 + fVar13 * fVar10;
  fVar20 = *(float *)(param_1 + 4);
  fVar17 = *(float *)(this + 0x10);
  *(float *)(param_2 + 8) = fVar18 * fVar21 + fVar7 * *(float *)(this + 4) + fVar15 * fVar10;
  fVar18 = *(float *)(param_1 + 8);
  uVar2 = *(undefined4 *)(this + 0x30);
  uVar3 = *(undefined4 *)(this + 0x34);
  uVar1 = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)(param_2 + 0x30) = uVar2;
  *(undefined4 *)(param_2 + 0x34) = uVar3;
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  *(float *)(param_2 + 0x14) = fVar20 * fVar17 + fVar5 * fVar6 + fVar12 * fVar13;
  fVar4 = *(float *)(this + 0x14);
  fVar5 = *(float *)(param_1 + 0x14);
  *(float *)(param_2 + 0x20) = fVar16 * fVar19 + fVar9 * fVar8 + fVar14 * fVar11;
  fVar8 = *(float *)(this + 0x20);
  *(float *)(param_2 + 0x18) = fVar18 * fVar17 + fVar7 * fVar4 + fVar12 * fVar15;
  fVar4 = *(float *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(this + 0x38);
  *(float *)(param_2 + 0x24) = fVar8 * fVar20 + fVar9 * fVar5 + fVar14 * fVar13;
  *(float *)(param_2 + 0x28) = fVar8 * fVar18 + fVar4 * *(float *)(this + 0x24) + fVar14 * fVar15;
  return;
}

