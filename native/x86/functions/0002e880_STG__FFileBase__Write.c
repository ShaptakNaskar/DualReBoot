/* 0002e880 | STG::FFileBase::Write */

/* STG::FFileBase::Write(unsigned char const*, unsigned long) */

bool __thiscall STG::FFileBase::Write(FFileBase *this,uchar *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = param_2;
  if (param_2 != 0) {
    do {
      iVar1 = (**(code **)(*(int *)this + 0x30))(this,param_1,1,uVar2);
      uVar3 = uVar3 + iVar1;
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + iVar1;
      param_1 = param_1 + iVar1;
      uVar2 = uVar2 - iVar1;
    } while (uVar3 < param_2);
  }
  return uVar3 == param_2;
}

