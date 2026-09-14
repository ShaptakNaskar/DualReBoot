/* 0005bbf0 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEEnvironmentSettings const&) */

void STG::USerialize::Save(FFileBase *param_1,GEEnvironmentSettings *param_2)

{
  GEEnvironmentSettings local_21;
  uchar local_20 [16];
  
  FUN_0002e044();
  local_20[0] = '\x01';
  local_20[1] = '\0';
  local_20[2] = '\0';
  local_20[3] = '\0';
  FFileBase::Write(param_1,local_20,4);
  Save(param_1,(GEColor *)param_2);
  Save(param_1,(GEColor *)(param_2 + 0x10));
  Save(param_1,(GEColor *)(param_2 + 0x20));
  Save(param_1,(MVector2 *)(param_2 + 0x30));
  local_21 = param_2[0x38];
  FFileBase::Write(param_1,(uchar *)&local_21,1);
  local_21 = param_2[0x39];
  FFileBase::Write(param_1,(uchar *)&local_21,1);
  return;
}

