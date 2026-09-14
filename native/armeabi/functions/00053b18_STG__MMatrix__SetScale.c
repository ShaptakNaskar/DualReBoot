/* 00053b18 | STG::MMatrix::SetScale */

/* STG::MMatrix::SetScale(float, float, float) */

void __thiscall STG::MMatrix::SetScale(MMatrix *this,float param_1,float param_2,float param_3)

{
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  
  *(undefined4 *)this = in_r1;
  *(undefined4 *)(this + 0x14) = in_r2;
  *(undefined4 *)(this + 0x28) = in_r3;
  return;
}

