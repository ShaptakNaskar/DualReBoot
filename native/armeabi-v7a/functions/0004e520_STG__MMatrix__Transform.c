/* 0004e520 | STG::MMatrix::Transform */

/* STG::MMatrix::Transform(STG::MMatrix const&, STG::MMatrix&) const */

void __thiscall STG::MMatrix::Transform(MMatrix *this,MMatrix *param_1,MMatrix *param_2)

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
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar2 = *(float *)(this + 4);
  fVar14 = *(float *)(param_1 + 0x10);
  fVar9 = *(float *)(this + 8);
  fVar29 = *(float *)(param_1 + 0x20);
  fVar13 = *(float *)(this + 0xc);
  fVar6 = *(float *)(param_1 + 0x30);
  fVar23 = *(float *)(this + 0x10);
  fVar16 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(this + 0x14);
  fVar25 = *(float *)(param_1 + 0x24);
  fVar27 = *(float *)(this + 0x18);
  fVar8 = *(float *)(param_1 + 0x34);
  fVar7 = *(float *)(this + 0x1c);
  fVar21 = *(float *)(param_1 + 8);
  fVar28 = *(float *)(param_1 + 0x18);
  fVar18 = *(float *)(param_1 + 0x28);
  fVar19 = *(float *)(param_1 + 0xc);
  fVar10 = *(float *)(param_1 + 0x38);
  fVar26 = *(float *)(param_1 + 0x1c);
  fVar12 = *(float *)(param_1 + 0x3c);
  fVar3 = *(float *)(param_1 + 0x2c);
  *(float *)param_2 =
       *(float *)param_1 * *(float *)this + fVar14 * fVar2 + fVar29 * fVar9 + fVar6 * fVar13;
  fVar11 = *(float *)this;
  fVar1 = *(float *)param_1;
  *(float *)(param_2 + 4) = fVar11 * fVar16 + fVar5 * fVar2 + fVar25 * fVar9 + fVar8 * fVar13;
  fVar2 = *(float *)(this + 4);
  *(float *)(param_2 + 0x10) = fVar1 * fVar23 + fVar4 * fVar14 + fVar27 * fVar29 + fVar7 * fVar6;
  fVar22 = *(float *)(param_1 + 4);
  fVar24 = *(float *)(this + 0x10);
  *(float *)(param_2 + 8) = fVar11 * fVar21 + fVar28 * fVar2 + fVar18 * fVar9 + fVar10 * fVar13;
  fVar23 = *(float *)(this + 8);
  fVar20 = *(float *)(this + 0x28);
  fVar16 = *(float *)(this + 0x2c);
  fVar31 = *(float *)(this + 0x34);
  fVar14 = *(float *)(this + 0x38);
  fVar9 = *(float *)(param_1 + 8);
  fVar21 = *(float *)(this + 0x3c);
  *(float *)(param_2 + 0x14) = fVar22 * fVar24 + fVar4 * fVar5 + fVar27 * fVar25 + fVar7 * fVar8;
  fVar17 = *(float *)(this + 0x20);
  fVar15 = *(float *)(this + 0x24);
  fVar32 = *(float *)(this + 0x14);
  fVar30 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x10);
  *(float *)(param_2 + 0xc) = fVar11 * fVar19 + fVar26 * fVar2 + fVar3 * fVar23 + fVar12 * fVar13;
  fVar11 = *(float *)(this + 0x30);
  fVar4 = *(float *)(param_1 + 0xc);
  *(float *)(param_2 + 0x20) = fVar1 * fVar17 + fVar5 * fVar15 + fVar20 * fVar29 + fVar16 * fVar6;
  fVar2 = *(float *)(this + 0x20);
  *(float *)(param_2 + 0x30) =
       fVar1 * fVar11 + fVar31 * fVar5 + fVar14 * *(float *)(param_1 + 0x20) + fVar21 * fVar6;
  fVar1 = *(float *)(this + 0x30);
  *(float *)(param_2 + 0x18) = fVar9 * fVar24 + fVar32 * fVar28 + fVar27 * fVar18 + fVar7 * fVar10;
  fVar6 = *(float *)(this + 0x18);
  fVar11 = *(float *)(param_1 + 0x18);
  *(float *)(param_2 + 0x24) = fVar2 * fVar22 + fVar30 * fVar15 + fVar20 * fVar25 + fVar16 * fVar8;
  fVar5 = *(float *)(param_1 + 0x24);
  fVar13 = *(float *)(this + 0x24);
  *(float *)(param_2 + 0x1c) = fVar4 * fVar24 + fVar32 * fVar26 + fVar3 * fVar6 + fVar7 * fVar12;
  fVar6 = *(float *)(param_1 + 0x1c);
  *(float *)(param_2 + 0x34) = fVar1 * fVar22 + fVar31 * fVar30 + fVar14 * fVar5 + fVar21 * fVar8;
  fVar5 = *(float *)(this + 0x34);
  *(float *)(param_2 + 0x28) = fVar2 * fVar9 + fVar11 * fVar13 + fVar20 * fVar18 + fVar16 * fVar10;
  fVar7 = *(float *)(param_1 + 0x28);
  *(float *)(param_2 + 0x2c) =
       fVar2 * fVar4 + fVar6 * fVar13 + fVar3 * *(float *)(this + 0x28) + fVar16 * fVar12;
  fVar2 = *(float *)(param_1 + 0x2c);
  *(float *)(param_2 + 0x38) = fVar1 * fVar9 + fVar5 * fVar11 + fVar14 * fVar7 + fVar21 * fVar10;
  *(float *)(param_2 + 0x3c) =
       fVar1 * fVar4 + fVar5 * fVar6 + fVar2 * *(float *)(this + 0x38) + fVar21 * fVar12;
  return;
}

