/* 00067fc0 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GETextureFont&) */

void STG::USerialize::Load(FFileBase *param_1,GETextureFont *param_2)

{
  uint uVar1;
  int iVar2;
  int unaff_EBX;
  uint uVar3;
  bool local_67;
  uchar local_66;
  uchar local_65;
  ulong local_64;
  uint local_60;
  UStringBase<char,int> local_5c [28];
  UStringBase<char,int> local_40 [20];
  int local_2c;
  uchar *local_28;
  undefined4 local_24;
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x67fc9;
  FUN_0002e044();
  local_20 = **(int **)(unaff_EBX + 0x33e6f);
  FFileBase::Read(param_1,(uchar *)&local_60,4);
  uVar1 = local_60;
  UStringBase<char,int>::UStringBase(local_40);
  local_24 = 0xffffffff;
  if (uVar1 < 3) {
    UStringBase<char,int>::UStringBase(local_5c);
    Load<char,int>(param_1,(UStringBase *)local_5c);
    UStringBase<char,int>::operator=(local_40,(UStringBase *)local_5c);
    local_24 = UStringBaseHash_Internal(local_28,local_2c - (int)local_28);
    UStringBase<char,int>::~UStringBase(local_5c);
  }
  else {
    Load(param_1,(FFileHash *)local_40);
  }
  FFileBase::Read(param_1,(uchar *)&local_64,4);
  FFileBase::Read(param_1,&local_67,1);
  GETextureFont::Initialize(param_2,(FFileHash *)local_40,local_64,local_67);
  FFileBase::Read(param_1,(uchar *)(param_2 + 0x2c),4);
  if (local_64 != 0) {
    uVar3 = 0;
    do {
      iVar2 = uVar3 * 0x2c;
      uVar3 = uVar3 + 1;
      Load<unsigned_short,unsigned_short>(param_1,(UStringBase *)(iVar2 + *(int *)(param_2 + 0x24)))
      ;
    } while (uVar3 < local_64);
  }
  if (1 < uVar1) {
    FFileBase::Read(param_1,&local_66,1);
    FFileBase::Read(param_1,&local_65,1);
    FFileBase::Read(param_1,(uchar *)&local_60,1);
    if (local_66 != '\0') {
      GETextureFont::SetCountdown(param_2,local_65,(uchar)local_60);
    }
  }
  UStringBase<char,int>::~UStringBase(local_40);
  if (local_20 != **(int **)(unaff_EBX + 0x33e6f)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return;
}

