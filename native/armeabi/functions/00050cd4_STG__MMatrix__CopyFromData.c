/* 00050cd4 | STG::MMatrix::CopyFromData */

/* STG::MMatrix::CopyFromData(float const*) */

void __thiscall STG::MMatrix::CopyFromData(MMatrix *this,float *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(this + iVar1) = *(undefined4 *)((int)param_1 + iVar1);
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x40);
  return;
}

