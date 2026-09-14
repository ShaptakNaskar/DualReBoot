/* 0002f45c | STG::FFileBase::FFileBase */

/* STG::FFileBase::FFileBase() */

void __thiscall STG::FFileBase::FFileBase(FFileBase *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0002f4b0 + 0x2f470);
  iVar1 = *(int *)(DAT_0002f4b4 + 0x2f474);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x14] = (FFileBase)0x0;
  *(int *)this = iVar2 + 8;
  *(int *)(this + 0x10) = iVar1 + 8;
  *(FFileBase **)(this + 0x24) = this + 0x14;
  *(FFileBase **)(this + 0x28) = this + 0x14;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  return;
}

