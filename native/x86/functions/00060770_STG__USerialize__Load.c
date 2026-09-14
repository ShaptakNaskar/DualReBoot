/* 00060770 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_TimeOfDay&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_TimeOfDay *param_2)

{
  int iVar1;
  int unaff_EBX;
  uint uVar2;
  UStringBase<char,int> *local_98;
  UStringBase<char,int> *local_94;
  UStringBase<char,int> *local_90;
  uint local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c [2];
  UStringBase<char,int> local_74 [28];
  UStringBase<char,int> local_58 [28];
  UStringBase<char,int> local_3c [28];
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x60779;
  FUN_0002e044();
  local_20 = **(int **)(unaff_EBX + 0x3b6bf);
  FFileBase::Peek(param_1,(uchar *)&local_84,8);
  if (local_80 == 0x50444f54 && local_84 == 0x46455250) {
    FFileBase::Read(param_1,(uchar *)&local_84,8);
    FFileBase::Read(param_1,(uchar *)&local_88,4);
    iVar1 = local_88;
    UStringBase<char,int>::UStringBase(local_74);
    if (iVar1 != 0) {
      Load<char,int>(param_1,(UStringBase *)local_74);
      UStringBase<char,int>::UStringBase(local_58);
      UStringBase<char,int>::UStringBase(local_3c);
      Load<char,int>(param_1,(UStringBase *)local_58);
      Load<char,int>(param_1,(UStringBase *)local_3c);
      FFileBase::Read(param_1,(uchar *)&local_8c,4);
      (**(code **)(*(int *)param_2 + 0x44))(param_2,local_74,local_58,local_3c,local_8c);
      if (local_8c != 0) {
        uVar2 = 0;
        do {
          FFileBase::Read(param_1,(uchar *)&local_88,4);
          *(int *)(*(int *)(param_2 + 0x7c) + uVar2 * 4) = local_88;
          uVar2 = uVar2 + 1;
        } while (uVar2 < local_8c);
      }
      goto LAB_000608ad;
    }
  }
  else {
    UStringBase<char,int>::UStringBase(local_74);
  }
  local_90 = local_74;
  uVar2 = 0;
  UStringBase<char,int>::UStringBase(local_58);
  UStringBase<char,int>::UStringBase(local_3c);
  Load<char,int>(param_1,(UStringBase *)local_58);
  Load<char,int>(param_1,(UStringBase *)local_3c);
  FFileBase::Read(param_1,(uchar *)&local_8c,4);
  (**(code **)(*(int *)param_2 + 0x44))(param_2,local_90,local_58,local_3c,local_8c);
  GETimeOfDay::GETimeOfDay((GETimeOfDay *)local_7c);
  if (local_8c != 0) {
    do {
      Load(param_1,(GETimeOfDay *)local_7c);
      *(undefined4 *)(*(int *)(param_2 + 0x7c) + uVar2 * 4) = local_7c[0];
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_8c);
  }
LAB_000608ad:
  local_90 = local_74;
  local_94 = local_3c;
  local_98 = local_58;
  UStringBase<char,int>::~UStringBase(local_94);
  UStringBase<char,int>::~UStringBase(local_98);
  UStringBase<char,int>::~UStringBase(local_90);
  if (local_20 != **(int **)(unaff_EBX + 0x3b6bf)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return;
}

