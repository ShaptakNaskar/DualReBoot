/* 00057eb0 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_CameraSet const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_CameraSet *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = DAT_00057f88;
  uStack_1c = DAT_00057f84;
  FFileBase::Write(param_1,(uchar *)&local_20,8);
  local_24 = 1;
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  iVar2 = 0;
  local_24 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  for (uVar3 = 0; uVar1 = (**(code **)(*(int *)param_2 + 0x18))(param_2), uVar3 < uVar1;
      uVar3 = uVar3 + 1) {
    Save<char,int>(param_1,(UStringBase *)(*(int *)(param_2 + 0x7c) + iVar2));
    iVar2 = iVar2 + 0x1c;
  }
  return;
}

