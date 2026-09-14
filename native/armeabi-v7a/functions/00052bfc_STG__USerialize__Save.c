/* 00052bfc | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_TimeOfDay const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_TimeOfDay *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_2c;
  uchar local_28 [12];
  
  builtin_memcpy(local_28,"PREFTODP",8);
  FFileBase::Write(param_1,local_28,8);
  local_2c = 1;
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  local_2c = (**(code **)(*(int *)param_2 + 0x18))(param_2);
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  for (uVar2 = 0; uVar1 = (**(code **)(*(int *)param_2 + 0x18))(param_2), uVar2 < uVar1;
      uVar2 = uVar2 + 1) {
    local_2c = *(undefined4 *)(*(int *)(param_2 + 0x7c) + uVar2 * 4);
    FFileBase::Write(param_1,(uchar *)&local_2c,4);
  }
  return;
}

