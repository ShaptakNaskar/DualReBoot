/* 0002e520 | STG::FFileBase::Open */

/* STG::FFileBase::Open(unsigned char const*, unsigned long) */

void __thiscall STG::FFileBase::Open(FFileBase *this,uchar *param_1,ulong param_2)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  (**(code **)(*(int *)this + 0x14))(this,param_1,param_2);
  (**(code **)(*(int *)this + 0x1c))(this);
  return;
}

