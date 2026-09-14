/* 00060e70 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_TextureSwap&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_TextureSwap *param_2)

{
  int unaff_EBX;
  uint uVar1;
  int iVar2;
  UStringBase<char,int> *local_90;
  uint local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int local_78;
  UStringBase<char,int> local_74 [28];
  UStringBase<char,int> local_58 [28];
  UStringBase<char,int> local_3c [28];
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x60e79;
  FUN_0002e044();
  local_20 = **(int **)(&DAT_0003afbf + unaff_EBX);
  FFileBase::Peek(param_1,(uchar *)&local_7c,8);
  if (local_78 == 0x50575354 && local_7c == 0x46455250) {
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
  FFileBase::Read(param_1,(uchar *)&local_88,4);
  FFileBase::Read(param_1,(uchar *)&local_84,4);
  (**(code **)(*(int *)param_2 + 0x48))(param_2,local_84,local_90,local_58,local_3c,local_88);
  if (local_88 != 0) {
    uVar1 = 0;
    iVar2 = 0;
    do {
      uVar1 = uVar1 + 1;
      Load<char,int>(param_1,(UStringBase *)(iVar2 + *(int *)(param_2 + 0x7c)));
      iVar2 = iVar2 + 0x1c;
    } while (uVar1 < local_88);
  }
  UStringBase<char,int>::~UStringBase(local_3c);
  UStringBase<char,int>::~UStringBase(local_58);
  UStringBase<char,int>::~UStringBase(local_90);
  if (local_20 == **(int **)(&DAT_0003afbf + unaff_EBX)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

