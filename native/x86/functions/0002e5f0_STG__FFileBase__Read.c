/* 0002e5f0 | STG::FFileBase::Read */

/* STG::FFileBase::Read(unsigned char*, unsigned long) const */

bool __thiscall STG::FFileBase::Read(FFileBase *this,uchar *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = param_2;
  if (param_2 != 0) {
    do {
      iVar1 = (**(code **)(*(int *)this + 0x28))(this,param_1,1,uVar2);
      if (iVar1 == 0) break;
      uVar3 = uVar3 + iVar1;
      *(int *)(this + 8) = *(int *)(this + 8) + iVar1;
      param_1 = param_1 + iVar1;
      uVar2 = uVar2 - iVar1;
    } while (uVar3 < param_2);
  }
  return uVar3 == param_2;
}

