/* 0004f8a8 | STG::MMatrix::SetEulerXYZ */

/* STG::MMatrix::SetEulerXYZ(float, float, float) */

void __thiscall STG::MMatrix::SetEulerXYZ(MMatrix *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = cosf(param_1);
  fVar2 = sinf(param_1);
  fVar3 = cosf(param_2);
  fVar4 = sinf(param_2);
  fVar5 = cosf(param_3);
  fVar6 = sinf(param_3);
  *(float *)(this + 8) = fVar4;
  *(float *)(this + 0x24) = fVar5 * fVar2 + fVar4 * fVar1 * fVar6;
  *(float *)(this + 0x14) = fVar5 * fVar1 - fVar4 * fVar2 * fVar6;
  *(float *)this = fVar5 * fVar3;
  *(float *)(this + 4) = -(fVar3 * fVar6);
  *(float *)(this + 0x10) = fVar6 * fVar1 + fVar4 * fVar2 * fVar5;
  *(float *)(this + 0x20) = fVar6 * fVar2 - fVar4 * fVar1 * fVar5;
  *(float *)(this + 0x18) = -(fVar2 * fVar3);
  *(float *)(this + 0x28) = fVar3 * fVar1;
  return;
}

