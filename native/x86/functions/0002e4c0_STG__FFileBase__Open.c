/* 0002e4c0 | STG::FFileBase::Open */

/* STG::FFileBase::Open(char const*, STG::FFileBase::EAccess) */

void __thiscall STG::FFileBase::Open(FFileBase *this,undefined4 param_1,int param_3)

{
  undefined4 uVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)(this + 4) = param_3;
  uVar1 = *(undefined4 *)(unaff_EBX + 0x6be4f + param_3 * 4);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  (**(code **)(*(int *)this + 0x10))(this,param_1,uVar1);
  (**(code **)(*(int *)this + 0x1c))(this);
  return;
}

