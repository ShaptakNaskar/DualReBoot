/* 00058530 | STG::MMatrix::GetDeterminant */

/* STG::MMatrix::GetDeterminant() const */

longdouble __thiscall STG::MMatrix::GetDeterminant(MMatrix *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = *(float *)(this + 0x38);
  fVar4 = *(float *)(this + 0x3c);
  fVar1 = *(float *)(this + 0x28);
  fVar5 = *(float *)(this + 0x2c);
  fVar6 = fVar4 * fVar1 - fVar2 * fVar5;
  fVar7 = *(float *)(this + 0x24) * fVar4 - *(float *)(this + 0x34) * fVar5;
  fVar3 = *(float *)(this + 0x24) * fVar2 - *(float *)(this + 0x34) * fVar1;
  fVar5 = fVar4 * *(float *)(this + 0x20) - fVar5 * *(float *)(this + 0x30);
  fVar2 = fVar2 * *(float *)(this + 0x20) - fVar1 * *(float *)(this + 0x30);
  fVar4 = *(float *)(this + 0x34) * *(float *)(this + 0x20) -
          *(float *)(this + 0x30) * *(float *)(this + 0x24);
  return (longdouble)
         (((((*(float *)(this + 0x1c) * fVar4 + *(float *)(this + 0x10) * fVar7) -
            *(float *)(this + 0x14) * fVar5) * *(float *)(this + 8) +
           ((*(float *)(this + 0x1c) * fVar3 + *(float *)(this + 0x14) * fVar6) -
           fVar7 * *(float *)(this + 0x18)) * *(float *)this) -
          ((fVar2 * *(float *)(this + 0x1c) + fVar6 * *(float *)(this + 0x10)) -
          fVar5 * *(float *)(this + 0x18)) * *(float *)(this + 4)) -
         ((fVar4 * *(float *)(this + 0x18) + fVar3 * *(float *)(this + 0x10)) -
         fVar2 * *(float *)(this + 0x14)) * *(float *)(this + 0xc));
}

