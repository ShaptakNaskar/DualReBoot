/* 0002ee64 | STG::FFileBase::Peek */

/* STG::FFileBase::Peek(unsigned char*, unsigned long) const */

undefined4 STG::FFileBase::Peek(uchar *param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong in_r2;
  
  uVar1 = (**(code **)(*(int *)param_1 + 0x24))();
  uVar2 = Read((FFileBase *)param_1,(uchar *)param_2,in_r2);
  iVar3 = (**(code **)(*(int *)param_1 + 0x20))(param_1,uVar1,0);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

