/* 00060c10 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_TextureGroup&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_TextureGroup *param_2)

{
  int unaff_EBX;
  ulong uVar1;
  uint uVar2;
  int iVar3;
  UStringBase<char,int> *local_8c;
  uint local_80 [2];
  uint local_78;
  ulong local_74;
  int local_70;
  int local_6c;
  UStringBase<char,int> local_68 [28];
  UStringBase<char,int> local_4c [28];
  UStringBase<char,int> local_30 [28];
  int local_14;
  
  local_14 = 0x60c1b;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x3b21d);
  FFileBase::Peek(param_1,(uchar *)&local_70,8);
  if (local_6c == 0x50524754 && local_70 == 0x46455250) {
    FFileBase::Read(param_1,(uchar *)&local_70,8);
    FFileBase::Read(param_1,(uchar *)&local_74,4);
    uVar1 = local_74;
    UStringBase<char,int>::UStringBase(local_68);
    if (uVar1 != 0) {
      Load<char,int>(param_1,(UStringBase *)local_68);
    }
  }
  else {
    UStringBase<char,int>::UStringBase(local_68);
  }
  local_8c = local_68;
  UStringBase<char,int>::UStringBase(local_4c);
  UStringBase<char,int>::UStringBase(local_30);
  Load<char,int>(param_1,(UStringBase *)local_4c);
  Load<char,int>(param_1,(UStringBase *)local_30);
  FFileBase::Read(param_1,(uchar *)local_80,4);
  FFileBase::Read(param_1,(uchar *)&local_78,4);
  (**(code **)(*(int *)param_2 + 0x48))(param_2,local_78,local_8c,local_4c,local_30,local_80[0]);
  if (local_78 != 0) {
    uVar1 = 0;
    do {
      FFileBase::Read(param_1,(uchar *)&local_74,4);
      uVar2 = uVar1 + 1;
      UPreference_TextureGroup::SetChildID(param_2,uVar1,local_74);
      uVar1 = uVar2;
    } while (uVar2 < local_78);
  }
  if (local_80[0] != 0) {
    uVar2 = 0;
    iVar3 = 0;
    do {
      uVar2 = uVar2 + 1;
      Load<char,int>(param_1,(UStringBase *)(iVar3 + *(int *)(param_2 + 0x7c)));
      iVar3 = iVar3 + 0x1c;
    } while (uVar2 < local_80[0]);
  }
  UStringBase<char,int>::~UStringBase(local_30);
  UStringBase<char,int>::~UStringBase(local_4c);
  UStringBase<char,int>::~UStringBase(local_8c);
  if (local_14 == **(int **)(unaff_EBX + 0x3b21d)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

