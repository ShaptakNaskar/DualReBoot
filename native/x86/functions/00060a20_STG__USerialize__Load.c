/* 00060a20 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_Theme&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_Theme *param_2)

{
  int unaff_EBX;
  int iVar1;
  uint uVar2;
  UStringBase<char,int> *local_90;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  UStringBase<char,int> local_74 [28];
  UStringBase<char,int> local_58 [28];
  UStringBase<char,int> local_3c [28];
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x60a29;
  FUN_0002e044();
  local_20 = **(int **)(unaff_EBX + 0x3b40f);
  FFileBase::Peek(param_1,(uchar *)&local_7c,8);
  if (local_78 == 0x4d454854 && local_7c == 0x46455250) {
    FFileBase::Read(param_1,(uchar *)&local_7c,8);
    FFileBase::Read(param_1,(uchar *)&local_80,4);
    UStringBase<char,int>::UStringBase(local_74);
    if (local_80 != 0) {
      Load<char,int>(param_1,(UStringBase *)local_74);
    }
  }
  else {
    UStringBase<char,int>::UStringBase(local_74);
  }
  local_90 = local_74;
  UStringBase<char,int>::UStringBase(local_58);
  UStringBase<char,int>::UStringBase(local_3c);
  Load<char,int>(param_1,(UStringBase *)local_58);
  Load<char,int>(param_1,(UStringBase *)local_3c);
  FFileBase::Read(param_1,(uchar *)&local_84,4);
  (**(code **)(*(int *)param_2 + 0x44))(param_2,local_90,local_58,local_3c,local_84);
  if (local_84 != 0) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      uVar2 = uVar2 + 1;
      Load<char,int>(param_1,(UStringBase *)(iVar1 + *(int *)(param_2 + 0x7c)));
      Load<char,int>(param_1,(UStringBase *)(iVar1 + *(int *)(param_2 + 0x7c) + 0x1c));
      iVar1 = iVar1 + 0x38;
    } while (uVar2 < local_84);
  }
  UStringBase<char,int>::~UStringBase(local_3c);
  UStringBase<char,int>::~UStringBase(local_58);
  UStringBase<char,int>::~UStringBase(local_90);
  if (local_20 == **(int **)(unaff_EBX + 0x3b40f)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

