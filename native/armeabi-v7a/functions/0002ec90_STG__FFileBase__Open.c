/* 0002ec90 | STG::FFileBase::Open */

/* STG::FFileBase::Open(char const*, STG::FFileBase::EAccess) */

void __thiscall STG::FFileBase::Open(FFileBase *this,undefined4 param_1,int param_3)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = DAT_0002ecd0 + 0x2eca0;
  pcVar1 = *(code **)(*(int *)this + 0x10);
  *(int *)(this + 4) = param_3;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  (*pcVar1)(this,param_1,*(undefined4 *)(iVar2 + param_3 * 4));
  (**(code **)(*(int *)this + 0x1c))(this);
  return;
}

