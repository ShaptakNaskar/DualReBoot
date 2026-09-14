/* 0004ecc4 | STG::MMatrix::ComputeAdjoint */

/* STG::MMatrix::ComputeAdjoint(STG::MMatrix&) const */

void __thiscall STG::MMatrix::ComputeAdjoint(MMatrix *this,MMatrix *param_1)

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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  fVar14 = *(float *)(this + 0x18);
  fVar8 = *(float *)(this + 0x24);
  fVar12 = *(float *)(this + 0x1c);
  fVar15 = *(float *)(this + 0x14);
  fVar19 = *(float *)(this + 0x28);
  fVar20 = *(float *)(this + 0x34);
  fVar2 = *(float *)(this + 0x2c);
  fVar9 = *(float *)(this + 0x3c);
  fVar5 = *(float *)(this + 0x20);
  fVar21 = *(float *)(this + 0x38);
  fVar1 = *(float *)(this + 0x30);
  fVar11 = *(float *)(this + 0x10);
  fVar10 = *(float *)this;
  fVar17 = *(float *)(this + 4);
  fVar13 = *(float *)(this + 0xc);
  fVar16 = *(float *)(this + 8);
  fVar26 = fVar19 * fVar15 - fVar8 * fVar14;
  fVar22 = fVar9 * fVar15 - fVar20 * fVar12;
  fVar24 = fVar2 * fVar15 - fVar8 * fVar12;
  fVar4 = fVar2 * fVar14 - fVar19 * fVar12;
  fVar3 = fVar9 * fVar14 - fVar21 * fVar12;
  fVar27 = fVar8 * fVar11 - fVar5 * fVar15;
  fVar18 = fVar9 * fVar19 - fVar21 * fVar2;
  fVar6 = fVar20 * fVar5 - fVar1 * fVar8;
  fVar7 = fVar9 * fVar8 - fVar20 * fVar2;
  fVar28 = fVar20 * fVar11 - fVar1 * fVar15;
  fVar8 = fVar21 * fVar8 - fVar20 * fVar19;
  fVar29 = fVar21 * fVar15 - fVar20 * fVar14;
  fVar23 = fVar21 * fVar11 - fVar1 * fVar14;
  fVar25 = fVar19 * fVar11 - fVar5 * fVar14;
  fVar20 = fVar21 * fVar5 - fVar1 * fVar19;
  fVar19 = fVar9 * fVar5 - fVar1 * fVar2;
  fVar9 = fVar9 * fVar11 - fVar1 * fVar12;
  fVar1 = fVar2 * fVar11 - fVar5 * fVar12;
  *(float *)(param_1 + 0x30) = fVar20 * fVar15 - (fVar8 * fVar11 + fVar6 * fVar14);
  *(float *)(param_1 + 0x20) = (fVar7 * fVar11 + fVar6 * fVar12) - fVar19 * fVar15;
  *(float *)(param_1 + 0x34) = (fVar8 * fVar10 + fVar6 * fVar16) - fVar20 * fVar17;
  *(float *)param_1 = (fVar18 * fVar15 + fVar8 * fVar12) - fVar7 * fVar14;
  *(float *)(param_1 + 0x10) = fVar19 * fVar14 - (fVar18 * fVar11 + fVar20 * fVar12);
  *(float *)(param_1 + 4) = fVar7 * fVar16 - (fVar18 * fVar17 + fVar8 * fVar13);
  *(float *)(param_1 + 0x14) = (fVar18 * fVar10 + fVar20 * fVar13) - fVar19 * fVar16;
  *(float *)(param_1 + 0x24) = fVar19 * fVar17 - (fVar7 * fVar10 + fVar6 * fVar13);
  *(float *)(param_1 + 8) = (fVar3 * fVar17 + fVar29 * fVar13) - fVar22 * fVar16;
  *(float *)(param_1 + 0x18) = fVar9 * fVar16 - (fVar3 * fVar10 + fVar23 * fVar13);
  *(float *)(param_1 + 0x28) = (fVar22 * fVar10 + fVar28 * fVar13) - fVar9 * fVar17;
  *(float *)(param_1 + 0x38) = fVar23 * fVar17 - (fVar29 * fVar10 + fVar28 * fVar16);
  *(float *)(param_1 + 0xc) = fVar24 * fVar16 - (fVar4 * fVar17 + fVar26 * fVar13);
  *(float *)(param_1 + 0x1c) = (fVar4 * fVar10 + fVar25 * fVar13) - fVar1 * fVar16;
  *(float *)(param_1 + 0x2c) = fVar1 * fVar17 - (fVar24 * fVar10 + fVar27 * fVar13);
  *(float *)(param_1 + 0x3c) = (fVar26 * fVar10 + fVar27 * fVar16) - fVar25 * fVar17;
  return;
}

