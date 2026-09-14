/* 000553fc | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEEnvironmentGroup const&) */

void STG::USerialize::Save(FFileBase *param_1,GEEnvironmentGroup *param_2)

{
  uchar local_14 [4];
  
  local_14[0] = '\x01';
  local_14[1] = '\0';
  local_14[2] = '\0';
  local_14[3] = '\0';
  FFileBase::Write(param_1,local_14,4);
  local_14[0] = '\b';
  local_14[1] = '\0';
  local_14[2] = '\0';
  local_14[3] = '\0';
  FFileBase::Write(param_1,local_14,4);
  Save(param_1,(GEEnvironmentSettings *)param_2);
  Save(param_1,(GEEnvironmentSettings *)(param_2 + 0x3c));
  Save(param_1,(GEEnvironmentSettings *)(param_2 + 0x78));
  Save(param_1,(GEEnvironmentSettings *)(param_2 + 0xb4));
  Save(param_1,(GEEnvironmentSettings *)(param_2 + 0xf0));
  Save(param_1,(GEEnvironmentSettings *)(param_2 + 300));
  Save(param_1,(GEEnvironmentSettings *)(param_2 + 0x168));
  Save(param_1,(GEEnvironmentSettings *)(param_2 + 0x1a4));
  return;
}

