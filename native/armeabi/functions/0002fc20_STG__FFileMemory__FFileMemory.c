/* 0002fc20 | STG::FFileMemory::FFileMemory */

/* STG::FFileMemory::FFileMemory(unsigned char const*, unsigned long) */

FFileMemory * __thiscall
STG::FFileMemory::FFileMemory(FFileMemory *this,uchar *param_1,ulong param_2)

{
  int iVar1;
  
  FFileBase::FFileBase((FFileBase *)this);
  iVar1 = DAT_0002fc6c;
  *(undefined4 *)(this + 0x30) = 0;
  *(int *)this = *(int *)(iVar1 + 0x2fc48) + 8;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  FFileBase::Open((uchar *)this,(ulong)param_1);
  return this;
}

