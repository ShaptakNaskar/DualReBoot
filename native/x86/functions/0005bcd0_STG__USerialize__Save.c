/* 0005bcd0 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEEnvironmentGroup const&) */

void STG::USerialize::Save(FFileBase *param_1,GEEnvironmentGroup *param_2)

{
  uchar local_20 [16];
  
  FUN_0002e044();
  local_20[0] = '\x01';
  local_20[1] = '\0';
  local_20[2] = '\0';
  local_20[3] = '\0';
  FFileBase::Write(param_1,local_20,4);
  local_20[0] = '\b';
  local_20[1] = '\0';
  local_20[2] = '\0';
  local_20[3] = '\0';
  FFileBase::Write(param_1,local_20,4);
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

