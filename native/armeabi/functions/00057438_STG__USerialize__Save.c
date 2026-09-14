/* 00057438 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_TimeOfDay const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_TimeOfDay *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = DAT_00057514;
  uStack_1c = DAT_00057510;
  FFileBase::Write(param_1,(uchar *)&local_20,8);
  local_24 = 1;
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  local_24 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  for (uVar2 = 0; uVar1 = (**(code **)(*(int *)param_2 + 0x18))(param_2), uVar2 < uVar1;
      uVar2 = uVar2 + 1) {
    local_24 = *(undefined4 *)(*(int *)(param_2 + 0x7c) + uVar2 * 4);
    FFileBase::Write(param_1,(uchar *)&local_24,4);
  }
  return;
}

