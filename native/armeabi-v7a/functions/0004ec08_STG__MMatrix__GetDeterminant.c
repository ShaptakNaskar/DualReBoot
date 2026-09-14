/* 0004ec08 | STG::MMatrix::GetDeterminant */

/* STG::MMatrix::GetDeterminant() const */

float __thiscall STG::MMatrix::GetDeterminant(MMatrix *this)

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
  
  fVar11 = *(float *)(this + 0x2c);
  fVar3 = *(float *)(this + 0x38);
  fVar13 = *(float *)(this + 0x28);
  fVar1 = *(float *)(this + 0x34);
  fVar2 = *(float *)(this + 0x3c);
  fVar15 = *(float *)(this + 0x24);
  fVar12 = *(float *)(this + 0x30);
  fVar8 = *(float *)(this + 0x14);
  fVar4 = *(float *)(this + 0x20);
  fVar6 = *(float *)(this + 0x10);
  fVar5 = *(float *)(this + 0x1c);
  fVar7 = *(float *)(this + 0x18);
  fVar14 = fVar2 * fVar13 - fVar3 * fVar11;
  fVar9 = fVar2 * fVar15 - fVar1 * fVar11;
  fVar10 = fVar3 * fVar15 - fVar1 * fVar13;
  fVar15 = fVar1 * fVar4 - fVar12 * fVar15;
  fVar1 = fVar2 * fVar4 - fVar12 * fVar11;
  fVar2 = fVar3 * fVar4 - fVar12 * fVar13;
  return ((((fVar14 * fVar8 + fVar10 * fVar5) - fVar9 * fVar7) * *(float *)this +
          ((fVar9 * fVar6 + fVar15 * fVar5) - fVar1 * fVar8) * *(float *)(this + 8)) -
         ((fVar14 * fVar6 + fVar2 * fVar5) - fVar1 * fVar7) * *(float *)(this + 4)) -
         ((fVar10 * fVar6 + fVar15 * fVar7) - fVar2 * fVar8) * *(float *)(this + 0xc);
}

