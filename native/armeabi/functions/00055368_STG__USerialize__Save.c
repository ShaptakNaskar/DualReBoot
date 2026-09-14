/* 00055368 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEEnvironmentSettings const&) */

void STG::USerialize::Save(FFileBase *param_1,GEEnvironmentSettings *param_2)

{
  GEEnvironmentSettings local_1d;
  uchar local_1c [8];
  
  local_1c[0] = '\x01';
  local_1c[1] = '\0';
  local_1c[2] = '\0';
  local_1c[3] = '\0';
  FFileBase::Write(param_1,local_1c,4);
  Save(param_1,(GEColor *)param_2);
  Save(param_1,(GEColor *)(param_2 + 0x10));
  Save(param_1,(GEColor *)(param_2 + 0x20));
  Save(param_1,(MVector2 *)(param_2 + 0x30));
  local_1d = param_2[0x38];
  FFileBase::Write(param_1,(uchar *)&local_1d,1);
  local_1d = param_2[0x39];
  FFileBase::Write(param_1,(uchar *)&local_1d,1);
  return;
}

