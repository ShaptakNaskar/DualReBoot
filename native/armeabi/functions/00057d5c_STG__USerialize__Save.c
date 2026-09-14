/* 00057d5c | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_ModelSwap const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_ModelSwap *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong *local_34;
  ulong local_30;
  ulong local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = DAT_00057eac;
  uStack_24 = DAT_00057ea8;
  FFileBase::Write(param_1,(uchar *)&local_28,8);
  local_2c = 1;
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  uVar2 = *(ulong *)(param_2 + 0x8c);
  uVar1 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
  local_2c = uVar2;
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  local_2c = uVar1;
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  if (uVar1 != 0) {
    iVar3 = 0;
    uVar2 = 0;
    do {
      Save<char,int>(param_1,(UStringBase *)(*(int *)(param_2 + 0x7c) + iVar3));
      UPreference_ModelSwap::GetModelIndices(param_2,uVar2,&local_34,&local_30);
      local_2c = local_30;
      FFileBase::Write(param_1,(uchar *)&local_2c,4);
      if (local_30 != 0) {
        uVar4 = 0;
        do {
          local_2c = local_34[uVar4];
          uVar4 = uVar4 + 1;
          FFileBase::Write(param_1,(uchar *)&local_2c,4);
        } while (uVar4 < local_30);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (uVar2 != uVar1);
  }
  return;
}

