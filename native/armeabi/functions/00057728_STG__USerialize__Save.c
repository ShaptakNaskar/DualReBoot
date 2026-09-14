/* 00057728 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_TextureGroup const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_TextureGroup *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = DAT_0005784c;
  uStack_1c = DAT_00057848;
  FFileBase::Write(param_1,(uchar *)&local_20,8);
  local_24 = 1;
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  local_24 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  iVar4 = *(int *)(param_2 + 0x94);
  local_24 = iVar4;
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  if (iVar4 != 0) {
    iVar2 = 0;
    do {
      local_24 = *(int *)(*(int *)(param_2 + 0x88) + iVar2 * 4);
      iVar2 = iVar2 + 1;
      FFileBase::Write(param_1,(uchar *)&local_24,4);
    } while (iVar2 != iVar4);
  }
  iVar4 = 0;
  for (uVar3 = 0; uVar1 = (**(code **)(*(int *)param_2 + 0x18))(param_2), uVar3 < uVar1;
      uVar3 = uVar3 + 1) {
    Save<char,int>(param_1,(UStringBase *)(*(int *)(param_2 + 0x7c) + iVar4));
    iVar4 = iVar4 + 0x1c;
  }
  return;
}

