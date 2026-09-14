/* 0002e700 | STG::FFileBase::Peek */

/* STG::FFileBase::Peek(unsigned char*, unsigned long) const */

undefined4 __thiscall STG::FFileBase::Peek(FFileBase *this,uchar *param_1,ulong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0002e044();
  uVar2 = (**(code **)(*(int *)this + 0x24))(this);
  uVar3 = Read(this,param_1,param_2);
  cVar1 = (**(code **)(*(int *)this + 0x20))(this,uVar2,0);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = uVar3;
  }
  return uVar2;
}

