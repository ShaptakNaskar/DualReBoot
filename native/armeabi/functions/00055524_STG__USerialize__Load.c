/* 00055524 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEIndexBuffer&) */

void STG::USerialize::Load(FFileBase *param_1,GEIndexBuffer *param_2)

{
  ulong local_18;
  uchar auStack_14 [8];
  
  FFileBase::Read(param_1,auStack_14,4);
  FFileBase::Read(param_1,(uchar *)&local_18,4);
  GEIndexBuffer::Allocate(param_2,local_18);
  FFileBase::Read(param_1,*(uchar **)(param_2 + 0x10),*(int *)(param_2 + 8) << 1);
  return;
}

