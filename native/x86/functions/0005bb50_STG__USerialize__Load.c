/* 0005bb50 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEEnvironment&) */

void STG::USerialize::Load(FFileBase *param_1,GEEnvironment *param_2)

{
  int iVar1;
  uint uVar2;
  ulong local_24;
  uchar local_20 [12];
  undefined4 uStack_14;
  
  uStack_14 = 0x5bb59;
  FUN_0002e044();
  FFileBase::Read(param_1,local_20,4);
  FFileBase::Read(param_1,(uchar *)&local_24,4);
  GEEnvironment::Initialize(param_2,local_24);
  if (local_24 != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      Load(param_1,(GEEnvironmentGroup *)(*(int *)param_2 + iVar1));
      iVar1 = iVar1 + 0x1e0;
    } while (uVar2 < local_24);
  }
  return;
}

