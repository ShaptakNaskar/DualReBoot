/* 0005bf00 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEIndexBuffer const&) */

void STG::USerialize::Save(FFileBase *param_1,GEIndexBuffer *param_2)

{
  undefined4 local_20 [4];
  
  FUN_0002e044();
  local_20[0] = 1;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  FFileBase::Write(param_1,*(uchar **)(param_2 + 0x10),*(int *)(param_2 + 8) * 2);
  return;
}

