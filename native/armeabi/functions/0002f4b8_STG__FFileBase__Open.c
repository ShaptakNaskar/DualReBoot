/* 0002f4b8 | STG::FFileBase::Open */

/* STG::FFileBase::Open(char const*, STG::FFileBase::EAccess) */

void __thiscall STG::FFileBase::Open(FFileBase *this,undefined4 param_1,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0002f4fc + 0x2f4cc;
  *(int *)(this + 4) = param_3;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  (**(code **)(*(int *)this + 0x10))(this,param_1,*(undefined4 *)(iVar1 + param_3 * 4));
  (**(code **)(*(int *)this + 0x1c))(this);
  return;
}

