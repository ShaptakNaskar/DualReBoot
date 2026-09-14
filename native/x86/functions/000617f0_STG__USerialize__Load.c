/* 000617f0 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_ModelSwap&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_ModelSwap *param_2)

{
  int unaff_EBX;
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  UStringBase<char,int> *local_90;
  int local_8c;
  uint local_80;
  undefined4 local_7c;
  ulong local_78;
  ulong local_74;
  int local_70;
  int local_6c;
  UStringBase<char,int> local_68 [28];
  UStringBase<char,int> local_4c [28];
  UStringBase<char,int> local_30 [28];
  int local_14;
  
  local_14 = 0x617fb;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x3a63d);
  FFileBase::Peek(param_1,(uchar *)&local_70,8);
  if (local_6c == 0x5057534d && local_70 == 0x46455250) {
    FFileBase::Read(param_1,(uchar *)&local_70,8);
    FFileBase::Read(param_1,(uchar *)&local_74,4);
    uVar3 = local_74;
    UStringBase<char,int>::UStringBase(local_68);
    if (uVar3 != 0) {
      Load<char,int>(param_1,(UStringBase *)local_68);
    }
  }
  else {
    UStringBase<char,int>::UStringBase(local_68);
  }
  local_90 = local_68;
  UStringBase<char,int>::UStringBase(local_4c);
  UStringBase<char,int>::UStringBase(local_30);
  Load<char,int>(param_1,(UStringBase *)local_4c);
  Load<char,int>(param_1,(UStringBase *)local_30);
  FFileBase::Read(param_1,(uchar *)&local_7c,4);
  FFileBase::Read(param_1,(uchar *)&local_80,4);
  (**(code **)(*(int *)param_2 + 0x48))(param_2,local_7c,local_90,local_4c,local_30,local_80);
  if (local_80 != 0) {
    local_8c = 0;
    uVar3 = 0;
    do {
      Load<char,int>(param_1,(UStringBase *)(local_8c + *(int *)(param_2 + 0x7c)));
      FFileBase::Read(param_1,(uchar *)&local_78,4);
      UPreference_ModelSwap::SetModelCount(param_2,uVar3,local_78);
      if (local_78 != 0) {
        uVar1 = 0;
        do {
          FFileBase::Read(param_1,(uchar *)&local_74,4);
          uVar2 = uVar1 + 1;
          UPreference_ModelSwap::SetModelIndex(param_2,uVar3,uVar1,local_74);
          uVar1 = uVar2;
        } while (uVar2 < local_78);
      }
      uVar3 = uVar3 + 1;
      local_8c = local_8c + 0x1c;
    } while (uVar3 < local_80);
  }
  UStringBase<char,int>::~UStringBase(local_30);
  UStringBase<char,int>::~UStringBase(local_4c);
  UStringBase<char,int>::~UStringBase(local_90);
  if (local_14 == **(int **)(unaff_EBX + 0x3a63d)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

