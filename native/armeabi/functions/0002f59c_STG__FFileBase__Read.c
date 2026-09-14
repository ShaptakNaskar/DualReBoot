/* 0002f59c | STG::FFileBase::Read */

/* STG::FFileBase::Read(unsigned char*, unsigned long) const */

bool __thiscall STG::FFileBase::Read(FFileBase *this,uchar *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    uVar3 = param_2;
    do {
      iVar1 = (**(code **)(*(int *)this + 0x28))(this,param_1,1,uVar3);
      if (iVar1 == 0) break;
      uVar2 = uVar2 + iVar1;
      uVar3 = uVar3 - iVar1;
      *(int *)(this + 8) = *(int *)(this + 8) + iVar1;
      param_1 = param_1 + iVar1;
    } while (uVar2 < param_2);
  }
  return uVar2 == param_2;
}

