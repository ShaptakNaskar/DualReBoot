/* 0004e504 | STG::MMatrix::CopyFromData */

/* STG::MMatrix::CopyFromData(float const*) */

void __thiscall STG::MMatrix::CopyFromData(MMatrix *this,float *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    *(float *)this = *param_1;
    this = this + 4;
    param_1 = param_1 + 1;
  } while (iVar1 != 0x10);
  return;
}

