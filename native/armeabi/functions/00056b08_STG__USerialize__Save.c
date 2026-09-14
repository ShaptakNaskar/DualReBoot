/* 00056b08 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GETimeOfDay const&) */

void STG::USerialize::Save(FFileBase *param_1,GETimeOfDay *param_2)

{
  undefined4 local_14;
  
  local_14 = 1;
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  local_14 = *(undefined4 *)param_2;
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  return;
}

