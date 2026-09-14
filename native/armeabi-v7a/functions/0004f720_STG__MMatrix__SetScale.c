/* 0004f720 | STG::MMatrix::SetScale */

/* STG::MMatrix::SetScale(float, float, float) */

void __thiscall STG::MMatrix::SetScale(MMatrix *this,float param_1,float param_2,float param_3)

{
  *(float *)this = param_1;
  *(float *)(this + 0x14) = param_2;
  *(float *)(this + 0x28) = param_3;
  return;
}

