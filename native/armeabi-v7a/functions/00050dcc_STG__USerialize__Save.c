/* 00050dcc | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEIndexBuffer const&) */

void STG::USerialize::Save(FFileBase *param_1,GEIndexBuffer *param_2)

{
  undefined4 local_14;
  
  local_14 = 1;
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  local_14 = *(undefined4 *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  FFileBase::Write(param_1,*(uchar **)(param_2 + 0x10),*(int *)(param_2 + 8) << 1);
  return;
}

