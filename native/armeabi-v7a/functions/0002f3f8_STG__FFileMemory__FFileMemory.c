/* 0002f3f8 | STG::FFileMemory::FFileMemory */

/* STG::FFileMemory::FFileMemory(unsigned char const*, unsigned long) */

FFileMemory * __thiscall
STG::FFileMemory::FFileMemory(FFileMemory *this,uchar *param_1,ulong param_2)

{
  int iVar1;
  
  FFileBase::FFileBase((FFileBase *)this);
  iVar1 = *(int *)(DAT_0002f444 + 0x2f420);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(int *)this = iVar1 + 8;
  FFileBase::Open((uchar *)this,(ulong)param_1);
  return this;
}

