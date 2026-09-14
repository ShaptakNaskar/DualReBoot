/* 0004f68c | STG::MMatrix::Scale */

/* STG::MMatrix::Scale(float, float, float) */

void __thiscall STG::MMatrix::Scale(MMatrix *this,float param_1,float param_2,float param_3)

{
  *(float *)this = *(float *)this * param_1;
  *(float *)(this + 4) = *(float *)(this + 4) * param_1;
  *(float *)(this + 8) = *(float *)(this + 8) * param_1;
  *(float *)(this + 0xc) = *(float *)(this + 0xc) * param_1;
  *(float *)(this + 0x10) = *(float *)(this + 0x10) * param_2;
  *(float *)(this + 0x14) = *(float *)(this + 0x14) * param_2;
  *(float *)(this + 0x18) = *(float *)(this + 0x18) * param_2;
  *(float *)(this + 0x1c) = *(float *)(this + 0x1c) * param_2;
  *(float *)(this + 0x20) = *(float *)(this + 0x20) * param_3;
  *(float *)(this + 0x24) = *(float *)(this + 0x24) * param_3;
  *(float *)(this + 0x28) = *(float *)(this + 0x28) * param_3;
  *(float *)(this + 0x2c) = *(float *)(this + 0x2c) * param_3;
  return;
}

