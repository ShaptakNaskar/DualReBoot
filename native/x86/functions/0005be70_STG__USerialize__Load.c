/* 0005be70 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEIndexBuffer&) */

void STG::USerialize::Load(FFileBase *param_1,GEIndexBuffer *param_2)

{
  uchar local_14 [4];
  uchar local_10 [4];
  
  FUN_0002e044();
  FFileBase::Read(param_1,local_10,4);
  FFileBase::Read(param_1,local_14,4);
  GEIndexBuffer::Allocate((ulong)param_2);
  FFileBase::Read(param_1,*(uchar **)(param_2 + 0x10),*(int *)(param_2 + 8) * 2);
  return;
}

