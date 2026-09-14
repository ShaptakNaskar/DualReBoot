/* 00061e70 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GETextureSwap&) */

void STG::USerialize::Load(FFileBase *param_1,GETextureSwap *param_2)

{
  uint uVar1;
  int unaff_EBX;
  ulong local_b4;
  bool local_a6;
  bool local_a5;
  ulong local_a4;
  uint local_a0 [4];
  GETimeOfDay local_90 [8];
  UStringBase<char,int> local_88 [28];
  UStringBase<char,int> local_6c [28];
  UStringBase<char,int> local_50 [28];
  UStringBase<char,int> local_34 [20];
  int local_20;
  uchar *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = 0x61e7b;
  FUN_0002e044();
  local_14 = **(int **)(&DAT_00039fbd + unaff_EBX);
  FFileBase::Read(param_1,(uchar *)local_a0,4);
  uVar1 = local_a0[0];
  UStringBase<char,int>::UStringBase(local_88);
  Load<char,int>(param_1,(UStringBase *)local_88);
  FFileBase::Read(param_1,(uchar *)&local_a4,4);
  if (uVar1 < 2) {
    local_a6 = false;
  }
  else {
    FFileBase::Read(param_1,&local_a6,1);
    if (3 < uVar1) {
      FFileBase::Read(param_1,&local_a5,1);
      goto LAB_00061f60;
    }
  }
  local_a5 = false;
LAB_00061f60:
  GETextureSwap::Initialize(param_2,(UStringBase *)local_88,local_a4,local_a6,local_a5);
  if (local_a4 != 0) {
    local_b4 = 0;
    do {
      UStringBase<char,int>::UStringBase(local_6c);
      Load<char,int>(param_1,(UStringBase *)local_6c);
      UStringBase<char,int>::UStringBase(local_34);
      local_18 = 0xffffffff;
      if (uVar1 < 3) {
        UStringBase<char,int>::UStringBase(local_50);
        Load<char,int>(param_1,(UStringBase *)local_50);
        UStringBase<char,int>::operator=(local_34,(UStringBase *)local_50);
        local_18 = UStringBaseHash_Internal(local_1c,local_20 - (int)local_1c);
        UStringBase<char,int>::~UStringBase(local_50);
        GETimeOfDay::GETimeOfDay(local_90);
        if (uVar1 == 2) {
          Load(param_1,local_90);
        }
LAB_000620fa:
        local_a0[0] = 0xffffffff;
      }
      else {
        Load(param_1,(FFileHash *)local_34);
        GETimeOfDay::GETimeOfDay(local_90);
        Load(param_1,local_90);
        if (uVar1 < 4) goto LAB_000620fa;
        FFileBase::Read(param_1,(uchar *)local_a0,4);
      }
      GETextureSwap::SetVariant
                (param_2,local_b4,(UStringBase *)local_6c,(FFileHash *)local_34,local_90,local_a0[0]
                );
      UStringBase<char,int>::~UStringBase(local_34);
      UStringBase<char,int>::~UStringBase(local_6c);
      local_b4 = local_b4 + 1;
    } while (local_b4 < local_a4);
  }
  UStringBase<char,int>::~UStringBase(local_88);
  if (local_14 != **(int **)(&DAT_00039fbd + unaff_EBX)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return;
}

