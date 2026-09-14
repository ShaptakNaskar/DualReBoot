/* 000531ac | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_IAB const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_IAB *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_2c;
  uchar local_28 [12];
  
  builtin_memcpy(local_28,"PREFINAP",8);
  iVar3 = 0;
  FFileBase::Write(param_1,local_28,8);
  local_2c = 3;
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  uVar4 = 0;
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  local_2c = (**(code **)(*(int *)param_2 + 0x18))(param_2);
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x58));
  while( true ) {
    uVar1 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
    bVar5 = uVar1 <= uVar4;
    uVar4 = uVar4 + 1;
    if (bVar5) break;
    Save<char,int>(param_1,(UStringBase *)(*(int *)(param_2 + 0x7c) + iVar3));
    iVar2 = *(int *)(param_2 + 0x7c) + iVar3;
    iVar3 = iVar3 + 0x38;
    Save<char,int>(param_1,(UStringBase *)(iVar2 + 0x1c));
  }
  return;
}

