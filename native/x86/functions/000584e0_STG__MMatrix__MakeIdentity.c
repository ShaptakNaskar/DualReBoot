/* 000584e0 | STG::MMatrix::MakeIdentity */

/* STG::MMatrix::MakeIdentity() */

void __thiscall STG::MMatrix::MakeIdentity(MMatrix *this)

{
  undefined8 uVar1;
  int extraout_ECX;
  
  FUN_0002e915();
  *(ulonglong *)this = (ulonglong)*(uint *)(&DAT_0002f39b + extraout_ECX);
  *(undefined8 *)(this + 8) = 0;
  uVar1 = *(undefined8 *)(extraout_ECX + 0x2f3b3);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(extraout_ECX + 0x2f3ab);
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(extraout_ECX + 0x2f3c3);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(extraout_ECX + 0x2f3bb);
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(extraout_ECX + 0x2f363);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(extraout_ECX + 0x2f35b);
  *(undefined8 *)(this + 0x38) = uVar1;
  return;
}

