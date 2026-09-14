/* 0004e74c | STG::MMatrix::Transform4x3 */

/* STG::MMatrix::Transform4x3(STG::MMatrix const&, STG::MMatrix&) const */

void __thiscall STG::MMatrix::Transform4x3(MMatrix *this,MMatrix *param_1,MMatrix *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  
  fVar13 = *(float *)param_1;
  fVar15 = *(float *)this;
  fVar16 = *(float *)(this + 4);
  fVar18 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(this + 8);
  fVar1 = *(float *)(param_1 + 0x20);
  fVar11 = *(float *)(this + 0xc);
  fVar8 = *(float *)(param_1 + 0x30);
  fVar20 = *(float *)(this + 0x10);
  fVar17 = *(float *)(this + 0x14);
  fVar14 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(param_1 + 0x14);
  fVar10 = *(float *)(this + 0x18);
  fVar2 = *(float *)(param_1 + 0x24);
  fVar7 = *(float *)(this + 0x1c);
  fVar9 = *(float *)(param_1 + 0x34);
  fVar19 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 0x18);
  fVar4 = *(float *)(param_1 + 0x28);
  fVar12 = *(float *)(param_1 + 0x38);
  *(float *)(param_2 + 0xc) = fVar11;
  *(float *)param_2 = fVar13 * fVar15 + fVar18 * fVar16 + fVar1 * fVar6 + fVar8 * fVar11;
  fVar13 = *(float *)param_1;
  fVar15 = *(float *)this;
  *(float *)(param_2 + 0x10) = fVar13 * fVar20 + fVar17 * fVar18 + fVar10 * fVar1 + fVar7 * fVar8;
  fVar18 = *(float *)(this + 0x10);
  *(float *)(param_2 + 4) = fVar15 * fVar14 + fVar5 * fVar16 + fVar2 * fVar6 + fVar9 * fVar11;
  fVar14 = *(float *)(param_1 + 4);
  *(float *)(param_2 + 8) =
       fVar15 * fVar19 + fVar3 * *(float *)(this + 4) + fVar4 * fVar6 + fVar12 * fVar11;
  fVar6 = *(float *)(param_1 + 8);
  *(float *)(param_2 + 0x14) = fVar14 * fVar18 + fVar17 * fVar5 + fVar10 * fVar2 + fVar7 * fVar9;
  *(float *)(param_2 + 0x18) =
       fVar6 * fVar18 + fVar3 * *(float *)(this + 0x14) + fVar10 * fVar4 + fVar7 * fVar12;
  fVar5 = *(float *)(this + 0x20);
  fVar19 = *(float *)(this + 0x24);
  fVar20 = *(float *)(param_1 + 0x10);
  fVar15 = *(float *)(this + 0x28);
  fVar11 = *(float *)(this + 0x30);
  fVar10 = *(float *)(this + 0x2c);
  fVar17 = *(float *)(this + 0x34);
  fVar3 = *(float *)(this + 0x38);
  *(float *)(param_2 + 0x1c) = fVar7;
  fVar18 = *(float *)(param_1 + 0x14);
  fVar7 = *(float *)(this + 0x3c);
  fVar16 = *(float *)(param_1 + 0x18);
  *(float *)(param_2 + 0x2c) = fVar10;
  *(float *)(param_2 + 0x3c) = fVar7;
  *(float *)(param_2 + 0x20) = fVar13 * fVar5 + fVar20 * fVar19 + fVar15 * fVar1 + fVar10 * fVar8;
  fVar5 = *(float *)(this + 0x20);
  *(float *)(param_2 + 0x30) =
       fVar13 * fVar11 + fVar17 * fVar20 + fVar3 * *(float *)(param_1 + 0x20) + fVar7 * fVar8;
  fVar13 = *(float *)(this + 0x30);
  *(float *)(param_2 + 0x24) = fVar5 * fVar14 + fVar18 * fVar19 + fVar15 * fVar2 + fVar10 * fVar9;
  fVar1 = *(float *)(this + 0x24);
  *(float *)(param_2 + 0x34) =
       fVar13 * fVar14 + fVar17 * fVar18 + fVar3 * *(float *)(param_1 + 0x24) + fVar7 * fVar9;
  fVar2 = *(float *)(this + 0x34);
  *(float *)(param_2 + 0x28) = fVar5 * fVar6 + fVar16 * fVar1 + fVar15 * fVar4 + fVar10 * fVar12;
  *(float *)(param_2 + 0x38) =
       fVar13 * fVar6 + fVar16 * fVar2 + fVar3 * *(float *)(param_1 + 0x28) + fVar7 * fVar12;
  return;
}

