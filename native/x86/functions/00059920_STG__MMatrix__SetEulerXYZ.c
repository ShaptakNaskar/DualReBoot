/* 00059920 | STG::MMatrix::SetEulerXYZ */

/* STG::MMatrix::SetEulerXYZ(float, float, float) */

void __thiscall STG::MMatrix::SetEulerXYZ(MMatrix *this,float param_1,float param_2,float param_3)

{
  uint uVar1;
  int unaff_EBX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_0002e044();
  fVar2 = cosf(param_1);
  fVar3 = sinf(param_1);
  fVar4 = cosf(param_2);
  fVar5 = sinf(param_2);
  fVar6 = cosf(param_3);
  fVar7 = sinf(param_3);
  *(float *)this = fVar6 * fVar4;
  *(float *)(this + 0x10) = fVar5 * fVar3 * fVar6 + fVar2 * fVar7;
  uVar1 = *(uint *)(unaff_EBX + 0x2de85);
  *(float *)(this + 0x20) = fVar7 * fVar3 - fVar5 * fVar2 * fVar6;
  *(uint *)(this + 4) = (uint)(fVar7 * fVar4) ^ uVar1;
  *(float *)(this + 8) = fVar5;
  *(uint *)(this + 0x18) = (uint)(fVar3 * fVar4) ^ uVar1;
  *(float *)(this + 0x14) = fVar2 * fVar6 - fVar5 * fVar3 * fVar7;
  *(float *)(this + 0x24) = fVar7 * fVar5 * fVar2 + fVar6 * fVar3;
  *(float *)(this + 0x28) = fVar4 * fVar2;
  return;
}

