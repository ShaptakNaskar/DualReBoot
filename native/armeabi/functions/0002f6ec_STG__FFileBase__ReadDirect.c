/* 0002f6ec | STG::FFileBase::ReadDirect */

/* STG::FFileBase::ReadDirect(unsigned char const*&, unsigned long) const */

bool __thiscall STG::FFileBase::ReadDirect(FFileBase *this,uchar **param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x2c))();
  *(ulong *)(this + 8) = *(int *)(this + 8) + uVar1;
  return uVar1 == param_2;
}

