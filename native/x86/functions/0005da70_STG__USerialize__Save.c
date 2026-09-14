/* 0005da70 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GETimeOfDay const&) */

void STG::USerialize::Save(FFileBase *param_1,GETimeOfDay *param_2)

{
  undefined4 local_10;
  
  FUN_0002e044();
  local_10 = 1;
  FFileBase::Write(param_1,(uchar *)&local_10,4);
  local_10 = *(undefined4 *)param_2;
  FFileBase::Write(param_1,(uchar *)&local_10,4);
  return;
}

