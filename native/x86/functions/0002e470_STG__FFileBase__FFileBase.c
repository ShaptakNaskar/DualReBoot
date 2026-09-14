/* 0002e470 | STG::FFileBase::FFileBase */

/* STG::FFileBase::FFileBase() */

void __thiscall STG::FFileBase::FFileBase(FFileBase *this)

{
  int iVar1;
  int extraout_ECX;
  
  FUN_0002e915();
  *(int *)this = *(int *)(&DAT_0006d9cb + extraout_ECX) + 8;
  iVar1 = *(int *)(&DAT_0006d9c7 + extraout_ECX);
  *(undefined4 *)(this + 4) = 0;
  *(int *)(this + 0x10) = iVar1 + 8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(FFileBase **)(this + 0x24) = this + 0x14;
  *(FFileBase **)(this + 0x28) = this + 0x14;
  this[0x14] = (FFileBase)0x0;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  return;
}

