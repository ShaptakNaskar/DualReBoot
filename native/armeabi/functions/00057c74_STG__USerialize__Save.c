/* 00057c74 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_ModelToggle const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_ModelToggle *param_2)

{
  uchar uVar1;
  int iVar2;
  int iVar3;
  uchar local_2d;
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = DAT_00057d58;
  uStack_24 = DAT_00057d54;
  FFileBase::Write(param_1,(uchar *)&local_28,8);
  local_2c = 1;
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  iVar3 = *(int *)(param_2 + 0x8c);
  uVar1 = *(uchar *)(*(int *)(param_2 + 0x7c) + *(int *)(param_2 + 0x84));
  local_2c = iVar3;
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  local_2d = uVar1;
  FFileBase::Write(param_1,&local_2d,1);
  if (iVar3 != 0) {
    iVar2 = 0;
    do {
      local_2c = *(int *)(*(int *)(param_2 + 0x88) + iVar2 * 4);
      iVar2 = iVar2 + 1;
      FFileBase::Write(param_1,(uchar *)&local_2c,4);
    } while (iVar2 != iVar3);
  }
  return;
}

