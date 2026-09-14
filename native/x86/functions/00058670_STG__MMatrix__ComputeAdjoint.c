/* 00058670 | STG::MMatrix::ComputeAdjoint */

/* STG::MMatrix::ComputeAdjoint(STG::MMatrix&) const */

void __thiscall STG::MMatrix::ComputeAdjoint(MMatrix *this,MMatrix *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int extraout_ECX;
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
  
  FUN_0002e915();
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 8);
  fVar11 = *(float *)(this + 0x10);
  fVar4 = *(float *)(this + 0x14);
  fVar5 = *(float *)(this + 0x20);
  fVar6 = *(float *)(this + 0x24);
  fVar12 = *(float *)(this + 0x28);
  fVar13 = *(float *)(this + 0x2c);
  fVar7 = *(float *)this;
  fVar23 = *(float *)(this + 0x30);
  fVar19 = *(float *)(this + 0x34);
  fVar8 = *(float *)(this + 0xc);
  fVar17 = *(float *)(this + 0x38);
  fVar21 = *(float *)(this + 0x3c);
  fVar9 = *(float *)(this + 0x1c);
  fVar10 = *(float *)(this + 0x18);
  puVar1 = (uint *)(extraout_ECX + 0x2f13a);
  fVar22 = fVar12 * fVar21 - fVar17 * fVar13;
  fVar20 = fVar6 * fVar21 - fVar19 * fVar13;
  fVar14 = fVar17 * fVar6 - fVar19 * fVar12;
  *(float *)param_1 = (fVar14 * fVar9 + fVar4 * fVar22) - fVar20 * fVar10;
  fVar18 = fVar21 * fVar5 - fVar23 * fVar13;
  fVar15 = fVar17 * fVar5 - fVar23 * fVar12;
  *(uint *)(param_1 + 0x10) = (uint)((fVar15 * fVar9 + fVar11 * fVar22) - fVar18 * fVar10) ^ *puVar1
  ;
  fVar16 = fVar19 * fVar5 - fVar23 * fVar6;
  *(float *)(param_1 + 0x20) = (fVar16 * fVar9 + fVar11 * fVar20) - fVar4 * fVar18;
  *(uint *)(param_1 + 0x30) = (uint)((fVar16 * fVar10 + fVar14 * fVar11) - fVar15 * fVar4) ^ *puVar1
  ;
  *(uint *)(param_1 + 4) = (uint)((fVar14 * fVar8 + fVar2 * fVar22) - fVar3 * fVar20) ^ *puVar1;
  *(float *)(param_1 + 0x14) = (fVar15 * fVar8 + fVar22 * fVar7) - fVar3 * fVar18;
  *(uint *)(param_1 + 0x24) = (uint)((fVar8 * fVar16 + fVar20 * fVar7) - fVar18 * fVar2) ^ *puVar1;
  fVar18 = fVar21 * fVar10 - fVar17 * fVar9;
  *(float *)(param_1 + 0x34) = (fVar16 * fVar3 + fVar14 * fVar7) - fVar15 * fVar2;
  fVar15 = fVar21 * fVar4 - fVar19 * fVar9;
  fVar14 = fVar17 * fVar4 - fVar19 * fVar10;
  *(float *)(param_1 + 8) = (fVar8 * fVar14 + fVar2 * fVar18) - fVar3 * fVar15;
  fVar21 = fVar21 * fVar11 - fVar23 * fVar9;
  fVar17 = fVar17 * fVar11 - fVar23 * fVar10;
  *(uint *)(param_1 + 0x18) = (uint)((fVar8 * fVar17 + fVar18 * fVar7) - fVar3 * fVar21) ^ *puVar1;
  fVar23 = fVar19 * fVar11 - fVar23 * fVar4;
  *(float *)(param_1 + 0x28) = (fVar8 * fVar23 + fVar15 * fVar7) - fVar21 * fVar2;
  *(uint *)(param_1 + 0x38) = (uint)((fVar23 * fVar3 + fVar14 * fVar7) - fVar17 * fVar2) ^ *puVar1;
  fVar17 = fVar13 * fVar10 - fVar12 * fVar9;
  fVar19 = fVar13 * fVar4 - fVar6 * fVar9;
  fVar23 = fVar12 * fVar4 - fVar6 * fVar10;
  *(uint *)(param_1 + 0xc) = (uint)((fVar8 * fVar23 + fVar2 * fVar17) - fVar3 * fVar19) ^ *puVar1;
  fVar13 = fVar13 * fVar11 - fVar9 * fVar5;
  fVar12 = fVar12 * fVar11 - fVar10 * fVar5;
  *(float *)(param_1 + 0x1c) = (fVar8 * fVar12 + fVar17 * fVar7) - fVar3 * fVar13;
  fVar11 = fVar6 * fVar11 - fVar5 * fVar4;
  *(uint *)(param_1 + 0x2c) = (uint)((fVar8 * fVar11 + fVar19 * fVar7) - fVar13 * fVar2) ^ *puVar1;
  *(float *)(param_1 + 0x3c) = (fVar11 * fVar3 + fVar23 * fVar7) - fVar12 * fVar2;
  return;
}

