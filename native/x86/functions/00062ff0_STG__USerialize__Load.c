/* 00062ff0 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_IAB&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_IAB *param_2)

{
  int unaff_EBX;
  int iVar1;
  uint uVar2;
  UStringBase<char,int> *local_bc;
  UStringBase<char,int> *local_b8;
  UStringBase<char,int> *local_b4;
  uint local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  UStringBase<char,int> local_90 [28];
  UStringBase<char,int> local_74 [28];
  UStringBase<char,int> local_58 [28];
  UStringBase<char,int> local_3c [28];
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x62ff9;
  FUN_0002e044();
  local_20 = **(int **)(unaff_EBX + 0x38e3f);
  FFileBase::Peek(param_1,(uchar *)&local_9c,8);
  if (local_98 == 0x50414e49 && local_9c == 0x46455250) {
    FFileBase::Read(param_1,(uchar *)&local_9c,8);
    FFileBase::Read(param_1,(uchar *)&local_a0,4);
    uVar2 = local_a0;
    UStringBase<char,int>::UStringBase(local_90);
    if (uVar2 < 3) goto LAB_0006306a;
    Load<char,int>(param_1,(UStringBase *)local_90);
    UStringBase<char,int>::UStringBase(local_74);
    UStringBase<char,int>::UStringBase(local_58);
    Load<char,int>(param_1,(UStringBase *)local_74);
    Load<char,int>(param_1,(UStringBase *)local_58);
    FFileBase::Read(param_1,(uchar *)&local_a4,4);
    UStringBase<char,int>::UStringBase(local_3c);
  }
  else {
    UStringBase<char,int>::UStringBase(local_90);
LAB_0006306a:
    FFileBase::Read(param_1,(uchar *)&local_a0,4);
    UStringBase<char,int>::UStringBase(local_74);
    UStringBase<char,int>::UStringBase(local_58);
    Load<char,int>(param_1,(UStringBase *)local_74);
    Load<char,int>(param_1,(UStringBase *)local_58);
    FFileBase::Read(param_1,(uchar *)&local_a4,4);
    UStringBase<char,int>::UStringBase(local_3c);
    if (local_a0 < 2) goto LAB_000630f7;
  }
  local_b8 = local_3c;
  Load<char,int>(param_1,(UStringBase *)local_b8);
LAB_000630f7:
  local_b4 = local_90;
  local_b8 = local_3c;
  local_bc = local_74;
  (**(code **)(*(int *)param_2 + 0x44))(param_2,local_b4,local_bc,local_58,local_a4);
  UStringBase<char,int>::operator=
            ((UStringBase<char,int> *)(param_2 + 0x58),(UStringBase *)local_b8);
  if (local_a4 != 0) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      uVar2 = uVar2 + 1;
      Load<char,int>(param_1,(UStringBase *)(iVar1 + *(int *)(param_2 + 0x7c)));
      Load<char,int>(param_1,(UStringBase *)(iVar1 + *(int *)(param_2 + 0x7c) + 0x1c));
      iVar1 = iVar1 + 0x38;
    } while (uVar2 < local_a4);
  }
  UStringBase<char,int>::~UStringBase(local_b8);
  UStringBase<char,int>::~UStringBase(local_58);
  UStringBase<char,int>::~UStringBase(local_bc);
  UStringBase<char,int>::~UStringBase(local_b4);
  if (local_20 != **(int **)(unaff_EBX + 0x38e3f)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return;
}

