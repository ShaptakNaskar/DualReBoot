/* 000552f0 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEEnvironment&) */

void STG::USerialize::Load(FFileBase *param_1,GEEnvironment *param_2)

{
  int iVar1;
  uint uVar2;
  ulong local_20;
  uchar auStack_1c [8];
  
  FFileBase::Read(param_1,auStack_1c,4);
  FFileBase::Read(param_1,(uchar *)&local_20,4);
  GEEnvironment::Initialize(param_2,local_20);
  if (local_20 != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      Load(param_1,(GEEnvironmentGroup *)(*(int *)param_2 + iVar1));
      iVar1 = iVar1 + 0x1e0;
    } while (uVar2 < local_20);
  }
  return;
}

