/* 00064b90 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_ModelToggle const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_ModelToggle *param_2)

{
  uchar uVar1;
  int iVar2;
  int iVar3;
  uchar local_29;
  int local_28;
  uchar local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x64b99;
  FUN_0002e044();
  builtin_memcpy(local_24,"PREFMTOG",8);
  FFileBase::Write(param_1,local_24,8);
  local_28 = 1;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  iVar2 = *(int *)(param_2 + 0x8c);
  uVar1 = *(uchar *)(*(int *)(param_2 + 0x7c) + *(int *)(param_2 + 0x84));
  local_28 = iVar2;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_29 = uVar1;
  FFileBase::Write(param_1,&local_29,1);
  if (iVar2 != 0) {
    iVar3 = 0;
    do {
      local_28 = *(int *)(*(int *)(param_2 + 0x88) + iVar3 * 4);
      iVar3 = iVar3 + 1;
      FFileBase::Write(param_1,(uchar *)&local_28,4);
    } while (iVar3 != iVar2);
  }
  return;
}

