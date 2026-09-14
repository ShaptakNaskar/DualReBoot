/* 00057ac0 | STG::MMatrix::CopyFromData */

/* STG::MMatrix::CopyFromData(float const*) */

void __thiscall STG::MMatrix::CopyFromData(MMatrix *this,float *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((this <= (MMatrix *)(param_1 + 4)) && (param_1 <= this + 0x10)) {
    iVar2 = 0;
    do {
      *(float *)(this + iVar2 * 4) = param_1[iVar2];
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x10);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xe);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(this + 0x38) = uVar1;
  return;
}

