/* 00061c90 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GECameraSet&) */

void STG::USerialize::Load(FFileBase *param_1,GECameraSet *param_2)

{
  int iVar1;
  int unaff_EBX;
  uint uVar2;
  ulong local_48;
  ulong local_44;
  uchar local_40 [4];
  UStringBase<char,int> local_3c [28];
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x61c99;
  FUN_0002e044();
  local_20 = **(int **)(unaff_EBX + 0x3a19f);
  FFileBase::Read(param_1,local_40,4);
  UStringBase<char,int>::UStringBase(local_3c);
  Load<char,int>(param_1,(UStringBase *)local_3c);
  FFileBase::Read(param_1,(uchar *)&local_48,4);
  FFileBase::Read(param_1,(uchar *)&local_44,4);
  FFileBase::Read(param_1,(uchar *)(param_2 + 0x244),4);
  GECameraSet::Initialize(param_2,(UStringBase *)local_3c,local_48,local_44);
  if (*(int *)(param_2 + 0x234) != 0) {
    uVar2 = 0;
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      FFileBase::Read(param_1,(uchar *)(iVar1 + *(int *)(param_2 + 0x230)),4);
    } while (uVar2 < *(uint *)(param_2 + 0x234));
  }
  if (*(int *)(param_2 + 0x240) != 0) {
    uVar2 = 0;
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      FFileBase::Read(param_1,(uchar *)(iVar1 + *(int *)(param_2 + 0x238)),4);
    } while (uVar2 < *(uint *)(param_2 + 0x240));
  }
  UStringBase<char,int>::~UStringBase(local_3c);
  if (local_20 == **(int **)(unaff_EBX + 0x3a19f)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

