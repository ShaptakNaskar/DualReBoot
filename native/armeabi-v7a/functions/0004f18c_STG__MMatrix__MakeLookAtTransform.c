/* 0004f18c | STG::MMatrix::MakeLookAtTransform */

/* STG::MMatrix::MakeLookAtTransform(STG::MVector3 const&, STG::MVector3 const&, STG::MVector3
   const&) */

void __thiscall
STG::MMatrix::MakeLookAtTransform
          (MMatrix *this,MVector3 *param_1,MVector3 *param_2,MVector3 *param_3)

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
  
  fVar8 = *(float *)param_1;
  fVar13 = fVar8 - *(float *)param_2;
  fVar9 = *(float *)(param_1 + 4);
  fVar11 = *(float *)(param_1 + 8);
  fVar14 = fVar9 - *(float *)(param_2 + 4);
  fVar16 = fVar11 - *(float *)(param_2 + 8);
  fVar18 = fVar13 * fVar13 + fVar14 * fVar14 + fVar16 * fVar16;
  fVar1 = DAT_0004f33c;
  fVar3 = DAT_0004f33c;
  fVar4 = DAT_0004f338;
  fVar6 = DAT_0004f338;
  fVar5 = DAT_0004f338;
  fVar7 = DAT_0004f338;
  fVar10 = DAT_0004f338;
  fVar2 = DAT_0004f33c;
  fVar12 = DAT_0004f338;
  fVar15 = DAT_0004f338;
  fVar17 = DAT_0004f338;
  fVar19 = DAT_0004f338;
  if (0.0 < fVar18) {
    fVar12 = 1.0 / SQRT(fVar18);
    fVar19 = fVar12 * fVar13;
    fVar15 = fVar12 * fVar14;
    fVar12 = fVar12 * fVar16;
    fVar14 = fVar15 * *(float *)param_3 - fVar19 * *(float *)(param_3 + 4);
    fVar13 = fVar12 * *(float *)(param_3 + 4) - fVar15 * *(float *)(param_3 + 8);
    fVar16 = fVar19 * *(float *)(param_3 + 8) - fVar12 * *(float *)param_3;
    fVar18 = fVar14 * fVar14 + fVar13 * fVar13 + fVar16 * fVar16;
    fVar1 = -(fVar19 * fVar8 + fVar15 * fVar9 + fVar12 * fVar11);
    if (0.0 < fVar18) {
      fVar5 = 1.0 / SQRT(fVar18);
      fVar7 = fVar14 * fVar5;
      fVar17 = fVar13 * fVar5;
      fVar5 = fVar5 * fVar16;
      fVar14 = fVar12 * fVar17 - fVar19 * fVar7;
      fVar13 = fVar15 * fVar7 - fVar12 * fVar5;
      fVar16 = fVar19 * fVar5 - fVar15 * fVar17;
      fVar18 = fVar14 * fVar14 + fVar13 * fVar13 + fVar16 * fVar16;
      fVar3 = -(fVar17 * fVar8 + fVar5 * fVar9 + fVar7 * fVar11);
      if (0.0 < fVar18) {
        fVar2 = 1.0 / SQRT(fVar18);
        fVar4 = fVar2 * fVar13;
        fVar6 = fVar2 * fVar14;
        fVar10 = fVar2 * fVar16;
        fVar2 = -(fVar2 * fVar13 * fVar8 + fVar2 * fVar14 * fVar9 + fVar2 * fVar16 * fVar11);
      }
    }
  }
  *(float *)this = fVar17;
  *(undefined4 *)(this + 0xc) = 0;
  *(float *)(this + 4) = fVar4;
  *(undefined4 *)(this + 0x1c) = 0;
  *(float *)(this + 8) = fVar19;
  *(undefined4 *)(this + 0x2c) = 0;
  *(float *)(this + 0x10) = fVar5;
  *(float *)(this + 0x14) = fVar6;
  *(float *)(this + 0x18) = fVar15;
  *(float *)(this + 0x20) = fVar7;
  *(float *)(this + 0x24) = fVar10;
  *(float *)(this + 0x28) = fVar12;
  *(float *)(this + 0x30) = fVar3;
  *(float *)(this + 0x34) = fVar2;
  *(float *)(this + 0x38) = fVar1;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  return;
}

